#targets to prepare SBS image

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

sbs: gcc rootfs file busybox bash make openssl curl

linux-headers:
	@$(RUN_TARGET)

glibc: linux-headers
	@$(RUN_TARGET)

gmp:
	@$(RUN_TARGET)

mpfr: gmp
	@$(RUN_TARGET)

mpc: mpfr
	@$(RUN_TARGET)

binutils: mpc
	@$(RUN_TARGET)

gcc: glibc binutils
	@$(RUN_TARGET)

zlib:
	@$(RUN_TARGET)

libffi:
	@$(RUN_TARGET)

glib: libffi zlib
	@$(RUN_TARGET)

pkg-config: glib
	@$(RUN_TARGET)

rootfs: pkg-config
	@$(RUN_TARGET)

xz:
	@$(RUN_TARGET)

file: xz
	@$(RUN_TARGET)

libxml2:
	@$(RUN_TARGET)

busybox:
	@$(RUN_TARGET)

bash:
	@$(RUN_TARGET)

make:
	@$(RUN_TARGET)

openssl: 
	@$(RUN_TARGET)

libgpg-error:
	@$(RUN_TARGET)

libgcrypt: libgpg-error
	@$(RUN_TARGET)

libssh2: libgcrypt
	@$(RUN_TARGET)

libpsl:
	@$(RUN_TARGET)

curl: libssh2 libpsl
	@$(RUN_TARGET)


