; --- BKFC Icon ---
[MeterBKFCIcon]
Meter=Image
ImageName=#@#Images\bkfc.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHeader]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#BKFCColor#
StringAlign=Left
AntiAlias=1
Text=BKFC
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCSubheading]
Meter=String
X=20
Y=2R
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCSubheading#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCNoGames]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCLoading]
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
Group=BKFCGroup | ContentGroup

; --- BKFC Row 1 ---
[MeterBKFCAway1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr1#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore1#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt1]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr1#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore1#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus1#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 2 ---
[MeterBKFCAway2]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr2#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore2#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt2]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr2#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore2#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus2#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 3 ---
[MeterBKFCAway3]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr3#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore3#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt3]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr3#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore3#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus3#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 4 ---
[MeterBKFCAway4]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr4#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore4#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt4]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr4#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore4#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus4#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 5 ---
[MeterBKFCAway5]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr5#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore5#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt5]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr5#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore5#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus5#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 6 ---
[MeterBKFCAway6]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr6#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore6#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt6]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr6#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore6#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus6#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 7 ---
[MeterBKFCAway7]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr7#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore7#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt7]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr7#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore7#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus7#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 8 ---
[MeterBKFCAway8]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr8#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore8#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt8]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr8#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore8#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus8#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 9 ---
[MeterBKFCAway9]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr9#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore9#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt9]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr9#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore9#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus9#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 10 ---
[MeterBKFCAway10]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr10#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore10#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt10]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr10#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore10#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus10#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 11 ---
[MeterBKFCAway11]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr11#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore11#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt11]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr11#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore11#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus11#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 12 ---
[MeterBKFCAway12]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr12#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore12#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt12]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr12#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore12#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus12#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 13 ---
[MeterBKFCAway13]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr13#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore13#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt13]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr13#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore13#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus13#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 14 ---
[MeterBKFCAway14]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr14#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore14#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt14]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr14#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore14#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus14#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 15 ---
[MeterBKFCAway15]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr15#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore15#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt15]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr15#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore15#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus15#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 16 ---
[MeterBKFCAway16]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr16#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore16#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt16]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr16#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore16#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus16#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 17 ---
[MeterBKFCAway17]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr17#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore17#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt17]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr17#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore17#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus17#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 18 ---
[MeterBKFCAway18]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr18#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore18#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt18]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr18#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore18#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus18#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 19 ---
[MeterBKFCAway19]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr19#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore19#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt19]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr19#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore19#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus19#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 20 ---
[MeterBKFCAway20]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr20#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore20#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt20]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr20#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore20#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus20#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 21 ---
[MeterBKFCAway21]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr21#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore21#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt21]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr21#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore21#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus21#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 22 ---
[MeterBKFCAway22]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr22#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore22#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt22]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr22#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore22#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus22#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 23 ---
[MeterBKFCAway23]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr23#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore23#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt23]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr23#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore23#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus23#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 24 ---
[MeterBKFCAway24]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr24#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore24#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt24]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr24#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore24#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus24#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 25 ---
[MeterBKFCAway25]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr25#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore25#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt25]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr25#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore25#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus25#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 26 ---
[MeterBKFCAway26]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr26#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore26#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt26]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr26#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore26#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus26#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 27 ---
[MeterBKFCAway27]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr27#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore27#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt27]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr27#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore27#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus27#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 28 ---
[MeterBKFCAway28]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr28#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore28#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt28]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr28#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore28#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus28#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 29 ---
[MeterBKFCAway29]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr29#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore29#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt29]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr29#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore29#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus29#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC Row 30 ---
[MeterBKFCAway30]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayAbbr30#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCAwayScore30#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCAt30]
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
Group=BKFCGroup | ContentGroup

[MeterBKFCHome30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeAbbr30#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCHomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#BKFCHomeScore30#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

[MeterBKFCStatus30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#BKFCStatus30#
DynamicVariables=1
Group=BKFCGroup | ContentGroup

; --- BKFC More Toggle ---
[MeterBKFCMore]
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
MouseOverAction=[!SetOption MeterBKFCMore FontColor "255,255,255"][!UpdateMeter MeterBKFCMore][!Redraw]
MouseLeaveAction=[!SetOption MeterBKFCMore FontColor "#AccentColor#"][!UpdateMeter MeterBKFCMore][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('BKFC')"]
Group=BKFCGroup | ContentGroup

; --- BKFC Divider ---
[MeterBKFCDivider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=BKFCGroup | ContentGroup

