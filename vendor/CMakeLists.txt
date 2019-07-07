add_subdirectory(mem)
add_subdirectory(zlib)

target_include_directories(zlibstatic PUBLIC
    ${zlib_SOURCE_DIR}
    ${zlib_BINARY_DIR}
)

set(SDL2_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/sdl2/include" CACHE STRING "")
set(SDL2_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2.lib;${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2main.lib" CACHE STRING "")
set(SDL2_BINARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2.dll" CACHE STRING "")
