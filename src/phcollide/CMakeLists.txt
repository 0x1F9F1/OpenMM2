add_library(phcollide OBJECT
    collider.cpp
    collider.h
    colliderbase.cpp
    colliderbase.h
    colliderjointed.cpp
    colliderjointed.h
    collision.cpp
    collision.h
    contact.cpp
    contact.h
    contactmgr.cpp
    contactmgr.h
    impact.cpp
    impact.h
    sleep.cpp
    sleep.h
)

target_link_libraries(phcollide hooking)
