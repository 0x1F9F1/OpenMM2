cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(gizmo STATIC
    bridge.cpp
    bridge.h
    bridgeaudio.cpp
    bridgeaudio.h
    ferry.cpp
    ferry.h
    gizmoinst.cpp
    gizmoinst.h
    parkedcar.cpp
    parkedcar.h
    pathspline.cpp
    pathspline.h
    sailboat.cpp
    sailboat.h
    train.cpp
    train.h
)

target_link_libraries(gizmo hooking)
