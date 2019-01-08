add_library(lights OBJECT
    flare.cpp
    flare.h
    light.cpp
    light.h
    project.cpp
    project.h
)

target_link_libraries(lights hooking)
