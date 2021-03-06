cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(OpenMM2 CXX)

option(MM2_GAME_DIRECTORY "MM2 Game Directory")
option(MM2_COMMAND_LINE "MM2 Command Line")

add_compile_options(/MP /Zi /arch:SSE2)

add_subdirectory(vendor EXCLUDE_FROM_ALL)

add_compile_options(/W4)

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /DEBUG /OPT:REF")

# This object file does not define any previously undefined public symbols, so it will not be used by any link operation that consumes this library
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} /IGNORE:4221")

include_directories(src)
add_subdirectory(src)

add_library(OpenMM2 SHARED
    loader/OpenMM2.cpp
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT OpenMM2)

target_link_libraries(OpenMM2 dxguid mem testgame)

set_target_properties(OpenMM2 PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    LINK_FLAGS "/INCREMENTAL:NO"
    OUTPUT_NAME "dinput"
)

if((NOT MM2_GAME_DIRECTORY) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt"))
    file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt" MM2_GAME_DIRECTORY)
endif()

if(MM2_GAME_DIRECTORY)
    set_target_properties(OpenMM2 PROPERTIES
        VS_DEBUGGER_COMMAND "${MM2_GAME_DIRECTORY}/Midtown2.exe"
        VS_DEBUGGER_WORKING_DIRECTORY "${MM2_GAME_DIRECTORY}"
    )

    if((NOT MM2_COMMAND_LINE) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt"))
        file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt" MM2_COMMAND_LINE)
    endif()

    if (MM2_COMMAND_LINE)
        set_target_properties(OpenMM2 PROPERTIES
            VS_DEBUGGER_COMMAND_ARGUMENTS "${MM2_COMMAND_LINE}"
        )
    endif()

    install(TARGETS OpenMM2 RUNTIME DESTINATION ${MM2_GAME_DIRECTORY})
    install(FILES ${SDL2_BINARIES} DESTINATION ${MM2_GAME_DIRECTORY})
    install(FILES "extra/midtown2.map" DESTINATION ${MM2_GAME_DIRECTORY})
    install(FILES $<TARGET_PDB_FILE:OpenMM2> DESTINATION ${MM2_GAME_DIRECTORY} OPTIONAL)
endif()
