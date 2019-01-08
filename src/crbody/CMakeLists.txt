add_library(crbody OBJECT
    armdata.cpp
    armdata.h
    bodydata.cpp
    bodydata.h
    headdata.cpp
    headdata.h
    ikgoal.cpp
    ikgoal.h
    kinematics.cpp
    kinematics.h
    legdata.cpp
    legdata.h
    spinedata.cpp
    spinedata.h
)

target_link_libraries(crbody hooking)
