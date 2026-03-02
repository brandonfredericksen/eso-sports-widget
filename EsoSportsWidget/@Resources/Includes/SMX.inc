; =====================
; SMX (SuperMotocross)
; =====================

[MeterSMXIcon]
Meter=Image
ImageName=#@#Images\smx.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#SMXColor#
StringAlign=Left
AntiAlias=1
Text=SMX
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXSubheading]
Meter=String
X=20
Y=2R
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=#SMXSubheading#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXNoGames]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=No upcoming events
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXLoading]
Meter=Shape
Shape=Rectangle 20,0,140,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape2=Rectangle 260,0,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape3=Rectangle 20,16,120,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape4=Rectangle 260,16,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
Shape5=Rectangle 20,32,130,10,4 | Fill Color 120,120,120,50 | StrokeWidth 0
Shape6=Rectangle 260,32,80,10,4 | Fill Color 120,120,120,35 | StrokeWidth 0
X=0
Y=0
Hidden=1
Group=SMXGroup | ContentGroup

; --- SMX Row 1 ---
[MeterSMXAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr1#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore1#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt1]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr1#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore1#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus1#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 2 ---
[MeterSMXAway2]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr2#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore2#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt2]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr2#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore2#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus2#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 3 ---
[MeterSMXAway3]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr3#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore3#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt3]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr3#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore3#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus3#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 4 ---
[MeterSMXAway4]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr4#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore4#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt4]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr4#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore4#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus4#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 5 ---
[MeterSMXAway5]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr5#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore5#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt5]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr5#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore5#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus5#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 6 ---
[MeterSMXAway6]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr6#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore6#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt6]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr6#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore6#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus6#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 7 ---
[MeterSMXAway7]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr7#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore7#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt7]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr7#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore7#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus7#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 8 ---
[MeterSMXAway8]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr8#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore8#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt8]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr8#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore8#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus8#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 9 ---
[MeterSMXAway9]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr9#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore9#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt9]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr9#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore9#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus9#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 10 ---
[MeterSMXAway10]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr10#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore10#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt10]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr10#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore10#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus10#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 11 ---
[MeterSMXAway11]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr11#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore11#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt11]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr11#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore11#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus11#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 12 ---
[MeterSMXAway12]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr12#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore12#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt12]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr12#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore12#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus12#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 13 ---
[MeterSMXAway13]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr13#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore13#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt13]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr13#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore13#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus13#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 14 ---
[MeterSMXAway14]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr14#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore14#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt14]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr14#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore14#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus14#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 15 ---
[MeterSMXAway15]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr15#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore15#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt15]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr15#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore15#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus15#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 16 ---
[MeterSMXAway16]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr16#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore16#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt16]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr16#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore16#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus16#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 17 ---
[MeterSMXAway17]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr17#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore17#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt17]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr17#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore17#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus17#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 18 ---
[MeterSMXAway18]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr18#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore18#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt18]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr18#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore18#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus18#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 19 ---
[MeterSMXAway19]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr19#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore19#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt19]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr19#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore19#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus19#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 20 ---
[MeterSMXAway20]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr20#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore20#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt20]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr20#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore20#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus20#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 21 ---
[MeterSMXAway21]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr21#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore21#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt21]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr21#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore21#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus21#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 22 ---
[MeterSMXAway22]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr22#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore22#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt22]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr22#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore22#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus22#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 23 ---
[MeterSMXAway23]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr23#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore23#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt23]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr23#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore23#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus23#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 24 ---
[MeterSMXAway24]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr24#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore24#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt24]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr24#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore24#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus24#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 25 ---
[MeterSMXAway25]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr25#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore25#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt25]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr25#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore25#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus25#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 26 ---
[MeterSMXAway26]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr26#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore26#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt26]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr26#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore26#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus26#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 27 ---
[MeterSMXAway27]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr27#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore27#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt27]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr27#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore27#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus27#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 28 ---
[MeterSMXAway28]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr28#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore28#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt28]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr28#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore28#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus28#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 29 ---
[MeterSMXAway29]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr29#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore29#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt29]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr29#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore29#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus29#
DynamicVariables=1
Group=SMXGroup | ContentGroup

; --- SMX Row 30 ---
[MeterSMXAway30]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayAbbr30#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXAwayScore30#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXAt30]
Meter=String
X=108
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeAbbr30#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#SMXHomeScore30#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#SMXStatus30#
DynamicVariables=1
Group=SMXGroup | ContentGroup

[MeterSMXMore]
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
MouseOverAction=[!SetOption MeterSMXMore FontColor "255,255,255"][!UpdateMeter MeterSMXMore][!Redraw]
MouseLeaveAction=[!SetOption MeterSMXMore FontColor "#AccentColor#"][!UpdateMeter MeterSMXMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('SMX')"]
Group=SMXGroup | ContentGroup

[MeterSMXDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=SMXGroup | ContentGroup

