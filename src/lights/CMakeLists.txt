cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(lights STATIC
    flare.cpp
    flare.h
    light.cpp
    light.h
    project.cpp
    project.h
)

target_link_libraries(lights hooking)
