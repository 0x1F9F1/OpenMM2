/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

struct gfxPipeline
{
public:
    // 0x4AA130 | ?BeginFrame@gfxPipeline@@SAXXZ
    static void BeginFrame();

    // 0x4A9350 | ?BeginGfx@gfxPipeline@@SA_NXZ
    static bool BeginGfx();

    // 0x4A9370 | ?BeginGfx2D@gfxPipeline@@SA_NXZ
    static bool BeginGfx2D();

    // 0x4A96C0 | ?BeginGfx3D@gfxPipeline@@SA_NXZ
    static bool BeginGfx3D();

    // 0x4B53A0 | ?BeginInternal@gfxPipeline@@SAXXZ
    static void BeginInternal();

    // 0x4AA590 | ?BeginOffscreen@gfxPipeline@@SAXXZ
    static void BeginOffscreen();

    // 0x4AA270 | ?BeginScene@gfxPipeline@@SAXXZ
    static void BeginScene();

    // 0x4AAEC0 | ?Blit2D@gfxPipeline@@SAXABVVector4@@PAGPAEHI@Z
    static void Blit2D(class Vector4 const& arg1, u16* arg2, u8* arg3, i32 arg4, u32 arg5);

    // 0x4AB1C0 | ?BlitText@gfxPipeline@@SAXABVVector4@@PAGPAEHI@Z
    static void BlitText(class Vector4 const& arg1, u16* arg2, u8* arg3, i32 arg4, u32 arg5);

    // 0x4AADC0 | ?Clear@gfxPipeline@@SAXHIMI@Z
    static void Clear(i32 arg1, u32 arg2, f32 arg3, u32 arg4);

    // 0x4AB520 | ?ClearRect@gfxPipeline@@SAXHHHHI@Z
    static void ClearRect(i32 arg1, i32 arg2, i32 arg3, i32 arg4, u32 arg5);

    // 0x4AB4C0 | ?CopyBitmap@gfxPipeline@@SAXHHPAVgfxBitmap@@HHHH_N@Z
    static void CopyBitmap(
        i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, bool arg8);

    // 0x4B2D40 | ?CopyClippedBitmap@gfxPipeline@@SA_NHHPAVgfxBitmap@@HHHH_N@Z
    static bool CopyClippedBitmap(
        i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, bool arg8);

    // 0x4B2D80 | ?CopyClippedBitmap@gfxPipeline@@SA_NHHPAVgfxBitmap@@HHHHHHHH_N@Z
    static bool CopyClippedBitmap(i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7,
        i32 arg8, i32 arg9, i32 arg10, i32 arg11, bool arg12);

    // 0x4AAC90 | ?CreateReadbackImage@gfxPipeline@@SAPAVgfxImage@@XZ
    static class gfxImage* CreateReadbackImage();

    // 0x4AB830 | ?CreateVertexBuffer@gfxPipeline@@SAPAUgfxVertexBuffer@@II_N@Z
    static struct gfxVertexBuffer* CreateVertexBuffer(u32 arg1, u32 arg2, bool arg3);

    // 0x4A90B0 | ?CreateViewport@gfxPipeline@@SAPAVgfxViewport@@XZ
    static class gfxViewport* CreateViewport();

    // 0x4AB950 | ?DestroyVertexBuffer@gfxPipeline@@SAXPAUgfxVertexBuffer@@@Z
    static void DestroyVertexBuffer(struct gfxVertexBuffer* arg1);

    // 0x4AB970 | ?DoLockVertexBuffer@gfxPipeline@@SAPAXPAUgfxVertexBuffer@@I@Z
    static void* DoLockVertexBuffer(struct gfxVertexBuffer* arg1, u32 arg2);

    // 0x4AAAF0 | ?Draw@gfxPipeline@@SAXW4gfxDrawMode@@IHABUgfxStridedData@@@Z
    static void Draw(enum gfxDrawMode arg1, u32 arg2, i32 arg3, struct gfxStridedData const& arg4);

    // 0x4AAB50 | ?Draw@gfxPipeline@@SAXW4gfxDrawMode@@IHPAX@Z
    static void Draw(enum gfxDrawMode arg1, u32 arg2, i32 arg3, void* arg4);

    // 0x4AABB0 | ?DrawIdx@gfxPipeline@@SAXW4gfxDrawMode@@IHABUgfxStridedData@@IPAG@Z
    static void DrawIdx(
        enum gfxDrawMode arg1, u32 arg2, i32 arg3, struct gfxStridedData const& arg4, u32 arg5, u16* arg6);

    // 0x4AAC20 | ?DrawIdx@gfxPipeline@@SAXW4gfxDrawMode@@IHPAXIPAG@Z
    static void DrawIdx(enum gfxDrawMode arg1, u32 arg2, i32 arg3, void* arg4, u32 arg5, u16* arg6);

    // 0x4ABB40 | ?DrawIdxVB@gfxPipeline@@SAXW4gfxDrawMode@@IIPAUgfxVertexBuffer@@IPAG@Z
    static void DrawIdxVB(enum gfxDrawMode arg1, u32 arg2, u32 arg3, struct gfxVertexBuffer* arg4, u32 arg5, u16* arg6);

    // 0x4ABA50 | ?DrawVB@gfxPipeline@@SAXW4gfxDrawMode@@IIPAUgfxVertexBuffer@@@Z
    static void DrawVB(enum gfxDrawMode arg1, u32 arg2, u32 arg3, struct gfxVertexBuffer* arg4);

    // 0x4AA330 | ?EndFrame@gfxPipeline@@SAXXZ
    static void EndFrame();

    // 0x4AA750 | ?EndGfx@gfxPipeline@@SAXXZ
    static void EndGfx();

    // 0x4AAA10 | ?EndGfx2D@gfxPipeline@@SAXXZ
    static void EndGfx2D();

    // 0x4AA760 | ?EndGfx3D@gfxPipeline@@SAXXZ
    static void EndGfx3D();

    // 0x4B53C0 | ?EndInternal@gfxPipeline@@SAXXZ
    static void EndInternal();

    // 0x4AA5A0 | ?EndOffscreen@gfxPipeline@@SAXXZ
    static void EndOffscreen();

    // 0x4AA2B0 | ?EndScene@gfxPipeline@@SAXXZ
    static void EndScene();

    // 0x4AA5B0 | ?FlushFrame@gfxPipeline@@SAXXZ
    static void FlushFrame();

    // 0x4E88C0 | ?GetWidth@gfxPipeline@@SAHXZ
    static i32 GetWidth();

    // 0x4A9110 | ?Manage@gfxPipeline@@SAXXZ
    static void Manage();

    // 0x4ABC50 | ?PersistVertexBuffer@gfxPipeline@@SAXPAUgfxVertexBuffer@@@Z
    static void PersistVertexBuffer(struct gfxVertexBuffer* arg1);

    // 0x4AACC0 | ?Readback@gfxPipeline@@SAXPAVgfxImage@@HHHH@Z
    static void Readback(class gfxImage* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5);

    // 0x4AA5C0 | ?RefreshFrame@gfxPipeline@@SAXXZ
    static void RefreshFrame();

    // 0x4B5440 | ?Render@gfxPipeline@@SAXW4gfxDrawMode@@IIPAX@Z
    static void Render(enum gfxDrawMode arg1, u32 arg2, u32 arg3, void* arg4);

    // 0x4B54B0 | ?RenderIdx@gfxPipeline@@SAXW4gfxDrawMode@@IIPAXIPAG@Z
    static void RenderIdx(enum gfxDrawMode arg1, u32 arg2, u32 arg3, void* arg4, u32 arg5, u16* arg6);

    // 0x4A92B0 | ?SafeBeginGfx@gfxPipeline@@SAXXZ
    static void SafeBeginGfx();

    // 0x4B2D20 | ?SetFade@gfxPipeline@@SAXI@Z
    static void SetFade(u32 arg1);

    // 0x4AB570 | ?SetRenderTarget@gfxPipeline@@SA_NPBVgfxTexture@@@Z
    static bool SetRenderTarget(class gfxTexture const* arg1);

    // 0x4A8CE0 | ?SetRes@gfxPipeline@@SAXHHHH_N@Z
    static void SetRes(i32 arg1, i32 arg2, i32 arg3, i32 arg4, bool arg5);

    // 0x4A9180 | ?SetTitle@gfxPipeline@@SAXPBD@Z
    static void SetTitle(char const* arg1);

    // 0x4A8CA0 | ?SetWindow@gfxPipeline@@SAX_NHH@Z
    static void SetWindow(bool arg1, i32 arg2, i32 arg3);

    // 0x4B2CE0 | ?StartFade@gfxPipeline@@SAXIM@Z
    static void StartFade(u32 arg1, f32 arg2);

    // 0x68310C | ?OrthoVP@gfxPipeline@@2PAVgfxViewport@@A
    static inline extern_var(0x68310C, class gfxViewport*, OrthoVP);

    // 0x6830FC | ?VP@gfxPipeline@@2PAVgfxViewport@@A
    static inline extern_var(0x6830FC, class gfxViewport*, VP);

private:
    // 0x4AB9C0 | ?DoUnlockVertexBuffer@gfxPipeline@@CAXPAUgfxVertexBuffer@@@Z
    static void DoUnlockVertexBuffer(struct gfxVertexBuffer* arg1);

    // 0x4B2EE0 | ?ForceSetViewport@gfxPipeline@@CAXPAVgfxViewport@@@Z
    static void ForceSetViewport(class gfxViewport* arg1);

    // 0x4ABA00 | ?OptimizeVertexBuffer@gfxPipeline@@CAXPAUgfxVertexBuffer@@@Z
    static void OptimizeVertexBuffer(struct gfxVertexBuffer* arg1);

    // 0x4A91F0 | ?gfxEnumTexs@gfxPipeline@@CGJPAU_DDPIXELFORMAT@@PAX@Z
    static i32 __stdcall gfxEnumTexs(struct _DDPIXELFORMAT* arg1, void* arg2);

    // 0x4A91A0 | ?gfxEnumZ@gfxPipeline@@CGJPAU_DDPIXELFORMAT@@PAX@Z
    static i32 __stdcall gfxEnumZ(struct _DDPIXELFORMAT* arg1, void* arg2);

    // 0x4A8A90 | ?gfxWindowCreate@gfxPipeline@@CAXPBD@Z
    static void gfxWindowCreate(char const* arg1);

    // 0x4A88F0 | ?gfxWindowProc@gfxPipeline@@CGJPAUHWND__@@IIJ@Z
    static i32 __stdcall gfxWindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4);

    // 0x685794 | ?EndFadeColor@gfxPipeline@@0IA
    static inline extern_var(0x685794, u32, EndFadeColor);

    // 0x68579C | ?FadeColor@gfxPipeline@@0IA
    static inline extern_var(0x68579C, u32, FadeColor);

    // 0x685798 | ?FadeSpeed@gfxPipeline@@0MA
    static inline extern_var(0x685798, f32, FadeSpeed);

    // 0x68578C | ?FadeValue@gfxPipeline@@0MA
    static inline extern_var(0x68578C, f32, FadeValue);

    // 0x685790 | ?StartFadeColor@gfxPipeline@@0IA
    static inline extern_var(0x685790, u32, StartFadeColor);

    // 0x6830F8 | ?m_ColorDepth@gfxPipeline@@0HA
    static inline extern_var(0x6830F8, i32, m_ColorDepth);

    // 0x683114 | ?m_EvtFlags@gfxPipeline@@0IA
    static inline extern_var(0x683114, u32, m_EvtFlags);

    // 0x6844F4 | ?m_RenderTarget@gfxPipeline@@0PBVgfxTexture@@B
    static inline extern_var(0x6844F4, class gfxTexture const* const, m_RenderTarget);

    // 0x683124 | ?m_Viewport@gfxPipeline@@0PAVgfxViewport@@A
    static inline extern_var(0x683124, class gfxViewport*, m_Viewport);

    // 0x6830EC | ?m_X@gfxPipeline@@0HA
    static inline extern_var(0x6830EC, i32, m_X);

    // 0x683110 | ?m_Y@gfxPipeline@@0HA
    static inline extern_var(0x683110, i32, m_Y);

    // 0x6830E4 | ?m_ZDepth@gfxPipeline@@0HA
    static inline extern_var(0x6830E4, i32, m_ZDepth);

    // 0x683120 | ?m_fHeight@gfxPipeline@@0MA
    static inline extern_var(0x683120, f32, m_fHeight);

    // 0x6830F4 | ?m_fWidth@gfxPipeline@@0MA
    static inline extern_var(0x6830F4, f32, m_fWidth);

    // 0x683100 | ?m_iHeight@gfxPipeline@@0HA
    static inline extern_var(0x683100, i32, m_iHeight);

    // 0x683128 | ?m_iWidth@gfxPipeline@@0HA
    static inline extern_var(0x683128, i32, m_iWidth);
};

// 0x4A9270 | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAXPAUHMONITOR__@@@Z
i32 __stdcall MultiMonCallback(struct _GUID* arg1, char* arg2, char* arg3, void* arg4, struct HMONITOR__* arg5);

// 0x4ABE00 | ?gfxAutoDetect@@YA_NPA_N@Z
bool gfxAutoDetect(bool* arg1);

// 0x4ABD70 | ?gfxLoadSettings@@YA_NXZ
bool gfxLoadSettings();

// 0x4ABD00 | ?gfxSaveSettings@@YA_NXZ
bool gfxSaveSettings();

// 0x5B2A00 | _IID_IDirect3DBladeDevice (Skipped: void)

// 0x5CA664 | ?allowHWTnL@@3_NA
inline extern_var(0x5CA664, bool, allowHWTnL);

// 0x6844D0 | ?g_Tex555@@3_NA
inline extern_var(0x6844D0, bool, g_Tex555);

// 0x6844C4 | ?g_Tex565@@3_NA
inline extern_var(0x6844C4, bool, g_Tex565);

// 0x6844B4 | ?g_VisualizeZ@@3_NA
inline extern_var(0x6844B4, bool, g_VisualizeZ);

// 0x6844C8 | ?gfxInterfaceChoice@@3HA
inline extern_var(0x6844C8, i32, gfxInterfaceChoice);

// 0x6844C0 | ?gfxInterfaceCount@@3HA
inline extern_var(0x6844C0, i32, gfxInterfaceCount);

// 0x683130 | ?gfxInterfaces@@3PAUgfxInterface@@A
inline extern_var(0x683130, struct gfxInterface*, gfxInterfaces);

// 0x6830E8 | ?gfxLostCallback@@3P6AXXZA
inline extern_var(0x6830E8, void (*)(void), gfxLostCallback);

// 0x6844CC | ?gfxMinScreenHeight@@3HA
inline extern_var(0x6844CC, i32, gfxMinScreenHeight);

// 0x6844B0 | ?gfxMinScreenWidth@@3HA
inline extern_var(0x6844B0, i32, gfxMinScreenWidth);

// 0x68451D | ?novblank@@3_NA
inline extern_var(0x68451D, bool, novblank);

// 0x684500 | ?sm_UseInternal@@3_NA
inline extern_var(0x684500, bool, sm_UseInternal);

// 0x684501 | ?useHWTnL@@3_NA
inline extern_var(0x684501, bool, useHWTnL);

// 0x6844F8 | ?useNativeVBs@@3_NA
inline extern_var(0x6844F8, bool, useNativeVBs);

struct gfxVertexBuffer
{
public:
    // 0x4AB660 | ??0gfxVertexBuffer@@QAE@PAUIDirect3DVertexBuffer7@@@Z
    gfxVertexBuffer(struct IDirect3DVertexBuffer7* arg1);

    // 0x4AB690 | ??0gfxVertexBuffer@@QAE@II@Z
    gfxVertexBuffer(u32 arg1, u32 arg2);

    // 0x4AB6E0 | ??1gfxVertexBuffer@@QAE@XZ
    ~gfxVertexBuffer();

    // 0x4AB800 | ?KillAll@gfxVertexBuffer@@SAXXZ
    static void KillAll();

    // 0x4AB730 | ?RestoreAll@gfxVertexBuffer@@SAXXZ
    static void RestoreAll();

    // 0x684520 | ?sm_First@gfxVertexBuffer@@2PAU1@A
    static inline extern_var(0x684520, struct gfxVertexBuffer*, sm_First);
};

check_size(gfxVertexBuffer, 0x10);
