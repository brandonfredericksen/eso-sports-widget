; ========================================================
; NCAAM SECTION
; ========================================================
[MeterNCAAMIcon]
Meter=Image
ImageName=#@#Images\ncaam.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#NCAAMColor#
StringAlign=Left
AntiAlias=1
Text=NCAAM Basketball
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMNoGames]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMLoading]
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
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 1 ---
[MeterNCAAMAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr1#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore1#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt1]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr1#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore1#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus1#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 2 ---
[MeterNCAAMAway2]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr2#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore2#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt2]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr2#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore2#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus2#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 3 ---
[MeterNCAAMAway3]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr3#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore3#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt3]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr3#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore3#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus3#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 4 ---
[MeterNCAAMAway4]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr4#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore4#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt4]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr4#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore4#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus4#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 5 ---
[MeterNCAAMAway5]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr5#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore5#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt5]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr5#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore5#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus5#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 6 ---
[MeterNCAAMAway6]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr6#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore6#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt6]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr6#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore6#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus6#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 7 ---
[MeterNCAAMAway7]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr7#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore7#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt7]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr7#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore7#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus7#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 8 ---
[MeterNCAAMAway8]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr8#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore8#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt8]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr8#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore8#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus8#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 9 ---
[MeterNCAAMAway9]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr9#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore9#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt9]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr9#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore9#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus9#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 10 ---
[MeterNCAAMAway10]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr10#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore10#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt10]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr10#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore10#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus10#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 11 ---
[MeterNCAAMAway11]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr11#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore11#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt11]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr11#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore11#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus11#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 12 ---
[MeterNCAAMAway12]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr12#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore12#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt12]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr12#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore12#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus12#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 13 ---
[MeterNCAAMAway13]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr13#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore13#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt13]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr13#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore13#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus13#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 14 ---
[MeterNCAAMAway14]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr14#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore14#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt14]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr14#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore14#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus14#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 15 ---
[MeterNCAAMAway15]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr15#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore15#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt15]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr15#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore15#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus15#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 16 ---
[MeterNCAAMAway16]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr16#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore16#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt16]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr16#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore16#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus16#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 17 ---
[MeterNCAAMAway17]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr17#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore17#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt17]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr17#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore17#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus17#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 18 ---
[MeterNCAAMAway18]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr18#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore18#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt18]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr18#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore18#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus18#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 19 ---
[MeterNCAAMAway19]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr19#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore19#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt19]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr19#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore19#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus19#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 20 ---
[MeterNCAAMAway20]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr20#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore20#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt20]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr20#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore20#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus20#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 21 ---
[MeterNCAAMAway21]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr21#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore21#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt21]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr21#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore21#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus21#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 22 ---
[MeterNCAAMAway22]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr22#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore22#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt22]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr22#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore22#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus22#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 23 ---
[MeterNCAAMAway23]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr23#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore23#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt23]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr23#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore23#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus23#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 24 ---
[MeterNCAAMAway24]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr24#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore24#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt24]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr24#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore24#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus24#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 25 ---
[MeterNCAAMAway25]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr25#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore25#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt25]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr25#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore25#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus25#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 26 ---
[MeterNCAAMAway26]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr26#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore26#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt26]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr26#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore26#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus26#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 27 ---
[MeterNCAAMAway27]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr27#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore27#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt27]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr27#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore27#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus27#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 28 ---
[MeterNCAAMAway28]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr28#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore28#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt28]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr28#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore28#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus28#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 29 ---
[MeterNCAAMAway29]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr29#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore29#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt29]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr29#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore29#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus29#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM Row 30 ---
[MeterNCAAMAway30]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayAbbr30#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMAwayScore30#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMAt30]
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
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeAbbr30#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NCAAMHomeScore30#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

[MeterNCAAMStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NCAAMStatus30#
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

; --- NCAAM More Toggle ---
[MeterNCAAMMore]
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
MouseOverAction=[!SetOption MeterNCAAMMore FontColor "255,255,255"][!UpdateMeter MeterNCAAMMore][!Redraw]
MouseLeaveAction=[!SetOption MeterNCAAMMore FontColor "#AccentColor#"][!UpdateMeter MeterNCAAMMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('NCAAM')"]
Group=NCAAMGroup | ContentGroup

; --- NCAAM Divider ---
[MeterNCAAMDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=NCAAMGroup | ContentGroup

