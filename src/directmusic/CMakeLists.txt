cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(directmusic STATIC
    cfilestream.cpp
    cfilestream.h
    cmemstream.cpp
    cmemstream.h
    dmusicmanager.cpp
    dmusicmanager.h
    dmusicobject.cpp
    dmusicobject.h
    dmusicwavebuffer.cpp
    dmusicwavebuffer.h
    loader.cpp
    loader.h
    segmentwrapper.cpp
    segmentwrapper.h
)

target_link_libraries(directmusic hooking)
