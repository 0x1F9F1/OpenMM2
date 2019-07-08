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

#include "input/eventq.h"
#include "input/input.h"
#include "input/mouse.h"

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

static void LogSDL(void* /*userdata*/, int /*category*/, SDL_LogPriority priority, const char* message)
{
    int level = OUTPUT_LEVEL_MESSAGE;

    switch (priority)
    {
        case SDL_LOG_PRIORITY_INFO: level = OUTPUT_LEVEL_MESSAGE; break;
        case SDL_LOG_PRIORITY_WARN: level = OUTPUT_LEVEL_WARNING; break;
        case SDL_LOG_PRIORITY_ERROR: level = OUTPUT_LEVEL_ERROR; break;
        case SDL_LOG_PRIORITY_CRITICAL: level = OUTPUT_LEVEL_FATAL; break;
        default: return;
    }

    Outputf(level, "%s", message);
}

void sdlPipeline::InitSDL()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_LogSetOutputFunction(&LogSDL, nullptr);
}

void sdlPipeline::gfxWindowCreate(char const* windowName)
{
    if (sm_Window != nullptr)
    {
        return;
    }

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
    SDL_Rect bounds {};
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

void HandleWindowEvent(SDL_WindowEvent& e)
{
    switch (e.event)
    {
        case SDL_WINDOWEVENT_FOCUS_GAINED:
            ageDebug(gfxDebug, "gfxWindowProc: WM_ACTIVATEAPP, Regaining focus.");
            gfxPipeline::m_EvtFlags &= ~2;
            break;

        case SDL_WINDOWEVENT_FOCUS_LOST:
            ageDebug(gfxDebug, "gfxWindowProc: WM_ACTIVATEAPP, Losing focus.");
            if (gfxLostCallback)
            {
                gfxLostCallback();
            }
            gfxPipeline::m_EvtFlags |= 2;
            break;

        case SDL_WINDOWEVENT_CLOSE:
            gfxPipeline::m_EvtFlags &= ~2;
            gfxPipeline::m_EvtFlags |= 1;
            break;

        case SDL_WINDOWEVENT_ENTER:
        case SDL_WINDOWEVENT_LEAVE: ioMouse::m_WindowButtons = 0; break;
    }
}

void HandleMouseButtonEvent(SDL_MouseButtonEvent& e)
{
    ioMouse::m_X = e.x;
    ioMouse::m_Y = e.y;

    switch (e.button)
    {
        case SDL_BUTTON_LEFT:
            if (e.state == SDL_PRESSED)
            {
                ioEventQueue::Queue(ioEvent::LButtonDown, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons |= 1;
            }
            else
            {
                ioEventQueue::Queue(ioEvent::LButtonUp, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons &= 0xFFFFFFFE;
            }
            break;

        case SDL_BUTTON_RIGHT:
            if (e.state == SDL_PRESSED)
            {
                ioEventQueue::Queue(ioEvent::RButtonDown, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons |= 2;
            }
            else
            {
                ioEventQueue::Queue(ioEvent::RButtonUp, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons &= 0xFFFFFFFD;
            }
            break;

        case SDL_BUTTON_MIDDLE:
            if (e.state == SDL_PRESSED)
            {
                ioEventQueue::Queue(ioEvent::MButtonDown, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons |= 4;
            }
            else
            {
                ioEventQueue::Queue(ioEvent::MButtonUp, ioMouse::m_X, ioMouse::m_Y, 0);
                ioMouse::m_WindowButtons &= 0xFFFFFFFB;
            }
            break;
    }
}

void HandleMouseMotionEvent(SDL_MouseMotionEvent& e)
{
    ioMouse::m_X = e.x;
    ioMouse::m_Y = e.y;

    ioEventQueue::Queue(ioEvent::MouseMove, ioMouse::m_X, ioMouse::m_Y, 0);
}

int ConvertSDLKeyCode(SDL_Keycode key)
{
    switch (key)
    {
        case SDLK_ESCAPE: return 1;
        case SDLK_1: return 2;
        case SDLK_2: return 3;
        case SDLK_3: return 4;
        case SDLK_4: return 5;
        case SDLK_5: return 6;
        case SDLK_6: return 7;
        case SDLK_7: return 8;
        case SDLK_8: return 9;
        case SDLK_9: return 10;
        case SDLK_0: return 11;
        case SDLK_BACKSPACE: return 14;
        case SDLK_TAB: return 15;
        case SDLK_q: return 16;
        case SDLK_w: return 17;
        case SDLK_e: return 18;
        case SDLK_r: return 19;
        case SDLK_t: return 20;
        case SDLK_y: return 21;
        case SDLK_u: return 22;
        case SDLK_i: return 23;
        case SDLK_o: return 24;
        case SDLK_p: return 25;
        case SDLK_RETURN: return 28;
        case SDLK_LCTRL: return 29;
        case SDLK_a: return 30;
        case SDLK_s: return 31;
        case SDLK_d: return 32;
        case SDLK_f: return 33;
        case SDLK_g: return 34;
        case SDLK_h: return 35;
        case SDLK_j: return 36;
        case SDLK_k: return 37;
        case SDLK_l: return 38;
        case SDLK_LSHIFT: return 42;
        case SDLK_z: return 44;
        case SDLK_x: return 45;
        case SDLK_c: return 46;
        case SDLK_v: return 47;
        case SDLK_b: return 48;
        case SDLK_n: return 49;
        case SDLK_m: return 50;
        case SDLK_RSHIFT: return 54;
        case SDLK_KP_MULTIPLY: return 55;
        case SDLK_SPACE: return 57;
        case SDLK_CAPSLOCK: return 58;
        case SDLK_F1: return 59;
        case SDLK_F2: return 60;
        case SDLK_F3: return 61;
        case SDLK_F4: return 62;
        case SDLK_F5: return 63;
        case SDLK_F6: return 64;
        case SDLK_F7: return 65;
        case SDLK_F8: return 66;
        case SDLK_F9: return 67;
        case SDLK_F10: return 68;
        case SDLK_KP_7: return 71;
        case SDLK_KP_8: return 72;
        case SDLK_KP_9: return 73;
        case SDLK_KP_MINUS: return 74;
        case SDLK_KP_4: return 75;
        case SDLK_KP_5: return 76;
        case SDLK_KP_6: return 77;
        case SDLK_KP_PLUS: return 78;
        case SDLK_KP_1: return 79;
        case SDLK_KP_2: return 80;
        case SDLK_KP_3: return 81;
        case SDLK_KP_0: return 82;
        case SDLK_KP_DECIMAL: return 83;
        case SDLK_F11: return 87;
        case SDLK_F12: return 88;
        case SDLK_F13: return 100;
        case SDLK_F14: return 101;
        case SDLK_F15: return 102;
        case SDLK_RCTRL: return 157;
        case SDLK_KP_DIVIDE: return 181;
        case SDLK_HOME: return 199;
        case SDLK_UP: return 200;
        case SDLK_PRIOR: return 201;
        case SDLK_LEFT: return 203;
        case SDLK_RIGHT: return 205;
        case SDLK_END: return 207;
        case SDLK_DOWN: return 208;
        case SDLK_PAGEDOWN: return 209;
        case SDLK_INSERT: return 210;
        case SDLK_DELETE: return 211;
        case SDLK_LGUI: return 219;
        case SDLK_RGUI: return 220;
        case SDLK_MENU: return 221;

        default: return 0;
    }
}

void HandleKeyboardEvent(SDL_KeyboardEvent& e)
{
    if (e.state == SDL_PRESSED)
    {
        ioEventQueue::Queue(ioEvent::KeyDown, 0, 0, ConvertSDLKeyCode(e.keysym.sym));
    }
    else
    {
        ioEventQueue::Queue(ioEvent::KeyUp, 0, 0, ConvertSDLKeyCode(e.keysym.sym));
    }
}

void HandleTextInput(SDL_TextInputEvent& e)
{
    // TODO: Handle Unicode
    for (char* c = e.text; *c != '\0'; ++c)
    {
        if (*c < 0x7F)
            ioEventQueue::Queue(ioEvent::Char, 0, 0, *c);
    }
}

void HandleEvent(SDL_Event& e)
{
    switch (e.type)
    {
        case SDL_QUIT:
            gfxPipeline::m_EvtFlags &= ~2;
            gfxPipeline::m_EvtFlags |= 1;
            break;

        case SDL_WINDOWEVENT: HandleWindowEvent(e.window); break;

        case SDL_MOUSEBUTTONUP:
        case SDL_MOUSEBUTTONDOWN: HandleMouseButtonEvent(e.button); break;

        case SDL_MOUSEMOTION: HandleMouseMotionEvent(e.motion); break;

        case SDL_KEYDOWN:
        case SDL_KEYUP: HandleKeyboardEvent(e.key); break;

        case SDL_TEXTINPUT: HandleTextInput(e.text); break;
    }
}

void sdlPipeline::Manage()
{
    SDL_Event e;

    while (true)
    {
        bool poll = !(gfxPipeline::m_EvtFlags & 0xA) || (gfxPipeline::m_EvtFlags & 0x10);

        if (poll ? SDL_PollEvent(&e) : SDL_WaitEvent(&e))
        {
            HandleEvent(e);
        }
        else
        {
            break;
        }
    }

    ioInput::Update();
}