#!/bin/bash

export GSETTINGS_SCHEMA_DIR=/kanapi_0.11/packages/gsettings-desktop-schemas-3.22.0/share/glib-2.0/schemas
export GTK_OVERLAY_SCROLLING=0

xset -b
setxkbmap pl
xset s off
xset s noblank
xset -dpms
eval `dbus-launch --sh-syntax`
feh --bg-scale ~/Desktop/desktop.png
i3

