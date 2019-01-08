add_library(phinertia OBJECT
    inertia.cpp
    inertia.h
    joint.cpp
    joint.h
)

target_link_libraries(phinertia hooking)
