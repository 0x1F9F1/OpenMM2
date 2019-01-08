cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(banger STATIC
    active.cpp
    active.h
    banger.cpp
    banger.h
    data.cpp
    data.h
    glass.cpp
    glass.h
    tree.cpp
    tree.h
)

target_link_libraries(banger hooking)
