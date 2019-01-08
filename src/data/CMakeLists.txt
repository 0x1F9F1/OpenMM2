add_library(data OBJECT
    args.cpp
    args.h
    asset.cpp
    asset.h
    base.cpp
    base.h
    callback.cpp
    callback.h
    debuglog.cpp
    debuglog.h
    hash.cpp
    hash.h
    memory.cpp
    memory.h
    memstream.cpp
    memstream.h
    refcount.cpp
    refcount.h
    replay.cpp
    replay.h
    stack.cpp
    stack.h
    string.cpp
    string.h
    timemgr.cpp
    timemgr.h
    timer.cpp
    timer.h
    token.cpp
    token.h
    username.cpp
    username.h
)

target_link_libraries(data hooking)
