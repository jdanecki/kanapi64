#!/bin/bash

export GSETTINGS_SCHEMA_DIR=/kanapi_0.8/`uname -m`/packages/gsettings-desktop-schemas-3.22.0/share/glib-2.0/schemas

xset -b
setxkbmap pl
xset s off
xset s noblank
xset -dpms
eval `dbus-launch --sh-syntax --exit-with-session`
feh --bg-scale ~/Desktop/desktop.png
i3
#ratpoison
#xterm

