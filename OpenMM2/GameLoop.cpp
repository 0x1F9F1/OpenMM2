#include "stdafx.h"
#include "GameLoop.h"

#include "gfxBitmap.h"
#include "gfxImage.h"
#include "Main.h"

#include "datTimeManager.h"

#include "gfxPipeline.h"
#include "asRoot.h"

#include "mmReplayManager.h"
#include "mmInterface.h"

#include "memMemoryAllocator.h"
#include "mmCDPlayer.h"
#include "AudioOptions.h"
#include "AudManager.h"
#include "mmPlayer.h"
#include "mmGameManager.h"
#include "asNetwork.h"
#include "gfxInterface.h"

#include "vgl.h"

#include "mmStatePack.h"
#include "Font.h"

#include "eqEventHandler.h"
#include "asCullManager.h"
#include "mmInput.h"

#include "gfxTexture.h"
#include "d3dpipe.h"

#include "localize.h"
#include "ioInput.h"

instvar(0x5E0CE0, gfxBitmap*, RestoringScreenBitmap);
instvar(0x5E0CF8, bool, NeedStartup);

instvar(0x5E0CC4, int(*)(void), __VtResumeSampling);
instvar(0x5E0CD8, int(*)(void), __VtPauseSampling);

void GetLoadScreenName(char *buffer)
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

    int width = 640;
    int height = 480;
    int depth = 16;

    if (!splashScreen)
    {
        auto currentRes = gfxInterface::Current()->CurrentResolution();

        width = currentRes->ScreenWidth;
        height = currentRes->ScreenHeight;
        depth = currentRes->ColorDepth;
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

    // loadingImage->Scale(width, height);
    loadingImage->Scale(gfxPipeline::m_iWidth, gfxPipeline::m_iHeight);

    LoadingScreenBitmap = gfxBitmap::Create(loadingImage, 0);

    loadingImage->Release();

    ProgressCB("", 10);
    datDisplayUsed("Just after loading screen");

    gfxReleaseFont();

    gfxTexture::EnableCache(false);

    gfxCreateFont();

    eqEventHandler::SuperQ = new eqEventHandler();

    datDisplayUsed("Just before InitAudioManager");

    InitAudioManager(MMSTATE.AudioFlags & 1);

    datDisplayUsed("Just after InitAudioManager");

    ROOT.AddChild(MMAUDMGRPTR);

    asCullManager* cullManager = new asCullManager(512, 64);

    (void)cullManager;

    datDisplayUsed("Just before GameInput");

    mmInput* input = new mmInput();

    (void)input;

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

    RECT position =
    {
        0, 0, width, height
    };

    lpdsFront->BltFast(
        (gfxPipeline::m_iWidth - width) / 2,
        (gfxPipeline::m_iHeight - height) / 2,
        RestoringScreenBitmap->Surface,
        &position,
        DDBLTFAST_WAIT);

    if (mmGameManager::Instance && !ROOT.IsPaused() && !NETMGR.SessionOpen)
    {
        mmGameManager::Instance->ForcePopupUI();
    }
}

void GameLoop(bool update)
{
    if (__VtResumeSampling)
    {
        __VtResumeSampling();
    }

    memMemStats memoryStats;
    memMemoryAllocator::Current->GetStats(&memoryStats, true);

    while (MMSTATE.GameState == -1)
    {
        datTimeManager::Update();
        ioInput::Poll();
        gfxPipeline::Manage();
        eqEventHandler::SuperQ->Update();
        MMAUDMGRPTR->Update();

        ROOT.Update();

        if (update)
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

void MainPhase(bool parsedStateArgs, int firstLoad)
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

            parsedStateArgs = true;
        } break;

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

            parsedStateArgs = false;
        } break;
    }

    LoadingScreenBitmap->Release();
    LoadingScreenBitmap = nullptr;

    SetFocus(hwndMain);
    MMSTATE.GameState = -1;
    datDisplayUsed("Just before GameLoop");

    GameLoop(parsedStateArgs);

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

run_once([]
{
    new (&ROOT) asRoot();
});