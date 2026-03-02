; =====================
; LUA SCRIPT
; =====================
[LuaFavorites]
Measure=Script
ScriptFile=#@#Scripts\Favorites.lua

; =====================
; NBA DATA
; =====================
[NBAWebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/basketball/nba/scoreboard
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseLeague('NBA')"]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; NFL DATA
; =====================
[NFLWebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/football/nfl/scoreboard
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseLeague('NFL')"]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; NCAAM DATA
; =====================
[NCAAMWebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/basketball/mens-college-basketball/scoreboard?groups=50&limit=100
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseLeague('NCAAM')"]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; MLB DATA
; =====================
[MLBWebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/baseball/mlb/scoreboard
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseLeague('MLB')"]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; UFC DATA
; =====================
[UFCWebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/mma/ufc/scoreboard
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseUFC()"]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; BKFC DATA
; =====================
[BKFCWebParser]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=86400
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseBKFC()"]
DynamicVariables=1
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36

; =====================
; SMX SCHEDULE DATA
; =====================
[SMXWebParser]
Measure=WebParser
URL=https://raw.githubusercontent.com/brandonfredericksen/eso-sports-widget/main/data/smx-schedule.json
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseSMX()"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseSMX()"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseSMX()"]
DynamicVariables=1

; =====================
; FAVORITE SCHEDULES
; =====================
[FavSchedule1]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(1)"]
DynamicVariables=1
Disabled=1

[FavSchedule2]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(2)"]
DynamicVariables=1
Disabled=1

[FavSchedule3]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(3)"]
DynamicVariables=1
Disabled=1

[FavSchedule4]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(4)"]
DynamicVariables=1
Disabled=1

[FavSchedule5]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(5)"]
DynamicVariables=1
Disabled=1

[FavSchedule6]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(6)"]
DynamicVariables=1
Disabled=1

