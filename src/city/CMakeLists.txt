cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(city STATIC
    ai.cpp
    ai.h
    citylevel.cpp
    citylevel.h
    propulate.cpp
    propulate.h
    psdl.cpp
    psdl.h
    state.cpp
    state.h
    texvar.cpp
    texvar.h
)

target_link_libraries(city hooking)
