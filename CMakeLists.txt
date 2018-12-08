cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(OpenMM2 CXX)

set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)

add_subdirectory(vendor)

add_library(${PROJECT_NAME} SHARED
    src/asCamera.cpp include/asCamera.h
    src/asCullable.cpp include/asCullable.h
    src/asCullManager.cpp include/asCullManager.h
    src/asLinearCS.cpp include/asLinearCS.h
    src/asNetwork.cpp include/asNetwork.h
    src/asNode.cpp include/asNode.h
    src/asRoot.cpp include/asRoot.h
    src/AudioOptions.cpp include/AudioOptions.h
    src/AudManager.cpp include/AudManager.h
    include/Base.h
    include/ColorConvert.h
    src/d3dpipe.cpp include/d3dpipe.h
    src/datArgParser.cpp include/datArgParser.h
    src/datAssetManager.cpp include/datAssetManager.h
    src/datCallback.cpp include/datCallback.h
    src/datOutput.cpp include/datOutput.h
    src/datStack.cpp include/datStack.h
    src/datTimeManager.cpp include/datTimeManager.h
    src/DirSnd.cpp include/DirSnd.h
    src/dllmain.cpp
    src/eqEventHandler.cpp include/eqEventHandler.h
    src/Font.cpp include/Font.h
    src/GameLoop.cpp include/GameLoop.h
    src/gfxBitmap.cpp include/gfxBitmap.h
    src/gfxImage.cpp include/gfxImage.h
    src/gfxInterface.cpp include/gfxInterface.h
    src/gfxPipeline.cpp include/gfxPipeline.h
    src/gfxRenderState.cpp include/gfxRenderState.h
    src/gfxTexture.cpp include/gfxTexture.h
    src/HashTable.cpp include/HashTable.h
    src/Hooking.cpp include/Hooking.h
    src/ioInput.cpp include/ioInput.h
    src/ioJoystick.cpp include/ioJoystick.h
    src/localize.cpp include/localize.h
    src/Logging.cpp include/Logging.h
    src/lvlProgress.cpp include/lvlProgress.h
    src/Main.cpp include/Main.h
    src/Matrix.cpp include/Matrix.h
    src/memMemoryAllocator.cpp include/memMemoryAllocator.h
    src/memSafeHeap.cpp include/memSafeHeap.h
    src/mmCDPlayer.cpp include/mmCDPlayer.h
    src/mmDirSnd.cpp include/mmDirSnd.h
    src/mmGameManager.cpp include/mmGameManager.h
    src/mmInput.cpp include/mmInput.h
    src/mmInterface.cpp include/mmInterface.h
    src/mmPlayer.cpp include/mmPlayer.h
    src/mmReplayManager.cpp include/mmReplayManager.h
    src/mmStatePack.cpp include/mmStatePack.h
    src/MMString.cpp include/MMString.h
    src/OpenMM2.cpp include/OpenMM2.h
    src/sfPointer.cpp include/sfPointer.h
    src/stdafx.cpp include/stdafx.h
    src/Stream.cpp include/Stream.h
    src/Timer.cpp include/Timer.h
    src/Vector.cpp include/Vector.h
    src/vehCarAudioContainer.cpp include/vehCarAudioContainer.h
    src/vgl.cpp include/vgl.h
    src/zipFile.cpp include/zipFile.h)

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    include
    vendor)

find_library(DPLAY_LIBRARY dplayx
    HINTS vendor/dplay/lib)

target_link_libraries(${PROJECT_NAME} ${DPLAY_LIBRARY} dxguid mem)

file(STRINGS "GameDirectory.txt" GAME_DIRECTORY)

message(${GAME_DIRECTORY})

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    VS_DEBUGGER_COMMAND "${GAME_DIRECTORY}/Midtown2.exe"
    VS_DEBUGGER_WORKING_DIRECTORY "${GAME_DIRECTORY}"
    VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1
    BUILD_TYPE "RelWithDebInfo"
    OUTPUT_NAME "dinput"
)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${GAME_DIRECTORY})
install(FILES $<TARGET_PDB_FILE:${PROJECT_NAME}> DESTINATION ${GAME_DIRECTORY} OPTIONAL)
