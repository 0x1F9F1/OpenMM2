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

#include "sdlpipe.h"

#include "core/output.h"
#include "d3dpipe.h"
#include "data/args.h"
#include "winpriv.h"

// #define GL_GLEXT_PROTOTYPES 1
// #include <SDL_opengles2.h>

#include <SDL_syswm.h>

SDL_Window* sdlPipeline::sm_Window = nullptr;

#define SDL_ASSERT(expression)                                          \
    do                                                                  \
    {                                                                   \
        if (!(expression))                                              \
        {                                                               \
            Errorf("SDL2: %s failed: %s", #expression, SDL_GetError()); \
        }                                                               \
    } while (false)

void sdlPipeline::gfxWindowCreate(char const* windowName)
{
    if (sm_Window != nullptr)
    {
        return;
    }

    SDL_Init(SDL_INIT_EVERYTHING);

    if (lpWindowTitle)
    {
        windowName = lpWindowTitle;
    }

    Uint32 sdlStyle = SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS | SDL_WINDOW_MOUSE_FOCUS;

    if (inWindow)
    {
        bWinBorder = !(datArgParser::Exists("noborder") || datArgParser::Exists("borderless"));

        if (!bWinBorder)
        {
            sdlStyle |= SDL_WINDOW_BORDERLESS;
        }
    }
    else
    {
        sdlStyle |= SDL_WINDOW_FULLSCREEN_DESKTOP;
    }

    gfxPipeline::gfxWindowMove(false);

    sm_Window = SDL_CreateWindow(windowName, gfxPipeline::m_X, gfxPipeline::m_Y, 640, 480, sdlStyle);

    SDL_ASSERT(sm_Window != nullptr);

    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(sm_Window, &wmInfo);
    hwndMain = wmInfo.info.win.window;

    // TODO: Use SDL2 Events
    SetWindowLongPtrA(hwndMain, GWL_WNDPROC, (LONG_PTR) &gfxPipeline::gfxWindowProc);

    if (inWindow)
    {
        gfxPipeline::gfxWindowUpdate(false);
    }

    SDL_ShowCursor(SDL_DISABLE);
    SDL_ShowWindow(sm_Window);
}

void sdlPipeline::gfxWindowUpdate(bool isOpen)
{
    SDL_SetWindowSize(sm_Window, gfxPipeline::m_iWidth, gfxPipeline::m_iHeight);
    SDL_SetWindowPosition(sm_Window, gfxPipeline::m_X, gfxPipeline::m_Y);

    if (isOpen)
    {
        SDL_UpdateWindowSurface(sm_Window);
    }
}

void sdlPipeline::gfxWindowMove(bool isOpen)
{
    SDL_Rect bounds;
    SDL_ASSERT(SDL_GetDisplayBounds(0, &bounds) == 0);

    gfxPipeline::m_X = bounds.x + (bounds.w - gfxPipeline::m_iWidth) / 2;
    gfxPipeline::m_Y = bounds.y + (bounds.h - gfxPipeline::m_iHeight) / 2;

    gfxWindowUpdate(isOpen);
}

void sdlPipeline::SetTitle(const char* title)
{
    lpWindowTitle = title;

    if (sm_Window)
    {
        SDL_SetWindowTitle(sm_Window, title);
    }
}

void sdlPipeline::EndGfx2D()
{
    if (!inWindow)
    {
        if (lpDD)
        {
            ageDebug(gfxDebug, "RESTORING DISPLAY MODE");

            lpDD->RestoreDisplayMode();
            lpDD->SetCooperativeLevel(hwndMain, 8);
        }
    }
    else if (lpDD)
    {
        DX_ASSERT(lpDD->EnumSurfaces(DDENUMSURFACES_DOESEXIST | DDENUMSURFACES_ALL, NULL, 0, EnumAllSurfCallback));

        DX_RELEASE(lpDD);
    }

    if (sm_Window)
    {
        SDL_DestroyWindow(sm_Window);
        sm_Window = nullptr;
        hwndMain = NULL;
    }
}