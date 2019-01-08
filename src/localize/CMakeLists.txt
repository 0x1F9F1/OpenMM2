cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(localize STATIC
    localize.cpp
    localize.h
)

target_link_libraries(localize hooking)
