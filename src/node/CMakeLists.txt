add_library(node OBJECT
    camera.cpp
    camera.h
    cullable.cpp
    cullable.h
    cullmgr.cpp
    cullmgr.h
    d3dstats.cpp
    d3dstats.h
    dof.cpp
    dof.h
    event.cpp
    event.h
    eventq.cpp
    eventq.h
    fileio.cpp
    fileio.h
    gfx.cpp
    gfx.h
    gfxtranslate.cpp
    gfxtranslate.h
    linear.cpp
    linear.h
    node.cpp
    node.h
    random.cpp
    random.h
    root.cpp
    root.h
    stats.cpp
    stats.h
    str.cpp
    str.h
    view.cpp
    view.h
)

target_link_libraries(node hooking)
