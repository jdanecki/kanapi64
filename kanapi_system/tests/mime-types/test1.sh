#!/bin/bash

ls -l `which gio`
ls -l `which update-mime-database `
echo "XDG_DATA_HOME=$XDG_DATA_HOME"

IMAGE_PNG=~/.icons/Adwaita/16x16/devices/audio-headphones.png
IMAGE_SVG=~/.icons/Adwaita/scalable/devices/audio-headphones.svg
gio info  $IMAGE_PNG
gio info  $IMAGE_SVG

#gio mime image/png

