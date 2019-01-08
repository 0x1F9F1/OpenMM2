add_library(djpeg OBJECT
    loadimg.cpp
    loadimg.h
)

target_link_libraries(djpeg hooking)
