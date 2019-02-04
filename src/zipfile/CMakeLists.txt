add_library(zipfile OBJECT
    autoinit.cpp
    autoinit.h
    zipfile.cpp
    zipfile.h
)

target_link_libraries(zipfile hooking zlibstatic)
