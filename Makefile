all: sbs bbs cli x11 gui apps ocl

sbs:
	cd kanapi_system/docker/sbs; ./make_full_image

bbs:
	cd kanapi_system/docker/bbs; ./create_bbs_docker

cli:
	cd kanapi_system/docker/cli; ./create_cli_docker

x11:
	cd kanapi_system/docker/x11; ./create_x11_docker

ocl:
	cd kanapi_system/docker/ocl; ./create_ocl_docker

gui:
	cd kanapi_system/docker/gui; ./create_gui_docker

apps:
	cd kanapi_system/docker/apps; ./create_apps_docker