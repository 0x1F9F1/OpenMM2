cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_subdirectory(ageaudio)
add_subdirectory(ai)
add_subdirectory(aud)
add_subdirectory(banger)
add_subdirectory(bank)
add_subdirectory(camera)
add_subdirectory(city)
add_subdirectory(core)
add_subdirectory(cranimation)
add_subdirectory(crbody)
add_subdirectory(crskeleton)
add_subdirectory(data)
add_subdirectory(dgragdoll)
add_subdirectory(directmusic)
add_subdirectory(djpeg)
add_subdirectory(effects)
add_subdirectory(gfx)
add_subdirectory(gizmo)
add_subdirectory(input)
add_subdirectory(level)
add_subdirectory(lights)
add_subdirectory(localize)
add_subdirectory(memory)
add_subdirectory(mmaudio)
add_subdirectory(mmcityinfo)
add_subdirectory(mmeffects)
add_subdirectory(mmgame)
add_subdirectory(mminput)
add_subdirectory(mmnetwork)
add_subdirectory(mmui)
add_subdirectory(mmwidget)
add_subdirectory(model)
add_subdirectory(node)
add_subdirectory(parse)
add_subdirectory(ped)
add_subdirectory(phbound)
add_subdirectory(phcollide)
add_subdirectory(phcore)
add_subdirectory(phinertia)
add_subdirectory(phys)
add_subdirectory(rgl)
add_subdirectory(vector)
add_subdirectory(vehicle)
add_subdirectory(x86)
add_subdirectory(zipfile)

add_library(hooking STATIC
    hooking.cpp
    hooking.h
)

target_link_libraries(hooking mem)

add_library(testgame STATIC
    testgame.cpp
    testgame.h

    $<TARGET_OBJECTS:ageaudio>
    $<TARGET_OBJECTS:ai>
    $<TARGET_OBJECTS:aud>
    $<TARGET_OBJECTS:banger>
    $<TARGET_OBJECTS:bank>
    $<TARGET_OBJECTS:camera>
    $<TARGET_OBJECTS:city>
    $<TARGET_OBJECTS:core>
    $<TARGET_OBJECTS:cranimation>
    $<TARGET_OBJECTS:crbody>
    $<TARGET_OBJECTS:crskeleton>
    $<TARGET_OBJECTS:data>
    $<TARGET_OBJECTS:dgragdoll>
    $<TARGET_OBJECTS:directmusic>
    $<TARGET_OBJECTS:djpeg>
    $<TARGET_OBJECTS:effects>
    $<TARGET_OBJECTS:gfx>
    $<TARGET_OBJECTS:gizmo>
    $<TARGET_OBJECTS:input>
    $<TARGET_OBJECTS:level>
    $<TARGET_OBJECTS:lights>
    $<TARGET_OBJECTS:localize>
    $<TARGET_OBJECTS:memory>
    $<TARGET_OBJECTS:mmaudio>
    $<TARGET_OBJECTS:mmcityinfo>
    $<TARGET_OBJECTS:mmeffects>
    $<TARGET_OBJECTS:mmgame>
    $<TARGET_OBJECTS:mminput>
    $<TARGET_OBJECTS:mmnetwork>
    $<TARGET_OBJECTS:mmui>
    $<TARGET_OBJECTS:mmwidget>
    $<TARGET_OBJECTS:model>
    $<TARGET_OBJECTS:node>
    $<TARGET_OBJECTS:parse>
    $<TARGET_OBJECTS:ped>
    $<TARGET_OBJECTS:phbound>
    $<TARGET_OBJECTS:phcollide>
    $<TARGET_OBJECTS:phcore>
    $<TARGET_OBJECTS:phinertia>
    $<TARGET_OBJECTS:phys>
    $<TARGET_OBJECTS:rgl>
    $<TARGET_OBJECTS:vector>
    $<TARGET_OBJECTS:vehicle>
    $<TARGET_OBJECTS:x86>
    $<TARGET_OBJECTS:zipfile>
)

find_library(DPLAY_LIBRARY dplayx
    HINTS mmnetwork/dplayx/lib)

target_link_libraries(testgame
    hooking
    zlibstatic
    ${DPLAY_LIBRARY}
)
