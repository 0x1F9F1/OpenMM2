add_library(ped OBJECT
    ped.cpp
    ped.h
    pedactive.cpp
    pedactive.h
    pedinst.cpp
    pedinst.h
    ragdollmgr.cpp
    ragdollmgr.h
)

target_link_libraries(ped hooking)
