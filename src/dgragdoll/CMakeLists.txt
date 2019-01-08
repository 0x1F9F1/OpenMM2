cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(dgragdoll STATIC
    link.cpp
    link.h
    linkdata.cpp
    linkdata.h
    ragdoll.cpp
    ragdoll.h
    ragdolldata.cpp
    ragdolldata.h
)

target_link_libraries(dgragdoll hooking)
