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

#pragma once

/*
    gfx:d3dpipe

    0x4A91A0 | private: static long __stdcall gfxPipeline::gfxEnumZ(struct _DDPIXELFORMAT *,void *) | ?gfxEnumZ@gfxPipeline@@CGJPAU_DDPIXELFORMAT@@PAX@Z
    0x4A91F0 | private: static long __stdcall gfxPipeline::gfxEnumTexs(struct _DDPIXELFORMAT *,void *) | ?gfxEnumTexs@gfxPipeline@@CGJPAU_DDPIXELFORMAT@@PAX@Z
    0x4A9270 | int __stdcall MultiMonCallback(struct _GUID *,char *,char *,void *,struct HMONITOR__ *) | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAXPAUHMONITOR__@@@Z
    0x4A92B0 | public: static void __cdecl gfxPipeline::SafeBeginGfx(void) | ?SafeBeginGfx@gfxPipeline@@SAXXZ
    0x4A9350 | public: static bool __cdecl gfxPipeline::BeginGfx(void) | ?BeginGfx@gfxPipeline@@SA_NXZ
    0x4A9370 | public: static bool __cdecl gfxPipeline::BeginGfx2D(void) | ?BeginGfx2D@gfxPipeline@@SA_NXZ
    0x4A96C0 | public: static bool __cdecl gfxPipeline::BeginGfx3D(void) | ?BeginGfx3D@gfxPipeline@@SA_NXZ
    0x4AA130 | public: static void __cdecl gfxPipeline::BeginFrame(void) | ?BeginFrame@gfxPipeline@@SAXXZ
    0x4AA270 | public: static void __cdecl gfxPipeline::BeginScene(void) | ?BeginScene@gfxPipeline@@SAXXZ
    0x4AA2B0 | public: static void __cdecl gfxPipeline::EndScene(void) | ?EndScene@gfxPipeline@@SAXXZ
    0x4AA330 | public: static void __cdecl gfxPipeline::EndFrame(void) | ?EndFrame@gfxPipeline@@SAXXZ
    0x4AA590 | public: static void __cdecl gfxPipeline::BeginOffscreen(void) | ?BeginOffscreen@gfxPipeline@@SAXXZ
    0x4AA5A0 | public: static void __cdecl gfxPipeline::EndOffscreen(void) | ?EndOffscreen@gfxPipeline@@SAXXZ
    0x4AA5B0 | public: static void __cdecl gfxPipeline::FlushFrame(void) | ?FlushFrame@gfxPipeline@@SAXXZ
    0x4AA5C0 | public: static void __cdecl gfxPipeline::RefreshFrame(void) | ?RefreshFrame@gfxPipeline@@SAXXZ
    0x4AA750 | public: static void __cdecl gfxPipeline::EndGfx(void) | ?EndGfx@gfxPipeline@@SAXXZ
    0x4AA760 | public: static void __cdecl gfxPipeline::EndGfx3D(void) | ?EndGfx3D@gfxPipeline@@SAXXZ
    0x4AAA10 | public: static void __cdecl gfxPipeline::EndGfx2D(void) | ?EndGfx2D@gfxPipeline@@SAXXZ
    0x4AAAF0 | public: static void __cdecl gfxPipeline::Draw(enum gfxDrawMode,unsigned int,int,struct gfxStridedData const &) | ?Draw@gfxPipeline@@SAXW4gfxDrawMode@@IHABUgfxStridedData@@@Z
    0x4AAB50 | public: static void __cdecl gfxPipeline::Draw(enum gfxDrawMode,unsigned int,int,void *) | ?Draw@gfxPipeline@@SAXW4gfxDrawMode@@IHPAX@Z
    0x4AABB0 | public: static void __cdecl gfxPipeline::DrawIdx(enum gfxDrawMode,unsigned int,int,struct gfxStridedData const &,unsigned int,unsigned short *) | ?DrawIdx@gfxPipeline@@SAXW4gfxDrawMode@@IHABUgfxStridedData@@IPAG@Z
    0x4AAC20 | public: static void __cdecl gfxPipeline::DrawIdx(enum gfxDrawMode,unsigned int,int,void *,unsigned int,unsigned short *) | ?DrawIdx@gfxPipeline@@SAXW4gfxDrawMode@@IHPAXIPAG@Z
    0x4AAC90 | public: static class gfxImage * __cdecl gfxPipeline::CreateReadbackImage(void) | ?CreateReadbackImage@gfxPipeline@@SAPAVgfxImage@@XZ
    0x4AACC0 | public: static void __cdecl gfxPipeline::Readback(class gfxImage *,int,int,int,int) | ?Readback@gfxPipeline@@SAXPAVgfxImage@@HHHH@Z
    0x4AADC0 | public: static void __cdecl gfxPipeline::Clear(int,unsigned int,float,unsigned int) | ?Clear@gfxPipeline@@SAXHIMI@Z
    0x4AAEC0 | public: static void __cdecl gfxPipeline::Blit2D(class Vector4 const &,unsigned short *,unsigned char *,int,unsigned int) | ?Blit2D@gfxPipeline@@SAXABVVector4@@PAGPAEHI@Z
    0x4AB1C0 | public: static void __cdecl gfxPipeline::BlitText(class Vector4 const &,unsigned short *,unsigned char *,int,unsigned int) | ?BlitText@gfxPipeline@@SAXABVVector4@@PAGPAEHI@Z
    0x4AB4C0 | public: static void __cdecl gfxPipeline::CopyBitmap(int,int,class gfxBitmap *,int,int,int,int,bool) | ?CopyBitmap@gfxPipeline@@SAXHHPAVgfxBitmap@@HHHH_N@Z
    0x4AB520 | public: static void __cdecl gfxPipeline::ClearRect(int,int,int,int,unsigned int) | ?ClearRect@gfxPipeline@@SAXHHHHI@Z
    0x4AB570 | public: static bool __cdecl gfxPipeline::SetRenderTarget(class gfxTexture const *) | ?SetRenderTarget@gfxPipeline@@SA_NPBVgfxTexture@@@Z
    0x4AB660 | public: __thiscall gfxVertexBuffer::gfxVertexBuffer(struct IDirect3DVertexBuffer7 *) | ??0gfxVertexBuffer@@QAE@PAUIDirect3DVertexBuffer7@@@Z
    0x4AB690 | public: __thiscall gfxVertexBuffer::gfxVertexBuffer(unsigned int,unsigned int) | ??0gfxVertexBuffer@@QAE@II@Z
    0x4AB6E0 | public: __thiscall gfxVertexBuffer::~gfxVertexBuffer(void) | ??1gfxVertexBuffer@@QAE@XZ
    0x4AB730 | public: static void __cdecl gfxVertexBuffer::RestoreAll(void) | ?RestoreAll@gfxVertexBuffer@@SAXXZ
    0x4AB800 | public: static void __cdecl gfxVertexBuffer::KillAll(void) | ?KillAll@gfxVertexBuffer@@SAXXZ
    0x4AB830 | public: static struct gfxVertexBuffer * __cdecl gfxPipeline::CreateVertexBuffer(unsigned int,unsigned int,bool) | ?CreateVertexBuffer@gfxPipeline@@SAPAUgfxVertexBuffer@@II_N@Z
    0x4AB950 | public: static void __cdecl gfxPipeline::DestroyVertexBuffer(struct gfxVertexBuffer *) | ?DestroyVertexBuffer@gfxPipeline@@SAXPAUgfxVertexBuffer@@@Z
    0x4AB970 | public: static void * __cdecl gfxPipeline::DoLockVertexBuffer(struct gfxVertexBuffer *,unsigned int) | ?DoLockVertexBuffer@gfxPipeline@@SAPAXPAUgfxVertexBuffer@@I@Z
    0x4AB9C0 | private: static void __cdecl gfxPipeline::DoUnlockVertexBuffer(struct gfxVertexBuffer *) | ?DoUnlockVertexBuffer@gfxPipeline@@CAXPAUgfxVertexBuffer@@@Z
    0x4ABA00 | private: static void __cdecl gfxPipeline::OptimizeVertexBuffer(struct gfxVertexBuffer *) | ?OptimizeVertexBuffer@gfxPipeline@@CAXPAUgfxVertexBuffer@@@Z
    0x4ABA50 | public: static void __cdecl gfxPipeline::DrawVB(enum gfxDrawMode,unsigned int,unsigned int,struct gfxVertexBuffer *) | ?DrawVB@gfxPipeline@@SAXW4gfxDrawMode@@IIPAUgfxVertexBuffer@@@Z
    0x4ABB40 | public: static void __cdecl gfxPipeline::DrawIdxVB(enum gfxDrawMode,unsigned int,unsigned int,struct gfxVertexBuffer *,unsigned int,unsigned short *) | ?DrawIdxVB@gfxPipeline@@SAXW4gfxDrawMode@@IIPAUgfxVertexBuffer@@IPAG@Z
    0x4ABC50 | public: static void __cdecl gfxPipeline::PersistVertexBuffer(struct gfxVertexBuffer *) | ?PersistVertexBuffer@gfxPipeline@@SAXPAUgfxVertexBuffer@@@Z
    0x4ABD00 | bool __cdecl gfxSaveSettings(void) | ?gfxSaveSettings@@YA_NXZ
    0x4ABD70 | bool __cdecl gfxLoadSettings(void) | ?gfxLoadSettings@@YA_NXZ
    0x4ABE00 | bool __cdecl gfxAutoDetect(bool *) | ?gfxAutoDetect@@YA_NPA_N@Z
    void __cdecl gfxSafeMode(void) | ?gfxSafeMode@@YAXXZ
    void __cdecl gfxApplySettings(void) | ?gfxApplySettings@@YAXXZ
    0x5B2A00 | _IID_IDirect3DBladeDevice
    0x5CA664 | bool allowHWTnL | ?allowHWTnL@@3_NA
    float g_ZNear | ?g_ZNear@@3MA
    float g_ZMid | ?g_ZMid@@3MA
    0x683130 | struct gfxInterface * gfxInterfaces | ?gfxInterfaces@@3PAUgfxInterface@@A
    0x6844B0 | int gfxMinScreenWidth | ?gfxMinScreenWidth@@3HA
    0x6844B4 | bool g_VisualizeZ | ?g_VisualizeZ@@3_NA
    0x6830E8 | void (__cdecl* gfxLostCallback)(void) | ?gfxLostCallback@@3P6AXXZA
    0x6844C0 | int gfxInterfaceCount | ?gfxInterfaceCount@@3HA
    0x6844C4 | bool g_Tex565 | ?g_Tex565@@3_NA
    0x6844C8 | int gfxInterfaceChoice | ?gfxInterfaceChoice@@3HA
    0x6844CC | int gfxMinScreenHeight | ?gfxMinScreenHeight@@3HA
    0x6844D0 | bool g_Tex555 | ?g_Tex555@@3_NA
    0x6844F4 | private: static class gfxTexture const * const gfxPipeline::m_RenderTarget | ?m_RenderTarget@gfxPipeline@@0PBVgfxTexture@@B
    0x6844F8 | bool useNativeVBs | ?useNativeVBs@@3_NA
    0x684500 | bool sm_UseInternal | ?sm_UseInternal@@3_NA
    0x684501 | bool useHWTnL | ?useHWTnL@@3_NA
    0x68451D | bool novblank | ?novblank@@3_NA
    0x684520 | public: static struct gfxVertexBuffer * gfxVertexBuffer::sm_First | ?sm_First@gfxVertexBuffer@@2PAU1@A
*/

#include "hooking.h"

#include "core/output.h"

#include <d3d.h>
#include <ddraw.h>

#include "vector/matrix44.h"

#define DX_ASSERT(expression)                                                   \
    do                                                                          \
    {                                                                           \
        HRESULT hresult = expression;                                           \
        if (hresult != DD_OK)                                                   \
        {                                                                       \
            Errorf("%s failed, code=%08x (%d)", #expression, hresult, hresult); \
        }                                                                       \
    } while (false)

#define DX_RELEASE(var)                                             \
    do                                                              \
    {                                                               \
        if (var)                                                    \
        {                                                           \
            HRESULT hresult = var->Release();                       \
            gfxDebugf(gfxDebug, "Releasing %s: %d", #var, hresult); \
            var = nullptr;                                          \
        }                                                           \
    } while (false)

class gfxBitmap;
class gfxViewport;

class gfxPipeline
{
public:
    static void SetRes(int width, int height, int cdepth, int zdepth, bool parseArgs);
    static void gfxWindowCreate(const char* windowName);
    static void gfxWindowMove(bool isOpen);
    static void gfxWindowUpdate(bool isOpen);

    static void SetTitle(const char* title);

    static bool BeginGfx2D(void);
    static void EndGfx2D(void);

    static bool BeginGfx3D(void);

    static void BeginFrame(void);
    static void EndFrame(void);

    static void CopyBitmap(
        int destX, int destY, gfxBitmap* bitmap, int srcX, int srcY, int width, int height, bool srcColorKey);

    static void EnumDDAdapters(HMODULE hGfxLib, LPDDENUMCALLBACKA lpCallback, LPVOID lpContext);

    static void BeginScene(void);
    static void EndScene(void);

    static void Clear(int flags, uint32_t color, float zValue, uint32_t stencil);

    static void Manage();

    static HRESULT __stdcall gfxEnumZ(LPDDPIXELFORMAT lpDDPixFmt, LPDDPIXELFORMAT lpContext);
    static HRESULT __stdcall gfxEnumTexs(LPDDPIXELFORMAT lpDDPixFmt, LPVOID lpContext);

    static gfxViewport* CreateViewport();
    static void ForceSetViewport(gfxViewport *viewport);

    static void BeginInternal();

    static inline extern_var(0x6830F4, float, m_fWidth);
    static inline extern_var(0x683120, float, m_fHeight);
    static inline extern_var(0x683128, int, m_iWidth);
    static inline extern_var(0x683100, int, m_iHeight);
    static inline extern_var(0x6830E4, int, m_ZDepth);
    static inline extern_var(0x6830F8, int, m_ColorDepth);
    static inline extern_var(0x6830EC, int, m_X);
    static inline extern_var(0x683110, int, m_Y);

    // 0x1 | Closing
    // 0x2 | Lost Focus
    // 0x4 | ...
    // 0x8 | ...
    // 0x10 | Poll Events
    static inline extern_var(0x683114, uint32_t, m_EvtFlags);

    static inline extern_var(0x6830FC, gfxViewport*, VP);
    static inline extern_var(0x68310C, gfxViewport*, OrthoVP);

    static inline extern_var(0x683124, gfxViewport*, m_Viewport);
};

enum gfxDeviceType
{
    gfxDeviceType_Software = 0,       // Software (No 3D Video Card)
    gfxDeviceType_Hardware = 1,       // Hardware (3D Video Card)
    gfxDeviceType_HardwareWithTnL = 2 // Hardware (3D Video Card With T&L)
};

enum gfxDepthFlags
{
    gfxDepthFlag_Depth16 = 0x400,
    gfxDepthFlag_Depth24 = 0x200,
    gfxDepthFlag_Depth32 = 0x100
};

struct gfxResData
{
    uint16_t ScreenWidth;
    uint16_t ScreenHeight;
    uint16_t ColorDepth;
    uint16_t Flags; // = 0b110 | (ColorDepth == 16)
};

struct gfxInterface
{
    GUID GUID {};
    char Name[64] {};

    uint32_t DeviceCaps {0};

    int DeviceType {-1};

    int ResolutionCount {-1}; // Max of 64 resolutions
    int ResolutionChoice {-1};

    uint32_t AcceptableDepths {0}; // Used to check if mmResolution::Depth is allowed

    uint32_t AvailableMemory {0};
    uint32_t VendorID {0};
    uint32_t DeviceID {0};

    gfxResData Resolutions[64] {};

    gfxResData* CurrentResolution();

    static gfxInterface* Current();
};

check_size(gfxInterface, 0x270);

inline extern_var(0x683130, gfxInterface[8], gfxInterfaces);
inline extern_var(0x6844C0, int, gfxInterfaceCount);
inline extern_var(0x6844C8, int, gfxInterfaceChoice);

inline extern_var(0x6844BC, GUID*, lpInterfaceGUID);
inline extern_var(0x6844E0, GUID, sInterfaceGUID);

inline extern_var(0x6830DC, int, interfaceCount);
inline extern_var(0x6844D4, int, gfxInterfaceEnumIdx);

inline extern_var(0x6844F0, LPDDENUMCALLBACKA, gfxDDEnumCallback);

inline extern_var(0x5CA664, bool, allowHWTnL);
inline extern_var(0x68451D, bool, novblank);

inline extern_var(0x6844B0, int, gfxMinScreenWidth);
inline extern_var(0x6844CC, int, gfxMinScreenHeight);
inline extern_var(0x6844FC, int, gfxMaxScreenWidth);
inline extern_var(0x6844D8, int, gfxMaxScreenHeight);

inline extern_var(0x684500, bool, sm_UseInternal);

inline extern_var(0x6830E8, void (*)(void), gfxLostCallback);

inline extern_var(0x6844F8, bool, useNativeVBs);
inline extern_var(0x684501, bool, useHWTnL);

inline extern_var(0x6844D0, bool, g_Tex555);
inline extern_var(0x6844C4, bool, g_Tex565);

unsigned int GetPixelFormatColor(DDPIXELFORMAT* lpDDPixelFormat, unsigned int color);

bool gfxAutoDetect(bool* success);

void InitDirectDraw(void);
BOOL PASCAL AutoDetectCallback(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext);
HRESULT PASCAL ResCallback(LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext);
HRESULT CALLBACK DeviceCallback(
    LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC7 lpDeviceDesc, LPVOID lpContext);
BOOL PASCAL DDEnumProc(GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext);
BOOL PASCAL MultiMonCallback(
    GUID* lpGUID, LPSTR lpDriverDescription, LPSTR lpDriverName, LPVOID lpContext, HMONITOR hMonitor);
HRESULT PASCAL EnumAllSurfCallback(LPDIRECTDRAWSURFACE7 lpSurface, LPDDSURFACEDESC2 lpSurfaceDesc, LPVOID lpContext);

inline gfxResData* gfxInterface::CurrentResolution()
{
    return &Resolutions[ResolutionChoice];
}

inline gfxInterface* gfxInterface::Current()
{
    return &gfxInterfaces[gfxInterfaceChoice];
}

class gfxViewport
{
public:
    Matrix44 m_Projection;
    Matrix44 UiMatrixThing;
    Matrix44 Camera;
    Matrix44 World;
    int field_100;
    int field_104;
    int field_108;
    int field_10C;
    int field_110;
    int field_114;
    int field_118;
    int field_11C;
    int Flags;
    float DefaultAspect;
    int field_128;
    float field_12C;
    float field_130;
    float field_134;
    float field_138;
    float field_13C;
    float float140;
    float float144;
    float float148;
    float float14C;
    float float150;
    float float154;
    float float158;
    D3DVIEWPORT7 m_Viewport;
    float Fov;
    float Aspect;

    void Ortho(float a3, float a4, float a5, float a6, float a7, float a8);
};