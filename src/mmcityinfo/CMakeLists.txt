add_library(mmcityinfo OBJECT
    cityinfo.cpp
    cityinfo.h
    citylist.cpp
    citylist.h
    cityrec.cpp
    cityrec.h
    crc.cpp
    crc.h
    infobase.cpp
    infobase.h
    miscdata.cpp
    miscdata.h
    playercfg.cpp
    playercfg.h
    playerdata.cpp
    playerdata.h
    playerdir.cpp
    playerdir.h
    position.cpp
    position.h
    racedata.cpp
    racedata.h
    racerecord.cpp
    racerecord.h
    rewards.cpp
    rewards.h
    state.cpp
    state.h
    vehinfo.cpp
    vehinfo.h
    vehlist.cpp
    vehlist.h
)

target_link_libraries(mmcityinfo hooking)
