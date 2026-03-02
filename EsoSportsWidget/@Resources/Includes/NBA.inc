; ========================================================
; NBA SECTION
; ========================================================

; Calculate NBA section Y offset
; Base Y = title area (35) + favorites area
[MeterNBAIcon]
Meter=Image
ImageName=#@#Images\nba.png
X=15
Y=12R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#NBAColor#
StringAlign=Left
AntiAlias=1
Text=NBA
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBANoGames]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=No games today
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBALoading]
Meter=Shape
Shape=Rectangle 20,0,120,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape2=Rectangle 160,0,40,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape3=Rectangle 220,0,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape4=Rectangle 20,16,100,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape5=Rectangle 160,16,40,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape6=Rectangle 220,16,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape7=Rectangle 20,32,110,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape8=Rectangle 160,32,40,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape9=Rectangle 220,32,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
X=0
Y=0
Hidden=1
Group=NBAGroup | ContentGroup

; --- NBA Row 1 ---
[MeterNBAAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr1#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore1#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt1]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr1#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore1#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus1#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 2 ---
[MeterNBAAway2]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr2#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore2#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt2]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr2#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore2#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus2#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 3 ---
[MeterNBAAway3]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr3#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore3#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt3]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr3#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore3#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus3#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 4 ---
[MeterNBAAway4]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr4#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore4#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt4]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr4#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore4#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus4#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 5 ---
[MeterNBAAway5]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr5#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore5#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt5]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr5#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore5#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus5#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 6 ---
[MeterNBAAway6]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr6#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore6#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt6]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr6#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore6#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus6#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 7 ---
[MeterNBAAway7]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr7#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore7#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt7]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr7#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore7#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus7#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 8 ---
[MeterNBAAway8]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr8#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore8#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt8]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr8#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore8#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus8#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 9 ---
[MeterNBAAway9]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr9#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore9#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt9]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr9#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore9#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus9#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 10 ---
[MeterNBAAway10]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr10#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore10#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt10]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr10#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore10#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus10#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 11 ---
[MeterNBAAway11]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr11#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore11#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt11]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr11#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore11#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus11#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 12 ---
[MeterNBAAway12]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr12#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore12#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt12]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr12#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore12#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus12#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 13 ---
[MeterNBAAway13]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr13#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore13#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt13]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr13#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore13#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus13#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 14 ---
[MeterNBAAway14]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr14#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore14#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt14]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr14#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore14#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus14#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 15 ---
[MeterNBAAway15]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr15#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore15#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt15]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr15#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore15#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus15#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 16 ---
[MeterNBAAway16]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr16#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore16#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt16]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr16#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore16#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus16#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 17 ---
[MeterNBAAway17]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr17#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore17#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt17]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr17#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore17#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus17#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 18 ---
[MeterNBAAway18]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr18#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore18#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt18]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr18#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore18#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus18#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 19 ---
[MeterNBAAway19]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr19#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore19#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt19]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr19#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore19#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus19#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 20 ---
[MeterNBAAway20]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr20#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore20#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt20]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr20#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore20#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus20#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 21 ---
[MeterNBAAway21]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr21#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore21#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt21]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr21#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore21#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus21#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 22 ---
[MeterNBAAway22]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr22#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore22#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt22]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr22#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore22#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus22#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 23 ---
[MeterNBAAway23]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr23#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore23#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt23]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr23#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore23#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus23#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 24 ---
[MeterNBAAway24]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr24#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore24#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt24]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr24#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore24#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus24#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 25 ---
[MeterNBAAway25]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr25#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore25#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt25]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr25#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore25#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus25#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 26 ---
[MeterNBAAway26]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr26#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore26#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt26]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr26#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore26#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus26#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 27 ---
[MeterNBAAway27]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr27#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore27#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt27]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr27#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore27#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus27#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 28 ---
[MeterNBAAway28]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr28#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore28#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt28]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr28#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore28#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus28#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 29 ---
[MeterNBAAway29]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr29#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore29#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt29]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr29#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore29#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus29#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA Row 30 ---
[MeterNBAAway30]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayAbbr30#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAAwayScore30#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAAt30]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=@
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeAbbr30#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NBAHomeScore30#
DynamicVariables=1
Group=NBAGroup | ContentGroup

[MeterNBAStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NBAStatus30#
DynamicVariables=1
Group=NBAGroup | ContentGroup

; --- NBA More Toggle ---
[MeterNBAMore]
Meter=String
X=20
Y=2R
FontFace=#FontFace#
FontSize=9
FontColor=#AccentColor#
StringAlign=Left
AntiAlias=1
Text=
DynamicVariables=1
MouseOverAction=[!SetOption MeterNBAMore FontColor "255,255,255"][!UpdateMeter MeterNBAMore][!Redraw]
MouseLeaveAction=[!SetOption MeterNBAMore FontColor "#AccentColor#"][!UpdateMeter MeterNBAMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('NBA')"]
Group=NBAGroup | ContentGroup

; --- NBA Divider ---
[MeterNBADivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=NBAGroup | ContentGroup

