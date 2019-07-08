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

#include "d3dpipe.h"

#include "mmcityinfo/state.h"

#include "testgame.h"

#include "data/args.h"

#include "gfx/d3dpipe.h"
#include "gfx/rstate.h"
#include "gfx/texmovie.h"
#include "gfx/texture.h"
#include "gfx/winpriv.h"

#include "input/input.h"
#include "input/mouse.h"

#include "localize/localize.h"

#include "sdlpipe.h"

inline extern_var(0x6844B4, bool, g_VisualizeZ);

void gfxPipeline::SetRes(int width, int height, int cdepth, int zdepth, bool parseArgs)
{
    (void) (parseArgs);

    if (datArgParser::Exists("ref"))
    {
        useSoftware = 1;
        useReference = 1;
    }
    else if (datArgParser::Exists("blade") || datArgParser::Exists("bladed"))
    {
        useSoftware = 1;
        useBlade = 1;
    }
    else if (datArgParser::Exists("swage"))
    {
        useSoftware = 1;
        useAgeSoftware = 1;
    }
    else if (datArgParser::Exists("sw"))
    {
        useSoftware = 1;
    }

    if (datArgParser::Exists("sysmem"))
    {
        useSysMem = 1;
    }
    if (datArgParser::Exists("triple"))
    {
        tripleBuffer = 1;
    }

    if (datArgParser::Exists("nomultitexture") || datArgParser::Exists("nomt"))
    {
        useMultiTexture = 0;
    }
    if (datArgParser::Exists("novblank") || datArgParser::Exists("novsync"))
    {
        novblank = 1;
    }
    if (datArgParser::Exists("nohwtnl"))
    {
        allowHWTnL = 0;
    }

    if (datArgParser::Exists("primary"))
    {
        useInterface = 0;
    }
    else
    {
        datArgParser::Get("display", 0, useInterface);
    }
    if (datArgParser::Exists("single"))
    {
        pageFlip = 0;
    }

    if (datArgParser::Exists("window") || datArgParser::Exists("windowed"))
    {
        inWindow = 1;
    }
    else if (datArgParser::Exists("fs") || datArgParser::Exists("fullscreen"))
    {
        inWindow = 0;
    }

    int bitDepth = 0;
    if (datArgParser::Get("bpp", 0, bitDepth) || datArgParser::Get("bitdepth", 0, bitDepth))
    {
        cdepth = bitDepth;
        zdepth = bitDepth;
    }
    else
    {
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

            if ((lpDD->GetDisplayMode(&ddSurfaceDesc) != DD_OK) || ((int) ddSurfaceDesc.dwWidth != m_iWidth) ||
                ((int) ddSurfaceDesc.dwHeight != m_iHeight))
            {
                if (lpDD->SetDisplayMode(m_iWidth, m_iHeight, m_ColorDepth, 0, 0) != DD_OK)
                {
                    Displayf("[gfxPipeline::SetRes]: SHIT! Failed to set the display mode!");
                }
            }
        }
    }

    ioMouse::InvWidth = (1.0f / m_fWidth);
    ioMouse::InvHeight = (1.0f / m_fHeight);
}

void gfxPipeline::gfxWindowCreate(const char* windowName)
{
    sdlPipeline::gfxWindowCreate(windowName);
}

void gfxPipeline::gfxWindowMove(bool isOpen)
{
    sdlPipeline::gfxWindowMove(isOpen);
}

void gfxPipeline::gfxWindowUpdate(bool isOpen)
{
    sdlPipeline::gfxWindowUpdate(isOpen);
}

void gfxPipeline::SetTitle(const char* title)
{
    sdlPipeline::SetTitle(title);
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

    DX_ASSERT(pDirectDrawCreateEx(lpInterfaceGUID ? &sInterfaceGUID : 0, (LPVOID*) &lpDD, IID_IDirectDraw7, NULL));

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

    DX_ASSERT(lpDD->SetCooperativeLevel(hwndMain,
        inWindow ? (DDSCL_FPUSETUP | DDSCL_NORMAL)
                 : (DDSCL_FPUSETUP | DDSCL_EXCLUSIVE | DDSCL_ALLOWREBOOT | DDSCL_FULLSCREEN)));

    if (!inWindow)
    {
        DX_ASSERT(lpDD->SetDisplayMode(m_iWidth, m_iHeight, m_ColorDepth, 0, 0));
    }

    ShowCursor(FALSE);

    return true;
}

void gfxPipeline::EndGfx2D(void)
{
    sdlPipeline::EndGfx2D();
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

void gfxPipeline::CopyBitmap(
    int destX, int destY, gfxBitmap* bitmap, int srcX, int srcY, int width, int height, bool srcColorKey)
{
    RECT position = {srcX, srcY, srcX + width, srcY + height};

    lpdsRend->BltFast(destX, destY, bitmap->Surface, &position,
        (srcColorKey ? DDBLTFAST_SRCCOLORKEY : DDBLTFAST_NOCOLORKEY) | DDBLTFAST_WAIT);
}

void gfxPipeline::EnumDDAdapters(HMODULE hGfxLib, LPDDENUMCALLBACKA lpCallback, LPVOID lpContext)
{
    auto pDirectDrawEnumerateExA =
        (decltype(&DirectDrawEnumerateExA)) GetProcAddress(hGfxLib, "DirectDrawEnumerateExA");
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

void gfxPipeline::Manage()
{
    tagMSG Msg;

    while (true)
    {
        bool success =
            (!(m_EvtFlags & 0xA) || m_EvtFlags & 0x10) ? PeekMessageA(&Msg, 0, 0, 0, 1u) : GetMessageA(&Msg, 0, 0, 0);

        if (success)
        {
            TranslateMessage(&Msg);
            DispatchMessageA(&Msg);
        }
        else
        {
            break;
        }
    }

    ioInput::Update();
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
                case PBT_APMSUSPEND: Displayf("gfxPipeline::gfxWindowProc -> PBT_APMSUSPEND heard."); break;
                case PBT_APMRESUMECRITICAL:
                    Displayf("gfxPipeline::gfxWindowProc -> PBT_APMRESUMECRITICAL recieved.");
                    break;
                case PBT_APMRESUMESUSPEND:
                    Displayf("gfxPipeline::gfxWindowProc -> PBT_APMRESUMESUSPEND recieved.");
                    break;
            }
        }
        break;

        case WM_CLOSE:
        {
            ageDebug(gfxDebug, "gfxWindowProc: WM_CLOSE received");

            gfxPipeline::m_EvtFlags &= ~2;
            gfxPipeline::m_EvtFlags |= 1;

            return 0;
        }
        break;

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
        }
        break;

        case WM_SYSCOMMAND:
        {
            if (GET_SC_WPARAM(wParam) == SC_KEYMENU && !(gfxPipeline::m_EvtFlags & 2))
            {
                return 0;
            }
        }
        break;
    }

    return InputWindowProc(hWnd, message, wParam, lParam);
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

template <unsigned int A, unsigned int R, unsigned int G, unsigned int B>
struct ColorFlags
{
    enum : unsigned int
    {
        // Bit Shifts (created in reverse order)
        SB = 0,
        SG = SB + B,
        SR = SG + G,
        SA = SR + R,

        // Bit Masks
        MA = ((1u << A) - 1u),
        MR = ((1u << R) - 1u),
        MG = ((1u << G) - 1u),
        MB = ((1u << B) - 1u),

        // Shifted Bit Masks
        SMA = MA << SA,
        SMR = MR << SR,
        SMG = MG << SG,
        SMB = MB << SB,
    };
};

template <unsigned int OA, unsigned int OR, unsigned int OG, unsigned int OB, unsigned int NA, unsigned int NR,
    unsigned int NG, unsigned int NB>
inline unsigned int ConvertColor(const unsigned int color)
{
    using OF = ColorFlags<OA, OR, OG, OB>;
    using NF = ColorFlags<NA, NR, NG, NB>;

    return (((color & OF::SMA) >> OF::SA) * NF::MA / (OF::MA ? OF::MA : 1) << NF::SA) |
        (((color & OF::SMR) >> OF::SR) * NF::MG / (OF::MR ? OF::MR : 1) << NF::SR) |
        (((color & OF::SMG) >> OF::SG) * NF::MG / (OF::MG ? OF::MG : 1) << NF::SG) |
        (((color & OF::SMB) >> OF::SB) * NF::MB / (OF::MB ? OF::MB : 1) << NF::SB);
}

inline extern_var(0x682FA8, char[8][32], interfaceNames);

unsigned int GetPixelFormatColor(DDPIXELFORMAT* lpDDPixelFormat, uint32_t color)
{
    switch (lpDDPixelFormat->dwGBitMask)
    {
        // 555
        case 0x3E0:
            return ConvertColor<0, 8, 8, 8, 0, 5, 5, 5>(color);
            // 565
        case 0x7E0:
            return ConvertColor<0, 8, 8, 8, 0, 5, 6, 5>(color);
            // 888
        case 0xFF00:
            // already in the right format
            return color;
    }
    // unknown format
    return 0xFFFFFFFF;
};

bool gfxAutoDetect(bool* success)
{
    return stub<cdecl_t<bool, bool*>>(0x4ABE00, success);
}

HRESULT CALLBACK DeviceCallback(
    LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC7 lpDeviceDesc, LPVOID lpContext)
{
    return stub<LPD3DENUMDEVICESCALLBACK7>(0x4AC3D0, lpDeviceDescription, lpDeviceName, lpDeviceDesc, lpContext);
}

BOOL PASCAL DDEnumProc(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext)
{
    (void) lpContext;

    ageDebug(gfxDebug, "D3D: GUID %x Description [%s] DriverName [%s]", lpGUID, lpDriverDescription, lpDriverName);

    if (interfaceCount >= 8)
    {
        ageDebug(gfxDebug, "D3D: Too Many Interfaces");

        return false;
    }

    strncpy_s(interfaceNames[interfaceCount++], lpDriverDescription, 31);
    lpInterfaceGUID = lpGUID;

    if (lpGUID)
    {
        memcpy(&sInterfaceGUID, lpGUID, sizeof(sInterfaceGUID));
    }

    if (gfxInterfaceEnumIdx)
    {
        --gfxInterfaceEnumIdx;

        return true;
    }

    return false;
}

BOOL PASCAL MultiMonCallback(
    GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext, HMONITOR hMonitor)
{
    ageDebug(gfxDebug, "D3D: Callback: lpGUID = %x, %s %s %x", lpGUID, lpDriverDescription, lpDriverName, hMonitor);

    return gfxDDEnumCallback(lpGUID, lpDriverDescription, lpDriverName, lpContext);
}

HRESULT PASCAL EnumAllSurfCallback(LPDIRECTDRAWSURFACE7 lpSurface, LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext)
{
    (void) lpContext;

    Warningf("D3D: Unreleased surface: A %d by %d surface.", lpSurfaceDesc->dwWidth, lpSurfaceDesc->dwHeight);

    lpSurface->Release();

    return 1;
}

HRESULT PASCAL ResCallback(LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext)
{
    return stub<decltype(&ResCallback)>(0x4AC6F0, lpSurfaceDesc, lpContext);
}

inline extern_var(0x684518, decltype(&DirectDrawCreateEx), lpDirectDrawCreateEx);

BOOL PASCAL AutoDetectCallback(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext)
{
    (void) lpContext;

    if (lpDirectDrawCreateEx(lpGUID, (LPVOID*) &lpDD, IID_IDirectDraw7, nullptr) == DD_OK)
    {
        gfxInterface* currentInterface = &gfxInterfaces[gfxInterfaceCount++];

        strcpy_s(currentInterface->Name, lpDriverDescription);

        currentInterface->DeviceCaps = 1;
        currentInterface->AcceptableDepths = gfxDepthFlag_Depth32;

        DDDEVICEIDENTIFIER2 ddDeviceIdentifier {};

        if (lpDD->GetDeviceIdentifier(&ddDeviceIdentifier, 0) == DD_OK)
        {
            currentInterface->VendorID = ddDeviceIdentifier.dwVendorId;
            currentInterface->DeviceID = ddDeviceIdentifier.dwDeviceId;
            currentInterface->GUID = ddDeviceIdentifier.guidDeviceIdentifier;
        }

        if (lpDD->QueryInterface(IID_IDirect3D7, reinterpret_cast<LPVOID*>(&lpD3D)) == DD_OK)
        {
            lpD3D->EnumDevices(&DeviceCallback, currentInterface);
            lpD3D->Release();

            lpD3D = nullptr;
        }

        currentInterface->DeviceType = gfxDeviceType_HardwareWithTnL;

        currentInterface->ResolutionCount = 0;
        currentInterface->ResolutionChoice = 0;

        DWORD availableMemory = 0x40000000; // 1GB = 1024 * 1024 * 1024

        DDSCAPS2 ddsCaps {};

        ddsCaps.dwCaps = DDSCAPS_VIDEOMEMORY | DDSCAPS_LOCALVIDMEM;

        if (lpDD->GetAvailableVidMem(&ddsCaps, &availableMemory, nullptr) != DD_OK)
        {
            Displayf("%s: Couldn't get video memory, using default", lpDriverName);
        }

        Displayf("%s: Total video memory: %dMB", lpDriverName, (availableMemory >> 20));

        currentInterface->AvailableMemory = availableMemory;

        gfxMaxScreenWidth = 0;
        gfxMaxScreenHeight = 0;

        lpDD->EnumDisplayModes(0, nullptr, currentInterface, &ResCallback);
        lpDD->Release();

        lpDD = nullptr;
    }

    return TRUE;
}

run_once([] {
    auto_hook(0x4AC030, AutoDetectCallback);
    auto_hook(0x4A8CE0, gfxPipeline::SetRes);
    auto_hook(0x4A8A90, gfxPipeline::gfxWindowCreate);
});
