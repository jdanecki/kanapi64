REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

apps: shared-mime-info gvim vlc libva-utils feh
#	apps-gtk apps-qt apps-x11 apps-gui

apps-libs: libmikmod libmad libva-intel-driver ffmpeg ogl sdl openal-soft fltk glew

apps-gtk: apps-libs apps-gtk-libs gimp gvim evince pavucontrol Blue qiv allegro dia patchage

apps-gtk-libs: gtkmm libcanberra

apps-gtk1: apps-libs apps-gtk-libs gimp gvim evince
   
apps-gtk2: apps-libs apps-gtk-libs pavucontrol Blue qiv allegro dia

apps-gtk3: apps-gtk-libs patchage

apps-qt: apps-libs apps_qt

apps-x11: apps-libs mpv ClanLib bullet3 feh ogre rakarrack xfig

apps-gui: apps-libs vlc Audacity

apps-manual: tests webkitgtk demo midori firefox

sdl: sdl-support sdl2-support

sdl-support: SDL_image SDL_gfx SDL_ttf SDL_mixer GUIlib SDL-widgets SDL_sound

SDL-fb:
	@$(RUN_TARGET)

SDL: 
	@$(RUN_TARGET)

SDL_image: SDL
	@$(RUN_TARGET)

SDL_gfx:
	@$(RUN_TARGET)

SDL_ttf:
	@$(RUN_TARGET)

SDL_mixer:
	@$(RUN_TARGET)

SDL_sound: physfs_2
	@$(RUN_TARGET)

physfs_2:
	@$(RUN_TARGET_VER)

GUIlib:
	@$(RUN_TARGET)

SDL-widgets:
	@$(RUN_TARGET)

tests: xflame water xclipboard intel-gpu-tools ltp-full hello phoronix-test-suite qemu

xclipboard:
	@$(RUN_TARGET)

intel-gpu-tools: 
	@$(RUN_TARGET)

ltp-full:
	@$(RUN_TARGET)

hello:
	@$(RUN_TARGET)

php:
	@$(RUN_TARGET)

phoronix-test-suite: php
	@$(RUN_TARGET)

demo: cairo-demos mesa-demos

cairo-demos: 
	@$(RUN_TARGET)

glew: glu
	@$(RUN_TARGET)

mesa-demos: glew
	@$(RUN_TARGET)

json-glib:
	@$(RUN_TARGET)

gegl: json-glib 
	@$(RUN_TARGET)

gimp: gegl
	@$(RUN_TARGET)

gvim:
	@$(RUN_TARGET)

poppler:
	@$(RUN_TARGET)

shared-mime-info:
	@$(RUN_TARGET)

evince: libhandy poppler desktop-file-utils
	@$(RUN_TARGET)

cairomm:
	@$(RUN_TARGET)

pangomm: cairomm
	@$(RUN_TARGET)

glibmm:
	@$(RUN_TARGET)

atkmm: glibmm
	@$(RUN_TARGET)

gtkmm: atkmm pangomm
	@$(RUN_TARGET)

libcanberra:
	@$(RUN_TARGET)

pavucontrol:
	@$(RUN_TARGET)

sdl2-support: SDL2_image SDL2_gfx SDL2_ttf SDL2_net SDL2_mixer

SDL2:
	@$(RUN_TARGET)

SDL2_image: 
#	libwebp SDL2
	@$(RUN_TARGET)

SDL2_ttf:
	@$(RUN_TARGET)

SDL2_gfx:
	@$(RUN_TARGET)

SDL2_mixer:
	@$(RUN_TARGET)

SDL2_net:
	@$(RUN_TARGET)

MPlayer:
	@$(RUN_TARGET)

Blue: MPlayer
	@$(RUN_TARGET)

x264: 
# nasm (cli)
	@$(RUN_TARGET)

ffmpeg: x264 x265
	@$(RUN_TARGET)

libva-intel-driver: libva
	@$(RUN_TARGET)

libva:
	@$(RUN_TARGET)

mpv:
	@$(RUN_TARGET)

libmad:
	@$(RUN_TARGET)

qiv:
	@$(RUN_TARGET)

opencv: ffmpeg libva
	@$(RUN_TARGET)

glu:
	@$(RUN_TARGET)

freeglut: glu
	@$(RUN_TARGET)

ogl: freeglut

ClanLib:
	@$(RUN_TARGET)

allegro: physfs
	@$(RUN_TARGET)

physfs:
	@$(RUN_TARGET)

bullet3:
	@$(RUN_TARGET)

ogre: sdl
	@$(RUN_TARGET)

webkitgtk: libwebp libsoup glib-networking
	@$(RUN_TARGET)

apps_qt: qt-creator vym qjackctl csoundqt musescore qsynth vmpk hydrogen

dtc:
	@$(RUN_TARGET)

qemu: dtc
	@$(RUN_TARGET)

xflame: SDL
	@$(RUN_TARGET)

water: SDL
	@$(RUN_TARGET)

qt-creator:
	@$(RUN_TARGET)

vym:
	@$(RUN_TARGET)

qjackctl:
	@$(RUN_TARGET)

fltk:
	@$(RUN_TARGET)

csound:
	@$(RUN_TARGET)

csoundqt: csound
	@$(RUN_TARGET)

lame:
	@$(RUN_TARGET)

musescore: lame 
	@$(RUN_TARGET)

test-sbs: hello

procps:
	@$(RUN_TARGET)

libsoup:
	@$(RUN_TARGET)

glib-networking:
	@$(RUN_TARGET)

libwebp:
	@$(RUN_TARGET)

gcr:
	@$(RUN_TARGET)

midori: gcr
	@$(RUN_TARGET)

#lxml:
#	@$(RUN_TARGET)

firefox: autoconf213
	@$(RUN_TARGET)

autoconf213:
	DIR_NAME=autoconf-2.13; if [ ! -d  $${DIR_NAME} ]; then mkdir -p $${DIR_NAME} ; ln -svf ../../packages/$${DIR_NAME}/autoconf.kanapi $${DIR_NAME}; fi
	make -f ../Makefile -C autoconf-2.13 kanapi_$(ACTION) PKG=autoconf KANAPI_TOP=$(PWD) V=$(V)

libmikmod:
	@$(RUN_TARGET)

vlc: ffmpeg libva
#	opencv - old version
# qt-everywhere-src (gui)
# libva-intel-driver? (apps)
	@$(RUN_TARGET)

feh:
# imlib2 (x11)
	@$(RUN_TARGET)

openal-soft:
	@$(RUN_TARGET)

dia:
	@$(RUN_TARGET)

Audacity:
	@$(RUN_TARGET)

qsynth:
	@$(RUN_TARGET)

vmpk: drumstick
	@$(RUN_TARGET)

drumstick:
	@$(RUN_TARGET)

ganv: gtkmm_2
	@$(RUN_TARGET)

gtkmm_2:
	@$(RUN_TARGET_VER)

patchage: ganv boost
	@$(RUN_TARGET)

boost:
	@$(RUN_TARGET)

rakarrack:
	@$(RUN_TARGET)

hydrogen:
	@$(RUN_TARGET)

libXaw3dXft:
	@$(RUN_TARGET)

libXaw3d:
	@$(RUN_TARGET)

xfig: libXaw3d
	@$(RUN_TARGET)

dosbox:
	@$(RUN_TARGET)

fuse:
	@$(RUN_TARGET)

libcap:
	@$(RUN_TARGET)


pi-sswd-mngr:
	@$(RUN_TARGET)

luanti: openal-soft
# pango (x11)
	@$(RUN_TARGET)

supertux2: physfs fmt glm SDL2_image # glew is broken
	@$(RUN_TARGET)

fmt:
	@$(RUN_TARGET)

glm:
	@$(RUN_TARGET)

SuperTuxKart: 
	@$(RUN_TARGET)

qt6ct:
	@$(RUN_TARGET)

x265:
# nasm (cli)
	@$(RUN_TARGET)

libva-utils: libva 
#	intel-media-driver	
	@$(RUN_TARGET)

media-driver:
#gmmlib (cli)	
	@$(RUN_TARGET)

xsel:
	@$(RUN_TARGET)

SDL3:
	@$(RUN_TARGET)

SDL3_ttf:
	@$(RUN_TARGET)

xcalc:
	@$(RUN_TARGET)

raylib:
	@$(RUN_TARGET)

icewm:
	@$(RUN_TARGET)

fvwm3:
	@$(RUN_TARGET)

emacs: giflib
	@$(RUN_TARGET)

giflib:
	@$(RUN_TARGET)

irssi:
	@$(RUN_TARGET)

libhandy:
	@$(RUN_TARGET)

desktop-file-utils:
	@$(RUN_TARGET)

vte:
	@$(RUN_TARGET)

fastfetch:
	@$(RUN_TARGET)
