#pragma once

#include <d3d.h>
#include <ddraw.h>

declvar(IDirectDraw7 *, lpDD);
declvar(IDirect3D7 *, lpD3D);
declvar(IDirect3DDevice7 *, lpD3DDev);
declvar(IDirectDrawSurface7 *, lpdsRend);
declvar(IDirectDrawSurface7 *, lpdsFront);

declvar(decltype(&DirectDrawCreateEx), lpDirectDrawCreateEx);
declvar(LPDDENUMCALLBACKA, gfxDDEnumCallback);

declvar(GUID*, lpInterfaceGUID);
declvar(GUID, sInterfaceGUID);

declvar(int, interfaceCount);
declvar(int, gfxInterfaceEnumIdx);

#define DX_ASSERT(expression) \
do { \
    HRESULT hresult = expression; \
    if (hresult != DD_OK) \
    { \
        Errorf("%s failed, code=%08x (%d)", expression, hresult, hresult); \
    } \
} while (false)

#define DX_RELEASE(var) \
do { \
    if (var) \
    { \
        HRESULT hresult = var->Release(); \
        gfxDebugf(gfxDebug, "Releasing %s: %d", #var, hresult); \
        var = nullptr; \
    } \
} while (false)

uint32_t GetPixelFormatColor(DDPIXELFORMAT* lpDDPixelFormat, uint32_t color);

void InitDirectDraw(void);
BOOL PASCAL AutoDetectCallback(GUID *lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext);
HRESULT PASCAL ResCallback(LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext);
HRESULT CALLBACK DeviceCallback(LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC7 lpDeviceDesc, LPVOID lpContext);
BOOL PASCAL DDEnumProc(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext);
BOOL PASCAL MultiMonCallback(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext, HMONITOR hMonitor);
HRESULT PASCAL EnumAllSurfCallback(LPDIRECTDRAWSURFACE7 lpSurface, LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext);
