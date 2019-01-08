add_library(mmaudio OBJECT
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
