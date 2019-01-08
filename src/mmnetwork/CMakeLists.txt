add_library(mmnetwork OBJECT
    netobject.cpp
    netobject.h
    network.cpp
    network.h
    zone.cpp
    zone.h
)

target_link_libraries(mmnetwork hooking)
