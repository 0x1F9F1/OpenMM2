add_library(x86 OBJECT
    speed.cpp
    speed.h
)

target_link_libraries(x86 hooking)
