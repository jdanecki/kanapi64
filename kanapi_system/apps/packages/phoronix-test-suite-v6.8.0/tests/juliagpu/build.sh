#!/bin/sh

tar -xjf /var/lib/phoronix-test-suite/installed-tests/pts/juliagpu-1.3.0/JuliaGPU-v1.2pts-1.tar.bz2
cd JuliaGPU-v1.2pts

DEPENDS="OpenCL freeglut gl glu xext x11 xcb xi x11-xcb xrandr"
CCFLAGS="-O3 -march=native -ftree-vectorize -funroll-loops -Wall `pkg-config --cflags ${DEPENDS}` `pkg-config --libs ${DEPENDS}` \
	-I/kanapi_0.9/`uname -m`/packages/beignet-master/include -I`pkg-config --variable=includedir glu`"
#LDFLAGS="-lm -ldl -lpthread "

g++ -o juliaGPU displayfunc.h camera.h vec.h renderconfig.h juliaGPU.c displayfunc.c $CCFLAGS $LDFLAGS

cpp <rendering_kernel.cl >preprocessed_rendering_kernel.cl


