# Eso Sports Widget - Rainmeter Skin

## Project Overview
A Rainmeter desktop widget that displays live NBA, NFL, and NCAAM scores from the ESPN API, with a favorites section for tracked teams.

## Architecture
- **Rainmeter INI** (`EsoSportsWidget/Scoreboard/Scoreboard.ini`) - Defines all UI meters (layout, styling, groups)
- **Lua Script** (`EsoSportsWidget/@Resources/Scripts/Favorites.lua`) - Data parsing, favorites logic, dynamic layout positioning
- **JSON Parser** (`EsoSportsWidget/@Resources/Scripts/json.lua`) - Pure Lua JSON parser
- **Variables** (`EsoSportsWidget/@Resources/Variables.inc`) - User-configurable settings

## Key Constants
- `MAX_GAMES = 12` - Max game rows per league (matches INI meter count)
- `MAX_FAVORITES = 4` - Max favorite team slots (matches INI meter count)
- `RowHeight = 16` - Pixel height per game row

## Data Flow
1. `OnRefreshAction` calls `ResetFavorites()` which clears state, calls `UpdateLayout()`, then `SetupFavSchedules()`
2. `SetupFavSchedules()` parses `FavoriteTeams` variable, resolves leagues, triggers async ESPN team API calls
3. ESPN WebParser measures fetch scoreboard data, trigger `ParseLeague('NBA')` etc. on completion
4. `ParseLeague()` parses ESPN JSON, sets game variables, calls `CheckFavoritesLive()` and `UpdateLayout()`
5. `ParseFavSchedule(index)` handles individual favorite team schedule responses
6. `UpdateLayout()` computes Y positions for all visible meters, resizes background shape

## ESPN API Endpoints
- Scoreboard: `https://site.api.espn.com/apis/site/v2/sports/{sport}/{league}/scoreboard`
- Team schedule: `https://site.api.espn.com/apis/site/v2/sports/{sport}/{league}/teams/{id}`
- NCAAM uses numeric team IDs (mapped in `NCAAM_IDS` table), not abbreviations
- Scoreboard returns today's games by default (no date parameter needed)

## INI Meter Layout (per game row)
Each row has 6 meters at fixed X positions:
- `Away` (X=20) - Away team abbreviation
- `AwayScore` (X=75) - Away score
- `At` (X=108, Center-aligned) - "@" symbol
- `Home` (X=128) - Home team abbreviation
- `HomeScore` (X=175) - Home score
- `Status` (X=SkinWidth-15, Right-aligned) - Game status/time

## Variable Naming Convention
- League game data: `{League}HomeAbbr{N}`, `{League}AwayScore{N}`, `{League}Status{N}`, etc.
- Favorites: `FavAway{N}`, `FavHome{N}`, `FavStatus{N}`, etc.
- Counts: `{League}GameCount`, `FavCount`
- Toggles: `ShowNBA`, `ShowNFL`, `ShowNCAAM`

## Timezone
- `TimezoneOffset` in Variables.inc (default: -8 for PST)
- `FormatGameDate()` - Full date+time for favorites (e.g., "Mar 2 7:30PM")
- `FormatGameTime()` - Time-only for league games (e.g., "7:30PM")
- Both convert ESPN UTC times using the configured offset

## Deployment
- **Git repo (source):** `/home/brandonlinux/web/eso-sports-widget/EsoSportsWidget/`
- **Rainmeter install (live):** `/mnt/c/Users/brand/Documents/Rainmeter/Skins/EsoSportsWidget/`
- These are **separate copies**. After editing files in the repo, you MUST copy to the Rainmeter directory for changes to take effect:
  ```bash
  cp -r /home/brandonlinux/web/eso-sports-widget/EsoSportsWidget/* /mnt/c/Users/brand/Documents/Rainmeter/Skins/EsoSportsWidget/
  ```
- Then refresh the skin in Rainmeter (right-click widget > Refresh, or click the Refresh button)

## League Header Colors
- NBA: `NBAColor=255,100,50` (orange-red)
- NFL: `NFLColor=0,180,100` (green)
- NCAAM: `NCAAMColor=80,150,255` (blue)
- Favorites: gold (`255,215,0`, hardcoded in INI)

## UpdateLayout() Spacing (in Lua)
- Header to first row: 22px
- Row height: 16px (from `RowHeight` variable)
- Bottom padding after game rows: 4px
- Divider gap (between sections): 2px before + divider + 3px after = ~6px
- Bottom padding (end of widget): 3px

## Common Pitfalls
- INI meter rows and Lua MAX constants must match (currently both 12 for games, 4 for favorites)
- `ResetFavorites()` must call `SetupFavSchedules()` at the end to repopulate `favTeams` for async callbacks
- ESPN scheduled games return `score: "0"` - must blank scores when `isScheduled` is true
- Hidden Rainmeter meters don't affect layout when using absolute Y positioning via `!SetOption`
- `DynamicWindowSize=1` makes the widget auto-resize to fit content
- The background `Shape` height must be updated in `UpdateLayout()` to match content height
- **Repo vs Rainmeter are separate copies** - always sync after changes

## File Locations
- Skin root: `EsoSportsWidget/Scoreboard/`
- Resources: `EsoSportsWidget/@Resources/`
- Settings: `EsoSportsWidget/@Resources/Variables.inc`
