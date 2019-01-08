cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(phbound STATIC
    bound.cpp
    bound.h
    boundbox.cpp
    boundbox.h
    boundgeom.cpp
    boundgeom.h
    boundhotdog.cpp
    boundhotdog.h
    boundpolygonal.cpp
    boundpolygonal.h
    boundsphere.cpp
    boundsphere.h
    boundterrain.cpp
    boundterrain.h
    boundterrainlocal.cpp
    boundterrainlocal.h
    collision.cpp
    collision.h
    collisionprim.cpp
    collisionprim.h
    impact.cpp
    impact.h
)

target_link_libraries(phbound hooking)
