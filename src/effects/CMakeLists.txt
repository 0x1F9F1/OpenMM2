cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(effects STATIC
    birth.cpp
    birth.h
    card2d.cpp
    card2d.h
    glassptx.cpp
    glassptx.h
    linespark.cpp
    linespark.h
    ptx.cpp
    ptx.h
    shard.cpp
    shard.h
    texeldamage.cpp
    texeldamage.h
)

target_link_libraries(effects hooking)
