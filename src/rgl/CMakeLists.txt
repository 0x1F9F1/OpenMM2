add_library(rgl OBJECT
    rglext.cpp
    rglext.h
    vgl.cpp
    vgl.h
)

target_link_libraries(rgl hooking)
