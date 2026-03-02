; =====================
; F1 (Formula 1)
; =====================

[MeterF1Icon]
Meter=Image
ImageName=#@#Images\f1.png
X=15
Y=8R
W=18
H=18
AntiAlias=1
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Header]
Meter=String
X=37
Y=0
FontFace=#FontFace#
FontSize=#HeaderFontSize#
FontWeight=700
FontColor=#F1Color#
StringAlign=Left
AntiAlias=1
Text=F1
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Subheading]
Meter=String
X=20
Y=2R
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=#F1Subheading#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1NoGames]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontColor=#DimColor#
StringAlign=Left
AntiAlias=1
Text=No upcoming races
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Loading]
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
Group=F1Group | ContentGroup

; --- F1 Row 1 ---
[MeterF1Away1]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr1#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore1]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore1#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At1]
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
Group=F1Group | ContentGroup

[MeterF1Home1]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr1#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore1]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore1#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status1]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status1#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 2 ---
[MeterF1Away2]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr2#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore2]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore2#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At2]
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
Group=F1Group | ContentGroup

[MeterF1Home2]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr2#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore2]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore2#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status2]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status2#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 3 ---
[MeterF1Away3]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr3#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore3]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore3#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At3]
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
Group=F1Group | ContentGroup

[MeterF1Home3]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr3#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore3]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore3#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status3]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status3#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 4 ---
[MeterF1Away4]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr4#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore4]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore4#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At4]
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
Group=F1Group | ContentGroup

[MeterF1Home4]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr4#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore4]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore4#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status4]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status4#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 5 ---
[MeterF1Away5]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr5#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore5]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore5#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At5]
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
Group=F1Group | ContentGroup

[MeterF1Home5]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr5#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore5]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore5#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status5]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status5#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 6 ---
[MeterF1Away6]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr6#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore6]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore6#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At6]
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
Group=F1Group | ContentGroup

[MeterF1Home6]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr6#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore6]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore6#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status6]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status6#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 7 ---
[MeterF1Away7]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr7#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore7]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore7#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At7]
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
Group=F1Group | ContentGroup

[MeterF1Home7]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr7#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore7]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore7#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status7]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status7#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 8 ---
[MeterF1Away8]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr8#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore8]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore8#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At8]
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
Group=F1Group | ContentGroup

[MeterF1Home8]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr8#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore8]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore8#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status8]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status8#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 9 ---
[MeterF1Away9]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr9#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore9]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore9#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At9]
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
Group=F1Group | ContentGroup

[MeterF1Home9]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr9#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore9]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore9#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status9]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status9#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 10 ---
[MeterF1Away10]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr10#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore10]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore10#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At10]
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
Group=F1Group | ContentGroup

[MeterF1Home10]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr10#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore10]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore10#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status10]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status10#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 11 ---
[MeterF1Away11]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr11#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore11]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore11#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At11]
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
Group=F1Group | ContentGroup

[MeterF1Home11]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr11#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore11]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore11#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status11]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status11#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 12 ---
[MeterF1Away12]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr12#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore12]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore12#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At12]
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
Group=F1Group | ContentGroup

[MeterF1Home12]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr12#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore12]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore12#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status12]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status12#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 13 ---
[MeterF1Away13]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr13#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore13]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore13#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At13]
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
Group=F1Group | ContentGroup

[MeterF1Home13]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr13#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore13]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore13#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status13]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status13#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 14 ---
[MeterF1Away14]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr14#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore14]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore14#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At14]
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
Group=F1Group | ContentGroup

[MeterF1Home14]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr14#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore14]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore14#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status14]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status14#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 15 ---
[MeterF1Away15]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr15#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore15]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore15#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At15]
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
Group=F1Group | ContentGroup

[MeterF1Home15]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr15#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore15]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore15#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status15]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status15#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 16 ---
[MeterF1Away16]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr16#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore16]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore16#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At16]
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
Group=F1Group | ContentGroup

[MeterF1Home16]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr16#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore16]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore16#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status16]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status16#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 17 ---
[MeterF1Away17]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr17#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore17]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore17#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At17]
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
Group=F1Group | ContentGroup

[MeterF1Home17]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr17#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore17]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore17#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status17]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status17#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 18 ---
[MeterF1Away18]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr18#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore18]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore18#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At18]
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
Group=F1Group | ContentGroup

[MeterF1Home18]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr18#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore18]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore18#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status18]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status18#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 19 ---
[MeterF1Away19]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr19#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore19]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore19#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At19]
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
Group=F1Group | ContentGroup

[MeterF1Home19]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr19#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore19]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore19#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status19]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status19#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 20 ---
[MeterF1Away20]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr20#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore20]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore20#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At20]
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
Group=F1Group | ContentGroup

[MeterF1Home20]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr20#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore20]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore20#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status20]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status20#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 21 ---
[MeterF1Away21]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr21#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore21]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore21#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At21]
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
Group=F1Group | ContentGroup

[MeterF1Home21]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr21#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore21]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore21#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status21]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status21#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 22 ---
[MeterF1Away22]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr22#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore22]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore22#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At22]
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
Group=F1Group | ContentGroup

[MeterF1Home22]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr22#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore22]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore22#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status22]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status22#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 23 ---
[MeterF1Away23]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr23#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore23]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore23#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At23]
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
Group=F1Group | ContentGroup

[MeterF1Home23]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr23#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore23]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore23#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status23]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status23#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 24 ---
[MeterF1Away24]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr24#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore24]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore24#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At24]
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
Group=F1Group | ContentGroup

[MeterF1Home24]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr24#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore24]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore24#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status24]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status24#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 25 ---
[MeterF1Away25]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr25#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore25]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore25#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At25]
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
Group=F1Group | ContentGroup

[MeterF1Home25]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr25#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore25]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore25#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status25]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status25#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 26 ---
[MeterF1Away26]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr26#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore26]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore26#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At26]
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
Group=F1Group | ContentGroup

[MeterF1Home26]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr26#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore26]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore26#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status26]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status26#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 27 ---
[MeterF1Away27]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr27#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore27]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore27#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At27]
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
Group=F1Group | ContentGroup

[MeterF1Home27]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr27#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore27]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore27#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status27]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status27#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 28 ---
[MeterF1Away28]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr28#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore28]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore28#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At28]
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
Group=F1Group | ContentGroup

[MeterF1Home28]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr28#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore28]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore28#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status28]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status28#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 29 ---
[MeterF1Away29]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr29#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore29]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore29#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At29]
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
Group=F1Group | ContentGroup

[MeterF1Home29]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr29#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore29]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore29#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status29]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status29#
DynamicVariables=1
Group=F1Group | ContentGroup

; --- F1 Row 30 ---
[MeterF1Away30]
Meter=String
X=20
Y=4R
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayAbbr30#
ClipString=2
W=230
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1AwayScore30]
Meter=String
X=75
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1AwayScore30#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1At30]
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
Group=F1Group | ContentGroup

[MeterF1Home30]
Meter=String
X=128
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=600
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeAbbr30#
ClipString=2
W=105
H=20
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1HomeScore30]
Meter=String
X=175
Y=0r
FontFace=#FontFace#
FontSize=#FontSize#
FontWeight=700
FontColor=#TextColor#
StringAlign=Left
AntiAlias=1
Text=#F1HomeScore30#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1Status30]
Meter=String
X=(#SkinWidth# - 15)
Y=0r
FontFace=#FontFace#
FontSize=10
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=#F1Status30#
DynamicVariables=1
Group=F1Group | ContentGroup

[MeterF1More]
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
MouseOverAction=[!SetOption MeterF1More FontColor "255,255,255"][!UpdateMeter MeterF1More][!Redraw]
MouseLeaveAction=[!SetOption MeterF1More FontColor "#AccentColor#"][!UpdateMeter MeterF1More][!Redraw]
LeftMouseUpAction=[!CommandMeasure LuaFavorites "ToggleLeagueGames('F1')"]
Group=F1Group | ContentGroup

[MeterF1Divider]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color #DimColor#,60
X=10
DynamicVariables=1
Group=F1Group | ContentGroup

