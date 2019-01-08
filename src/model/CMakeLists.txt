add_library(model OBJECT
    getpivot.cpp
    getpivot.h
    getstatic.cpp
    getstatic.h
    loader.cpp
    loader.h
    model2.cpp
    model2.h
    package.cpp
    package.h
    shader.cpp
    shader.h
    static2.cpp
    static2.h
    staticdraw.cpp
    staticdraw.h
)

target_link_libraries(model hooking)
