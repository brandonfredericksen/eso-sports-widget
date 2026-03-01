# Eso Sports Widget — Rainmeter Skin

## Context
Build a custom Rainmeter skin that shows **all games for today** across selected leagues (NBA, NFL, NCAA Men's Basketball). Unlike existing skins (e.g., ScoreCards) that track a single team, this shows the full daily slate. Additionally, users can mark favorite teams — if a favorite has an upcoming game, it appears in a dedicated "Favorites" section even if the game isn't today.

## Data Source
**ESPN Unofficial API** — no auth, no API key, rich JSON, covers all three leagues.

| League | Endpoint |
|--------|----------|
| NBA | `https://site.api.espn.com/apis/site/v2/sports/basketball/nba/scoreboard` |
| NFL | `https://site.api.espn.com/apis/site/v2/sports/football/nfl/scoreboard` |
| NCAAM | `https://site.api.espn.com/apis/site/v2/sports/basketball/mens-college-basketball/scoreboard?groups=50&limit=100` |

Key JSON paths per game:
- `events[N].competitions[0].competitors[0].team.abbreviation` (home)
- `events[N].competitions[0].competitors[1].team.abbreviation` (away)
- `events[N].competitions[0].competitors[0].score` / `[1].score`
- `events[N].competitions[0].status.type.description` (Final, In Progress, 7:00 PM ET, etc.)
- `events[N].competitions[0].status.displayClock`
- `events[N].competitions[0].status.period`
- `Length(events)` for game count

## Architecture

### File Structure
```
EsoSportsWidget/
  @Resources/
    Variables.inc          # User settings (leagues, favorites, refresh, colors)
    Fonts/                 # (optional) bundled font
    Images/
      nba.png
      nfl.png
      ncaam.png
      refresh.png
  Scoreboard/
    Scoreboard.ini         # Main skin — all games today
```

### Plugin Dependency
- **JsonParser.dll** — required third-party plugin for parsing ESPN JSON responses
- Download from: https://github.com/e2e8/Rainmeter-JsonParser/releases
- Include 32-bit and 64-bit DLLs in the .rmskin package

### Variables.inc (User Settings)
```ini
[Variables]
; Leagues to show (1=on, 0=off)
ShowNBA=1
ShowNFL=1
ShowNCAAM=1

; Favorite teams (comma-separated abbreviations)
; NBA: LAL, BOS, GSW, MIL, etc.
; NFL: KC, SF, DAL, PHI, etc.
; NCAAM: DUKE, UNC, UK, KU, etc.
FavoriteTeams=LAL,BOS,KC,DAL,DUKE

; Refresh interval in minutes
RefreshMinutes=5

; Display
MaxGamesPerLeague=12
FontFace=Segoe UI
FontSize=11
HeaderFontSize=14
TextColor=220,220,220
HeaderColor=255,255,255
AccentColor=0,150,255
DimColor=120,120,120
BackgroundColor=20,20,30,220
RowHeight=32
SkinWidth=380
```

### Skin Logic (Scoreboard.ini)

#### 1. Data Fetching
- Three WebParser parent measures (one per league), each fetching the full JSON
- `UpdateRate=(#RefreshMinutes# * 60)` for configurable refresh
- `FinishAction` triggers JsonParser measure updates + conditional display logic
- Only fetch for enabled leagues (`IfCondition` on Show variables)

#### 2. JSON Parsing
- Per league, pre-define JsonParser measures for up to `MaxGamesPerLeague` games:
  - Home team abbreviation
  - Away team abbreviation
  - Home score
  - Away score
  - Status description (time or "Final" or "In Progress")
  - Display clock + period (for live games)
- One `Length(events)` measure per league for game count

#### 3. Display Layout (top to bottom)
```
┌──────────────────────────────────┐
│  ★ FAVORITES                     │  ← Only shows if a favorite has a game
│  LAL 105 @ BOS 98    Final       │
│  KC  24  @ DAL 17    4th 2:30    │
├──────────────────────────────────┤
│  🏀 NBA                          │  ← League header (only if ShowNBA=1)
│  LAL 105 @ BOS 98    Final       │
│  GSW  88 @ MIL 92    3rd 5:45    │
│  NYK  -- @ PHI --    7:00 PM ET  │
│  ... (scroll for more)           │
├──────────────────────────────────┤
│  🏈 NFL                          │  ← League header (only if ShowNFL=1)
│  KC  24  @ DAL 17    Final       │
│  SF  14  @ PHI 21    Halftime    │
├──────────────────────────────────┤
│  🏀 NCAAM                        │  ← League header (only if ShowNCAAM=1)
│  DUKE 72 @ UNC 68    Final       │
│  UK   55 @ KU  60    2nd 8:22    │
└──────────────────────────────────┘
  ↕ scroll if content overflows
```

#### 4. Favorites Logic
- After each league fetch completes, check each game's home/away abbreviation against `#FavoriteTeams#`
- This requires **Lua scripting** — Rainmeter's built-in IfMatch can't iterate a comma-separated list against multiple games
- Lua script: `@Resources/Scripts/Favorites.lua`
  - Reads the full JSON from each league's WebParser measure
  - Parses favorite teams from the variable
  - Filters games where any competitor matches a favorite
  - Sets Rainmeter variables for the favorites section meters

#### 5. Scrolling
- Use Container-based clipping (Rainmeter 4.4+)
- Define a container meter with fixed height
- All game rows render inside the container
- Mouse scroll adjusts Y offset variable
- Clamp scroll bounds based on total content height

#### 6. Conditional Show/Hide
- League sections: `IfCondition` on `ShowNBA`/`ShowNFL`/`ShowNCAAM` variables → `!ShowMeterGroup`/`!HideMeterGroup`
- Game rows: `IfCondition` on game count → show/hide row groups
- Favorites section: show only when at least one favorite game exists
- "No games today" message per league when game count = 0

## Implementation Steps

### Step 1: Project scaffold
- Create folder structure
- Write `Variables.inc` with defaults
- Write skeleton `Scoreboard.ini` with metadata, variables, background

### Step 2: Data fetching + parsing (NBA first)
- WebParser measure for NBA scoreboard
- JsonParser measures for game count + first 12 games (home/away/score/status)
- Debug: verify data with `Debug=2` WebParser dump

### Step 3: Display meters (NBA)
- League header meter
- Game row meters (away abbr, away score, "@", home abbr, home score, status)
- IfCondition show/hide based on game count
- Background auto-sizing with `DynamicWindowSize=1`

### Step 4: Add NFL + NCAAM
- Duplicate WebParser + JsonParser pattern for each league
- Stack league sections vertically
- Show/hide based on league toggle variables

### Step 5: Favorites system (Lua)
- Write Lua script to filter games by favorite teams
- Favorites section at the top of the skin
- Star icon or highlight for favorite games

### Step 6: Scrolling
- Container meter for clipping
- Mouse scroll actions
- Scroll bounds clamping

### Step 7: Polish
- Right-click context menu for settings (edit Variables.inc)
- Refresh button
- Hover effects on game rows
- Color coding: live games (green), upcoming (white), final (dim)
- League logo images next to headers

### Step 8: Package
- Create .rmskin with Rainmeter Skin Packager
- Bundle JsonParser.dll (32-bit + 64-bit)
- Mark Variables.inc as preserved file
- Include README with setup instructions

## Verification
1. Install Rainmeter (if not already installed)
2. Place skin folder in `Documents/Rainmeter/Skins/`
3. Install JsonParser.dll plugin
4. Load the skin via Rainmeter Manage window
5. Verify NBA/NFL/NCAAM games appear
6. Test favorites filtering
7. Test scrolling with many games
8. Test league toggle (set ShowNFL=0, verify NFL section hides)
9. Test refresh (right-click → refresh, or wait for auto-refresh)
10. Package as .rmskin and test clean install
