add_library(cranimation OBJECT
    animation.cpp
    animation.h
    frame.cpp
    frame.h
)

target_link_libraries(cranimation hooking)
