cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(phys STATIC
    bound.cpp
    bound.h
    impact.cpp
    impact.h
    levelbound.cpp
    levelbound.h
    physentity.cpp
    physentity.h
    physmgr.cpp
    physmgr.h
    segment.cpp
    segment.h
    trailerjoint.cpp
    trailerjoint.h
)

target_link_libraries(phys hooking)
