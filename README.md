# KaNaPi project for x86_64 architecture

Main goal of this project is to create educational operating system based on Linux kernel
and free software for use at home.

Current phase: Beta

Versions: 

* development - v0.10

License: GPL v.3

The simplest way to try KaNaPi is to use docker images from docker hub.
For more details see: https://github.com/jdanecki/kanapi#main-docker-images

More details on https://jdanecki.github.io/kanapi

Author: jacek.m.danecki@gmail.com

## KaNaPi components

* Sbs - small build system: kanapi_system/sbs
* Bbs - base build system, built on top of Sbs: kanapi_system/kanapi-bbs
* Cli - command line tools built on top of Bbs: kanapi_system/kanapi-cli
* X11 - X11 support, libs, apps, built on top of Cli: kanapi_system/kanapi-x11
* Gui - Gtk2/3 and Qt support, libs built on top of X11: kanapi_system/kanapi-gui
* Apps - Applications and libs built on top Gui: kanapi_system/kanapi-apps

