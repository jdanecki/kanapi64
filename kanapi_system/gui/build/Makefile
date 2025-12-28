REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

gui: gtk3+ gtk3-libs
	#gtk qt wxWidgets

gtk: gtk+ dconf gtk3+ dbus-glib

qt: qt-everywhere-opensource-src

atk:
	@$(RUN_TARGET)

gdk-pixbuf: 
	@$(RUN_TARGET)

librsvg: 
#	libcroco
	@$(RUN_TARGET)

libcroco:
	@$(RUN_TARGET)

adwaita-icon-theme: 
#	librsvg
	@$(RUN_TARGET)

gtk+: atk gdk-pixbuf adwaita-icon-theme
	@$(RUN_TARGET)

dconf:
	@$(RUN_TARGET)

libepoxy:
	@$(RUN_TARGET)

gsettings-desktop-schemas:
	@$(RUN_TARGET)

gtk3+: gdk-pixbuf at-spi2-core adwaita-icon-theme gsettings-desktop-schemas
# shared-mime-info (apps)
	@$(RUN_TARGET)

dbus:
	@$(RUN_TARGET)

qt-everywhere-opensource-src: dbus
	@$(RUN_TARGET)

dbus-glib: dbus
	@$(RUN_TARGET)

wxWidgets:
	@$(RUN_TARGET)

# requires rustc
glycin:
	@$(RUN_TARGET)

at-spi2-core: dbus
	@$(RUN_TARGET)

gtkmm:
#XML-Parser(cli)	
	@$(RUN_TARGET)

gtk3-libs: gtkmm

