add_library(banger OBJECT
    active.cpp
    active.h
    banger.cpp
    banger.h
    data.cpp
    data.h
    glass.cpp
    glass.h
    tree.cpp
    tree.h
)

target_link_libraries(banger hooking)
