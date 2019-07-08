/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "testgame.h"

#include "city/texvar.h"
#include "core/output.h"
#include "data/args.h"
#include "data/asset.h"
#include "data/memory.h"
#include "data/stack.h"
#include "data/timemgr.h"
#include "djpeg/loadimg.h"
#include "gfx/d3dpipe.h"
#include "gfx/font.h"
#include "gfx/image.h"
#include "gfx/loadimg.h"
#include "gfx/sdlpipe.h"
#include "gfx/texture.h"
#include "gfx/winpipe.h"
#include "gfx/winpriv.h"
#include "input/input.h"
#include "level/progress.h"
#include "localize/localize.h"
#include "memory/allocator.h"
#include "memory/valloc.h"
#include "mmaudio/mmaudiomanager.h"
#include "mmcityinfo/state.h"
#include "mmgame/ebola.h"
#include "mmgame/gameman.h"
#include "mmgame/interface.h"
#include "mmgame/player.h"
#include "mmgame/replay.h"
#include "mminput/input.h"
#include "mmnetwork/network.h"
#include "mmui/graphics.h"
#include "node/cullmgr.h"
#include "node/event.h"
#include "node/root.h"
#include "rgl/vgl.h"
#include "zipfile/autoinit.h"
#include "zipfile/zipfile.h"

#include <shellapi.h>

#pragma comment(lib, "imm32.lib")

inline extern_var(0x5E0CC4, int (*)(void), __VtResumeSampling);
inline extern_var(0x5E0CD8, int (*)(void), __VtPauseSampling);

void GetLoadScreenName(char* buffer)
{
    char gameModeBuffer[20];

    if (MMSTATE.GameState)
    {
        sprintf_s(buffer, 80, "%s_", MMSTATE.CityName);
        sprintf_s(gameModeBuffer, dgGameModeNames[MMSTATE.GameMode], MMSTATE.RaceId);
        strcat_s(buffer, 80, gameModeBuffer);
    }
    else
    {
        strcpy_s(buffer, 80, "splash");
    }
}

void BeginPhase(bool splashScreen)
{
    datDisplayUsed("Start of BeginPhase");

    if (NeedStartup)
    {
        InitDirectDraw();

        NeedStartup = false;
    }

    datDisplayUsed("Just before CreateBankManager");

    gfxResData* res = gfxInterface::Current()->CurrentResolution();

    int width = 640;
    int height = 480;
    int depth = res->ColorDepth;

    if (!splashScreen)
    {
        width = res->ScreenWidth;
        height = res->ScreenHeight;
    }

    gfxPipeline::SetRes(width, height, depth, depth, 0);

    gfxPipeline::BeginGfx3D();

    vglSetFormat(D3DFVF_XYZ | D3DFVF_DIFFUSE | D3DFVF_TEX1, 0, 0, 0);

    datDisplayUsed("Just before loading screen");

    char loadingScreenName[80];

    GetLoadScreenName(loadingScreenName);

    gfxImage* loadingImage = gfxLoadImage(loadingScreenName, 0);

    if (!loadingImage)
    {
        loadingImage = gfxLoadImage("loading", 0);

        if (!loadingImage)
        {
            MessageBoxA(0, LANG_STRING(0x263u), APPTITLE, 0x10u);

            exit(0);
        }
    }

    loadingImage->Scale(gfxPipeline::m_iWidth, gfxPipeline::m_iHeight);

    LoadingScreenBitmap = gfxBitmap::Create(loadingImage, 0);

    loadingImage->Release();

    ProgressCB("Begin", 10);
    datDisplayUsed("Just after loading screen");

    gfxReleaseFont();

    gfxTexture::EnableCache(false);

    gfxCreateFont();

    eqEventHandler::SuperQ = new eqEventHandler();

    datDisplayUsed("Just before InitAudioManager");

    InitAudioManager(MMSTATE.AudioFlags & 1);

    datDisplayUsed("Just after InitAudioManager");

    ROOT.AddChild(MMAUDMGRPTR);

    asCullManager* cullManager = new asCullManager(1024, 256);

    (void) cullManager;

    datDisplayUsed("Just before GameInput");

    mmInput* input = new mmInput();

    (void) input;

    GameInputPtr->AttachToPipe();
    GameInputPtr->Init(MMSTATE.InputDevice);

    datDisplayUsed("At end of BeginPhase");
}

void EndPhase(void)
{
    return stub<cdecl_t<void>>(0x401FC0);
}

void RestoreFocus(void)
{
    uint16_t width = RestoringScreenBitmap->Width;
    uint16_t height = RestoringScreenBitmap->Height;

    gfxPipeline::CopyBitmap((gfxPipeline::m_iWidth - width) / 2, (gfxPipeline::m_iHeight - height) / 2,
        RestoringScreenBitmap, 0, 0, width, height, false);

    if (mmGameManager::Instance && !ROOT.IsPaused() && !NETMGR.SessionOpen)
    {
        mmGameManager::Instance->ForcePopupUI();
    }
}

void GameLoop(bool draw)
{
    if (__VtResumeSampling)
    {
        __VtResumeSampling();
    }

    while (MMSTATE.GameState == -1)
    {
        datTimeManager::Update();
        ioInput::Poll();
        gfxPipeline::Manage();
        eqEventHandler::SuperQ->Update();
        MMAUDMGRPTR->Update();

        ROOT.Update();

        if (draw)
        {
            asCullManager::Instance->Update();
        }

        if (gfxPipeline::m_EvtFlags & 1)
        {
            MMSTATE.Shutdown = 1;

            break;
        }
    }

    if (__VtPauseSampling)
    {
        __VtPauseSampling();
    }
}

void MainPhase(bool draw, int firstLoad)
{
    BeginPhase(MMSTATE.GameState == 0);

    datTimeManager::RealTime(0.0);

    ROOT.ResChange(gfxPipeline::m_iWidth, gfxPipeline::m_iHeight);

    if (ROOT.IsPaused())
    {
        ROOT.SetPause(0);
    }

    gfxImage* imageRestoring = gfxLoadImage("reloading", 0);

    if (imageRestoring)
    {
        RestoringScreenBitmap = gfxBitmap::Create(imageRestoring, false);

        imageRestoring->Release();

        if (RestoringScreenBitmap)
        {
            gfxRestoreCallback = &RestoreFocus;
        }
    }
    else
    {
        RestoringScreenBitmap = 0;
    }

    EnableTextureVariantHandler = MMSTATE.GameState == 1;

    mmReplayManager* replayManager = nullptr;
    mmInterface* uiInterface = nullptr;
    mmGameManager* gameManager = nullptr;

    switch (MMSTATE.GameState)
    {
        case 0:
        {
            MMSTATE.ReplayName[0] = '\0';

            replayManager = new mmReplayManager();
            uiInterface = new mmInterface();

            ROOT.AddChild(uiInterface);

            uiInterface->Reset();
            uiInterface->ShowMain(firstLoad);

            draw = true;
        }
        break;

        case 1:
        {
            if (MMSTATE.HasMusicCD && (MMSTATE.AudioFlags & 4))
            {
                MMAUDMGRPTR->EnableCD();
                MMAUDMGRPTR->PlayCDTrack(2, 1);
            }

            datDisplayUsed("Before mmReplayManager");

            replayManager = new mmReplayManager();

            if (MMSTATE.ReplayName[0])
            {
                replayManager->LoadReplay(MMSTATE.ReplayName);
            }

            datDisplayUsed("Before mmGameManager");

            gameManager = new mmGameManager();

            replayManager->AddChild(gameManager);

            ROOT.AddChild(replayManager);

            replayManager->Player = PLAYER;

            if (MMSTATE.ReplayName[0])
            {
                gameManager->ForceReplayUI();
            }

            draw = false;
        }
        break;
    }

    LoadingScreenBitmap->Release();
    LoadingScreenBitmap = nullptr;

    SetFocus(hwndMain);
    MMSTATE.GameState = -1;
    datDisplayUsed("Just before GameLoop");

    GameLoop(draw);

    if (uiInterface)
    {
        ROOT.RemoveChild(uiInterface);

        delete uiInterface;
    }

    if (replayManager)
    {
        ROOT.RemoveChild(replayManager);

        delete replayManager;
    }

    delete gameManager;

    if (RestoringScreenBitmap)
    {
        RestoringScreenBitmap = nullptr;

        gfxRestoreCallback = nullptr;
    }

    EndPhase();
}

inline extern_var(0x6614D4, char[256], ExecPath);

void ProgressRect(int x, int y, int width, int height, unsigned int color)
{
    DDPIXELFORMAT ddPixelFormat = {sizeof(ddPixelFormat)};
    lpdsRend->GetPixelFormat(&ddPixelFormat);

    DDBLTFX ddBltFx = {sizeof(ddBltFx)};
    ddBltFx.dwFillColor = GetPixelFormatColor(&ddPixelFormat, color);

    RECT position = {
        x,
        y,
        x + width,
        y + height,
    };

    lpdsRend->Blt(&position, NULL, NULL, DDBLT_COLORFILL | DDBLT_WAIT, &ddBltFx);
}

uint32_t ProgressBarColor = 0xFF0D2CBA;

void ProgressCB(const char* message, signed int progress)
{
    (void) message;

    if (progress)
    {
        gfxPipeline::BeginFrame();

        if (LoadingScreenBitmap)
        {
            gfxPipeline::CopyBitmap(
                0, 0, LoadingScreenBitmap, 0, 0, LoadingScreenBitmap->Width, LoadingScreenBitmap->Height, 0);
        }

        if (MMSTATE.GameState)
        {
            ProgressRect(static_cast<int>(gfxPipeline::m_iWidth * 0.55),
                static_cast<int>(gfxPipeline::m_iHeight * 0.895),
                static_cast<int>(gfxPipeline::m_iWidth * 0.42343751 * progress * 0.01),
                static_cast<int>(gfxPipeline::m_iHeight * 0.02), ProgressBarColor);
        }
        else
        {
            ProgressRect(static_cast<int>(gfxPipeline::m_iWidth * 0.5453125),
                static_cast<int>(gfxPipeline::m_iHeight * 0.935),
                static_cast<int>(gfxPipeline::m_iWidth * 0.44374 * progress * 0.01),
                static_cast<int>(gfxPipeline::m_iHeight * 0.02), ProgressBarColor);
        }

        gfxPipeline::EndFrame();
    }
}

void CreateGameMutex(const char* name)
{
    HANDLE hMutex = CreateMutexA(0, 0, name);

    if (!hMutex || WaitForSingleObject(hMutex, 1u))
    {
        MessageBoxA(0, LANG_STRING(0xF7), APPTITLE, MB_ICONERROR);

        exit(0);
    }
}

int Main(void)
{
    sdlPipeline::InitSDL();

    ioInput::bUseJoystick = false;
    mmCpuSpeed = 1000;
    gfxIcon = 0x6F;
    MMSTATE.AudioFlags = 0xC73;

    if (!datArgParser::Exists("nomutex"))
    {
        CreateGameMutex("MidtownMadness2Mutex");
    }

    if (!FirstRunEula())
    {
        Displayf("Failed to load EBUeula.dll or user declined.");

        exit(0);
    }

    lvlProgress::SetCallback(&ProgressCB);

    ROOT.Init(datArgParser::Exists("nan"));

    Displayf("%s - %s", APPTITLE, VERSION_STRING);

    const char* currentCity = "sf";
    const char* currentCar = "vpcoop";

    datArgParser::Get("level", 0, currentCity);
    datArgParser::Get("car", 0, currentCar);

    MMSTATE.SetDefaults(currentCity, currentCar);

    strcpy_s(ExecPath, ".");

    datAssetManager::SetPath(".");
    datAssetManager::sm_IgnorePrefix = false;

    inWindow = true;
    gfxPipeline::SetTitle(APPTITLE);

    gfxMinScreenWidth = 640;
    gfxMinScreenHeight = 480;

    bool success = false;

    if (!gfxAutoDetect(&success))
    {
        MessageBoxA(0, LANG_STRING(0xFAu), APPTITLE, MB_ICONERROR);

        exit(0);
    }

    gfxPipeline::SetRes(640, 480, 32, 32, true);

    InitDirectDraw();

    if (datArgParser::Exists("archive"))
    {
        zipAutoInit();
    }
    else
    {
        zipMultiAutoInit("*.ar");
    }

    InstallJPEGSupport();
    InstallTextureVariantHandler();

    int firstLoad = 0;

    do
    {
        MainPhase(false, firstLoad);

        firstLoad = 1;
    } while (!MMSTATE.Shutdown);

    Displayf("Shutting Down.");

    NETMGR.Logout();

    gfxPipeline::EndGfx2D();

    SDL_Quit();

    return 0;
}

int ExceptMain()
{
    int result = -1;

    __try
    {
        result = Main();
    }
    __except (datStack::ExceptionFilter(GetExceptionInformation()))
    {
        Displayf("ExceptMain: Abnormal exit.");
    }

    datArgParser::Kill();

    return result;
}

include_dummy_symbol(sfPointer);
include_dummy_symbol(vehCarAudioContainer);
include_dummy_symbol(Matrix34);

run_once([] { new (&ROOT) asRoot(); });