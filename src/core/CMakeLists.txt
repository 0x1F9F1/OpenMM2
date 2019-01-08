cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(core STATIC
    assert.cpp
    assert.h
    file.cpp
    file.h
    output.cpp
    output.h
    stream.cpp
    stream.h
)

target_link_libraries(core hooking)
