cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(crbody STATIC
    armdata.cpp
    armdata.h
    bodydata.cpp
    bodydata.h
    headdata.cpp
    headdata.h
    ikgoal.cpp
    ikgoal.h
    kinematics.cpp
    kinematics.h
    legdata.cpp
    legdata.h
    spinedata.cpp
    spinedata.h
)

target_link_libraries(crbody hooking)
