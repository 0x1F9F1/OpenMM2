cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(ageaudio STATIC
    ageaudio.cpp
    ageaudio.h
    agesound.cpp
    agesound.h
    aud3dambientobject.cpp
    aud3dambientobject.h
    aud3dambobjcontainer.cpp
    aud3dambobjcontainer.h
    aud3dobject.cpp
    aud3dobject.h
    aud3dobjectmanager.cpp
    aud3dobjectmanager.h
    aud3dsamplewrapper.cpp
    aud3dsamplewrapper.h
    audcreature.cpp
    audcreature.h
    audcreatureavoid.cpp
    audcreatureavoid.h
    audcreaturecontainer.cpp
    audcreaturecontainer.h
    audcreatureimpact.cpp
    audcreatureimpact.h
    audimpact.cpp
    audimpact.h
    audimpactdata.cpp
    audimpactdata.h
    audspeech.cpp
    audspeech.h
    audspeechdata.cpp
    audspeechdata.h
)

target_link_libraries(ageaudio hooking)
