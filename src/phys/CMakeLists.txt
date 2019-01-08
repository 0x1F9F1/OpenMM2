add_library(phys OBJECT
    bound.cpp
    bound.h
    impact.cpp
    impact.h
    levelbound.cpp
    levelbound.h
    physentity.cpp
    physentity.h
    physmgr.cpp
    physmgr.h
    segment.cpp
    segment.h
    trailerjoint.cpp
    trailerjoint.h
)

target_link_libraries(phys hooking)
