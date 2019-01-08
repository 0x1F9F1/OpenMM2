cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(phinertia STATIC
    inertia.cpp
    inertia.h
    joint.cpp
    joint.h
)

target_link_libraries(phinertia hooking)
