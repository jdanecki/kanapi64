cmake_minimum_required(VERSION 3.20)
project(CmakeTest)
set(DOCTEST_URL "https://github.com/doctest/doctest/releases/download/v2.4.12/doctest.h")
set(DOCTEST_FILE "${CMAKE_BINARY_DIR}/doctest.h")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_TLS_VERIFY 1)

file(DOWNLOAD 
    "${DOCTEST_URL}" 
    "${DOCTEST_FILE}" 
    SHOW_PROGRESS
    STATUS _status
    LOG log
)
message(STATUS "Downloaded doctest.h to ${DOCTEST_FILE}")
message(STATUS "Download status: ${_status}")
message(STATUS "Download log: ${log}")
