; --- UFC Icon ---
[MeterUFCIcon]
Meter=Image
ImageName=#@#Images\ufc.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#UFCColor#
StringAlign=Left
AntiAlias=1
Text=UFC
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCSubheading]
Meter=String
X=20
Y=2R
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=#UFCEventName#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCNoGames]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=No upcoming fights
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCLoading]
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
Group=UFCGroup | ContentGroup

; --- UFC Row 1 ---
[MeterUFCAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr1#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore1]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore1#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt1]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome1]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr1#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore1]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore1#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus1#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 2 ---
[MeterUFCAway2]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr2#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore2]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore2#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt2]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome2]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr2#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore2]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore2#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus2#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 3 ---
[MeterUFCAway3]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr3#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore3]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore3#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt3]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome3]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr3#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore3]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore3#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus3#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 4 ---
[MeterUFCAway4]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr4#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore4]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore4#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt4]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome4]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr4#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore4]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore4#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus4#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 5 ---
[MeterUFCAway5]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr5#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore5]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore5#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt5]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome5]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr5#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore5]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore5#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus5#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 6 ---
[MeterUFCAway6]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr6#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore6]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore6#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt6]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome6]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr6#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore6]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore6#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus6#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 7 ---
[MeterUFCAway7]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr7#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore7]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore7#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt7]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome7]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr7#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore7]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore7#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus7#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 8 ---
[MeterUFCAway8]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr8#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore8]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore8#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt8]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome8]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr8#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore8]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore8#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus8#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 9 ---
[MeterUFCAway9]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr9#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore9]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore9#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt9]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome9]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr9#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore9]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore9#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus9#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 10 ---
[MeterUFCAway10]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr10#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore10]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore10#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt10]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome10]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr10#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore10]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore10#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus10#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 11 ---
[MeterUFCAway11]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr11#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore11]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore11#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt11]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome11]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr11#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore11]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore11#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus11#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 12 ---
[MeterUFCAway12]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr12#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore12]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore12#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt12]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome12]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr12#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore12]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore12#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus12#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 13 ---
[MeterUFCAway13]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr13#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore13]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore13#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt13]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome13]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr13#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore13]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore13#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus13#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 14 ---
[MeterUFCAway14]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr14#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore14]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore14#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt14]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome14]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr14#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore14]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore14#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus14#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 15 ---
[MeterUFCAway15]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr15#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore15]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore15#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt15]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome15]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr15#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore15]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore15#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus15#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 16 ---
[MeterUFCAway16]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr16#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore16]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore16#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt16]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome16]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr16#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore16]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore16#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus16#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 17 ---
[MeterUFCAway17]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr17#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore17]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore17#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt17]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome17]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr17#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore17]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore17#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus17#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 18 ---
[MeterUFCAway18]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr18#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore18]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore18#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt18]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome18]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr18#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore18]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore18#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus18#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 19 ---
[MeterUFCAway19]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr19#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore19]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore19#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt19]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome19]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr19#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore19]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore19#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus19#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 20 ---
[MeterUFCAway20]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr20#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore20]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore20#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt20]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome20]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr20#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore20]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore20#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus20#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 21 ---
[MeterUFCAway21]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr21#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore21]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore21#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt21]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome21]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr21#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore21]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore21#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus21#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 22 ---
[MeterUFCAway22]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr22#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore22]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore22#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt22]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome22]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr22#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore22]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore22#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus22#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 23 ---
[MeterUFCAway23]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr23#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore23]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore23#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt23]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome23]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr23#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore23]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore23#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus23#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 24 ---
[MeterUFCAway24]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr24#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore24]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore24#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt24]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome24]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr24#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore24]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore24#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus24#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 25 ---
[MeterUFCAway25]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr25#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore25]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore25#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt25]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome25]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr25#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore25]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore25#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus25#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 26 ---
[MeterUFCAway26]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr26#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore26]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore26#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt26]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome26]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr26#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore26]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore26#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus26#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 27 ---
[MeterUFCAway27]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr27#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore27]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore27#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt27]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome27]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr27#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore27]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore27#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus27#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 28 ---
[MeterUFCAway28]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr28#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore28]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore28#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt28]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome28]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr28#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore28]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore28#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus28#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 29 ---
[MeterUFCAway29]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr29#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore29]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore29#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt29]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome29]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr29#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore29]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore29#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus29#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC Row 30 ---
[MeterUFCAway30]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayAbbr30#
ClipString=2
W=115
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAwayScore30]
Meter=String
X=137
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCAwayScore30#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCAt30]
Meter=String
X=145
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Center
AntiAlias=1
Text=vs
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHome30]
Meter=String
X=160
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeAbbr30#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCHomeScore30]
Meter=String
X=270
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#UFCHomeScore30#
DynamicVariables=1
Group=UFCGroup | ContentGroup

[MeterUFCStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#UFCStatus30#
ClipString=2
W=90
H=20
DynamicVariables=1
Group=UFCGroup | ContentGroup

; --- UFC More Toggle ---
[MeterUFCMore]
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
MouseOverAction=[!SetOption MeterUFCMore FontColor "255,255,255"][!UpdateMeter MeterUFCMore][!Redraw]
MouseLeaveAction=[!SetOption MeterUFCMore FontColor "#AccentColor#"][!UpdateMeter MeterUFCMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('UFC')"]
Group=UFCGroup | ContentGroup

; --- UFC Divider ---
[MeterUFCDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=UFCGroup | ContentGroup

