add_library(gfx OBJECT
    bank.cpp
    bank.h
    buildpkt.cpp
    buildpkt.h
    d3dpipe.cpp
    d3dpipe.h
    font.cpp
    font.h
    gettex.cpp
    gettex.h
    image.cpp
    image.h
    loadimg.cpp
    loadimg.h
    packet.cpp
    packet.h
    pipecom.cpp
    pipecom.h
    renderer.cpp
    renderer.h
    rstate.cpp
    rstate.h
    rstateflush.cpp
    rstateflush.h
    stats.cpp
    stats.h
    swdev.cpp
    swdev.h
    texmovie.cpp
    texmovie.h
    texture.cpp
    texture.h
    tristrip.cpp
    tristrip.h
    viewport.cpp
    viewport.h
    winpipe.cpp
    winpipe.h
    winpriv.cpp
    winpriv.h

    sdlpipe.h
    sdlpipe.cpp
)

target_link_libraries(gfx hooking)
