#container apps and libs
#CLI is required to compile below targets

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

cbs: cgroupfs-mount go containerd libseccomp runc cli moby clean_cache
#   	moby-extras docker-machine tini

clean_cache:
	go clean -cache

go:
	@$(RUN_TARGET)

cli: 	
	@$(RUN_TARGET)

cgroupfs-mount:
	@$(RUN_TARGET)

containerd:
	@$(RUN_TARGET)

runc:
	@$(RUN_TARGET)

moby-extras:
	@$(RUN_TARGET)

tini:
	@$(RUN_TARGET)

docker-machine:
	@$(RUN_TARGET)

libseccomp:
	@$(RUN_TARGET)

moby:
	@$(RUN_TARGET)
