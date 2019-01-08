cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

find_library(DPLAY_LIBRARY dplayx
    HINTS dplayx/lib)

add_library(mmnetwork STATIC
    netobject.cpp
    netobject.h
    network.cpp
    network.h
    zone.cpp
    zone.h
)

target_link_libraries(mmnetwork hooking
    ${DPLAY_LIBRARY})
