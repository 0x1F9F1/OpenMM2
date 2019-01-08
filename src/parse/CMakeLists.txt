add_library(parse OBJECT
    csv.cpp
    csv.h
    parse.cpp
    parse.h
)

target_link_libraries(parse hooking)
