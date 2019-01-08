cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(x86 STATIC
    speed.cpp
    speed.h
)

target_link_libraries(x86 hooking)
