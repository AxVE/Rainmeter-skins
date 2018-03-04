[Rainmeter]
Background=#@#Background-darkest.png
; #@# is equal to @Ressources directory in the skin's folder
BackgroundMode=3
BackgroundMargins=0,34,0,14

[Variables]
fontName=Droid
textSize=9
colorBar=102,204,255,255
colorBarCore=102,204,255,255
colorText=255,255,255,205
colorLineGraph=FF3D3D
colorCur=173,230,247,255
colorLow=153,247,153,255
colorAve=247,238,153,255
colorHig=247,116,116,255
barThickness=3
barSpacing=5 + #barThickness#

[styleTitle]
StringAlign=CENTER
StringCase=UPPER
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=10
AntiAlias=1
ClipString=1

[styleSubtitle]
StringAlign=LEFT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=10
AntiAlias=1
ClipString=1
X=10
Y=15r
W=190
H=20

[styleSubtitleRight]
StringAlign=RIGHT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=8
AntiAlias=1
ClipString=1

[styleLeftText]
StringAlign=LEFT
; Meters using styleLeftText will be left-aligned.
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightText]
StringAlign=RIGHT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15