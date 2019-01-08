add_library(phcore OBJECT
    convexpoly.cpp
    convexpoly.h
    isectpoint.cpp
    isectpoint.h
    line.cpp
    line.h
    material.cpp
    material.h
    phmath.cpp
    phmath.h
    poly.cpp
    poly.h
)

target_link_libraries(phcore hooking)
