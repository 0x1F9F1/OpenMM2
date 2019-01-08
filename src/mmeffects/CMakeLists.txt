add_library(mmeffects OBJECT
    damage.cpp
    damage.h
    meshform.cpp
    meshform.h
    mmnumber.cpp
    mmnumber.h
    mmtext.cpp
    mmtext.h
    mousesteerbar.cpp
    mousesteerbar.h
    vehform.cpp
    vehform.h
)

target_link_libraries(mmeffects hooking)
