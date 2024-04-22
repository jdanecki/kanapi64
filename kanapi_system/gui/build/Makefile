REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

gui:  gtk qt wxWidgets

gtk: gtk+ dconf gtk3+ dbus-glib

qt: qt-everywhere-opensource-src

atk:
	@$(RUN_TARGET)

gdk-pixbuf: 
	@$(RUN_TARGET)

librsvg: libcroco
	@$(RUN_TARGET)

libcroco:
	@$(RUN_TARGET)

adwaita-icon-theme: librsvg
	@$(RUN_TARGET)

gtk+: atk gdk-pixbuf adwaita-icon-theme
	@$(RUN_TARGET)

dconf:
	@$(RUN_TARGET)

libepoxy:
	@$(RUN_TARGET)

gsettings-desktop-schemas:
	@$(RUN_TARGET)

gtk3+: libepoxy gsettings-desktop-schemas
	@$(RUN_TARGET)

dbus:
	@$(RUN_TARGET)

qt-everywhere-opensource-src: dbus
	@$(RUN_TARGET)

dbus-glib: dbus
	@$(RUN_TARGET)

wxWidgets:
	@$(RUN_TARGET)

