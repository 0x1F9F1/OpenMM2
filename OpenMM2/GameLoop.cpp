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

instvar(0x5E0CE0, gfxBitmap*, LoadingBitmap);

void BeginPhase(bool splashScreen)
{
    return stub<cdecl_t<void, bool>>(0x401AA0, splashScreen);
}

void EndPhase(void)
{
    return stub<cdecl_t<void>>(0x401FC0);
}

void RestoreFocus(void)
{
    return stub<cdecl_t<void>>(0x4020F0);
}

void GameLoop(bool update)
{
    return stub<cdecl_t<void, bool>>(0x401A00, update);
}

void MainPhase(bool parsedStateArgs, int firstLoad)
{
    BeginPhase(gameState == 0);

    datTimeManager::RealTime(0.0);

    ROOT.ResChange(gfxPipeline::m_iWidth, gfxPipeline::m_iHeight);

    if (ROOT.IsPaused())
    {
        ROOT.SetPause(0);
    }

    gfxImage* imgReloading = gfxLoadImage("reloading", 0);

    if (imgReloading)
    {
        LoadingBitmap = gfxBitmap::Create(imgReloading, false);

        imgReloading->Release();

        if (LoadingBitmap)
        {
            gfxRestoreCallback = RestoreFocus;
        }
    }
    else
    {
        LoadingBitmap = 0;
    }

    EnableTextureVariantHandler = gameState == 1;

    mmReplayManager* replayManager = nullptr;
    mmInterface* uiInterface = nullptr;
    mmGameManager* gameManager = nullptr;

    switch (gameState)
    {
        case 0:
        {
            replayName[0] = '\0';

            replayManager = new mmReplayManager();
            uiInterface = new mmInterface();

            ROOT.AddChild(uiInterface);

            uiInterface->Reset();
            uiInterface->ShowMain(firstLoad);

            parsedStateArgs = 1;
        } break;

        case 1:
        {
            if (hasMusicCD && audioFlags & 4)
            {
                MMAUDMGRPTR->EnableCD();
                MMAUDMGRPTR->PlayCDTrack(2, 1);
            }

            datDisplayUsed("Before mmReplayManager");

            replayManager = new mmReplayManager();

            if (replayName[0])
            {
                replayManager->LoadReplay(replayName);
            }

            datDisplayUsed("Before mmGameManager");

            gameManager = new mmGameManager();

            replayManager->AddChild(gameManager);

            ROOT.AddChild(replayManager);

            replayManager->Player = PLAYER;

            if (replayName[0])
            {
                gameManager->ForceReplayUI();
            }

            parsedStateArgs = 0;
        } break;
    }

    lpLoadingBitmap->Release();
    lpLoadingBitmap = 0;

    SetFocus(hwndMain);
    gameState = -1;
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

    if (gameManager)
    {
        delete gameManager;
    }

    if (LoadingBitmap)
    {
        LoadingBitmap = 0;
        gfxRestoreCallback = 0;
    }

    EndPhase();
}