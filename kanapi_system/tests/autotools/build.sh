#!/bin/bash

. ../../scripts/settings


KANAPI_AC_SCRIPTS="-I ${KANAPI_BASE}/libtool-${libtool_ver}/share/aclocal \
        -I ${KANAPI_BASE}/autoconf-${autoconf_ver}/share/autoconf \
        -I ${KANAPI_BASE}/pkg-config-${pkg_config_ver}/share/aclocal"

echo ${KANAPI_AC_SCRIPTS}

# configure.ac
# Makefile.am
# hello.c

autoreconf --verbose --force --install ${KANAPI_AC_SCRIPTS}
# aclocal: configure.ac -> aclocal.m4
# autoconf: configure.ac -> configure
# autoheader: -> config.h.in 
# automake:   -> Makefile.in, compile, install-sh, depcomp
# libtoolize: libtool 
