cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(mmeffects STATIC
    damage.cpp
    damage.h
    meshform.cpp
    meshform.h
    mmnumber.cpp
    mmnumber.h
    mmtext.cpp
    mmtext.h
    mousesteerbar.cpp
    mousesteerbar.h
    vehform.cpp
    vehform.h
)

target_link_libraries(mmeffects hooking)
