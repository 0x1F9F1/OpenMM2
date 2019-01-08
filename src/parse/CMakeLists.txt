cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(parse STATIC
    csv.cpp
    csv.h
    parse.cpp
    parse.h
)

target_link_libraries(parse hooking)
