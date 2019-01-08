add_library(input OBJECT
    eventq.cpp
    eventq.h
    input.cpp
    input.h
    joystick.cpp
    joystick.h
    keyboard.cpp
    keyboard.h
    mouse.cpp
    mouse.h
    pad.cpp
    pad.h
    winpriv.cpp
    winpriv.h
)

target_link_libraries(input hooking)
