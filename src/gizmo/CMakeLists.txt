add_library(gizmo OBJECT
    bridge.cpp
    bridge.h
    bridgeaudio.cpp
    bridgeaudio.h
    ferry.cpp
    ferry.h
    gizmoinst.cpp
    gizmoinst.h
    parkedcar.cpp
    parkedcar.h
    pathspline.cpp
    pathspline.h
    sailboat.cpp
    sailboat.h
    train.cpp
    train.h
)

target_link_libraries(gizmo hooking)
