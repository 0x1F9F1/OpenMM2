cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(cranimation STATIC
    animation.cpp
    animation.h
    frame.cpp
    frame.h
)

target_link_libraries(cranimation hooking)
