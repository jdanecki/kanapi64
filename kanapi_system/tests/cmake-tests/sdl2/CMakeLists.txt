cmake_minimum_required(VERSION 4.2)
project(CmakeSDLTest)

set(CMAKE_VERBOSE_MAKEFILE ON)

find_package (SDL2)

message(STATUS "SDL2_DIR=${SDL2_DIR}")
