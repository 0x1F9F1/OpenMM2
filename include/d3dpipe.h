#pragma once

#include <d3d.h>
#include <ddraw.h>

static_var(0x6830A8, IDirectDraw7 *, lpDD);
static_var(0x6830AC, IDirect3D7 *, lpD3D);
static_var(0x6830C8, IDirect3DDevice7 *, lpD3DDev);
static_var(0x6830CC, IDirectDrawSurface7 *, lpdsRend);
static_var(0x6830B0, IDirectDrawSurface7 *, lpdsFront);

static_var(0x684518, decltype(&DirectDrawCreateEx), lpDirectDrawCreateEx);
static_var(0x6844F0, LPDDENUMCALLBACKA, gfxDDEnumCallback);

static_var(0x6844BC, GUID*, lpInterfaceGUID);
static_var(0x6844E0, GUID, sInterfaceGUID);

static_var(0x6830DC, int, interfaceCount);
static_var(0x6844D4, int, gfxInterfaceEnumIdx);

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
