add_library(localize OBJECT
    localize.cpp
    localize.h
)

target_link_libraries(localize hooking)
