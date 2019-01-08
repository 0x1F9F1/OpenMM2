add_library(camera OBJECT
    aics.cpp
    aics.h
    appcs.cpp
    appcs.h
    basecs.cpp
    basecs.h
    carcs.cpp
    carcs.h
    pointcs.cpp
    pointcs.h
    polarcs.cpp
    polarcs.h
    postcs.cpp
    postcs.h
    povcs.cpp
    povcs.h
    precs.cpp
    precs.h
    spline.cpp
    spline.h
    trackcs.cpp
    trackcs.h
    transitioncs.cpp
    transitioncs.h
    viewcs.cpp
    viewcs.h
)

target_link_libraries(camera hooking)
