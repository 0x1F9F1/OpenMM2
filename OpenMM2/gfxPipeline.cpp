#include "stdafx.h"
#include "gfxPipeline.h"

#include "datArgParser.h"
#include "Main.h"

#include "gfxTexture.h"
#include "gfxBitmap.h"
#include "mmStatePack.h"
#include "localize.h"
#include "d3dpipe.h"

#include "gfxRenderState.h"

instvar(0x6844B4, bool, g_VisualizeZ);

void gfxPipeline::SetRes(int width, int height, int cdepth, int zdepth, bool parseArgs)
{
    (void)(parseArgs);

    if (datArgParser::Exists("ref")) {
        useSoftware = 1;
        useReference = 1;
    }
    else if (datArgParser::Exists("blade") || datArgParser::Exists("bladed")) {
        useSoftware = 1;
        useBlade = 1;
    }
    else if (datArgParser::Exists("swage")) {
        useSoftware = 1;
        useAgeSoftware = 1;
    }
    else if (datArgParser::Exists("sw")) {
        useSoftware = 1;
    }

    if (datArgParser::Exists("sysmem")) {
        useSysMem = 1;
    }
    if (datArgParser::Exists("triple")) {
        tripleBuffer = 1;
    }

    if (datArgParser::Exists("nomultitexture") || datArgParser::Exists("nomt")) {
        useMultiTexture = 0;
    }
    if (datArgParser::Exists("novblank") || datArgParser::Exists("novsync")) {
        novblank = 1;
    }
    if (datArgParser::Exists("nohwtnl")) {
        enableHWTnL = 0;
    }

    if (datArgParser::Exists("primary")) {
        useInterface = 0;
    }
    else {
        datArgParser::Get("display", 0, useInterface);
    }
    if (datArgParser::Exists("single")) {
        pageFlip = 0;
    }

    if (datArgParser::Exists("window") || datArgParser::Exists("windowed")) {
        inWindow = 1;
    }
    else if (datArgParser::Exists("fs") || datArgParser::Exists("fullscreen")) {
        inWindow = 0;
    }

    int bitDepth = 0;
    if (datArgParser::Get("bpp", 0, bitDepth) || datArgParser::Get("bitdepth", 0, bitDepth)) {
        cdepth = bitDepth;
        zdepth = bitDepth;
    }
    else {
        datArgParser::Get("cdepth", 0, cdepth);
        datArgParser::Get("zdepth", 0, zdepth);
    }

    // We don't want to set the width/height if we are in a menu, it just fucks it up
    if (MMSTATE.GameState != 0)
    {
        if (datArgParser::Exists("max"))
        {
            HDC hdc = GetDC(NULL);

            width = GetDeviceCaps(hdc, HORZRES);
            height = GetDeviceCaps(hdc, VERTRES);

            ReleaseDC(0, hdc);
        }
        else
        {
            datArgParser::Get("width", 0, width);
            datArgParser::Get("height", 0, height);
        }
    }

    useSysMem = useSoftware;

    m_iWidth = width;
    m_iHeight = height;

    m_fWidth = float(width);
    m_fHeight = float(height);

    m_ColorDepth = cdepth;
    m_ZDepth = zdepth;

    gfxTexture::sm_Allow32 = (cdepth == 32);

    if (lpDD)
    {
        if (inWindow)
        {
            gfxWindowMove(true);
            gfxWindowUpdate(true);
        }
        else
        {
            DDSURFACEDESC2 ddSurfaceDesc;

            ddSurfaceDesc.dwSize = 0x7C;

            if ((lpDD->GetDisplayMode(&ddSurfaceDesc) != DD_OK) || ((int) ddSurfaceDesc.dwWidth != m_iWidth) || ((int) ddSurfaceDesc.dwHeight != m_iHeight))
            {
                if (lpDD->SetDisplayMode(
                    m_iWidth,
                    m_iHeight,
                    m_ColorDepth,
                    0,
                    0) != DD_OK)
                {
                    Displayf("[gfxPipeline::SetRes]: SHIT! Failed to set the display mode!");
                }
            }
        }
    }

    ioMouse__InvWidth = (1.0f / m_fWidth);
    ioMouse__InvHeight = (1.0f / m_fHeight);
}

void gfxPipeline::gfxWindowCreate(const char * windowName)
{
    if (hwndMain)
    {
        return;
    }

    if (lpWindowTitle)
    {
        windowName = lpWindowTitle;
    }

    if (ATOM_Class == NULL)
    {
        WNDCLASSA wc =
        {
            CS_HREDRAW | CS_VREDRAW,    /* style */
            gfxWindowProc,              /* lpfnWndProc */
            0,                          /* cbClsExtra */
            0,                          /* cbWndExtra */
            0,                          /* hInstance */
            LoadIconA(GetModuleHandleA(NULL), IconID ? IconID : IDI_APPLICATION),
            /* hIcon */
            LoadCursorA(0, IDC_ARROW),  /* hCursor */
            CreateSolidBrush(NULL),     /* hbrBackground */
            NULL,                       /* lpszMenuName */
            "gfxWindow",                /* lpszClassName */
        };

        ATOM_Class = RegisterClassA(&wc);
    }

    DWORD dwStyle = WS_POPUP;

    if (inWindow)
    {
        if (hwndParent)
        {
            dwStyle = WS_CHILD;
        }
        else if (hasBorder = !(datArgParser::Exists("noborder") || datArgParser::Exists("borderless")))
        {
            dwStyle |= (WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX);
        }
    }
    else
    {
        dwStyle |= WS_SYSMENU;
    }

    // update the position
    gfxWindowMove(false);

    hwndMain = CreateWindowExA(
        WS_EX_APPWINDOW,
        "gfxWindow",
        windowName,
        dwStyle,
        m_X,
        m_Y,
        640,
        480,
        hwndParent,
        0,
        0,
        0);

    if (inWindow)
    {
        gfxWindowUpdate(false);
    }

    SetCursor(NULL);
    ShowCursor(FALSE);

    ShowWindow(hwndMain, TRUE);
    UpdateWindow(hwndMain);
    SetFocus(hwndMain);
}

void gfxPipeline::gfxWindowMove(bool isOpen)
{
    HDC hDC = GetDC(NULL);
    int screenWidth = GetDeviceCaps(hDC, HORZRES);
    int screenHeight = GetDeviceCaps(hDC, VERTRES);
    ReleaseDC(0, hDC);

    m_X = (screenWidth - m_iWidth) / 2;
    m_Y = (screenHeight - m_iHeight) / 2;

    if (isOpen)
    {
        MoveWindow(hwndMain, m_X, m_Y, m_iWidth, m_iHeight, 0);
    }
}

void gfxPipeline::gfxWindowUpdate(bool isOpen)
{
    RECT rect;
    GetClientRect(hwndMain, &rect);

    MoveWindow(hwndMain, m_X, m_Y, (2 * m_iWidth - rect.right), (2 * m_iHeight - rect.bottom), isOpen);
}

void gfxPipeline::SetTitle(const char * title)
{
    lpWindowTitle = title;

    if (hwndMain)
    {
        SetWindowTextA(hwndMain, title);
    }
}

bool gfxPipeline::BeginGfx2D(void)
{
    const char* gfxLibName = useBlade ? "BLADE.DLL" : "DDRAW.DLL";

    HMODULE hGfxLib = LoadLibraryA(gfxLibName);

    if (!hGfxLib)
    {
        Errorf("Required DLL not found: %s", gfxLibName);

        return false;
    }

    auto pDirectDrawCreateEx = (decltype(&DirectDrawCreateEx)) GetProcAddress(hGfxLib, "DirectDrawCreateEx");

    if (!pDirectDrawCreateEx)
    {
        Errorf("Required DLL is corrupt: %s", gfxLibName);

        return false;
    }

    gfxPipeline::EnumDDAdapters(hGfxLib, DDEnumProc, 0);

    DX_ASSERT(pDirectDrawCreateEx(lpInterfaceGUID ? &sInterfaceGUID : 0, (LPVOID*)&lpDD, IID_IDirectDraw7, NULL));

    DDCAPS ddCaps;
    memset(&ddCaps, 0, sizeof(ddCaps));
    ddCaps.dwSize = sizeof(ddCaps);

    DX_ASSERT(lpDD->GetCaps(&ddCaps, 0));

    if (!(ddCaps.dwCaps2 & 0x80000))
    {
        ageDebug(gfxDebug, "D3D: Selected device can't render to a window.");

        inWindow = 0;
    }

    gfxPipeline::gfxWindowCreate("D3D Pipeline");

    _control87(0xA001Fu, 0xB001Fu);

    DX_ASSERT(lpDD->SetCooperativeLevel(hwndMain, inWindow ? DDSCL_FPUSETUP | DDSCL_NORMAL : DDSCL_FPUSETUP | DDSCL_EXCLUSIVE | DDSCL_ALLOWREBOOT | DDSCL_FULLSCREEN));

    if (!inWindow)
    {
        DX_ASSERT(lpDD->SetDisplayMode(m_iWidth, m_iHeight, m_ColorDepth, 0, 0));
    }

    ShowCursor(FALSE);

    return true;
}

void gfxPipeline::EndGfx2D(void)
{
    if (!inWindow)
    {
        ShowCursor(1);

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

    if (hwndMain)
    {
        DestroyWindow(hwndMain);

        hwndMain = 0;
    }
}

bool gfxPipeline::BeginGfx3D(void)
{
    return stub<cdecl_t<bool>>(0x4A96C0);
}

void gfxPipeline::BeginFrame(void)
{
    return stub<cdecl_t<void>>(0x4AA130);
}

void gfxPipeline::EndFrame(void)
{
    return stub<cdecl_t<void>>(0x4AA330);
}

void gfxPipeline::CopyBitmap(int destX, int destY, gfxBitmap * bitmap, int srcX, int srcY, int width, int height, bool srcColorKey)
{
    RECT position =
    {
        srcX,
        srcY,
        srcX + width,
        srcY + height
    };

    lpdsRend->BltFast(destX, destY, bitmap->Surface, &position, (srcColorKey ? DDBLTFAST_SRCCOLORKEY : DDBLTFAST_NOCOLORKEY) | DDBLTFAST_WAIT);
}

void gfxPipeline::EnumDDAdapters(HMODULE hGfxLib, LPDDENUMCALLBACKA lpCallback, LPVOID lpContext)
{
    auto pDirectDrawEnumerateExA = (decltype(&DirectDrawEnumerateExA)) GetProcAddress(hGfxLib, "DirectDrawEnumerateExA");
    auto pDirectDrawEnumerateA = (decltype(&DirectDrawEnumerateA)) GetProcAddress(hGfxLib, "DirectDrawEnumerateA");

    interfaceCount = 0;
    gfxInterfaceEnumIdx = useInterface;

    if (pDirectDrawEnumerateExA)
    {
        ageDebug(gfxDebug, "D3D: Using DirectDrawEnumerateEx...");

        gfxDDEnumCallback = lpCallback;

        pDirectDrawEnumerateExA(&MultiMonCallback, lpContext, 7);
    }
    else if (pDirectDrawEnumerateA)
    {
        pDirectDrawEnumerateA(lpCallback, lpContext);
    }
}

void gfxPipeline::BeginScene(void)
{
    if (useSoftware)
    {
        g_VisualizeZ = true;

        DX_ASSERT(lpD3DDev->BeginScene());
    }
}

void gfxPipeline::EndScene(void)
{
    RSTATE.SetTexture(0, nullptr);

    RSTATE.Flush();

    if (useSoftware)
    {
        g_VisualizeZ = false;
        
        DX_ASSERT(lpD3DDev->EndScene());
    }
}

void gfxPipeline::Clear(int flags, uint32_t color, float zValue, uint32_t stencil)
{
    return stub<cdecl_t<void, int, uint32_t, float, uint32_t>>(0x4AADC0, flags, color, zValue, stencil);
}

LRESULT CALLBACK InputWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    return stub<WNDPROC>(0x4BAD20, hWnd, message, wParam, lParam);
}

LRESULT CALLBACK gfxPipeline::gfxWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_POWERBROADCAST:
        {
            Displayf("gfxPipeline::gfxWindowProc -> WM_POWERBROADCAST recieved.");

            switch (wParam)
            {
            case PBT_APMQUERYSUSPEND:
                Displayf("gfxPipeline::gfxWindowProc -> PBT_APMQUERYSUSPEND recieved.");
                return BROADCAST_QUERY_DENY;
            case PBT_APMSUSPEND:
                Displayf("gfxPipeline::gfxWindowProc -> PBT_APMSUSPEND heard.");
                break;
            case PBT_APMRESUMECRITICAL:
                Displayf("gfxPipeline::gfxWindowProc -> PBT_APMRESUMECRITICAL recieved.");
                break;
            case PBT_APMRESUMESUSPEND:
                Displayf("gfxPipeline::gfxWindowProc -> PBT_APMRESUMESUSPEND recieved.");
                break;
            }
        } break;

        case WM_CLOSE:
        {
            ageDebug(gfxDebug, "gfxWindowProc: WM_CLOSE received");

            gfxPipeline::m_EvtFlags &= ~2;
            gfxPipeline::m_EvtFlags |= 1;

            return 0;
        } break;

        case WM_ACTIVATEAPP:
        {
            if (wParam)
            {
                ageDebug(gfxDebug, "gfxWindowProc: WM_ACTIVATEAPP, Regaining focus.");

                gfxPipeline::m_EvtFlags &= ~2;
            }
            else
            {
                ageDebug(gfxDebug, "gfxWindowProc: WM_ACTIVATEAPP, Losing focus.");

                if (gfxLostCallback)
                {
                    gfxLostCallback();
                }

                gfxPipeline::m_EvtFlags |= 2;
            }
        } break;

        case WM_SYSCOMMAND:
        {
            if (GET_SC_WPARAM(wParam) == SC_KEYMENU && !(gfxPipeline::m_EvtFlags & 2))
            {
                return 0;
            }
        } break;
    }

    return InputWindowProc(hWnd, message, wParam, lParam);
}

void ProgressRect(int x, int y, int width, int height, unsigned int color)
{
    DDPIXELFORMAT ddPixelFormat = { sizeof(ddPixelFormat) };
    lpdsRend->GetPixelFormat(&ddPixelFormat);

    DDBLTFX ddBltFx = { sizeof(ddBltFx) };
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

void ProgressCB(const char *unused, signed int progress)
{
    (void) unused;

    if (progress)
    {
        gfxPipeline::BeginFrame();

        if (LoadingScreenBitmap)
        {
            gfxPipeline::CopyBitmap(0, 0, LoadingScreenBitmap, 0, 0, LoadingScreenBitmap->Width, LoadingScreenBitmap->Height, 0);
        }

        if (MMSTATE.GameState)
        {
            ProgressRect(
                (int)(gfxPipeline::m_iWidth * 0.55),
                (int)(gfxPipeline::m_iHeight * 0.896),
                (int)(gfxPipeline::m_iWidth * 0.42343751 * progress * 0.01),
                (int)(gfxPipeline::m_iHeight * 0.02),
                ProgressBarColor);
        }
        else
        {
            ProgressRect(349, 448, 640 * progress / 284, 10, ProgressBarColor);
        }

        gfxPipeline::EndFrame();
    }
}

defnvar(0x682FA0, hwndParent);
defnvar(0x6830B8, hwndMain);
defnvar(0x68311C, lpWindowTitle);
defnvar(0x6830F0, ATOM_Class);
defnvar(0x683108, IconID);
defnvar(0x5CA3EC, pageFlip);
defnvar(0x5CA3ED, hasBorder);
defnvar(0x5CA3EE, useMultiTexture);
defnvar(0x5CA664, enableHWTnL);
defnvar(0x68451D, novblank);
defnvar(0x6830D0, inWindow);
defnvar(0x6830D1, isMaximized);
defnvar(0x6830D2, tripleBuffer);
defnvar(0x6830D3, useReference);
defnvar(0x6830D4, useSoftware);
defnvar(0x6830D5, useAgeSoftware);
defnvar(0x6830D6, useBlade);
defnvar(0x6830D7, useSysMem);
defnvar(0x6830D8, useInterface);

defnvar(0x6844B0, gfxMinScreenWidth);
defnvar(0x6844CC, gfxMinScreenHeight);
defnvar(0x6844FC, gfxMaxScreenWidth);
defnvar(0x6844D8, gfxMaxScreenHeight);
defnvar(0x6857D0, gfxTexReduceSize);

defnvar(0x684500, sm_UseInternal);

defnvar(0x6830E8, gfxLostCallback);

defnvar(0x6A38EC, ioMouse__InvWidth);
defnvar(0x6A38D4, ioMouse__InvHeight);

defnvar(0x6830F4, gfxPipeline::m_fWidth);
defnvar(0x683120, gfxPipeline::m_fHeight);
defnvar(0x683128, gfxPipeline::m_iWidth);
defnvar(0x683100, gfxPipeline::m_iHeight);
defnvar(0x6830E4, gfxPipeline::m_ZDepth);
defnvar(0x6830F8, gfxPipeline::m_ColorDepth);
defnvar(0x6830EC, gfxPipeline::m_X);
defnvar(0x683110, gfxPipeline::m_Y);

// 0x1 | Closing
// 0x2 | Lost Focus
defnvar(0x683114, gfxPipeline::m_EvtFlags);

defnvar(0x5E0CCC, LoadingScreenBitmap);
defnvar(0x6844B8, gfxRestoreCallback);

defnvar(0x683104, gfxDebug);

bool gfxAutoDetect(bool* success)
{
    return stub<cdecl_t<bool, bool*>>(0x4ABE00, success);
}

void gfxFindSafeAdapter()
{
    return stub<cdecl_t<void>>(0x4AC820);
}

void InitDirectDraw(void)
{
    if (gfxPipeline::BeginGfx2D())
    {
        return;
    }

    gfxFindSafeAdapter();

    if (gfxPipeline::BeginGfx2D())
    {
        return;
    }

    MessageBoxA(0, LANG_STRING(0xF6u), APPTITLE, MB_ICONERROR);

    exit(0);
}

void gfxDebugf(bool enabled, const char * format, ...)
{
    if (enabled)
    {
        va_list va;
        va_start(format, va);

        Printer(1, format, va);

        va_end(va);
    }
}

run_once([]
{
    hook::create_hook("gfxPipeline::SetRes", "Custom implementation allowing for more control of the window", 0x4A8CE0, &gfxPipeline::SetRes, HookType::JMP);
    hook::create_hook("gfxPipeline::gfxWindowCreate", "Custom implementation allowing for more control of the window", 0x4A8A90, &gfxPipeline::gfxWindowCreate, HookType::JMP);
});