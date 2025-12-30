#!/bin/bash

ls -l `which gio`
ls -l `which update-mime-database `
echo "XDG_DATA_HOME=$XDG_DATA_HOME"

IMAGE=~/.icons/Adwaita/16x16/devices/audio-headphones.png

gio info  $IMAGE
gio mime image/png

