cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

include_directories(${zlib_SOURCE_DIR})
include_directories(${zlib_BINARY_DIR})

add_library(zipfile STATIC
    autoinit.cpp
    autoinit.h
    zipfile.cpp
    zipfile.h
)

target_link_libraries(zipfile
    hooking
    zlibstatic
)
