cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(mmaudio STATIC
    cd.cpp
    cd.h
    mixer.cpp
    mixer.h
    mmaudiomanager.cpp
    mmaudiomanager.h
    mmccspeech.cpp
    mmccspeech.h
    mmdirsnd.cpp
    mmdirsnd.h
    mmdmusicmanager.cpp
    mmdmusicmanager.h
    mmracespeech.cpp
    mmracespeech.h
    mmspeechcontainer.cpp
    mmspeechcontainer.h
)

target_link_libraries(mmaudio hooking)
