add_library(memory OBJECT
    allocator.cpp
    allocator.h
    stubs.cpp
    stubs.h
    valloc.cpp
    valloc.h
)

target_link_libraries(memory hooking)
