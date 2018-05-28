#!/bin/sh
xrandr --addmode eDP1 1366x768
xrandr --output eDP1 --mode 1366x768 --pos 0x0 --rotate normal --output HDMI1 --mode 1920x1080 --pos 1366x0 --rotate normal --output VIRTUAL1 --off 
feh --bg-scale ~/Desktop/desktop.png
xrandr --dpi 96