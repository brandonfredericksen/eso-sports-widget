; --- Bottom padding ---
[MeterBottomPadding]
Meter=Image
W=#SkinWidth#
H=10
SolidColor=0,0,0,1
Group=ContentGroup

; --- Scrollbar ---
[MeterScrollTrack]
Meter=Shape
Shape=Rectangle 0,0,4,100,2 | Fill Color 255,255,255,20 | StrokeWidth 0
X=(#SkinWidth# - 8)
Y=46
Hidden=1
DynamicVariables=1
Group=ContentGroup

[MeterScrollThumb]
Meter=Shape
Shape=Rectangle 0,0,4,40,2 | Fill Color 100,180,255,150 | StrokeWidth 0
X=(#SkinWidth# - 8)
Y=46
Hidden=1
DynamicVariables=1
Group=ContentGroup

[MeterScrollHitbox]
Meter=Image
X=(#SkinWidth# - 16)
Y=46
W=16
H=100
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
LeftMouseDownAction=[!CommandMeasure LuaFavorites "ScrollToPosition($MouseY$)"]
MouseActionCursor=0
Group=ContentGroup
