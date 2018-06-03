all: sbs bbs cli

sbs:
	cd kanapi_system/docker/sbs; ./make_full_image

bbs:
	cd kanapi_system/docker/bbs; ./create_bbs_docker

cli:
	cd kanapi_system/docker/cli; ./create_cli_docker

sbs-bbs: sbs bbs

