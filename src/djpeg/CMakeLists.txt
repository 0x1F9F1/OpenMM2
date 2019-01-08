cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(djpeg STATIC
    loadimg.cpp
    loadimg.h
)

target_link_libraries(djpeg hooking)
