# APPS image is required to compile these packages

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

xfce-full: xfce xfce-apps xfce-addons
xfce: xfwm4 xfce4-panel xfdesktop xfce4-session
xfce-apps: xfce4-settings thunar xfce4-screenshooter xfce4-taskmanager xfce4-terminal xfce4-appfinder
xfce-addons: xfce4-whiskermenu-plugin xfce4-pulseaudio-plugin xfce4-battery-plugin

xfwm4: libxfce4util libxfce4ui libwnck
	@$(RUN_TARGET)

libxfce4util:
	@$(RUN_TARGET)

libxfce4ui: xfconf
	@$(RUN_TARGET)

xfconf:
	@$(RUN_TARGET)

libwnck:
# Isn't a xfce4 project, it is a requirement.
# May be moved to apps in the future.
	@$(RUN_TARGET)

xfce4-panel: xfce4-dev-tools garcon exo libxfce4windowing
# May require xfce4/libs?
	@$(RUN_TARGET)

xfce4-dev-tools:
	@$(RUN_TARGET)

garcon:
	@$(RUN_TARGET)

exo:
	@$(RUN_TARGET)

libxfce4windowing:
	@$(RUN_TARGET)

xfdesktop: yaml
	@$(RUN_TARGET)

xfce4-session: iceauth
	@$(RUN_TARGET)

iceauth:
	@$(RUN_TARGET)

xfce4-settings:
	@$(RUN_TARGET)

thunar:
	@$(RUN_TARGET)

xfce4-whiskermenu-plugin:
	@$(RUN_TARGET)

yaml:
# May be moved to libs/apps in the future.
	@$(RUN_TARGET)

xfce4-screenshooter:
	@$(RUN_TARGET)

xfce4-taskmanager:
	@$(RUN_TARGET)

xfce4-terminal: # Requires vte from apps
	@$(RUN_TARGET)

xfce4-appfinder:
	@$(RUN_TARGET)

xfce4-pulseaudio-plugin:
	@$(RUN_TARGET)

xfce4-battery-plugin:
	@$(RUN_TARGET)
