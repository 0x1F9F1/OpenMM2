cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(crskeleton STATIC
    bone.cpp
    bone.h
    bonedata.cpp
    bonedata.h
    skeldata.cpp
    skeldata.h
    skeleton.cpp
    skeleton.h
)

target_link_libraries(crskeleton hooking)
