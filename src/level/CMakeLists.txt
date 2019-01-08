add_library(level OBJECT
    fixed.cpp
    fixed.h
    inst.cpp
    inst.h
    landmark.cpp
    landmark.h
    level.cpp
    level.h
    level2.cpp
    level2.h
    material.cpp
    material.h
    multiroom.cpp
    multiroom.h
    pathset.cpp
    pathset.h
    progress.cpp
    progress.h
    sky.cpp
    sky.h
    track.cpp
    track.h
)

target_link_libraries(level hooking)
