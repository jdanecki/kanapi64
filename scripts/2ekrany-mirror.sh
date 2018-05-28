#!/bin/sh
#xrandr --addmode eDP1 1366x768
#res=800x600
res=1024x768
xrandr --output eDP1 --mode $res --output HDMI1 --mode $res --same-as eDP1
