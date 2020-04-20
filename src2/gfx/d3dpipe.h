/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x4A9270 | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAXPAUHMONITOR__@@@Z
inline int32_t __stdcall MultiMonCallback(
    struct _GUID* arg1, char* arg2, char* arg3, void* arg4, struct HMONITOR__* arg5)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*, struct HMONITOR__*>>(
        0x4A9270, arg1, arg2, arg3, arg4, arg5);
}

// 0x4ABD00 | ?gfxSaveSettings@@YA_NXZ
inline bool gfxSaveSettings()
{
    return stub<cdecl_t<bool>>(0x4ABD00);
}

// 0x4ABD70 | ?gfxLoadSettings@@YA_NXZ
inline bool gfxLoadSettings()
{
    return stub<cdecl_t<bool>>(0x4ABD70);
}

// 0x4ABE00 | ?gfxAutoDetect@@YA_NPA_N@Z
inline bool gfxAutoDetect(bool* arg1)
{
    return stub<cdecl_t<bool, bool*>>(0x4ABE00, arg1);
}

// 0x5B2A00 | _IID_IDirect3DBladeDevice

// 0x5CA664 | ?allowHWTnL@@3_NA
inline extern_var(0x5CA664, bool, allowHWTnL);

// 0x683130 | ?gfxInterfaces@@3PAUgfxInterface@@A
inline extern_var(0x683130, struct gfxInterface*, gfxInterfaces);

// 0x6844B0 | ?gfxMinScreenWidth@@3HA
inline extern_var(0x6844B0, int32_t, gfxMinScreenWidth);

// 0x6844B4 | ?g_VisualizeZ@@3_NA
inline extern_var(0x6844B4, bool, g_VisualizeZ);

// 0x6830E8 | ?gfxLostCallback@@3P6AXXZA
inline extern_var(0x6830E8, void(__cdecl*)(void), gfxLostCallback);

// 0x6844C0 | ?gfxInterfaceCount@@3HA
inline extern_var(0x6844C0, int32_t, gfxInterfaceCount);

// 0x6844C4 | ?g_Tex565@@3_NA
inline extern_var(0x6844C4, bool, g_Tex565);

// 0x6844C8 | ?gfxInterfaceChoice@@3HA
inline extern_var(0x6844C8, int32_t, gfxInterfaceChoice);

// 0x6844CC | ?gfxMinScreenHeight@@3HA
inline extern_var(0x6844CC, int32_t, gfxMinScreenHeight);

// 0x6844D0 | ?g_Tex555@@3_NA
inline extern_var(0x6844D0, bool, g_Tex555);

// 0x6844F8 | ?useNativeVBs@@3_NA
inline extern_var(0x6844F8, bool, useNativeVBs);

// 0x684500 | ?sm_UseInternal@@3_NA
inline extern_var(0x684500, bool, sm_UseInternal);

// 0x684501 | ?useHWTnL@@3_NA
inline extern_var(0x684501, bool, useHWTnL);

// 0x68451D | ?novblank@@3_NA
inline extern_var(0x68451D, bool, novblank);

struct gfxVertexBuffer
{
public:
    // 0x4AB660 | ??0gfxVertexBuffer@@QAE@PAUIDirect3DVertexBuffer7@@@Z
    inline gfxVertexBuffer(struct IDirect3DVertexBuffer7* arg1)
    {
        stub<member_func_t<void, gfxVertexBuffer, struct IDirect3DVertexBuffer7*>>(0x4AB660, this, arg1);
    }

    // 0x4AB690 | ??0gfxVertexBuffer@@QAE@II@Z
    inline gfxVertexBuffer(uint32_t arg1, uint32_t arg2)
    {
        stub<member_func_t<void, gfxVertexBuffer, uint32_t, uint32_t>>(0x4AB690, this, arg1, arg2);
    }

    // 0x4AB6E0 | ??1gfxVertexBuffer@@QAE@XZ
    inline ~gfxVertexBuffer()
    {
        stub<member_func_t<void, gfxVertexBuffer>>(0x4AB6E0, this);
    }

    // 0x4AB730 | ?RestoreAll@gfxVertexBuffer@@SAXXZ
    static inline void RestoreAll()
    {
        return stub<cdecl_t<void>>(0x4AB730);
    }

    // 0x4AB800 | ?KillAll@gfxVertexBuffer@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x4AB800);
    }

    // 0x684520 | ?sm_First@gfxVertexBuffer@@2PAU1@A
    inline extern_var(0x684520, struct gfxVertexBuffer*, sm_First);
};
