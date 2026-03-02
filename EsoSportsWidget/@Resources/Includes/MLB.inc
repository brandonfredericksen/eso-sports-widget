; ========================================================
; MLB SECTION
; ========================================================
[MeterMLBIcon]
Meter=Image
ImageName=#@#Images\mlb.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#MLBColor#
StringAlign=Left
AntiAlias=1
Text=MLB
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBNoGames]
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
Group=MLBGroup | ContentGroup

[MeterMLBLoading]
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
Group=MLBGroup | ContentGroup

; --- MLB Row 1 ---
[MeterMLBAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr1#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore1#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt1]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr1#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore1#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus1#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 2 ---
[MeterMLBAway2]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr2#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore2#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt2]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr2#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore2#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus2#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 3 ---
[MeterMLBAway3]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr3#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore3#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt3]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr3#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore3#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus3#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 4 ---
[MeterMLBAway4]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr4#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore4#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt4]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr4#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore4#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus4#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 5 ---
[MeterMLBAway5]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr5#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore5#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt5]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr5#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore5#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus5#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 6 ---
[MeterMLBAway6]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr6#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore6#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt6]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr6#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore6#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus6#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 7 ---
[MeterMLBAway7]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr7#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore7#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt7]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr7#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore7#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus7#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 8 ---
[MeterMLBAway8]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr8#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore8#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt8]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr8#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore8#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus8#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 9 ---
[MeterMLBAway9]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr9#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore9#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt9]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr9#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore9#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus9#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 10 ---
[MeterMLBAway10]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr10#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore10#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt10]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr10#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore10#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus10#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 11 ---
[MeterMLBAway11]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr11#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore11#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt11]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr11#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore11#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus11#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 12 ---
[MeterMLBAway12]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr12#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore12#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt12]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr12#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore12#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus12#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 13 ---
[MeterMLBAway13]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr13#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore13#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt13]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr13#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore13#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus13#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 14 ---
[MeterMLBAway14]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr14#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore14#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt14]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr14#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore14#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus14#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 15 ---
[MeterMLBAway15]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr15#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore15#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt15]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr15#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore15#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus15#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 16 ---
[MeterMLBAway16]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr16#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore16#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt16]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr16#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore16#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus16#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 17 ---
[MeterMLBAway17]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr17#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore17#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt17]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr17#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore17#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus17#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 18 ---
[MeterMLBAway18]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr18#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore18#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt18]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr18#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore18#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus18#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 19 ---
[MeterMLBAway19]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr19#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore19#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt19]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr19#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore19#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus19#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 20 ---
[MeterMLBAway20]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr20#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore20#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt20]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr20#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore20#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus20#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 21 ---
[MeterMLBAway21]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr21#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore21#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt21]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr21#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore21#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus21#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 22 ---
[MeterMLBAway22]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr22#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore22#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt22]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr22#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore22#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus22#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 23 ---
[MeterMLBAway23]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr23#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore23#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt23]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr23#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore23#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus23#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 24 ---
[MeterMLBAway24]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr24#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore24#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt24]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr24#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore24#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus24#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 25 ---
[MeterMLBAway25]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr25#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore25#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt25]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr25#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore25#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus25#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 26 ---
[MeterMLBAway26]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr26#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore26#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt26]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr26#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore26#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus26#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 27 ---
[MeterMLBAway27]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr27#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore27#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt27]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr27#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore27#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus27#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 28 ---
[MeterMLBAway28]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr28#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore28#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt28]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr28#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore28#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus28#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 29 ---
[MeterMLBAway29]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr29#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore29#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt29]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr29#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore29#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus29#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB Row 30 ---
[MeterMLBAway30]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayAbbr30#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBAwayScore30#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBAt30]
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
Group=MLBGroup | ContentGroup

[MeterMLBHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeAbbr30#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#MLBHomeScore30#
DynamicVariables=1
Group=MLBGroup | ContentGroup

[MeterMLBStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#MLBStatus30#
DynamicVariables=1
Group=MLBGroup | ContentGroup

; --- MLB More Toggle ---
[MeterMLBMore]
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
MouseOverAction=[!SetOption MeterMLBMore FontColor "255,255,255"][!UpdateMeter MeterMLBMore][!Redraw]
MouseLeaveAction=[!SetOption MeterMLBMore FontColor "#AccentColor#"][!UpdateMeter MeterMLBMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('MLB')"]
Group=MLBGroup | ContentGroup

; --- MLB Divider ---
[MeterMLBDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=MLBGroup | ContentGroup

