#!/bin/bash

export GTK_OVERLAY_SCROLLING=0
export GSETTINGS_SCHEMA_DIR=/kanapi_0.12/packages/gsettings-desktop-schemas-49.1/share/glib-2.0/schemas
#export QT_QPA_PLATFORM_PLUGIN_PATH=/kanapi_0.12/packages/qt-everywhere-src-6.10.1/plugins/platforms/
#export QT_QPA_PLATFORMTHEME=qt6ct
export QT_PLUGIN_PATH=/kanapi_0.12/packages/qt-everywhere-src-6.10.1/plugins
export QT_QPA_PLATFORM=xcb

tv
xset -b
setxkbmap pl
xset s off
xset s noblank
xset -dpms
eval `dbus-launch --sh-syntax --exit-with-session`
feh --bg-scale ~/Desktop/desktop.png
i3
