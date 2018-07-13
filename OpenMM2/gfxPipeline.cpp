#include "stdafx.h"
#include "gfxPipeline.h"

#include "Hooking.h"

#include "datArgParser.h"
#include "Main.h"

#include "gfxTexture.h"
#include "gfxInterface.h"

#include "ColorConvert.h"

uint32_t GetPixelFormatColor(DDPIXELFORMAT* lpDDPixelFormat, uint32_t color)
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

HRESULT CALLBACK DeviceCallback(LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC7 lpDeviceDesc, LPVOID lpContext)
{
    return stub<decltype(&DeviceCallback)>(0x4AC3D0, lpDeviceDescription, lpDeviceName, lpDeviceDesc, lpContext);
}

HRESULT PASCAL ResCallback(LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext)
{
    return stub<decltype(&ResCallback)>(0x4AC6F0, lpSurfaceDesc, lpContext);
}

BOOL __stdcall AutoDetectCallback(GUID *lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext)
{
    (void)(lpDriverName, lpContext);

    if (lpDirectDrawCreateEx(lpGUID, (LPVOID*)&lpDD, IID_IDirectDraw7, nullptr) == DD_OK)
    {
        gfxInterface *currentInterface = &gfxInterfaces[gfxInterfaceCount++];

        strncpy_s(currentInterface->Name, lpDriverDescription, std::size(currentInterface->Name));

        currentInterface->DeviceCaps = 1;
        currentInterface->AcceptableDepths = gfxInterface::gfxDepthFlags::Depth32;

        DDDEVICEIDENTIFIER2 ddDeviceIdentifier = { NULL };

        if (lpDD->GetDeviceIdentifier(&ddDeviceIdentifier, 0) == DD_OK)
        {
            currentInterface->VendorID = ddDeviceIdentifier.dwVendorId;
            currentInterface->DeviceID = ddDeviceIdentifier.dwDeviceId;
            currentInterface->GUID = ddDeviceIdentifier.guidDeviceIdentifier;
        }

        if (lpDD->QueryInterface(IID_IDirect3D7, (LPVOID*)&lpD3D) == DD_OK)
        {
            lpD3D->EnumDevices(&DeviceCallback, currentInterface);
            lpD3D->Release();

            lpD3D = nullptr;
        }

        currentInterface->DeviceType = gfxInterface::gfxDeviceType::HardwareWithTnL;

        currentInterface->ResolutionCount = 0;
        currentInterface->ResolutionChoice = 0;

        DWORD availableMemory = 0x40000000; // 1GB = 1024 * 1024 * 1024

        DDSCAPS2 ddsCaps = { NULL };

        ddsCaps.dwCaps = DDSCAPS_VIDEOMEMORY | DDSCAPS_LOCALVIDMEM;

        if (lpDD->GetAvailableVidMem(&ddsCaps, &availableMemory, NULL) != DD_OK)
        {
            Displayf("Couldn't get video memory, using default");
        }

        Displayf("Total video memory: %dMB", (availableMemory >> 20));

        currentInterface->AvailableMemory = availableMemory;

        gfxMaxScreenWidth = 0;
        gfxMaxScreenHeight = 0;

        lpDD->EnumDisplayModes(0, 0, currentInterface, &ResCallback);
        lpDD->Release();

        lpDD = nullptr;
    }

    return TRUE;
}

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
    if (gameState != 0) {
        if (datArgParser::Exists("max")) {
            HDC hDC = GetDC(NULL);
            width = GetDeviceCaps(hDC, HORZRES);
            height = GetDeviceCaps(hDC, VERTRES);
            ReleaseDC(0, hDC);
        }
        else {
            datArgParser::Get("width", 0, width);
            datArgParser::Get("height", 0, height);
        }

        // datArgParser::Exists("width",  0, &width);
        // datArgParser::Exists("height", 0, &height);
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
    if (hWndMain)
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
        if (hWndParent)
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

    hWndMain = CreateWindowExA(
        WS_EX_APPWINDOW,
        "gfxWindow",
        windowName,
        dwStyle,
        m_X,
        m_Y,
        640,
        480,
        hWndParent,
        0,
        0,
        0);

    if (inWindow)
    {
        gfxWindowUpdate(false);
    }

    SetCursor(NULL);
    ShowCursor(FALSE);

    ShowWindow(hWndMain, TRUE);
    UpdateWindow(hWndMain);
    SetFocus(hWndMain);
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
        MoveWindow(hWndMain, m_X, m_Y, m_iWidth, m_iHeight, 0);
    }
}

void gfxPipeline::gfxWindowUpdate(bool isOpen)
{
    RECT rect;
    GetClientRect(hWndMain, &rect);

    MoveWindow(hWndMain, m_X, m_Y, (2 * m_iWidth - rect.right), (2 * m_iHeight - rect.bottom), isOpen);
}

LRESULT CALLBACK gfxPipeline::gfxWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    return stub<WNDPROC>(0x4A88F0, hWnd, message, wParam, lParam);
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

defnvar(0x682FA0, hWndParent);
defnvar(0x6830B8, hWndMain);
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
defnvar(0x684518, lpDirectDrawCreateEx);
defnvar(0x6830A8, lpDD);
defnvar(0x6830AC, lpD3D);
defnvar(0x6830C8, lpD3DDev);
defnvar(0x6830CC, lpdsRend);

defnvar(0x6844B0, gfxMinScreenWidth);
defnvar(0x6844CC, gfxMinScreenHeight);
defnvar(0x6844FC, gfxMaxScreenWidth);
defnvar(0x6844D8, gfxMaxScreenHeight);
defnvar(0x6B165C, gfxTexQuality);
defnvar(0x6857D0, gfxTexReduceSize);

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

call_once([ ]
{
    hook::create_hook("gfxPipeline::SetRes", "Custom implementation allowing for more control of the window", 0x4A8CE0, &gfxPipeline::SetRes, HookType::JMP);
    hook::create_hook("gfxPipeline::gfxWindowCreate", "Custom implementation allowing for more control of the windo.", 0x4A8A90, &gfxPipeline::gfxWindowCreate, HookType::JMP);

    hook::create_hook("AutoDetectCallback", "Replaces the default AutoDetect method with a much faster one", 0x4AC030, &AutoDetectCallback, HookType::JMP);
    hook::create_hook("ProgressRect", "Fixes white loading bar in 32-bit display mode.", 0x401010, &ProgressRect, HookType::JMP);
});
