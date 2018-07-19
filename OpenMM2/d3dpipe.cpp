#include "stdafx.h"
#include "d3dpipe.h"

#include "gfxPipeline.h"

#include "ColorConvert.h"
#include "gfxInterface.h"

defnvar(0x6830A8, lpDD);
defnvar(0x6830AC, lpD3D);
defnvar(0x6830C8, lpD3DDev);
defnvar(0x6830CC, lpdsRend);
defnvar(0x6830B0, lpdsFront);

defnvar(0x684518, lpDirectDrawCreateEx);

defnvar(0x6844F0, gfxDDEnumCallback);

defnvar(0x6844BC, lpInterfaceGUID);
defnvar(0x6844E0, sInterfaceGUID);

defnvar(0x6830DC, interfaceCount);
defnvar(0x6844D4, gfxInterfaceEnumIdx);

instvar(0x682FA8, char[8][32], interfaceNames);

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
    return stub<LPD3DENUMDEVICESCALLBACK7>(0x4AC3D0, lpDeviceDescription, lpDeviceName, lpDeviceDesc, lpContext);
}

BOOL PASCAL DDEnumProc(GUID * lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext)
{
    (void)lpContext;

    ageDebug(gfxDebug, "D3D: GUID %x Description [%s] DriverName [%s]", lpGUID, lpDriverDescription, lpDriverName);

    strncpy_s(interfaceNames[interfaceCount++], lpDriverDescription, 0x20u);
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

BOOL PASCAL MultiMonCallback(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext, HMONITOR hMonitor)
{
    ageDebug(gfxDebug, "D3D: Callback: lpGUID = %x, %s %s %x", lpGUID, lpDriverDescription, lpDriverName, hMonitor);

    return gfxDDEnumCallback(lpGUID, lpDriverDescription, lpDriverName, lpContext);
}

HRESULT PASCAL EnumAllSurfCallback(LPDIRECTDRAWSURFACE7 lpSurface, LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext)
{
    (void)lpContext;

    Warningf("D3D: Unreleased surface: A %d by %d surface.", lpSurfaceDesc->dwWidth, lpSurfaceDesc->dwHeight);

    lpSurface->Release();

    return 1;
}

HRESULT PASCAL ResCallback(LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext)
{
    return stub<decltype(&ResCallback)>(0x4AC6F0, lpSurfaceDesc, lpContext);
}

BOOL PASCAL AutoDetectCallback(GUID *lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext)
{
    (void)lpContext;

    if (lpDirectDrawCreateEx(lpGUID, (LPVOID*)&lpDD, IID_IDirectDraw7, nullptr) == DD_OK)
    {
        gfxInterface *currentInterface = &gfxInterfaces[gfxInterfaceCount++];

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

run_once([]
{
    hook::create_hook("AutoDetectCallback", "Replaces the default AutoDetect method with a much faster one", 0x4AC030, &AutoDetectCallback, HookType::JMP);
});