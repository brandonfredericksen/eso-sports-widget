# 🏟️ Eso Sports Widget

A Rainmeter desktop widget that displays live NBA, NFL, NCAAM, and MLB scores with a favorites section for tracking your teams.

Scores are fetched from the ESPN public API and refresh automatically.

## 📋 Requirements

- [Rainmeter 4.5+](https://www.rainmeter.net/) (Windows)

## 📦 Installation

1. Download or clone this repository.
2. Copy the `EsoSportsWidget` folder into your Rainmeter skins directory:
   ```
   Documents\Rainmeter\Skins\
   ```
3. In Rainmeter, right-click the system tray icon > **Refresh All**.
4. Navigate to **EsoSportsWidget > Scoreboard** and load `Scoreboard.ini`.

## ⚙️ Configuration

All settings are in `EsoSportsWidget/@Resources/Variables.inc`. You can also access this file by right-clicking the widget and selecting **Edit Settings**.

### 🏀 Toggle Leagues

Show or hide each league (1 = on, 0 = off):

```ini
ShowNBA=1
ShowNFL=1
ShowNCAAM=1
ShowMLB=1
```

### ⭐ Favorite Teams

Set your favorite teams as a comma-separated list. Their next game (or live score) appears in the Favorites section at the top of the widget.

```ini
FavoriteTeams=LAL,KC,GONZ,NYY
```

Use standard ESPN team abbreviations. Some abbreviations are shared across leagues (e.g., SEA is both the Seahawks and Mariners). To specify the league explicitly, use the `LEAGUE:ABBR` prefix:

```ini
FavoriteTeams=NFL:SEA,MLB:SEA,GONZ
```

Without a prefix, the widget auto-detects the league (NFL is checked first, then NBA, MLB, and finally NCAAM).

**Example abbreviations:**
- 🏀 **NBA:** LAL, BOS, GSW, MIL, NYK, PHI, MIA, CHI, CLE, DAL
- 🏈 **NFL:** KC, SF, DAL, PHI, BUF, DET, BAL, SEA, CIN, GB
- 🎓 **NCAAM:** DUKE, UNC, UK, KU, GONZ, PURDUE, UCONN, CONN
- ⚾ **MLB:** NYY, BOS, NYM, LAD, HOU, ATL, SEA, SF, SD, CHC

### 🕐 Timezone

Set your UTC offset so game times display correctly:

```ini
TimezoneOffset=-8   ; PST
TimezoneOffset=-5   ; EST
TimezoneOffset=0    ; UTC
```

### 🔄 Refresh Rate

How often scores update, in minutes:

```ini
RefreshMinutes=5
```

### 🎨 Appearance

```ini
FontFace=Segoe UI
FontSize=11
SkinWidth=380
BackgroundColor=20,20,30,220
NBAColor=255,100,50       ; orange-red
NFLColor=0,180,100        ; green
NCAAMColor=80,150,255     ; blue
MLBColor=0,90,180         ; dark blue
```

## 🖱️ Usage

- **Refresh** - Click the "Refresh" text in the top-right corner, or right-click > Refresh Skin.
- **Edit Settings** - Right-click the widget > Edit Settings to open `Variables.inc` in your text editor. Save the file and refresh the skin to apply changes.

## 📡 Data Source

All game data is from the [ESPN public API](https://site.api.espn.com/apis/site/v2/sports/). No API key is required.

## 📄 License

MIT
