-- Minimal JSON parser for Lua
-- Handles objects, arrays, strings, numbers, booleans, null

local json = {}

local function skip_ws(s, pos)
    return s:match("^%s*()", pos)
end

local function parse_string(s, pos)
    if s:sub(pos, pos) ~= '"' then return nil, pos end
    local parts = {}
    local i = pos + 1
    while i <= #s do
        local c = s:sub(i, i)
        if c == '\\' then
            i = i + 1
            c = s:sub(i, i)
            if c == 'n' then parts[#parts+1] = '\n'
            elseif c == 't' then parts[#parts+1] = '\t'
            elseif c == 'r' then parts[#parts+1] = '\r'
            elseif c == 'u' then
                local hex = s:sub(i+1, i+4)
                local code = tonumber(hex, 16)
                if code and code < 128 then
                    parts[#parts+1] = string.char(code)
                else
                    parts[#parts+1] = '?'
                end
                i = i + 4
            else
                parts[#parts+1] = c
            end
        elseif c == '"' then
            return table.concat(parts), i + 1
        else
            parts[#parts+1] = c
        end
        i = i + 1
    end
    return nil, pos
end

local parse_value

local function parse_array(s, pos)
    if s:sub(pos, pos) ~= '[' then return nil, pos end
    local arr = {}
    pos = skip_ws(s, pos + 1)
    if s:sub(pos, pos) == ']' then return arr, pos + 1 end
    while true do
        local val
        val, pos = parse_value(s, pos)
        arr[#arr+1] = val
        pos = skip_ws(s, pos)
        local c = s:sub(pos, pos)
        if c == ']' then return arr, pos + 1 end
        if c == ',' then pos = skip_ws(s, pos + 1) end
    end
end

local function parse_object(s, pos)
    if s:sub(pos, pos) ~= '{' then return nil, pos end
    local obj = {}
    pos = skip_ws(s, pos + 1)
    if s:sub(pos, pos) == '}' then return obj, pos + 1 end
    while true do
        local key
        key, pos = parse_string(s, pos)
        pos = skip_ws(s, pos)
        pos = skip_ws(s, pos + 1) -- skip colon
        local val
        val, pos = parse_value(s, pos)
        obj[key] = val
        pos = skip_ws(s, pos)
        local c = s:sub(pos, pos)
        if c == '}' then return obj, pos + 1 end
        if c == ',' then pos = skip_ws(s, pos + 1) end
    end
end

parse_value = function(s, pos)
    pos = skip_ws(s, pos)
    local c = s:sub(pos, pos)
    if c == '"' then return parse_string(s, pos)
    elseif c == '{' then return parse_object(s, pos)
    elseif c == '[' then return parse_array(s, pos)
    elseif c == 't' then return true, pos + 4
    elseif c == 'f' then return false, pos + 5
    elseif c == 'n' then return nil, pos + 4
    else
        local num_str = s:match("^-?%d+%.?%d*[eE]?[+-]?%d*", pos)
        if num_str then
            return tonumber(num_str), pos + #num_str
        end
        return nil, pos
    end
end

function json.parse(s)
    if not s or s == '' then return nil end
    local val, _ = parse_value(s, 1)
    return val
end

return json
