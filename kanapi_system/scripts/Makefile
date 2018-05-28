ifeq (x$(KANAPI_TOP),x)
BASE=
else
BASE=$(KANAPI_TOP)/
endif

include $(BASE)../scripts/Makefile.common
include ${BASE}../scripts/Makefile-sbs
include ${BASE}../scripts/Makefile-bbs
include ${BASE}../scripts/Makefile-cli
include ${BASE}../scripts/Makefile-x11
include ${BASE}../scripts/Makefile-gui
include ${BASE}../scripts/Makefile-apps

all: required cli x11 gui apps optional

required: $(COMPILERS) rootfs bbs

optional: apps_txt devel sound graphics x-support sdl-support wm xapp tests apps-gtk \
	apps-qt apps-x11 webkitgtk database nfs sdl2-support ogl ocl network demo

graph: required_graph optional_graph

required_graph:
	unset LANG; unset LC_ALL; make -Bnd required ACTION=download V=1 | make2graph -r > required.dot
	#| dot -Tpdf -o required.pdf

optional_graph:
	unset LANG; unset LC_ALL; make -Bnd optional ACTION=download V=1 | make2graph -r > optional.dot
	#| dot -Tpdf -o optional.pdf

deprecated: procps ratpoison vtwm midori firefox

#download version prepare install clean test:
#	$(foreach pkg,$(PKGS), make $(pkg) ACTION=$@; )

help:	
	make kanapi_help
#
#for tests only
#

packages: package3

package1:
	@$(RUN_TARGET)

package4:
	@$(RUN_TARGET)

package2: package1
	@$(RUN_TARGET)

package3: package2 package4
	@$(RUN_TARGET)

package-test:
	@$(RUN_TARGET)
