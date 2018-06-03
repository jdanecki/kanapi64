#!/bin/bash

ARCH=`uname -m`
VER=0.5
BASE=/kanapi_${VER}

export PATH=${BASE}/bin:$PATH

if [ -n "${LD_LIBRARY_PATH}" ]
then
                export LD_LIBRARY_PATH=${BASE}/lib:${LD_LIBRARY_PATH}
else
                export LD_LIBRARY_PATH=${BASE}/lib
fi

gdb $*

