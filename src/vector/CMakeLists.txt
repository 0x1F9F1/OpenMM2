cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(vector STATIC
    geometry.cpp
    geometry.h
    matrix34.cpp
    matrix34.h
    matrix44.cpp
    matrix44.h
    nan.cpp
    nan.h
    quaternion.cpp
    quaternion.h
    randmath.cpp
    randmath.h
    vector3.cpp
    vector3.h
    vector4.cpp
    vector4.h
)

target_link_libraries(vector hooking)
