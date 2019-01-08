add_library(zipfile OBJECT
    autoinit.cpp
    autoinit.h
    zipfile.cpp
    zipfile.h
)

target_link_libraries(zipfile hooking)

target_include_directories(zipfile SYSTEM PRIVATE
    ${zlib_SOURCE_DIR}
    ${zlib_BINARY_DIR}
)
