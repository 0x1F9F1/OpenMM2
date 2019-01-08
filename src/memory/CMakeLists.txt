cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(memory STATIC
    allocator.cpp
    allocator.h
    stubs.cpp
    stubs.h
    valloc.cpp
    valloc.h
)

target_link_libraries(memory hooking)
