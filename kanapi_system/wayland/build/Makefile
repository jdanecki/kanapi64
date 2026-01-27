REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common


wayland:
	@$(RUN_TARGET)

wlroots: wayland wayland-protocols xserver-xwayland seatd
	@$(RUN_TARGET)

wayland-protocols:
	@$(RUN_TARGET)

xwayland: xserver-xwayland

xserver-xwayland:
	@$(RUN_TARGET)

seatd:
	@$(RUN_TARGET)

sway: wlroots
	@$(RUN_TARGET)

swayfx: wlroots scenefx
	@$(RUN_TARGET)

scenefx:
	@$(RUN_TARGET)

foot:
	@$(RUN_TARGET)

swaybg:
	@$(RUN_TARGET)

mangowc: wlroots scenefx
	@$(RUN_TARGET)
