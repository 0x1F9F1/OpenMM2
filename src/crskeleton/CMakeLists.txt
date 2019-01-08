add_library(crskeleton OBJECT
    bone.cpp
    bone.h
    bonedata.cpp
    bonedata.h
    skeldata.cpp
    skeldata.h
    skeleton.cpp
    skeleton.h
)

target_link_libraries(crskeleton hooking)
