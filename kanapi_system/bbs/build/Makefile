#Basic Build System built with SBS

SCRIPTS_DIR=/kanapi_build/kanapi/kanapi_system/scripts
include $(SCRIPTS_DIR)/Makefile.common

bbs: fix_sbs ccache bash-completion m4 perl autoconf automake libtool bison sed gettext ncurses readline gawk cmake \
	flex attr acl libarchive e2fsprogs git coreutils diffutils Python ninja tar findutils patch slang util-linux less openssh mtools

fix_sbs:
#busybox from sbs provides bash, and needs to be replaced
	ls -l /bin/bash
	ls -l $(KANAPI_BASE)/bash-$(bash_ver)/bin/bash
	ln -sfv $(KANAPI_BASE)/bash-$(bash_ver)/bin/bash /bin/bash
	ls -l /bin/bash
	sed -i "s/kanapi_0.10/kanapi_0.11/"  $(KANAPI_BASE)/file-$(file_ver)/lib/libmagic.la
	sed -i "s/xz-5.2.2/xz-5.2.5/"  $(KANAPI_BASE)/file-$(file_ver)/lib/libmagic.la

ccache:
	@$(RUN_TARGET)

bash-completion:
	@$(RUN_TARGET)

m4:
	@$(RUN_TARGET)

perl:
	@$(RUN_TARGET)

autoconf:
	@$(RUN_TARGET)

automake:
	@$(RUN_TARGET)

grep:
	@$(RUN_TARGET)

libtool: grep
	@$(RUN_TARGET)

bison:	
	@$(RUN_TARGET)

sed:	
	@$(RUN_TARGET)

gettext:
	@$(RUN_TARGET)

ncurses:
	@$(RUN_TARGET)

readline:
	@$(RUN_TARGET)

gawk:
	@$(RUN_TARGET)

cmake:
	@$(RUN_TARGET)

flex:
	@$(RUN_TARGET)

attr:
	@$(RUN_TARGET)

acl:
	@$(RUN_TARGET)

libarchive:
	@$(RUN_TARGET)

e2fsprogs:
	@$(RUN_TARGET)

git: 
	@$(RUN_TARGET)

coreutils:
	@$(RUN_TARGET)

diffutils:
	@$(RUN_TARGET)

sqlite-autoconf:
	@$(RUN_TARGET)

bzip2:
	@$(RUN_TARGET)

Python: sqlite-autoconf bzip2
	@$(RUN_TARGET)

re2c:
	@$(RUN_TARGET)

ninja: re2c
	@$(RUN_TARGET)

tar:
	@$(RUN_TARGET)

findutils:
	@$(RUN_TARGET)

patch:
	@$(RUN_TARGET)

ncurses5:
	@$(RUN_TARGET)

slang: ncurses5
	@$(RUN_TARGET)

util-linux:
	@$(RUN_TARGET)

less:
	@$(RUN_TARGET)

openssh:
	@$(RUN_TARGET)

mtools:
	@$(RUN_TARGET)


