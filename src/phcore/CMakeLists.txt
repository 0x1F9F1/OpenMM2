cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(phcore STATIC
    convexpoly.cpp
    convexpoly.h
    isectpoint.cpp
    isectpoint.h
    line.cpp
    line.h
    material.cpp
    material.h
    phmath.cpp
    phmath.h
    poly.cpp
    poly.h
)

target_link_libraries(phcore hooking)
