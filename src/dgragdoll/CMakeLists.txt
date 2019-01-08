add_library(dgragdoll OBJECT
    link.cpp
    link.h
    linkdata.cpp
    linkdata.h
    ragdoll.cpp
    ragdoll.h
    ragdolldata.cpp
    ragdolldata.h
)

target_link_libraries(dgragdoll hooking)
