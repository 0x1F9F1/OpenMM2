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

#include "d3dpipe.h"
#include "font.h"
#include "loadimg.h"
#include "rstate.h"
#include "sdlpipe.h"
#include "texmovie.h"
#include "texture.h"
#include "winpriv.h"

#include "input/input.h"
#include "input/mouse.h"

#include "localize/localize.h"

inline extern_var(0x6844B4, bool, g_VisualizeZ);

void gfxPipeline::SetRes(int width, int height, int cdepth, int zdepth, bool parseArgs)
{
    (void) (parseArgs);

    useSoftware = false;
    useReference = false;
    useBlade = false;
    useAgeSoftware = false;
    useSysMem = false;
    allowHWTnL = true;

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

    ioMouse::m_InvWidth = (1.0f / m_fWidth);
    ioMouse::m_InvHeight = (1.0f / m_fHeight);
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
    const char* gfxLibName = "ddraw.dll";

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
    DDSURFACEDESC2 ddSurfaceDesc;
    memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
    ddSurfaceDesc.dwSize = sizeof(ddSurfaceDesc);

    ddSurfaceDesc.dwWidth = gfxPipeline::m_iWidth;
    ddSurfaceDesc.dwHeight = gfxPipeline::m_iHeight;
    ddSurfaceDesc.ddsCaps.dwCaps = DDSCAPS_VIDEOMEMORY | DDSCAPS_3DDEVICE | DDSCAPS_OFFSCREENPLAIN;
    ddSurfaceDesc.dwFlags = 7;

    lpDD->CreateSurface(&ddSurfaceDesc, &lpdsBack, 0);

    lpdsRend = lpdsBack;
    lpdsBack->AddRef();

    DDPIXELFORMAT ddPixelFormat;
    ddPixelFormat.dwSize = sizeof(ddPixelFormat);
    lpdsBack->GetPixelFormat(&ddPixelFormat);
    gfxPipeline::m_ColorDepth = (ddPixelFormat.dwRGBBitCount + 1) & 248;

    ddSurfaceDesc.dwFlags = 1;
    ddSurfaceDesc.ddsCaps.dwCaps = 8704;
    lpDD->CreateSurface(&ddSurfaceDesc, &lpdsFront, 0);
    lpDD->CreateClipper(0, &lpClip, 0);
    lpClip->SetHWnd(0, hwndMain);
    lpdsFront->SetClipper(lpClip);
    lpDD->QueryInterface(IID_IDirect3D7, (LPVOID*) &lpD3D);

    memset(&ddSurfaceDesc.ddpfPixelFormat, 0, sizeof(ddSurfaceDesc.ddpfPixelFormat));

    lpD3D->EnumZBufferFormats(
        IID_IDirect3DHALDevice, (LPD3DENUMPIXELFORMATSCALLBACK) gfxPipeline::gfxEnumZ, &ddSurfaceDesc.ddpfPixelFormat);

    ddSurfaceDesc.dwHeight = gfxPipeline::m_iHeight;
    ddSurfaceDesc.dwWidth = gfxPipeline::m_iWidth;
    ddSurfaceDesc.dwFlags = 4103;
    ddSurfaceDesc.ddsCaps.dwCaps = DDSCAPS_VIDEOMEMORY | DDSCAPS2_D3DTEXTUREMANAGE;
    lpDD->CreateSurface(&ddSurfaceDesc, &lpdsZ, 0);
    lpdsRend->AddAttachedSurface(lpdsZ);

    lpD3D->CreateDevice(IID_IDirect3DTnLHalDevice, lpdsRend, &lpD3DDev);

    sm_UseInternal = false;
    useNativeVBs = true;
    useHWTnL = true;

    g_Allow8BitImages = false;

    g_Tex555 = false;
    g_Tex565 = false;

    // lpD3DDev->EnumTextureFormats(gfxPipeline::gfxEnumTexs, 0);

    D3DDEVICEDESC7 d3dDeviceDesc7;
    lpD3DDev->GetCaps(&d3dDeviceDesc7);

    int maxTextures = 0;

    if (d3dDeviceDesc7.dwDevCaps & 0x4000 || d3dDeviceDesc7.wMaxSimultaneousTextures <= 1u || !useMultiTexture)
    {
        maxTextures = 1;
    }
    else
    {
        maxTextures = d3dDeviceDesc7.wMaxSimultaneousTextures;
    }
    gfxRenderState::sm_MaxTextures = maxTextures;

    ageDebug(gfxDebug, "D3D: Device supports %d texture(s) per primitive.", maxTextures);

    gfxRenderState::sm_MaxBlendMatrices = d3dDeviceDesc7.wMaxVertexBlendMatrices - 1;

    ageDebug(gfxDebug, "D3D: Device supports %d extra blend matrices per vertex.",
        d3dDeviceDesc7.wMaxVertexBlendMatrices - 1);

    int maxActiveLights = d3dDeviceDesc7.dwMaxActiveLights;
    gfxRenderState::sm_MaxActiveLights = d3dDeviceDesc7.dwMaxActiveLights;
    gfxRenderState::sm_SupportsBlendWithOne =
        (d3dDeviceDesc7.dpcTriCaps.dwSrcBlendCaps & LOBYTE(d3dDeviceDesc7.dpcTriCaps.dwDestBlendCaps) & 2) != 0;
    if (d3dDeviceDesc7.dwMaxActiveLights == -1)
    {
        maxActiveLights = 8;
        gfxRenderState::sm_MaxActiveLights = 8;
    }
    ageDebug(gfxDebug, "D3D: Device supports %d active lights.", maxActiveLights);
    ioInput::Begin(1);

    RSTATE.Init();
    LASTRSTATE.CopyFrom(RSTATE);

    RSTATE.Default();

    gfxViewport* viewport = gfxPipeline::CreateViewport();
    gfxPipeline::OrthoVP = viewport;

    viewport->Ortho(viewport->m_Viewport.dwX, viewport->m_Viewport.dwX + viewport->m_Viewport.dwWidth,
        viewport->m_Viewport.dwY + viewport->m_Viewport.dwHeight, viewport->m_Viewport.dwY, -1.0f, 1.0f);

    gfxViewport* v36 = gfxPipeline::CreateViewport();
    gfxPipeline::VP = v36;

    if (v36 != gfxPipeline::m_Viewport)
    {
        gfxPipeline::ForceSetViewport(v36);
    }

    gfxPipeline::BeginInternal();

    return true;
}

void gfxPipeline::BeginFrame(void)
{
    gfxCreateFont();
    gfxTexture::InitCache();

    lpD3DDev->BeginScene();

    gfxPipeline::ForceSetViewport(gfxPipeline::m_Viewport);
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
    sdlPipeline::Manage();
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

HRESULT __stdcall gfxPipeline::gfxEnumZ(LPDDPIXELFORMAT lpDDPixFmt, LPDDPIXELFORMAT lpContext)
{
    ageDebug(gfxDebug, "D3D: Z bit depth = %d", lpDDPixFmt->dwRGBBitCount);
    if (!lpContext->dwSize || lpDDPixFmt->dwRGBBitCount == gfxPipeline::m_ZDepth)
    {
        memcpy(lpContext, lpDDPixFmt, sizeof(DDPIXELFORMAT));
    }
    return 1;
}

HRESULT __stdcall gfxPipeline::gfxEnumTexs(LPDDPIXELFORMAT lpDDPixFmt, LPVOID /*lpContext*/)
{
    DWORD greenBitMask; // esi
    HRESULT result;     // eax

    ageDebug(gfxDebug, "D3D: Texture: Size = %d; Flags = %x; FourCC=%x; BitCount=%d; R/G/B/A=%x/%x/%x/%x",
        lpDDPixFmt->dwSize, lpDDPixFmt->dwFlags, lpDDPixFmt->dwFourCC, lpDDPixFmt->dwRGBBitCount,
        lpDDPixFmt->dwRBitMask, lpDDPixFmt->dwGBitMask, lpDDPixFmt->dwBBitMask, lpDDPixFmt->dwRGBAlphaBitMask);

    if (lpDDPixFmt->dwBBitMask != 0x1F)
    {
        return 1;
    }

    greenBitMask = lpDDPixFmt->dwGBitMask;
    if (greenBitMask == 0x3E0)
    {
        result = 1;
        g_Tex555 = 1;
    }
    else
    {
        result = 1;
        if (greenBitMask == 0x7E0)
        {
            g_Tex565 = 1;
        }
    }
    return result;
}

gfxViewport* gfxPipeline::CreateViewport()
{
    return stub<cdecl_t<gfxViewport*>>(0x4A90B0);
}

void gfxPipeline::ForceSetViewport(gfxViewport* viewport)
{
    stub<cdecl_t<void, gfxViewport*>>(0x4B2EE0, viewport);
}

inline extern_var(0x6A2A38, float, dword_6A2A38);
inline extern_var(0x6A2A3C, float, dword_6A2A3C);

void gfxPipeline::BeginInternal()
{
    dword_6A2A38 = gfxPipeline::m_fWidth;
    dword_6A2A3C = gfxPipeline::m_fHeight;
}

run_once([] {
    auto_hook(0x4AC030, AutoDetectCallback);
    auto_hook(0x4A8CE0, gfxPipeline::SetRes);
    auto_hook(0x4A8A90, gfxPipeline::gfxWindowCreate);
});

void gfxViewport::Ortho(float a3, float a4, float a5, float a6, float a7, float a8)
{
    return stub<member_func_t<void, gfxViewport, float, float, float, float, float, float>>(
        0x4B1800, this, a3, a4, a5, a6, a7, a8);
}
