# X11 support 
# CLI image is required to compile these packages

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

x11: x11-client x11-server git ImageMagick groff hicolor-icon-theme

x11-client: libXext libXdamage libxkbfile xterm xfd

x11-server:  xinit xev xhost xmodmap xfontsel xset xauth xkeyboard-config xkbcomp xf86-input-libinput setxkbmap xdpyinfo xdriinfo xinput


# server side:
# font-util prepares fonts
# xterm → Xlib → X server → libxfont → PCF/BDF
#
# client side:
# xterm → libXft → Fontconfig → FreeType → bitmap → X server

x11-all: x11-lib wm xapp

x11-lib: graphics x-support imlib2

x11-manual: wayland-protocols vtwm ratpoison oclock xcalc xclock xconsole xedit oneko xeyes \
	xload xmag xman xlunch st x11perf xf86-video-s3 xf86-video-tseng

x-support:  \
	mkfontscale mkfontdir bdftopcf font-cursor-misc \
       	xf86-input-keyboard xf86-input-mouse xf86-input-evdev \
	xf86-video-intel xf86-video-vesa xf86-video-fbdev xf86-video-modesetting fonts \
	xinput libXft libXxf86vm libXScrnSaver ois  libXcomposite icons

graphics: jpegsrc tiff  pango

xapp: xfd xterm bitmap showfont xbacklight xdriinfo \
   xdpyinfo xev xhost xkill xfontsel xmodmap xrandr xset xsetroot \
   xsetpointer xvinfo xauth tk graphviz groff netpbm xwd xwininfo

deprecated: freeimage exif

tcl:
	@$(RUN_TARGET)

tk: tcl
	@$(RUN_TARGET)

git:	tk
	@$(RUN_TARGET)

tiff:
	@$(RUN_TARGET)

jpegsrc:
	@$(RUN_TARGET)

freeimage:
	@$(RUN_TARGET)

libpng:
	@$(RUN_TARGET)

pixman:
	@$(RUN_TARGET)

util-macros:	
	@$(RUN_TARGET)

libXau: xorgproto
	@$(RUN_TARGET)

xcb-proto:
	@$(RUN_TARGET)

libpthread-stubs:
	@$(RUN_TARGET)

libxcb: util-macros xcb-proto libXau
	@$(RUN_TARGET)

xtrans:
	@$(RUN_TARGET)

libX11: libxcb xtrans
	@$(RUN_TARGET)

libXext: libX11
	@$(RUN_TARGET)

libXfixes: libX11
	@$(RUN_TARGET)

libXdamage: libXfixes
	@$(RUN_TARGET)

libxkbfile:
	@$(RUN_TARGET)

freetype:
	@$(RUN_TARGET)

font-util:
	@$(RUN_TARGET)

libfontenc: 
#font-util
	@$(RUN_TARGET)

libXfont: libfontenc
	@$(RUN_TARGET)

libXfont2: libfontenc
	@$(RUN_TARGET)

libxslt:
# libxml2(cli)
	@$(RUN_TARGET)

xkeyboard-config: libxslt
	@$(RUN_TARGET)

xkbcomp:
	@$(RUN_TARGET)

mkfontscale:
	@$(RUN_TARGET)

mkfontdir:
	@$(RUN_TARGET)

bdftopcf: libfontenc
	@$(RUN_TARGET)

font-cursor-misc: 
	@$(RUN_TARGET)

libxshmfence:
	@$(RUN_TARGET)

wayland-protocols: wayland
	@$(RUN_TARGET)

wayland:
	@$(RUN_TARGET)

glslang:
	@$(RUN_TARGET)

mesa: glslang libXxf86vm libXrandr xcb-util-keysyms libdisplay-info
#sensors libepoxy(gui)  llvm(cli) libunwind(cli)
	@$(RUN_TARGET)

xcb-util-keysyms:
	@$(RUN_TARGET)

xinit: xorg-server 
	@$(RUN_TARGET)

libICE:
	@$(RUN_TARGET)

libSM: libICE
	@$(RUN_TARGET)

libXt: libSM
	@$(RUN_TARGET)

libXmu: libXt
	@$(RUN_TARGET)

mtdev:
	@$(RUN_TARGET)

libdrm:
	@$(RUN_TARGET)

xorg-server: libxshmfence libdrm mesa libXfont2 libxcvt
#libepoxy(gui)
	@$(RUN_TARGET)

xf86-input-keyboard:
	@$(RUN_TARGET)

xf86-input-mouse:
	@$(RUN_TARGET)

xf86-input-evdev:
	@$(RUN_TARGET)

xf86-video-intel: 
	@$(RUN_TARGET)

xf86-video-vesa:
	@$(RUN_TARGET)

xf86-video-fbdev:
	@$(RUN_TARGET)

xf86-video-modesetting:
	@$(RUN_TARGET)

expat:
	@$(RUN_TARGET)

fontconfig: expat freetype
	@$(RUN_TARGET)

setxkbmap: 
	@$(RUN_TARGET)

libXi:
	@$(RUN_TARGET)

libXrender:
	@$(RUN_TARGET)

libXrandr: libXrender
	@$(RUN_TARGET)

libXinerama:
	@$(RUN_TARGET)

xinput: libXi libXrandr libXinerama
	@$(RUN_TARGET)

libXft:  libXrender fontconfig
	@$(RUN_TARGET)

icons:  default-icon-theme hicolor-icon-theme tango-icon-theme 
	#xcursor-themes 

libXcursor:
	@$(RUN_TARGET)

xcursorgen: libXcursor
	@$(RUN_TARGET)

xcursor-themes: xcursorgen
	@$(RUN_TARGET)

default-icon-theme:
	@$(RUN_TARGET)

hicolor-icon-theme:
	@$(RUN_TARGET)

icon-naming-utils:
	@$(RUN_TARGET)

cairo: 
	@$(RUN_TARGET)

icu4c:
	@$(RUN_TARGET)

harfbuzz: cairo icu4c
	@$(RUN_TARGET)

pango: 
	@$(RUN_TARGET)

ImageMagick: graphics 
	@$(RUN_TARGET)

tango-icon-theme: icon-naming-utils ImageMagick
	@$(RUN_TARGET)

libXxf86vm:
	@$(RUN_TARGET)

libXScrnSaver:
	@$(RUN_TARGET)

ois:
	@$(RUN_TARGET)

xf86-video-s3:
	@$(RUN_TARGET)

xf86-video-tseng:
	@$(RUN_TARGET)

wm:	i3blocks

libXpm:
	@$(RUN_TARGET)

vtwm:
	@$(RUN_TARGET)

ratpoison:
	@$(RUN_TARGET)

dmenu:
	@$(RUN_TARGET)

xcb-util:
	@$(RUN_TARGET)

startup-notification: xcb-util	
	@$(RUN_TARGET)

xcb-util-renderutil:
	@$(RUN_TARGET)

xcb-util-image:
	@$(RUN_TARGET)

xcb-util-cursor: xcb-util-renderutil xcb-util-image
	@$(RUN_TARGET)

xcb-util-wm:
	@$(RUN_TARGET)

xcb-util-xrm:
	@$(RUN_TARGET)

libxkbcommon:
	@$(RUN_TARGET)

i3: startup-notification  xcb-util-cursor xcb-util-wm xcb-util-xrm libxkbcommon
#yajl(cli), libev(cli)
	@$(RUN_TARGET)

#i3status: i3
#	@$(RUN_TARGET)

i3blocks: dmenu i3 
	@$(RUN_TARGET)


libXaw: libXmu libXpm
	@$(RUN_TARGET)

xfd:
	@$(RUN_TARGET)

st:
	@$(RUN_TARGET)

freefont-otf: 
	@$(RUN_TARGET)

dejavu-fonts-ttf:
	@$(RUN_TARGET)

xterm: libXaw libXft freefont-otf dejavu-fonts-ttf
	@$(RUN_TARGET)

xbitmaps:
	@$(RUN_TARGET)

bitmap: xbitmaps
	@$(RUN_TARGET)

oclock:	
	@$(RUN_TARGET)

libFS:
	@$(RUN_TARGET)

showfont: libFS
	@$(RUN_TARGET)

x11perf:
	@$(RUN_TARGET)

xbacklight:
	@$(RUN_TARGET)

xcalc:
	@$(RUN_TARGET)

xclock:
	@$(RUN_TARGET)

xconsole:
	@$(RUN_TARGET)

xedit:
	@$(RUN_TARGET)

xorg-cf-files:
	@$(RUN_TARGET)

imake: xorg-cf-files
	@$(RUN_TARGET)

oneko: imake
	@$(RUN_TARGET)

xdriinfo:
	@$(RUN_TARGET)

libXtst:
	@$(RUN_TARGET)

xdpyinfo: libXtst
	@$(RUN_TARGET)

xeyes:
	@$(RUN_TARGET)

xev: 
	@$(RUN_TARGET)

xhost:
	@$(RUN_TARGET)

xkill:
	@$(RUN_TARGET)

xload:
	@$(RUN_TARGET)

xfontsel:
	@$(RUN_TARGET)

xmag:
	@$(RUN_TARGET)

xman:
	@$(RUN_TARGET)

xmodmap:
	@$(RUN_TARGET)

xrandr: libXrandr
#nickle
	@$(RUN_TARGET)

xset:
	@$(RUN_TARGET)

xsetroot:
	@$(RUN_TARGET)

xsetpointer:
	@$(RUN_TARGET)

libXv:
	@$(RUN_TARGET)

xvinfo: libXv
	@$(RUN_TARGET)

xauth:
	@$(RUN_TARGET)

graphviz: 
	@$(RUN_TARGET)

groff:
	@$(RUN_TARGET)

libpng14:
	@$(RUN_TARGET)

netpbm:
	@$(RUN_TARGET)

xwd:
	@$(RUN_TARGET)

xwininfo:
	@$(RUN_TARGET)

imlib2:
	@$(RUN_TARGET)

xlunch:
	@$(RUN_TARGET)

libexif:
	@$(RUN_TARGET)

exif: libexif
	@$(RUN_TARGET)

libXcomposite:
	@$(RUN_TARGET)

xf86-video-amdgpu:
	@$(RUN_TARGET)

xorgproto:
	@$(RUN_TARGET)

# old fonts
fonts: fonts-bitmap fonts-type1 fonts-misc fonts-ttf
#	for i in 100dpi 75dpi Speedo Type1 cyrillic misc; do ln -svf $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/$$i $(KANAPI_BASE)/fontconfig-$(fontconfig_ver)/share/fonts ; done
	if [ "$(ACTION)" = "install" ] ; then \
	if [ ! -d $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF ] ; then mkdir -p $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF; fi ;\
	for i in $(KANAPI_BASE)/freefont-ttf-$(freefont_ttf_ver)/*.ttf $(KANAPI_BASE)/dejavu-fonts-ttf-$(dejavu_fonts_ttf_ver)/ttf/*.ttf ; do \
		if [ -f $$i ] ; then ln -sf $$i $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF ; fi; done; \
	echo -n > $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts;\
	for i in $(KANAPI_BASE)/freefont-ttf-$(freefont_ttf_ver)/fonts.scale $(KANAPI_BASE)/dejavu-fonts-ttf-$(dejavu_fonts_ttf_ver)/ttf/fonts.scale ; do \
		if [ -f $$i ] ; then cat $$i | grep ttf >> $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts ; fi; done; \
	if [ -f $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts ] ; then \
		cat $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts	| wc -l >  $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts.scale ; \
		cat $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts	>>  $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts.scale ; \
		rm $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF/fonts ; \
		cd $(KANAPI_BASE)/font-util-$(font_util_ver)/share/fonts/X11/TTF ; \
		if [ -x "`which mkfontdir`" ]; then mkfontdir ; fi ; \
	fi ; fi

fonts-ttf: freefont-ttf dejavu-fonts-ttf font-bh-ttf

freefont-ttf: fontconfig
	@$(RUN_TARGET)


font-bh-ttf:
	@$(RUN_TARGET)

fonts-bitmap: fonts-utopia fonts-bh fonts-bitstream
	
fonts-utopia: font-adobe-75dpi font-adobe-100dpi font-adobe-utopia-75dpi font-adobe-utopia-100dpi 
	
fonts-bh: font-bh-75dpi font-bh-100dpi font-bh-lucidatypewriter-75dpi font-bh-lucidatypewriter-100dpi

fonts-bitstream: font-bitstream-75dpi font-bitstream-100dpi font-bitstream-speedo 

fonts-type1: font-adobe-utopia-type1 font-bh-type1 font-ibm-type1 font-xfree86-type1 

fonts-misc: font-daewoo-misc font-dec-misc font-isas-misc font-jis-misc font-micro-misc font-misc-misc \
	font-mutt-misc font-schumacher-misc font-sony-misc font-sun-misc font-alias

font-alias:
	@$(RUN_TARGET)

font-adobe-75dpi:
	@$(RUN_TARGET)

font-adobe-100dpi:
	@$(RUN_TARGET)

font-adobe-utopia-75dpi:
	@$(RUN_TARGET)

font-adobe-utopia-100dpi:
	@$(RUN_TARGET)

font-adobe-utopia-type1:
	@$(RUN_TARGET)

font-bh-75dpi:
	@$(RUN_TARGET)

font-bh-100dpi:
	@$(RUN_TARGET)

font-bh-lucidatypewriter-75dpi:
	@$(RUN_TARGET)

font-bh-lucidatypewriter-100dpi:
	@$(RUN_TARGET)

font-bh-type1:
	@$(RUN_TARGET)

font-bitstream-75dpi:
	@$(RUN_TARGET)

font-bitstream-100dpi:
	@$(RUN_TARGET)

font-bitstream-speedo:
	@$(RUN_TARGET)

font-daewoo-misc:
	@$(RUN_TARGET)

font-dec-misc:
	@$(RUN_TARGET)

font-ibm-type1:
	@$(RUN_TARGET)

font-isas-misc:
	@$(RUN_TARGET)

font-jis-misc:
	@$(RUN_TARGET)

font-micro-misc:
	@$(RUN_TARGET)

font-misc-misc:
	@$(RUN_TARGET)

font-mutt-misc:
	@$(RUN_TARGET)

font-schumacher-misc:
	@$(RUN_TARGET)

font-sony-misc:
	@$(RUN_TARGET)

font-sun-misc:
	@$(RUN_TARGET)

font-xfree86-type1:
	@$(RUN_TARGET)

libdisplay-info: hwdata
	@$(RUN_TARGET)

hwdata:
	@$(RUN_TARGET)

libxcvt:
	@$(RUN_TARGET)

xf86-input-libinput: libinput libXi
	@$(RUN_TARGET)

libinput: mtdev 
#libevdev(cli)
	@$(RUN_TARGET)
