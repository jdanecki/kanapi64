#!/bin/bash

mkdir build
cd build

SDL_PREFIX=`pkg-config --variable=prefix sdl2`
export CMAKE_PREFIX_PATH=${SDL_PREFIX}/lib/cmake
cmake ..

