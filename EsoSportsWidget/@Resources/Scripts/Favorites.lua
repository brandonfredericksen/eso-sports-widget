-- Eso Sports Widget - Data Parser & Favorites Filter
-- Parses ESPN JSON, manages favorites with schedule lookups,
-- and controls dynamic layout positioning.

local json
local MAX_GAMES = 30
local MAX_FAVORITES = 4

-- Favorite team tracking
local favTeams = {}
local favScheduleData = {}

-- Per-league expand/collapse state
local leagueExpanded = { NBA = false, NFL = false, NCAAM = false, MLB = false, UFC = false, BKFC = false, SMX = false, F1 = false }

-- Per-league loaded state (false = still fetching, true = data received)
local leagueLoaded = { NBA = false, NFL = false, NCAAM = false, MLB = false, UFC = false, BKFC = false, SMX = false, F1 = false }


-- NFL team abbreviations (for league auto-detection)
local NFL_TEAMS = {
    ARI=1,ATL=1,BAL=1,BUF=1,CAR=1,CHI=1,CIN=1,CLE=1,
    DAL=1,DEN=1,DET=1,GB=1,HOU=1,IND=1,JAX=1,KC=1,
    LAC=1,LAR=1,LV=1,MIA=1,MIN=1,NE=1,NO=1,NYG=1,
    NYJ=1,PHI=1,PIT=1,SEA=1,SF=1,TB=1,TEN=1,WSH=1
}

-- NBA team abbreviations
local NBA_TEAMS = {
    ATL=1,BOS=1,BKN=1,CHA=1,CHI=1,CLE=1,DAL=1,DEN=1,
    DET=1,GS=1,GSW=1,HOU=1,IND=1,LAC=1,LAL=1,MEM=1,
    MIA=1,MIL=1,MIN=1,NOP=1,NY=1,NYK=1,OKC=1,ORL=1,
    PHI=1,PHX=1,POR=1,SAC=1,SA=1,SAS=1,TOR=1,UTA=1,
    UTAH=1,WAS=1
}

-- MLB team abbreviations
local MLB_TEAMS = {
    ARI=1,ATL=1,BAL=1,BOS=1,CHC=1,CHW=1,CIN=1,CLE=1,
    COL=1,DET=1,HOU=1,KC=1,LAA=1,LAD=1,MIA=1,MIL=1,
    MIN=1,NYM=1,NYY=1,OAK=1,PHI=1,PIT=1,SD=1,SEA=1,
    SF=1,STL=1,TB=1,TEX=1,TOR=1,WSH=1
}

-- NCAAM abbreviation -> ESPN team ID (abbreviations don't work in URL)
local NCAAM_IDS = {
    AAMU=2010,ACU=2000,AF=2005,AKR=2006,ALA=333,ALCN=2016,
    ALST=2011,AMCC=357,AMER=44,APP=2026,APSU=2046,ARIZ=12,
    ARK=8,ARMY=349,ARST=2032,ASU=9,AUB=2,BALL=2050,BAY=239,
    BC=103,BCU=2065,BEL=2057,BELL=91,BGSU=189,BING=2066,
    BOIS=68,BRAD=71,BRWN=225,BRY=2803,BU=104,BUCK=2083,
    BUF=2084,BUT=2086,BYU=252,CAL=25,CAM=2097,CAN=2099,
    CARK=2110,CBU=2856,CCSU=2115,CCU=324,CHSO=2127,CHST=2130,
    CIN=2132,CIT=2643,CLEM=228,CLT=2429,CMU=2117,COFC=232,
    COLG=2142,COLO=38,COLU=171,CONN=41,COPP=2154,COR=172,
    CP=13,CREI=156,CSU=36,CSUB=2934,CSUF=2239,CSUN=2463,
    DART=159,DAV=2166,DAY=2168,DEL=48,DEP=305,DETM=2174,
    DREX=2182,DRKE=2181,DSU=2169,DUKE=150,DUQ=2184,ECU=151,
    EIU=2197,EKU=2198,ELON=2210,EMU=2199,ETAM=2837,ETSU=2193,
    EVAN=339,EWU=331,FAIR=2217,FAMU=50,FAU=2226,FDU=161,
    FGCU=526,FIU=2229,FLA=57,FOR=2230,FRES=278,FSU=52,
    FUR=231,GASO=290,GAST=2247,GCU=2253,GMU=2244,GONZ=2250,
    GRAM=2755,GT=59,GTWN=46,GW=45,HALL=2550,HAMP=2261,
    HARV=108,HAW=62,HC=107,HCU=2277,HOF=2275,HOW=47,
    HPU=2272,IDHO=70,IDST=304,ILL=356,ILST=2287,INST=282,
    IONA=314,IOWA=2294,ISU=66,IU=84,IUIN=85,JAX=294,
    JKST=2296,JMU=256,JOES=2603,JXST=55,KENN=338,KENT=2309,
    KSU=2306,KU=2305,LAF=322,LAM=2320,LAS=2325,LBSU=299,
    LEH=2329,LEM=2330,LIB=2335,LIP=288,LIU=112358,LMU=2351,
    LONG=2344,LOU=97,LR=2031,LSU=99,LT=2348,LUC=2350,
    MAN=2363,MARQ=269,MASS=113,MCN=2377,MD=120,ME=311,
    MEM=235,MER=2382,MERC=2385,MICH=130,MILW=270,MINN=135,
    MISS=145,MIZ=142,MONM=2405,MONT=149,MORE=2413,MORG=2415,
    MOST=2623,MRMK=2771,MRSH=276,MRST=2368,MSM=116,MSST=344,
    MSU=127,MTST=147,MTSU=2393,MUR=93,MVSU=2400,NAU=2464,
    NAVY=2426,NCAT=2448,NCCU=2428,NCSU=152,ND=87,NDSU=2449,
    NEB=158,NEV=2440,NHVN=2441,NIA=315,NICH=2447,NIU=2459,
    NJIT=2885,NKU=94,NMSU=166,NORF=2450,NU=77,NWST=2466,
    OAK=2473,ODU=295,OHIO=195,OKST=197,OMA=2437,ORE=2483,
    ORST=204,ORU=198,OSU=194,OU=201,PAC=279,PENN=219,
    PEPP=2492,PFW=2870,PITT=221,PORT=2501,PRES=2506,PRIN=163,
    PROV=2507,PRST=2502,PSU=213,PUR=2509,PV=2504,QUIN=2514,
    RAD=2515,RGV=292,RICE=242,RICH=257,RID=2520,RMU=2523,
    RUTG=164,SAC=16,SAM=2535,SBU=179,SC=2579,SCST=2569,
    SCU=2541,SDAK=233,SDST=2571,SDSU=21,SELA=2545,SEMO=2546,
    SFA=2617,SFPA=2598,SHSU=2534,SHU=2529,SIE=2561,SIU=79,
    SIUE=2565,SJSU=23,SJU=2599,SLU=139,SMC=2608,SMU=2567,
    SOU=2582,SPU=2612,STAN=24,STBK=2619,STET=56,STMN=2900,
    STO=284,SUU=253,SYR=183,TAMU=245,TAR=2627,TCU=2628,
    TEM=218,TENN=2633,TEX=251,TLSA=202,TNST=2634,TNTC=2635,
    TOL=2649,TOW=119,TROY=2653,TTU=2641,TULN=2655,TXSO=2640,
    TXST=326,UAB=5,UALB=399,UAPB=2029,UCD=302,UCF=2116,
    UCI=300,UCLA=26,UCR=27,UCSB=2540,UCSD=28,UGA=61,UIC=82,
    UIW=2916,UK=96,UL=309,ULM=2433,UMBC=2378,UMES=2379,
    UML=2349,UNA=2453,UNC=153,UNCA=2427,UNCG=2430,UNCO=2458,
    UNCW=350,UND=155,UNF=2454,UNH=160,UNI=2460,UNLV=2439,
    UNM=167,UNO=2443,UNT=249,UPST=2908,URI=227,USA=6,
    USC=30,USD=301,USF=58,USM=2572,USU=328,UTA=250,UTAH=254,
    UTC=236,UTEP=2638,UTM=2630,UTSA=2636,UTU=3101,UVA=258,
    UVM=261,UVU=3084,VAL=2674,VAN=238,VCU=2670,VILL=222,
    VMI=2678,VT=259,WAG=2681,WAKE=154,WASH=264,WCU=2717,
    WEB=2692,WGA=2698,WICH=2724,WIN=2737,WIS=275,WIU=2710,
    WKU=98,WMU=2711,WOF=2747,WRST=2750,WSU=265,WVU=277,
    WYO=2751,XAV=2752,YALE=43,YSU=2754
}

function Initialize()
    local path = SKIN:GetVariable('@') .. 'Scripts\\json.lua'
    local ok, result = pcall(dofile, path)
    if ok then
        json = result
    else
        SKIN:Bang('!Log', 'Lua ERROR: Failed to load JSON parser: ' .. tostring(result), 'Error')
    end
    SetupFavSchedules()
end

function Update()
    return 0
end

-- =====================
-- TEAM LOOKUP
-- =====================

function GetTeamLeague(abbr)
    if NFL_TEAMS[abbr] then return 'NFL' end
    if NBA_TEAMS[abbr] then return 'NBA' end
    if MLB_TEAMS[abbr] then return 'MLB' end
    return 'NCAAM'
end

function GetTeamUrl(abbr, league)
    if league == 'NFL' then
        return 'https://site.api.espn.com/apis/site/v2/sports/football/nfl/teams/' .. abbr:lower()
    elseif league == 'NBA' then
        return 'https://site.api.espn.com/apis/site/v2/sports/basketball/nba/teams/' .. abbr:lower()
    elseif league == 'MLB' then
        return 'https://site.api.espn.com/apis/site/v2/sports/baseball/mlb/teams/' .. abbr:lower()
    else
        local id = NCAAM_IDS[abbr]
        if id then
            return 'https://site.api.espn.com/apis/site/v2/sports/basketball/mens-college-basketball/teams/' .. tostring(id)
        end
        return nil
    end
end

-- =====================
-- FAVORITES SCHEDULE
-- =====================

function SetupFavSchedules()
    local favStr = SKIN:GetVariable('FavoriteTeams', '')
    if favStr == '' then return end

    favTeams = {}
    for token in favStr:gmatch('([^,]+)') do
        local clean = token:match('^%s*(.-)%s*$'):upper()
        if clean ~= '' then
            local prefix, abbr = clean:match('^(%a+):(.+)$')
            if not prefix then
                abbr = clean
                prefix = nil
            end
            local league = prefix or GetTeamLeague(abbr)
            favTeams[#favTeams + 1] = { abbr = abbr, league = league }
        end
    end

    local count = math.min(#favTeams, MAX_FAVORITES)

    -- Set URLs but don't fetch yet - FetchNextFavSchedule() handles sequential fetching
    for i = 1, count do
        local url = GetTeamUrl(favTeams[i].abbr, favTeams[i].league)
        if url then
            SKIN:Bang('!SetOption', 'FavSchedule' .. i, 'URL', url)
        end
    end
end

function FetchNextFavSchedule(startIndex)
    local count = math.min(#favTeams, MAX_FAVORITES)
    for i = startIndex, count do
        local url = GetTeamUrl(favTeams[i].abbr, favTeams[i].league)
        if url then
            SKIN:Bang('!EnableMeasure', 'FavSchedule' .. i)
            SKIN:Bang('!CommandMeasure', 'FavSchedule' .. i, 'Update')
            return
        end
    end
end

function ParseFavSchedule(index)
    local measure = SKIN:GetMeasure('FavSchedule' .. index)
    if not measure then return end

    local raw = measure:GetStringValue()
    if not raw or raw == '' then return end

    local ok, data = pcall(json.parse, raw)
    if not ok or not data then return end

    local team = data.team
    if not team then return end

    local nextEvents = team.nextEvent
    if not nextEvents or #nextEvents == 0 then
        favScheduleData[index] = {
            away = '', home = team.abbreviation or '',
            awayScore = '', homeScore = '',
            status = 'none', displayStatus = 'No games scheduled'
        }
        ApplyFavDisplay()
        FetchNextFavSchedule(index + 1)
        return
    end

    local event = nextEvents[1]
    local comp = event.competitions and event.competitions[1]
    if not comp then return end

    local homeAbbr, awayAbbr = '', ''
    local homeScore, awayScore = '', ''
    local statusDesc, statusName = '', ''
    local clock, period = '', ''

    if comp.status then
        if comp.status.type then
            statusDesc = comp.status.type.description or ''
            statusName = comp.status.type.name or ''
        end
        clock = comp.status.displayClock or ''
        period = tostring(comp.status.period or '')
    end

    local isScheduled = (statusName == 'STATUS_SCHEDULED' or statusDesc == 'Scheduled')

    for _, competitor in ipairs(comp.competitors or {}) do
        local t = competitor.team or {}
        if competitor.homeAway == 'home' then
            homeAbbr = t.abbreviation or ''
            if isScheduled then
                homeScore = ''
            else
                local s = competitor.score
                if type(s) == 'table' then
                    homeScore = s.displayValue or tostring(s.value or '')
                else
                    homeScore = tostring(s or '')
                end
            end
        elseif competitor.homeAway == 'away' then
            awayAbbr = t.abbreviation or ''
            if isScheduled then
                awayScore = ''
            else
                local s = competitor.score
                if type(s) == 'table' then
                    awayScore = s.displayValue or tostring(s.value or '')
                else
                    awayScore = tostring(s or '')
                end
            end
        end
    end

    -- Fallback if homeAway not set
    if homeAbbr == '' and awayAbbr == '' and comp.competitors then
        if comp.competitors[1] and comp.competitors[1].team then
            homeAbbr = comp.competitors[1].team.abbreviation or ''
        end
        if comp.competitors[2] and comp.competitors[2].team then
            awayAbbr = comp.competitors[2].team.abbreviation or ''
        end
    end

    local displayStatus = statusDesc
    if isScheduled then
        displayStatus = FormatGameDate(event.date or '')
    elseif statusDesc == 'In Progress' and clock ~= '' then
        displayStatus = clock
        if period ~= '' and period ~= '0' then
            local lg = favTeams[index] and favTeams[index].league or 'NBA'
            displayStatus = GetPeriodLabel(period, lg) .. ' ' .. clock
        end
    end

    favScheduleData[index] = {
        away = awayAbbr, home = homeAbbr,
        awayScore = awayScore, homeScore = homeScore,
        status = statusDesc, displayStatus = displayStatus
    }

    ApplyFavDisplay()

    -- Chain: fetch next favorite schedule
    FetchNextFavSchedule(index + 1)
end

function ApplyFavDisplay()
    local count = math.min(#favTeams, MAX_FAVORITES)
    for i = 1, count do
        local d = favScheduleData[i]
        if d then
            SKIN:Bang('!SetVariable', 'FavAway' .. i, d.away)
            SKIN:Bang('!SetVariable', 'FavHome' .. i, d.home)
            SKIN:Bang('!SetVariable', 'FavAwayScore' .. i, d.awayScore)
            SKIN:Bang('!SetVariable', 'FavHomeScore' .. i, d.homeScore)
            SKIN:Bang('!SetVariable', 'FavStatus' .. i, d.displayStatus)
            SKIN:Bang('!SetVariable', 'FavStatusType' .. i, d.status)
        end
    end
    -- Clear unused slots
    for i = count + 1, MAX_FAVORITES do
        SKIN:Bang('!SetVariable', 'FavAway' .. i, '')
        SKIN:Bang('!SetVariable', 'FavHome' .. i, '')
        SKIN:Bang('!SetVariable', 'FavAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'FavHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'FavStatus' .. i, '')
        SKIN:Bang('!SetVariable', 'FavStatusType' .. i, '')
    end
    SKIN:Bang('!SetVariable', 'FavCount', tostring(count))
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')
end

function FormatGameDate(dateStr)
    if not dateStr or dateStr == '' then return 'TBD' end
    local y, m, d, h, mi = dateStr:match('(%d+)-(%d+)-(%d+)T(%d+):(%d+)')
    if not y then return 'TBD' end

    local tzOffset = tonumber(SKIN:GetVariable('TimezoneOffset', '-8')) or -8
    local utcSec = os.time({year=tonumber(y), month=tonumber(m), day=tonumber(d),
                            hour=tonumber(h), min=tonumber(mi), sec=0, isdst=false})
    -- os.time interprets the table as local time, so adjust back to true UTC first
    local localNow = os.time()
    local utcNow = os.time(os.date('!*t', localNow))
    local sysOffset = localNow - utcNow
    local trueUtc = utcSec - sysOffset
    -- Now apply user's timezone offset
    local adjusted = trueUtc + (tzOffset * 3600)
    local lt = os.date('*t', adjusted + sysOffset)  -- os.date expects local time input

    local hour12 = lt.hour % 12
    if hour12 == 0 then hour12 = 12 end
    local ampm = lt.hour >= 12 and 'PM' or 'AM'

    return string.format('%02d/%02d/%02d %d:%02d %s', lt.month, lt.day, lt.year % 100, hour12, lt.min, ampm)
end

function FormatGameTime(dateStr)
    if not dateStr or dateStr == '' then return '' end
    local y, m, d, h, mi = dateStr:match('(%d+)-(%d+)-(%d+)T(%d+):(%d+)')
    if not y then return '' end

    local tzOffset = tonumber(SKIN:GetVariable('TimezoneOffset', '-8')) or -8
    local utcSec = os.time({year=tonumber(y), month=tonumber(m), day=tonumber(d),
                            hour=tonumber(h), min=tonumber(mi), sec=0, isdst=false})
    local localNow = os.time()
    local utcNow = os.time(os.date('!*t', localNow))
    local sysOffset = localNow - utcNow
    local trueUtc = utcSec - sysOffset
    local adjusted = trueUtc + (tzOffset * 3600)
    local lt = os.date('*t', adjusted + sysOffset)

    local hour12 = lt.hour % 12
    if hour12 == 0 then hour12 = 12 end
    local ampm = lt.hour >= 12 and 'PM' or 'AM'

    return string.format('%d:%02d%s', hour12, lt.min, ampm)
end

-- =====================
-- CONFIGURABLE LEAGUE ORDER
-- =====================

function GetLeagueOrder()
    local orderStr = SKIN:GetVariable('LeagueOrder', 'NBA,NFL,NCAAM,MLB,UFC,BKFC,SMX,F1')
    local order = {}
    for league in orderStr:gmatch('[^,]+') do
        order[#order + 1] = league:match('^%s*(.-)%s*$')  -- trim whitespace
    end
    return order
end

function ChainNextLeague(currentLeague)
    local order = GetLeagueOrder()
    local foundSelf = false
    for _, lg in ipairs(order) do
        if lg == currentLeague then
            foundSelf = true
        elseif foundSelf and tonumber(SKIN:GetVariable('Show' .. lg, '1')) == 1 then
            TriggerLeague(lg)
            return
        end
    end
    -- End of chain: fetch favorite schedules
    FetchNextFavSchedule(1)
end

function TriggerLeague(league)
    if league == 'BKFC' then
        SKIN:Bang('!SetOption', 'BKFCWebParser', 'URL', 'https://www.bkfc.com/events')
        SKIN:Bang('!EnableMeasure', 'BKFCWebParser')
        SKIN:Bang('!CommandMeasure', 'BKFCWebParser', 'Update')
    elseif league == 'SMX' then
        TriggerSMX()
    else
        SKIN:Bang('!EnableMeasure', league .. 'WebParser')
        SKIN:Bang('!CommandMeasure', league .. 'WebParser', 'Update')
    end
end

-- =====================
-- LEAGUE PARSING
-- =====================

function SplitCSV(str)
    local result = {}
    for token in string.gmatch(str, "([^,]+)") do
        local trimmed = token:match("^%s*(.-)%s*$")
        result[trimmed:upper()] = true
    end
    return result
end

function ParseLeague(league)
    leagueLoaded[league] = true

    local measure = SKIN:GetMeasure(league .. 'WebParser')
    if not measure then return end

    local raw = measure:GetStringValue()
    if not raw or raw == '' then return end

    local ok, data = pcall(json.parse, raw)
    if not ok or not data then return end

    -- Filter out games older than 6 hours (keep recent finals + all upcoming)
    local allEvents = data.events or {}
    local now = os.time()
    local cutoff = now - (6 * 60 * 60)
    local events = {}
    for _, event in ipairs(allEvents) do
        local dateStr = event.date or ''
        local keep = true
        if dateStr ~= '' then
            local y, m, d, h, mi = dateStr:match('(%d+)-(%d+)-(%d+)T(%d+):(%d+)')
            if y then
                local eventTime = os.time({year=tonumber(y), month=tonumber(m), day=tonumber(d),
                                           hour=tonumber(h), min=tonumber(mi), sec=0, isdst=false})
                if eventTime < cutoff then keep = false end
            end
        end
        if keep then events[#events + 1] = event end
    end

    local gameCount = #events
    if gameCount > MAX_GAMES then gameCount = MAX_GAMES end

    SKIN:Bang('!SetVariable', league .. 'GameCount', tostring(gameCount))

    for i = 1, gameCount do
        local event = events[i]
        local comp = event and event.competitions and event.competitions[1]
        if comp then
            local home = comp.competitors and comp.competitors[1]
            local away = comp.competitors and comp.competitors[2]

            local homeAbbr, awayAbbr = '', ''
            local homeScore, awayScore = '', ''

            if home and home.team then
                homeAbbr = home.team.abbreviation or ''
                homeScore = tostring(home.score or '')
            end
            if away and away.team then
                awayAbbr = away.team.abbreviation or ''
                awayScore = tostring(away.score or '')
            end

            local status, statusName, clock, period = '', '', '', ''
            if comp.status then
                if comp.status.type then
                    status = comp.status.type.description or ''
                    statusName = comp.status.type.name or ''
                end
                clock = comp.status.displayClock or ''
                period = tostring(comp.status.period or '')
            end

            local isScheduled = (statusName == 'STATUS_SCHEDULED' or status == 'Scheduled')
            if isScheduled then
                homeScore = ''
                awayScore = ''
            end

            local displayStatus = status
            if isScheduled then
                displayStatus = FormatGameTime(event.date or '')
                if displayStatus == '' then displayStatus = status end
            elseif status == 'In Progress' and clock ~= '' then
                displayStatus = clock
                if period ~= '' and period ~= '0' then
                    displayStatus = GetPeriodLabel(period, league) .. ' ' .. clock
                end
            end

            SKIN:Bang('!SetVariable', league .. 'HomeAbbr' .. i, homeAbbr)
            SKIN:Bang('!SetVariable', league .. 'AwayAbbr' .. i, awayAbbr)
            SKIN:Bang('!SetVariable', league .. 'HomeScore' .. i, homeScore)
            SKIN:Bang('!SetVariable', league .. 'AwayScore' .. i, awayScore)
            SKIN:Bang('!SetVariable', league .. 'Status' .. i, displayStatus)
            SKIN:Bang('!SetVariable', league .. 'Clock' .. i, clock)
            SKIN:Bang('!SetVariable', league .. 'Period' .. i, period)
        end
    end

    -- Clear remaining slots
    for i = gameCount + 1, MAX_GAMES do
        SKIN:Bang('!SetVariable', league .. 'HomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'AwayAbbr' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'HomeScore' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'AwayScore' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'Status' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'Clock' .. i, '')
        SKIN:Bang('!SetVariable', league .. 'Period' .. i, '')
    end

    -- Update display
    SKIN:Bang('!UpdateMeterGroup', league .. 'Group')
    CheckFavoritesLive()
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')

    -- Chain to next league in configurable order
    ChainNextLeague(league)
end

-- =====================
-- UFC PARSING
-- =====================

function ParseUFC()
    leagueLoaded['UFC'] = true

    local measure = SKIN:GetMeasure('UFCWebParser')
    if not measure then return end

    local raw = measure:GetStringValue()
    if not raw or raw == '' then
        ChainAfterUFC()
        return
    end

    local ok, data = pcall(json.parse, raw)
    if not ok or not data then
        ChainAfterUFC()
        return
    end

    local events = data.events or {}
    if #events == 0 then
        SKIN:Bang('!SetVariable', 'UFCGameCount', '0')
        SKIN:Bang('!SetVariable', 'UFCEventName', '')
        for i = 1, MAX_GAMES do
            SKIN:Bang('!SetVariable', 'UFCHomeAbbr' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCAwayAbbr' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCHomeScore' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCAwayScore' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCStatus' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCClock' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCPeriod' .. i, '')
        end
        UpdateLayout()
        SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
        SKIN:Bang('!Redraw')
        ChainAfterUFC()
        return
    end

    -- UFC: one event with multiple competitions (fights)
    local event = events[1]
    local eventName = event.name or 'UFC'
    local eventDate = ''
    if event.date then
        eventDate = FormatGameDate(event.date)
    end
    SKIN:Bang('!SetVariable', 'UFCEventName', eventName .. (eventDate ~= 'TBD' and (' - ' .. eventDate) or ''))

    local competitions = event.competitions or {}
    local fightCount = #competitions
    if fightCount > MAX_GAMES then fightCount = MAX_GAMES end

    SKIN:Bang('!SetVariable', 'UFCGameCount', tostring(fightCount))

    for i = 1, fightCount do
        local comp = competitions[i]
        if comp then
            local fighter1 = ''
            local fighter2 = ''

            local competitors = comp.competitors or {}
            for _, competitor in ipairs(competitors) do
                local name = ''
                if competitor.athlete then
                    name = competitor.athlete.shortName or competitor.athlete.displayName or ''
                elseif competitor.team then
                    name = competitor.team.abbreviation or competitor.team.displayName or ''
                end
                if competitor.order == 1 or competitor.homeAway == 'home' then
                    fighter1 = name
                else
                    fighter2 = name
                end
            end

            -- Fallback: if order/homeAway not set, use array position
            if fighter1 == '' and fighter2 == '' and #competitors >= 2 then
                local c1 = competitors[1]
                local c2 = competitors[2]
                if c1.athlete then
                    fighter1 = c1.athlete.shortName or c1.athlete.displayName or ''
                end
                if c2.athlete then
                    fighter2 = c2.athlete.shortName or c2.athlete.displayName or ''
                end
            end

            local status, statusName, clock, period = '', '', '', ''
            if comp.status then
                if comp.status.type then
                    status = comp.status.type.description or ''
                    statusName = comp.status.type.name or ''
                end
                clock = comp.status.displayClock or ''
                period = tostring(comp.status.period or '')
            end

            local isScheduled = (statusName == 'STATUS_SCHEDULED' or status == 'Scheduled')

            -- Weight class / type info
            local weightClass = ''
            if comp.type and comp.type.abbreviation then
                weightClass = comp.type.abbreviation
            elseif comp.type and comp.type.text then
                weightClass = comp.type.text
            end

            local displayStatus = status
            if isScheduled then
                displayStatus = weightClass ~= '' and weightClass or status
            elseif status == 'In Progress' and clock ~= '' then
                displayStatus = clock
                if period ~= '' and period ~= '0' then
                    displayStatus = GetPeriodLabel(period, 'UFC') .. ' ' .. clock
                end
            end

            -- For UFC: fighter names go in Away/Home, scores stay empty
            SKIN:Bang('!SetVariable', 'UFCAwayAbbr' .. i, fighter2)
            SKIN:Bang('!SetVariable', 'UFCHomeAbbr' .. i, fighter1)
            SKIN:Bang('!SetVariable', 'UFCAwayScore' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCHomeScore' .. i, '')
            SKIN:Bang('!SetVariable', 'UFCStatus' .. i, displayStatus)
            SKIN:Bang('!SetVariable', 'UFCClock' .. i, clock)
            SKIN:Bang('!SetVariable', 'UFCPeriod' .. i, period)
        end
    end

    -- Clear remaining slots
    for i = fightCount + 1, MAX_GAMES do
        SKIN:Bang('!SetVariable', 'UFCHomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCAwayAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCStatus' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCClock' .. i, '')
        SKIN:Bang('!SetVariable', 'UFCPeriod' .. i, '')
    end

    SKIN:Bang('!UpdateMeterGroup', 'UFCGroup')
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')

    ChainAfterUFC()
end

function ChainAfterUFC()
    ChainNextLeague('UFC')
end

-- =====================
-- BKFC PARSING
-- =====================

local MONTH_MAP = {
    January=1, February=2, March=3, April=4, May=5, June=6,
    July=7, August=8, September=9, October=10, November=11, December=12
}

function FormatBKFCDate(dateStr)
    if not dateStr or dateStr == '' then return 'TBD' end
    -- Parse "March 14, 2026 3:00 PM" or "March 14, 2026"
    local monthName, day, year, timeStr = dateStr:match('(%a+)%s+(%d+),%s+(%d+)%s*(.*)')
    if not monthName then return dateStr end
    local mo = MONTH_MAP[monthName]
    if not mo then return dateStr end
    local y = tonumber(year) % 100
    local d = tonumber(day)
    -- Parse time if present
    local h, mi, ampm = timeStr:match('(%d+):(%d+)%s*(%a+)')
    if h then
        return string.format('%02d/%02d/%02d %s:%s %s', mo, d, y, h, mi, ampm)
    else
        return string.format('%02d/%02d/%02d', mo, d, y)
    end
end

function ParseBKFC()
    leagueLoaded['BKFC'] = true

    local measure = SKIN:GetMeasure('BKFCWebParser')
    if not measure then
        FetchNextFavSchedule(1)
        return
    end

    local raw = measure:GetStringValue()
    if not raw or raw == '' then
        FetchNextFavSchedule(1)
        return
    end

    -- Parse HTML from bkfc.com/events
    -- Event names are in: class="events_card_heading">EVENT NAME</h3>
    -- Dates with times in: class="text-block-4">March 14, 2026 3:00 PM</div>
    local events = {}
    for name, dateStr in raw:gmatch('class="events_card_heading">([^<]+)</h3>.-class="text%-block%-4">([^<]+)</div>') do
        local cleanName = name:match('^%s*(.-)%s*$') or name
        local cleanDate = dateStr:match('^%s*(.-)%s*$') or dateStr
        if cleanName ~= '' then
            events[#events + 1] = { name = cleanName, date = cleanDate }
        end
    end

    local eventCount = #events
    if eventCount > MAX_GAMES then eventCount = MAX_GAMES end

    SKIN:Bang('!SetVariable', 'BKFCGameCount', tostring(eventCount))
    SKIN:Bang('!SetVariable', 'BKFCSubheading', 'Upcoming Events')

    for i = 1, eventCount do
        local evt = events[i]

        SKIN:Bang('!SetVariable', 'BKFCAwayAbbr' .. i, evt.name)
        SKIN:Bang('!SetVariable', 'BKFCHomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCStatus' .. i, FormatBKFCDate(evt.date))
        SKIN:Bang('!SetVariable', 'BKFCClock' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCPeriod' .. i, '')
    end

    -- Clear remaining slots
    for i = eventCount + 1, MAX_GAMES do
        SKIN:Bang('!SetVariable', 'BKFCHomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCAwayAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCStatus' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCClock' .. i, '')
        SKIN:Bang('!SetVariable', 'BKFCPeriod' .. i, '')
    end

    SKIN:Bang('!UpdateMeterGroup', 'BKFCGroup')
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')

    ChainAfterBKFC()
end

function ChainAfterBKFC()
    ChainNextLeague('BKFC')
end

-- =====================
-- SUPERMOTOCROSS PARSING
-- =====================

function TriggerSMX()
    -- Fire WebParser in background (will call ParseSMX again via FinishAction if successful)
    SKIN:Bang('!EnableMeasure', 'SMXWebParser')
    SKIN:Bang('!CommandMeasure', 'SMXWebParser', 'Update')
    -- Immediately show hardcoded schedule so we never have empty state
    ParseSMX()
end

-- Hardcoded 2026 SuperMotocross schedule (SX + MX + SMX Playoffs)
local SMX_SCHEDULE = {
    -- Supercross
    { date = '2026-01-10', name = 'SX Rd 1 - Anaheim' },
    { date = '2026-01-17', name = 'SX Rd 2 - San Diego' },
    { date = '2026-01-24', name = 'SX Rd 3 - Anaheim 2' },
    { date = '2026-01-31', name = 'SX Rd 4 - Houston' },
    { date = '2026-02-07', name = 'SX Rd 5 - Glendale' },
    { date = '2026-02-14', name = 'SX Rd 6 - Seattle' },
    { date = '2026-02-21', name = 'SX Rd 7 - Arlington' },
    { date = '2026-02-28', name = 'SX Rd 8 - Daytona' },
    { date = '2026-03-07', name = 'SX Rd 9 - Indianapolis' },
    { date = '2026-03-21', name = 'SX Rd 10 - Birmingham' },
    { date = '2026-03-28', name = 'SX Rd 11 - Detroit' },
    { date = '2026-04-04', name = 'SX Rd 12 - St. Louis' },
    { date = '2026-04-11', name = 'SX Rd 13 - Nashville' },
    { date = '2026-04-18', name = 'SX Rd 14 - Cleveland' },
    { date = '2026-04-25', name = 'SX Rd 15 - Philadelphia' },
    { date = '2026-05-02', name = 'SX Rd 16 - Denver' },
    { date = '2026-05-09', name = 'SX Rd 17 - Salt Lake City' },
    -- Pro Motocross
    { date = '2026-05-30', name = 'MX Rd 1 - Fox Raceway' },
    { date = '2026-06-06', name = 'MX Rd 2 - Hangtown' },
    { date = '2026-06-13', name = 'MX Rd 3 - Thunder Valley' },
    { date = '2026-06-20', name = 'MX Rd 4 - High Point' },
    { date = '2026-07-04', name = 'MX Rd 5 - RedBud' },
    { date = '2026-07-11', name = 'MX Rd 6 - Southwick' },
    { date = '2026-07-18', name = 'MX Rd 7 - Spring Creek' },
    { date = '2026-07-25', name = 'MX Rd 8 - Washougal' },
    { date = '2026-08-15', name = 'MX Rd 9 - Unadilla' },
    { date = '2026-08-22', name = 'MX Rd 10 - Budds Creek' },
    { date = '2026-08-29', name = 'MX Rd 11 - Ironman' },
    -- SMX Playoffs
    { date = '2026-09-12', name = 'SMX Playoff Rd 1' },
    { date = '2026-09-19', name = 'SMX Playoff Rd 2' },
    { date = '2026-09-26', name = 'SMX World Championship' },
}

function ParseSMX()
    leagueLoaded['SMX'] = true

    -- Try fetching schedule from GitHub JSON first, fall back to hardcoded table
    local schedule = SMX_SCHEDULE
    local measure = SKIN:GetMeasure('SMXWebParser')
    if measure then
        local raw = measure:GetStringValue()
        if raw and raw ~= '' then
            local ok, data = pcall(json.parse, raw)
            if ok and data and data.events and #data.events > 0 then
                schedule = data.events
            end
        end
    end

    local now = os.time()
    local today = os.date('*t', now)
    local todayNum = today.year * 10000 + today.month * 100 + today.day

    -- Filter to upcoming events (today or later)
    local upcoming = {}
    for _, evt in ipairs(schedule) do
        local y, m, d = evt.date:match('(%d+)-(%d+)-(%d+)')
        if y then
            local evtNum = tonumber(y) * 10000 + tonumber(m) * 100 + tonumber(d)
            if evtNum >= todayNum then
                upcoming[#upcoming + 1] = evt
            end
        end
    end

    local eventCount = #upcoming
    if eventCount > MAX_GAMES then eventCount = MAX_GAMES end

    SKIN:Bang('!SetVariable', 'SMXGameCount', tostring(eventCount))

    if eventCount > 0 then
        -- Determine subheading based on next event type
        local firstName = upcoming[1].name
        if firstName:match('^SX ') then
            SKIN:Bang('!SetVariable', 'SMXSubheading', 'Supercross Season')
        elseif firstName:match('^MX ') then
            SKIN:Bang('!SetVariable', 'SMXSubheading', 'Pro Motocross Season')
        else
            SKIN:Bang('!SetVariable', 'SMXSubheading', 'SMX Playoffs')
        end
    else
        SKIN:Bang('!SetVariable', 'SMXSubheading', 'Season Complete')
    end

    for i = 1, eventCount do
        local evt = upcoming[i]
        local y, m, d = evt.date:match('(%d+)-(%d+)-(%d+)')
        local dateDisplay = ''
        if y then
            dateDisplay = string.format('%02d/%02d/%02d', tonumber(m), tonumber(d), tonumber(y) % 100)
        end

        SKIN:Bang('!SetVariable', 'SMXAwayAbbr' .. i, evt.name)
        SKIN:Bang('!SetVariable', 'SMXHomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXStatus' .. i, dateDisplay)
        SKIN:Bang('!SetVariable', 'SMXClock' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXPeriod' .. i, '')
    end

    -- Clear remaining slots
    for i = eventCount + 1, MAX_GAMES do
        SKIN:Bang('!SetVariable', 'SMXHomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXAwayAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXStatus' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXClock' .. i, '')
        SKIN:Bang('!SetVariable', 'SMXPeriod' .. i, '')
    end

    SKIN:Bang('!UpdateMeterGroup', 'SMXGroup')
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')

    -- Chain to next league in configurable order
    ChainNextLeague('SMX')
end

-- =====================
-- F1 PARSING
-- =====================

function ParseF1()
    leagueLoaded['F1'] = true

    local measure = SKIN:GetMeasure('F1WebParser')
    if not measure then
        ChainNextLeague('F1')
        return
    end

    local raw = measure:GetStringValue()
    if not raw or raw == '' then
        SKIN:Bang('!SetVariable', 'F1GameCount', '0')
        UpdateLayout()
        SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
        SKIN:Bang('!Redraw')
        ChainNextLeague('F1')
        return
    end

    local ok, data = pcall(json.parse, raw)
    if not ok or not data then
        SKIN:Bang('!SetVariable', 'F1GameCount', '0')
        UpdateLayout()
        SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
        SKIN:Bang('!Redraw')
        ChainNextLeague('F1')
        return
    end

    local events = data.events or {}

    -- Filter to upcoming events (today or later)
    local now = os.time()
    local today = os.date('*t', now)
    local todayNum = today.year * 10000 + today.month * 100 + today.day
    local upcoming = {}
    for _, event in ipairs(events) do
        local dateStr = event.date or ''
        local y, m, d = dateStr:match('(%d+)-(%d+)-(%d+)')
        if y then
            local evtNum = tonumber(y) * 10000 + tonumber(m) * 100 + tonumber(d)
            if evtNum >= todayNum then
                upcoming[#upcoming + 1] = event
            end
        else
            upcoming[#upcoming + 1] = event
        end
    end

    local eventCount = #upcoming
    if eventCount > MAX_GAMES then eventCount = MAX_GAMES end

    SKIN:Bang('!SetVariable', 'F1GameCount', tostring(eventCount))

    -- Set subheading
    if eventCount > 0 then
        local season = upcoming[1].season
        if season and season.year then
            SKIN:Bang('!SetVariable', 'F1Subheading', tostring(season.year) .. ' Season')
        else
            SKIN:Bang('!SetVariable', 'F1Subheading', 'Upcoming Races')
        end
    else
        SKIN:Bang('!SetVariable', 'F1Subheading', 'No Upcoming Races')
    end

    for i = 1, eventCount do
        local event = upcoming[i]
        local raceName = event.name or ''
        local circuitName = ''

        -- Extract circuit/location from competitions or venue
        local comp = event.competitions and event.competitions[1]
        if comp and comp.venue then
            circuitName = comp.venue.fullName or comp.venue.shortName or ''
        end

        -- Format date
        local dateDisplay = ''
        local dateStr = event.date or ''
        local y, m, d = dateStr:match('(%d+)-(%d+)-(%d+)')
        if y then
            dateDisplay = string.format('%02d/%02d/%02d', tonumber(m), tonumber(d), tonumber(y) % 100)
        end

        SKIN:Bang('!SetVariable', 'F1AwayAbbr' .. i, raceName)
        SKIN:Bang('!SetVariable', 'F1HomeAbbr' .. i, circuitName)
        SKIN:Bang('!SetVariable', 'F1AwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'F1HomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'F1Status' .. i, dateDisplay)
        SKIN:Bang('!SetVariable', 'F1Clock' .. i, '')
        SKIN:Bang('!SetVariable', 'F1Period' .. i, '')
    end

    -- Clear remaining slots
    for i = eventCount + 1, MAX_GAMES do
        SKIN:Bang('!SetVariable', 'F1HomeAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'F1AwayAbbr' .. i, '')
        SKIN:Bang('!SetVariable', 'F1HomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'F1AwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'F1Status' .. i, '')
        SKIN:Bang('!SetVariable', 'F1Clock' .. i, '')
        SKIN:Bang('!SetVariable', 'F1Period' .. i, '')
    end

    SKIN:Bang('!UpdateMeterGroup', 'F1Group')
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')

    ChainNextLeague('F1')
end

-- Override favorites with live scoreboard data when available
function CheckFavoritesLive()
    local leagues = {'NBA', 'NFL', 'NCAAM', 'MLB'}
    for _, league in ipairs(leagues) do
        local show = tonumber(SKIN:GetVariable('Show' .. league, '1')) or 1
        if show == 1 then
            local gameCount = tonumber(SKIN:GetVariable(league .. 'GameCount', '0')) or 0
            for gi = 1, gameCount do
                local homeAbbr = SKIN:GetVariable(league .. 'HomeAbbr' .. gi, ''):upper()
                local awayAbbr = SKIN:GetVariable(league .. 'AwayAbbr' .. gi, ''):upper()

                for fi, fav in ipairs(favTeams) do
                    if fi <= MAX_FAVORITES and (fav.abbr == homeAbbr or fav.abbr == awayAbbr) then
                        local homeScore = SKIN:GetVariable(league .. 'HomeScore' .. gi, '')
                        local awayScore = SKIN:GetVariable(league .. 'AwayScore' .. gi, '')
                        local status = SKIN:GetVariable(league .. 'Status' .. gi, '')
                        local clock = SKIN:GetVariable(league .. 'Clock' .. gi, '')
                        local period = SKIN:GetVariable(league .. 'Period' .. gi, '')

                        local displayStatus = status
                        if status == 'In Progress' and clock ~= '' then
                            displayStatus = clock
                            if period ~= '' and period ~= '0' then
                                displayStatus = GetPeriodLabel(period, league) .. ' ' .. clock
                            end
                        end

                        SKIN:Bang('!SetVariable', 'FavAway' .. fi, awayAbbr)
                        SKIN:Bang('!SetVariable', 'FavHome' .. fi, homeAbbr)
                        SKIN:Bang('!SetVariable', 'FavAwayScore' .. fi, awayScore)
                        SKIN:Bang('!SetVariable', 'FavHomeScore' .. fi, homeScore)
                        SKIN:Bang('!SetVariable', 'FavStatus' .. fi, displayStatus)
                        SKIN:Bang('!SetVariable', 'FavStatusType' .. fi, status)
                    end
                end
            end
        end
    end
    SKIN:Bang('!UpdateMeterGroup', 'FavoritesGroup')
end

-- =====================
-- LAYOUT
-- =====================

-- Stored total content height for scroll calculations
local totalContentHeight = 0

-- Helper: show or hide a group of 6 sibling meters for a game row
-- Sets Y explicitly on ALL meters (not relying on Rainmeter's Y=0r resolution)
local function SetRowVisibility(base, index, y, topBound, botBound, isFav, rowH)
    rowH = rowH or 16
    local pre = isFav and 'MeterFav' or ('Meter' .. base)
    local yStr = tostring(y)
    local names = {
        pre .. 'Away' .. index,
        pre .. 'AwayScore' .. index,
        pre .. 'At' .. index,
        pre .. 'Home' .. index,
        pre .. 'HomeScore' .. index,
        pre .. 'Status' .. index,
    }
    if y >= topBound and (y + rowH) <= botBound then
        for _, name in ipairs(names) do
            SKIN:Bang('!SetOption', name, 'Y', yStr)
            SKIN:Bang('!ShowMeter', name)
            SKIN:Bang('!UpdateMeter', name)
        end
    else
        for _, name in ipairs(names) do
            SKIN:Bang('!HideMeter', name)
        end
    end
end

-- Helper: show or hide a single meter based on viewport bounds
local function SetMeterVisibility(name, y, topBound, botBound, yOffset, height)
    yOffset = yOffset or 0
    height = height or 22
    if y >= topBound and (y + height) <= botBound then
        SKIN:Bang('!SetOption', name, 'Y', tostring(y + yOffset))
        SKIN:Bang('!ShowMeter', name)
    else
        SKIN:Bang('!HideMeter', name)
    end
end

function UpdateLayout()
    local rowH = tonumber(SKIN:GetVariable('RowHeight', '20')) or 20
    local skinW = tonumber(SKIN:GetVariable('SkinWidth', '380')) or 380
    local maxH = tonumber(SKIN:GetVariable('MaxSkinHeight', '600')) or 600
    local bgColor = SKIN:GetVariable('BackgroundColor', '20,20,30,220')
    local scrollOffset = tonumber(SKIN:GetVariable('ScrollOffset', '0')) or 0

    -- Title bar occupies Y=0..~45, content starts at Y=46
    local contentTop = 46

    -- ========================================
    -- PASS 1: Compute total content height (no scroll offset)
    -- ========================================
    local y = contentTop

    local allLeagues = GetLeagueOrder()
    local combatLeagues = { UFC = true, BKFC = true, SMX = true, F1 = true }
    local visibleLeagues = {}
    for _, league in ipairs(allLeagues) do
        if tonumber(SKIN:GetVariable('Show' .. league, '1')) == 1 then
            visibleLeagues[#visibleLeagues + 1] = league
        end
    end
    local lastVisible = visibleLeagues[#visibleLeagues]

    local favCount = tonumber(SKIN:GetVariable('FavCount', '0')) or 0
    if favCount > 0 then
        y = y + 26  -- header
        y = y + favCount * rowH  -- rows
        if #visibleLeagues > 0 then
            y = y + 12 + 2  -- divider gap
        end
    end

    local maxVisible = tonumber(SKIN:GetVariable('MaxVisiblePerLeague', '10')) or 10
    for _, league in ipairs(allLeagues) do
        local show = tonumber(SKIN:GetVariable('Show' .. league, '1')) or 1
        local gameCount = tonumber(SKIN:GetVariable(league .. 'GameCount', '0')) or 0
        if show == 1 then
            y = y + 8 + 28  -- padding + header
            if combatLeagues[league] then
                y = y + 18  -- subheading height
            end
            if gameCount == 0 then
                if not leagueLoaded[league] then
                    y = y + (3 * rowH)  -- skeleton height
                else
                    y = y + rowH  -- "No games" row
                end
            else
                local visCount = leagueExpanded[league] and gameCount or math.min(gameCount, maxVisible)
                y = y + visCount * rowH
                if gameCount > maxVisible then
                    y = y + 4 + rowH  -- padding + "More" toggle row
                end
            end
            y = y + 12  -- bottom padding
            if league ~= lastVisible then
                y = y + 2  -- divider
            end
        end
    end

    y = y + 6  -- final bottom padding
    totalContentHeight = y

    -- ========================================
    -- PASS 2: Determine scrolling state
    -- ========================================
    local needsScroll = totalContentHeight > maxH
    if not needsScroll then
        scrollOffset = 0
        SKIN:Bang('!SetVariable', 'ScrollOffset', '0')
    else
        -- Clamp scroll offset: 0 >= scrollOffset >= -(totalContentHeight - maxH)
        local maxNeg = -(totalContentHeight - maxH)
        if scrollOffset > 0 then scrollOffset = 0 end
        if scrollOffset < maxNeg then scrollOffset = maxNeg end
        SKIN:Bang('!SetVariable', 'ScrollOffset', tostring(scrollOffset))
    end

    -- Viewport bounds for visibility clipping (content area only)
    local topBound = contentTop
    local botBound = needsScroll and maxH or totalContentHeight

    -- ========================================
    -- PASS 3: Position meters with scroll offset applied
    -- ========================================
    y = contentTop + scrollOffset

    -- Favorites section
    if favCount > 0 then
        SetMeterVisibility('MeterFavIcon', y, topBound, botBound, 2)
        SetMeterVisibility('MeterFavHeader', y, topBound, botBound)
        y = y + 26
        for i = 1, MAX_FAVORITES do
            if i <= favCount then
                SetRowVisibility('', i, y, topBound, botBound, true, rowH)
                y = y + rowH
            else
                -- Hide unused fav slots
                local pre = 'MeterFav'
                SKIN:Bang('!HideMeter', pre .. 'Away' .. i)
                SKIN:Bang('!HideMeter', pre .. 'AwayScore' .. i)
                SKIN:Bang('!HideMeter', pre .. 'At' .. i)
                SKIN:Bang('!HideMeter', pre .. 'Home' .. i)
                SKIN:Bang('!HideMeter', pre .. 'HomeScore' .. i)
                SKIN:Bang('!HideMeter', pre .. 'Status' .. i)
            end
        end
        if #visibleLeagues > 0 then
            y = y + 12
            SetMeterVisibility('MeterFavDivider', y, topBound, botBound, 0, 4)
            y = y + 2
        else
            SKIN:Bang('!HideMeter', 'MeterFavDivider')
        end
    else
        SKIN:Bang('!HideMeter', 'MeterFavIcon')
        SKIN:Bang('!HideMeter', 'MeterFavHeader')
        SKIN:Bang('!HideMeter', 'MeterFavDivider')
        for i = 1, MAX_FAVORITES do
            SKIN:Bang('!HideMeter', 'MeterFavAway' .. i)
            SKIN:Bang('!HideMeter', 'MeterFavAwayScore' .. i)
            SKIN:Bang('!HideMeter', 'MeterFavAt' .. i)
            SKIN:Bang('!HideMeter', 'MeterFavHome' .. i)
            SKIN:Bang('!HideMeter', 'MeterFavHomeScore' .. i)
            SKIN:Bang('!HideMeter', 'MeterFavStatus' .. i)
        end
    end

    -- League sections
    for _, league in ipairs(allLeagues) do
        local show = tonumber(SKIN:GetVariable('Show' .. league, '1')) or 1
        local gameCount = tonumber(SKIN:GetVariable(league .. 'GameCount', '0')) or 0
        local isCombat = combatLeagues[league]

        if show == 1 then
            y = y + 8
            SetMeterVisibility('Meter' .. league .. 'Icon', y, topBound, botBound, 2)
            SetMeterVisibility('Meter' .. league .. 'Header', y, topBound, botBound)
            y = y + 28

            -- Subheading for combat leagues (UFC/BKFC)
            if isCombat then
                SetMeterVisibility('Meter' .. league .. 'Subheading', y, topBound, botBound, 0, 18)
                y = y + 18
            end

            if gameCount == 0 then
                if not leagueLoaded[league] then
                    -- Still loading: show skeleton, hide NoGames
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'NoGames')
                    SetMeterVisibility('Meter' .. league .. 'Loading', y, topBound, botBound, 0, 3 * rowH)
                    y = y + (3 * rowH)
                else
                    -- Loaded with 0 games: show NoGames, hide skeleton
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Loading')
                    SetMeterVisibility('Meter' .. league .. 'NoGames', y, topBound, botBound, 0, rowH)
                    y = y + rowH
                end
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'More')
                for i = 1, MAX_GAMES do
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Away' .. i)
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'AwayScore' .. i)
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'At' .. i)
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Home' .. i)
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'HomeScore' .. i)
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Status' .. i)
                end
            else
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'NoGames')
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Loading')
                local visCount = leagueExpanded[league] and gameCount or math.min(gameCount, maxVisible)

                for i = 1, MAX_GAMES do
                    if i <= visCount then
                        SetRowVisibility(league, i, y, topBound, botBound, false, rowH)
                        y = y + rowH
                    else
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Away' .. i)
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'AwayScore' .. i)
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'At' .. i)
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Home' .. i)
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'HomeScore' .. i)
                        SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Status' .. i)
                    end
                end

                -- "More" toggle
                if gameCount > maxVisible then
                    y = y + 4  -- padding above toggle
                    local remaining = gameCount - maxVisible
                    local moreLabel = isCombat and ((league == 'BKFC' or league == 'SMX' or league == 'F1') and ' more events' or ' more fights') or ' more games'
                    local moreText = leagueExpanded[league]
                        and '- Show less'
                        or '+ ' .. remaining .. moreLabel
                    SKIN:Bang('!SetOption', 'Meter' .. league .. 'More', 'Text', moreText)
                    SetMeterVisibility('Meter' .. league .. 'More', y, topBound, botBound, 0, rowH)
                    y = y + rowH
                else
                    SKIN:Bang('!HideMeter', 'Meter' .. league .. 'More')
                end
            end

            y = y + 12

            if league ~= lastVisible then
                SetMeterVisibility('Meter' .. league .. 'Divider', y, topBound, botBound, 0, 4)
                y = y + 2
            else
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Divider')
            end
        else
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Icon')
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Header')
            if isCombat then
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Subheading')
            end
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'NoGames')
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Loading')
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'More')
            SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Divider')
            for i = 1, MAX_GAMES do
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Away' .. i)
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'AwayScore' .. i)
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'At' .. i)
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Home' .. i)
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'HomeScore' .. i)
                SKIN:Bang('!HideMeter', 'Meter' .. league .. 'Status' .. i)
            end
        end
    end

    -- ========================================
    -- PASS 4: Background + bottom padding + scrollbar
    -- ========================================
    local displayH = needsScroll and maxH or totalContentHeight
    -- Position bottom padding at the display height so DynamicWindowSize uses it
    SKIN:Bang('!SetOption', 'MeterBottomPadding', 'Y', tostring(displayH - 1))
    SKIN:Bang('!SetOption', 'MeterBottomPadding', 'H', '1')
    SKIN:Bang('!SetOption', 'MeterBackground', 'Shape',
        'Rectangle 0,0,' .. tostring(skinW) .. ',' .. tostring(displayH) .. ',8 | Fill Color ' .. bgColor .. ' | StrokeWidth 0')

    -- Scrollbar
    if needsScroll then
        local trackTop = contentTop
        local trackH = displayH - trackTop - 4
        local thumbRatio = displayH / totalContentHeight
        local thumbH = math.max(math.floor(trackH * thumbRatio), 20)
        local scrollRange = totalContentHeight - displayH
        local scrollProgress = 0
        if scrollRange > 0 then
            scrollProgress = (-scrollOffset) / scrollRange
        end
        local thumbY = trackTop + math.floor((trackH - thumbH) * scrollProgress)

        SKIN:Bang('!SetOption', 'MeterScrollTrack', 'Shape',
            'Rectangle 0,0,4,' .. tostring(trackH) .. ',2 | Fill Color 255,255,255,20 | StrokeWidth 0')
        SKIN:Bang('!SetOption', 'MeterScrollTrack', 'Y', tostring(trackTop))
        SKIN:Bang('!ShowMeter', 'MeterScrollTrack')

        SKIN:Bang('!SetOption', 'MeterScrollThumb', 'Shape',
            'Rectangle 0,0,4,' .. tostring(thumbH) .. ',2 | Fill Color 100,180,255,150 | StrokeWidth 0')
        SKIN:Bang('!SetOption', 'MeterScrollThumb', 'Y', tostring(thumbY))
        SKIN:Bang('!ShowMeter', 'MeterScrollThumb')

        SKIN:Bang('!SetOption', 'MeterScrollHitbox', 'Y', tostring(trackTop))
        SKIN:Bang('!SetOption', 'MeterScrollHitbox', 'H', tostring(trackH))
        SKIN:Bang('!ShowMeter', 'MeterScrollHitbox')
    else
        SKIN:Bang('!HideMeter', 'MeterScrollTrack')
        SKIN:Bang('!HideMeter', 'MeterScrollThumb')
        SKIN:Bang('!HideMeter', 'MeterScrollHitbox')
    end
end

-- =====================
-- UTILITIES
-- =====================

function ResetFavorites()
    favTeams = {}
    favScheduleData = {}
    leagueExpanded = { NBA = false, NFL = false, NCAAM = false, MLB = false, UFC = false, BKFC = false, SMX = false, F1 = false }
    leagueLoaded = { NBA = false, NFL = false, NCAAM = false, MLB = false, UFC = false, BKFC = false, SMX = false, F1 = false }
    SKIN:Bang('!SetVariable', 'ScrollOffset', '0')
    SKIN:Bang('!SetVariable', 'FavCount', '0')
    for i = 1, MAX_FAVORITES do
        SKIN:Bang('!SetVariable', 'FavAway' .. i, '')
        SKIN:Bang('!SetVariable', 'FavHome' .. i, '')
        SKIN:Bang('!SetVariable', 'FavAwayScore' .. i, '')
        SKIN:Bang('!SetVariable', 'FavHomeScore' .. i, '')
        SKIN:Bang('!SetVariable', 'FavStatus' .. i, '')
        SKIN:Bang('!SetVariable', 'FavStatusType' .. i, '')
    end
    SKIN:Bang('!SetVariable', 'UFCEventName', '')
    SKIN:Bang('!SetVariable', 'BKFCSubheading', 'Upcoming Events')
    SKIN:Bang('!SetVariable', 'SMXSubheading', 'Upcoming Events')
    SKIN:Bang('!SetVariable', 'F1Subheading', 'Upcoming Races')
    local leagues = GetLeagueOrder()
    for _, league in ipairs(leagues) do
        SKIN:Bang('!SetVariable', league .. 'GameCount', '0')
        for i = 1, MAX_GAMES do
            SKIN:Bang('!SetVariable', league .. 'HomeAbbr' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'AwayAbbr' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'HomeScore' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'AwayScore' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'Status' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'Clock' .. i, '')
            SKIN:Bang('!SetVariable', league .. 'Period' .. i, '')
        end
    end
    SetupFavSchedules()
    UpdateLayout()

    -- Kick off sequential fetch chain using configurable order
    local order = GetLeagueOrder()
    local started = false
    for _, lg in ipairs(order) do
        if tonumber(SKIN:GetVariable('Show' .. lg, '1')) == 1 then
            TriggerLeague(lg)
            started = true
            break
        end
    end
    if not started then
        FetchNextFavSchedule(1)
    end
end

function GetPeriodLabel(period, league)
    local p = tonumber(period) or 0
    if league == 'NFL' then
        if p == 1 then return '1st'
        elseif p == 2 then return '2nd'
        elseif p == 3 then return '3rd'
        elseif p == 4 then return '4th'
        else return 'OT' end
    elseif league == 'NCAAM' then
        if p == 1 then return '1st'
        elseif p == 2 then return '2nd'
        else return 'OT' end
    elseif league == 'UFC' then
        return 'Rd ' .. tostring(p)
    elseif league == 'MLB' then
        local ordinals = {'1st','2nd','3rd','4th','5th','6th','7th','8th','9th'}
        return ordinals[p] or (tostring(p) .. 'th')
    else
        if p == 1 then return 'Q1'
        elseif p == 2 then return 'Q2'
        elseif p == 3 then return 'Q3'
        elseif p == 4 then return 'Q4'
        else return 'OT' end
    end
end

function ToggleLeagueGames(league)
    leagueExpanded[league] = not leagueExpanded[league]
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')
end

function ScrollUp()
    local maxH = tonumber(SKIN:GetVariable('MaxSkinHeight', '600')) or 600
    if totalContentHeight <= maxH then return end
    local offset = tonumber(SKIN:GetVariable('ScrollOffset', '0')) or 0
    local step = tonumber(SKIN:GetVariable('ScrollStep', '28')) or 28
    offset = offset + step
    if offset > 0 then offset = 0 end
    SKIN:Bang('!SetVariable', 'ScrollOffset', tostring(offset))
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')
end

function ScrollDown()
    local maxH = tonumber(SKIN:GetVariable('MaxSkinHeight', '600')) or 600
    if totalContentHeight <= maxH then return end
    local offset = tonumber(SKIN:GetVariable('ScrollOffset', '0')) or 0
    local step = tonumber(SKIN:GetVariable('ScrollStep', '28')) or 28
    offset = offset - step
    local maxNeg = -(totalContentHeight - maxH)
    if offset < maxNeg then offset = maxNeg end
    SKIN:Bang('!SetVariable', 'ScrollOffset', tostring(offset))
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')
end

function ScrollToPosition(mouseY)
    local maxH = tonumber(SKIN:GetVariable('MaxSkinHeight', '600')) or 600
    if totalContentHeight <= maxH then return end
    local contentTop = 46
    local trackH = maxH - contentTop - 4
    local clickPos = (mouseY - contentTop) / trackH
    if clickPos < 0 then clickPos = 0 end
    if clickPos > 1 then clickPos = 1 end
    local scrollRange = totalContentHeight - maxH
    local newOffset = math.floor(-(clickPos * scrollRange))
    if newOffset > 0 then newOffset = 0 end
    if newOffset < -scrollRange then newOffset = -scrollRange end
    SKIN:Bang('!SetVariable', 'ScrollOffset', tostring(newOffset))
    UpdateLayout()
    SKIN:Bang('!UpdateMeterGroup', 'ContentGroup')
    SKIN:Bang('!Redraw')
end
