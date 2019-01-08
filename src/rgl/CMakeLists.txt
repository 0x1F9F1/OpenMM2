cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(rgl STATIC
    rglext.cpp
    rglext.h
    vgl.cpp
    vgl.h
)

target_link_libraries(rgl hooking)
