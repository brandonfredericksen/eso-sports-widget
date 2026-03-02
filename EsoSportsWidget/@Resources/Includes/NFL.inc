; ========================================================
; NFL SECTION
; ========================================================
[MeterNFLIcon]
Meter=Image
ImageName=#@#Images\nfl.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#NFLColor#
StringAlign=Left
AntiAlias=1
Text=NFL
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLNoGames]
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
Group=NFLGroup | ContentGroup

[MeterNFLLoading]
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
Group=NFLGroup | ContentGroup

; --- NFL Row 1 ---
[MeterNFLAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr1#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore1#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt1]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr1#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore1#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus1#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 2 ---
[MeterNFLAway2]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr2#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore2#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt2]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr2#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore2#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus2#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 3 ---
[MeterNFLAway3]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr3#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore3#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt3]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr3#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore3#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus3#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 4 ---
[MeterNFLAway4]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr4#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore4#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt4]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr4#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore4#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus4#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 5 ---
[MeterNFLAway5]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr5#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore5#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt5]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr5#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore5#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus5#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 6 ---
[MeterNFLAway6]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr6#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore6#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt6]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr6#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore6#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus6#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 7 ---
[MeterNFLAway7]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr7#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore7#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt7]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr7#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore7#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus7#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 8 ---
[MeterNFLAway8]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr8#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore8#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt8]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr8#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore8#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus8#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 9 ---
[MeterNFLAway9]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr9#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore9#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt9]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr9#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore9#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus9#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 10 ---
[MeterNFLAway10]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr10#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore10#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt10]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr10#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore10#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus10#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 11 ---
[MeterNFLAway11]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr11#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore11#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt11]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr11#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore11#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus11#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 12 ---
[MeterNFLAway12]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr12#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore12#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt12]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr12#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore12#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus12#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 13 ---
[MeterNFLAway13]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr13#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore13#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt13]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr13#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore13#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus13#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 14 ---
[MeterNFLAway14]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr14#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore14#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt14]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr14#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore14#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus14#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 15 ---
[MeterNFLAway15]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr15#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore15#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt15]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr15#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore15#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus15#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 16 ---
[MeterNFLAway16]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr16#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore16#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt16]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr16#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore16#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus16#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 17 ---
[MeterNFLAway17]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr17#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore17#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt17]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr17#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore17#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus17#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 18 ---
[MeterNFLAway18]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr18#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore18#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt18]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr18#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore18#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus18#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 19 ---
[MeterNFLAway19]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr19#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore19#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt19]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr19#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore19#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus19#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 20 ---
[MeterNFLAway20]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr20#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore20#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt20]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr20#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore20#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus20#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 21 ---
[MeterNFLAway21]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr21#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore21#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt21]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr21#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore21#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus21#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 22 ---
[MeterNFLAway22]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr22#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore22#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt22]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr22#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore22#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus22#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 23 ---
[MeterNFLAway23]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr23#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore23#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt23]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr23#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore23#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus23#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 24 ---
[MeterNFLAway24]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr24#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore24#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt24]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr24#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore24#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus24#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 25 ---
[MeterNFLAway25]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr25#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore25#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt25]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr25#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore25#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus25#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 26 ---
[MeterNFLAway26]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr26#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore26#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt26]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr26#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore26#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus26#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 27 ---
[MeterNFLAway27]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr27#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore27#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt27]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr27#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore27#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus27#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 28 ---
[MeterNFLAway28]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr28#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore28#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt28]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr28#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore28#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus28#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 29 ---
[MeterNFLAway29]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr29#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore29#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt29]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr29#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore29#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus29#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL Row 30 ---
[MeterNFLAway30]
Meter=String
X=20
Y=#RowHeight#r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayAbbr30#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLAwayScore30#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLAt30]
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
Group=NFLGroup | ContentGroup

[MeterNFLHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeAbbr30#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#NFLHomeScore30#
DynamicVariables=1
Group=NFLGroup | ContentGroup

[MeterNFLStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#NFLStatus30#
DynamicVariables=1
Group=NFLGroup | ContentGroup

; --- NFL More Toggle ---
[MeterNFLMore]
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
MouseOverAction=[!SetOption MeterNFLMore FontColor "255,255,255"][!UpdateMeter MeterNFLMore][!Redraw]
MouseLeaveAction=[!SetOption MeterNFLMore FontColor "#AccentColor#"][!UpdateMeter MeterNFLMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('NFL')"]
Group=NFLGroup | ContentGroup

; --- NFL Divider ---
[MeterNFLDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=NFLGroup | ContentGroup

