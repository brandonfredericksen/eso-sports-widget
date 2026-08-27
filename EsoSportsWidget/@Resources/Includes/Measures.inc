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
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NBA')"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NBA')"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

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
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NFL')"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NFL')"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

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
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NCAAM')"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('NCAAM')"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

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
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('MLB')"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseLeague('MLB')"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

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
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseUFC()"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseUFC()"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

; =====================
; BKFC DATA
; =====================
; Scrapes bkfc.com (a normal website, not an API), so it keeps a browser
; User-Agent -- unlike the ESPN measures above. See #ESPNUserAgent# notes.
[BKFCWebParser]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=86400
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseBKFC()"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseBKFC()"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseBKFC()"]
DynamicVariables=1
UserAgent=#BrowserUserAgent#

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
; F1 DATA
; =====================
[F1WebParser]
Measure=WebParser
URL=https://site.api.espn.com/apis/site/v2/sports/racing/f1/scoreboard
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
Disabled=1
FinishAction=[!CommandMeasure LuaFavorites "ParseF1()"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseF1()"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseF1()"]
UserAgent=#ESPNUserAgent#
Header=Connection: close

; =====================
; FAVORITE SCHEDULES
; =====================
[FavSchedule1]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(1)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(1)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(1)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close

[FavSchedule2]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(2)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(2)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(2)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close

[FavSchedule3]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(3)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(3)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(3)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close

[FavSchedule4]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(4)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(4)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(4)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close

[FavSchedule5]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(5)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(5)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(5)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close

[FavSchedule6]
Measure=WebParser
URL=about:blank
RegExp=(?siU)^(.*)$
UpdateRate=(#RefreshMinutes# * 60)
FinishAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(6)"]
OnConnectErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(6)"]
OnRegExpErrorAction=[!CommandMeasure LuaFavorites "ParseFavSchedule(6)"]
DynamicVariables=1
Disabled=1
UserAgent=#ESPNUserAgent#
Header=Connection: close
