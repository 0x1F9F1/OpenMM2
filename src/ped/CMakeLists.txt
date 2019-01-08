cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(ped STATIC
    ped.cpp
    ped.h
    pedactive.cpp
    pedactive.h
    pedinst.cpp
    pedinst.h
    ragdollmgr.cpp
    ragdollmgr.h
)

target_link_libraries(ped hooking)
