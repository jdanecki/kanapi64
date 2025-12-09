#Basic Build System built with SBS

SCRIPTS_DIR=/kanapi_build/kanapi/kanapi_system/scripts
include $(SCRIPTS_DIR)/Makefile.common

bbs: ccache bash-completion m4 perl autoconf automake libtool bison sed gettext ncurses readline gawk cmake \
	flex attr acl libarchive e2fsprogs git coreutils diffutils Python ninja tar findutils patch slang util-linux less openssh mtools

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


