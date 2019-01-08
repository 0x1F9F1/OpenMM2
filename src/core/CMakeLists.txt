add_library(core OBJECT
    assert.cpp
    assert.h
    file.cpp
    file.h
    output.cpp
    output.h
    stream.cpp
    stream.h
)

target_link_libraries(core hooking)
