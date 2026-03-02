; ========================================================
; DISPLAY METERS
; ========================================================

; --- Background ---
[MeterBackground]
Meter=Shape
Shape=Rectangle 0,0,#SkinWidth#,400,8 | Fill Color #BackgroundColor# | StrokeWidth 0
DynamicVariables=1


; --- Title Bar ---
[MeterTitleGlow]
Meter=String
X=16
Y=9
FontFace=#FontFace#
FontSize=13
FontWeight=700
FontColor=0,80,180,80
StringAlign=Left
AntiAlias=1
Text=ESO SPORTS
DynamicVariables=1

[MeterTitle]
Meter=String
X=15
Y=8
FontFace=#FontFace#
FontSize=13
FontWeight=700
FontColor=100,180,255
StringAlign=Left
AntiAlias=1
Text=ESO SPORTS
InlineSetting=GradientColor | 1 | 0,150,255 ; 0.0 | 100,200,255 ; 0.5 | 0,150,255 ; 1.0
DynamicVariables=1
Group=ContentGroup

[MeterTitleWidget]
Meter=String
X=2R
Y=0r
FontFace=#FontFace#
FontSize=13
FontWeight=400
FontColor=180,180,200
StringAlign=Left
AntiAlias=1
Text=WIDGET
DynamicVariables=1
Group=ContentGroup

[MeterRefreshBtn]
Meter=String
X=(#SkinWidth# - 15)
Y=10
FontFace=#FontFace#
FontSize=9
FontColor=#DimColor#
StringAlign=Right
AntiAlias=1
Text=Refresh
DynamicVariables=1
MouseOverAction=[!SetOption MeterRefreshBtn FontColor "#AccentColor#"][!UpdateMeter MeterRefreshBtn][!Redraw]
MouseLeaveAction=[!SetOption MeterRefreshBtn FontColor "#DimColor#"][!UpdateMeter MeterRefreshBtn][!Redraw]
LeftMouseUpAction=[!Refresh]
Group=ContentGroup

[MeterTitleLine]
Meter=Shape
Shape=Line 0,0,(#SkinWidth# - 20),0 | StrokeWidth 1 | Stroke Color 0,150,255,60
X=10
Y=8R
DynamicVariables=1
Group=ContentGroup

