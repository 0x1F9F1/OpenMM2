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

#include "d3dpipe.h"

void gfxPipeline::BeginFrame()
{
    return stub<cdecl_t<void>>(0x4AA130);
}

bool gfxPipeline::BeginGfx()
{
    return stub<cdecl_t<bool>>(0x4A9350);
}

bool gfxPipeline::BeginGfx2D()
{
    return stub<cdecl_t<bool>>(0x4A9370);
}

bool gfxPipeline::BeginGfx3D()
{
    return stub<cdecl_t<bool>>(0x4A96C0);
}

void gfxPipeline::BeginInternal()
{
    return stub<cdecl_t<void>>(0x4B53A0);
}

void gfxPipeline::BeginOffscreen()
{
    return stub<cdecl_t<void>>(0x4AA590);
}

void gfxPipeline::BeginScene()
{
    return stub<cdecl_t<void>>(0x4AA270);
}

void gfxPipeline::Blit2D(class Vector4 const& arg1, u16* arg2, u8* arg3, i32 arg4, u32 arg5)
{
    return stub<cdecl_t<void, class Vector4 const&, u16*, u8*, i32, u32>>(0x4AAEC0, arg1, arg2, arg3, arg4, arg5);
}

void gfxPipeline::BlitText(class Vector4 const& arg1, u16* arg2, u8* arg3, i32 arg4, u32 arg5)
{
    return stub<cdecl_t<void, class Vector4 const&, u16*, u8*, i32, u32>>(0x4AB1C0, arg1, arg2, arg3, arg4, arg5);
}

void gfxPipeline::Clear(i32 arg1, u32 arg2, f32 arg3, u32 arg4)
{
    return stub<cdecl_t<void, i32, u32, f32, u32>>(0x4AADC0, arg1, arg2, arg3, arg4);
}

void gfxPipeline::ClearRect(i32 arg1, i32 arg2, i32 arg3, i32 arg4, u32 arg5)
{
    return stub<cdecl_t<void, i32, i32, i32, i32, u32>>(0x4AB520, arg1, arg2, arg3, arg4, arg5);
}

void gfxPipeline::CopyBitmap(
    i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, bool arg8)
{
    return stub<cdecl_t<void, i32, i32, class gfxBitmap*, i32, i32, i32, i32, bool>>(
        0x4AB4C0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

bool gfxPipeline::CopyClippedBitmap(
    i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, bool arg8)
{
    return stub<cdecl_t<bool, i32, i32, class gfxBitmap*, i32, i32, i32, i32, bool>>(
        0x4B2D40, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

bool gfxPipeline::CopyClippedBitmap(i32 arg1, i32 arg2, class gfxBitmap* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7,
    i32 arg8, i32 arg9, i32 arg10, i32 arg11, bool arg12)
{
    return stub<cdecl_t<bool, i32, i32, class gfxBitmap*, i32, i32, i32, i32, i32, i32, i32, i32, bool>>(
        0x4B2D80, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

class gfxImage* gfxPipeline::CreateReadbackImage()
{
    return stub<cdecl_t<class gfxImage*>>(0x4AAC90);
}

struct gfxVertexBuffer* gfxPipeline::CreateVertexBuffer(u32 arg1, u32 arg2, bool arg3)
{
    return stub<cdecl_t<struct gfxVertexBuffer*, u32, u32, bool>>(0x4AB830, arg1, arg2, arg3);
}

class gfxViewport* gfxPipeline::CreateViewport()
{
    return stub<cdecl_t<class gfxViewport*>>(0x4A90B0);
}

void gfxPipeline::DestroyVertexBuffer(struct gfxVertexBuffer* arg1)
{
    return stub<cdecl_t<void, struct gfxVertexBuffer*>>(0x4AB950, arg1);
}

void* gfxPipeline::DoLockVertexBuffer(struct gfxVertexBuffer* arg1, u32 arg2)
{
    return stub<cdecl_t<void*, struct gfxVertexBuffer*, u32>>(0x4AB970, arg1, arg2);
}

void gfxPipeline::Draw(enum gfxDrawMode arg1, u32 arg2, i32 arg3, struct gfxStridedData const& arg4)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, i32, struct gfxStridedData const&>>(
        0x4AAAF0, arg1, arg2, arg3, arg4);
}

void gfxPipeline::Draw(enum gfxDrawMode arg1, u32 arg2, i32 arg3, void* arg4)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, i32, void*>>(0x4AAB50, arg1, arg2, arg3, arg4);
}

void gfxPipeline::DrawIdx(
    enum gfxDrawMode arg1, u32 arg2, i32 arg3, struct gfxStridedData const& arg4, u32 arg5, u16* arg6)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, i32, struct gfxStridedData const&, u32, u16*>>(
        0x4AABB0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxPipeline::DrawIdx(enum gfxDrawMode arg1, u32 arg2, i32 arg3, void* arg4, u32 arg5, u16* arg6)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, i32, void*, u32, u16*>>(
        0x4AAC20, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxPipeline::DrawIdxVB(
    enum gfxDrawMode arg1, u32 arg2, u32 arg3, struct gfxVertexBuffer* arg4, u32 arg5, u16* arg6)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, u32, struct gfxVertexBuffer*, u32, u16*>>(
        0x4ABB40, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxPipeline::DrawVB(enum gfxDrawMode arg1, u32 arg2, u32 arg3, struct gfxVertexBuffer* arg4)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, u32, struct gfxVertexBuffer*>>(0x4ABA50, arg1, arg2, arg3, arg4);
}

void gfxPipeline::EndFrame()
{
    return stub<cdecl_t<void>>(0x4AA330);
}

void gfxPipeline::EndGfx()
{
    return stub<cdecl_t<void>>(0x4AA750);
}

void gfxPipeline::EndGfx2D()
{
    return stub<cdecl_t<void>>(0x4AAA10);
}

void gfxPipeline::EndGfx3D()
{
    return stub<cdecl_t<void>>(0x4AA760);
}

void gfxPipeline::EndInternal()
{
    return stub<cdecl_t<void>>(0x4B53C0);
}

void gfxPipeline::EndOffscreen()
{
    return stub<cdecl_t<void>>(0x4AA5A0);
}

void gfxPipeline::EndScene()
{
    return stub<cdecl_t<void>>(0x4AA2B0);
}

void gfxPipeline::FlushFrame()
{
    return stub<cdecl_t<void>>(0x4AA5B0);
}

i32 gfxPipeline::GetWidth()
{
    return stub<cdecl_t<i32>>(0x4E88C0);
}

void gfxPipeline::Manage()
{
    return stub<cdecl_t<void>>(0x4A9110);
}

void gfxPipeline::PersistVertexBuffer(struct gfxVertexBuffer* arg1)
{
    return stub<cdecl_t<void, struct gfxVertexBuffer*>>(0x4ABC50, arg1);
}

void gfxPipeline::Readback(class gfxImage* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<cdecl_t<void, class gfxImage*, i32, i32, i32, i32>>(0x4AACC0, arg1, arg2, arg3, arg4, arg5);
}

void gfxPipeline::RefreshFrame()
{
    return stub<cdecl_t<void>>(0x4AA5C0);
}

void gfxPipeline::Render(enum gfxDrawMode arg1, u32 arg2, u32 arg3, void* arg4)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, u32, void*>>(0x4B5440, arg1, arg2, arg3, arg4);
}

void gfxPipeline::RenderIdx(enum gfxDrawMode arg1, u32 arg2, u32 arg3, void* arg4, u32 arg5, u16* arg6)
{
    return stub<cdecl_t<void, enum gfxDrawMode, u32, u32, void*, u32, u16*>>(
        0x4B54B0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxPipeline::SafeBeginGfx()
{
    return stub<cdecl_t<void>>(0x4A92B0);
}

void gfxPipeline::SetFade(u32 arg1)
{
    return stub<cdecl_t<void, u32>>(0x4B2D20, arg1);
}

bool gfxPipeline::SetRenderTarget(class gfxTexture const* arg1)
{
    return stub<cdecl_t<bool, class gfxTexture const*>>(0x4AB570, arg1);
}

void gfxPipeline::SetRes(i32 arg1, i32 arg2, i32 arg3, i32 arg4, bool arg5)
{
    return stub<cdecl_t<void, i32, i32, i32, i32, bool>>(0x4A8CE0, arg1, arg2, arg3, arg4, arg5);
}

void gfxPipeline::SetTitle(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4A9180, arg1);
}

void gfxPipeline::SetWindow(bool arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<void, bool, i32, i32>>(0x4A8CA0, arg1, arg2, arg3);
}

void gfxPipeline::StartFade(u32 arg1, f32 arg2)
{
    return stub<cdecl_t<void, u32, f32>>(0x4B2CE0, arg1, arg2);
}

void gfxPipeline::DoUnlockVertexBuffer(struct gfxVertexBuffer* arg1)
{
    return stub<cdecl_t<void, struct gfxVertexBuffer*>>(0x4AB9C0, arg1);
}

void gfxPipeline::ForceSetViewport(class gfxViewport* arg1)
{
    return stub<cdecl_t<void, class gfxViewport*>>(0x4B2EE0, arg1);
}

void gfxPipeline::OptimizeVertexBuffer(struct gfxVertexBuffer* arg1)
{
    return stub<cdecl_t<void, struct gfxVertexBuffer*>>(0x4ABA00, arg1);
}

i32 __stdcall gfxPipeline::gfxEnumTexs(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct _DDPIXELFORMAT*, void*>>(0x4A91F0, arg1, arg2);
}

i32 __stdcall gfxPipeline::gfxEnumZ(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct _DDPIXELFORMAT*, void*>>(0x4A91A0, arg1, arg2);
}

void gfxPipeline::gfxWindowCreate(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4A8A90, arg1);
}

i32 __stdcall gfxPipeline::gfxWindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
{
    return stub<stdcall_t<i32, struct HWND__*, u32, u32, i32>>(0x4A88F0, arg1, arg2, arg3, arg4);
}

i32 __stdcall MultiMonCallback(struct _GUID* arg1, char* arg2, char* arg3, void* arg4, struct HMONITOR__* arg5)
{
    return stub<stdcall_t<i32, struct _GUID*, char*, char*, void*, struct HMONITOR__*>>(
        0x4A9270, arg1, arg2, arg3, arg4, arg5);
}

bool gfxAutoDetect(bool* arg1)
{
    return stub<cdecl_t<bool, bool*>>(0x4ABE00, arg1);
}

bool gfxLoadSettings()
{
    return stub<cdecl_t<bool>>(0x4ABD70);
}

bool gfxSaveSettings()
{
    return stub<cdecl_t<bool>>(0x4ABD00);
}

gfxVertexBuffer::gfxVertexBuffer(struct IDirect3DVertexBuffer7* arg1)
{
    unimplemented();
}

gfxVertexBuffer::gfxVertexBuffer(u32 arg1, u32 arg2)
{
    unimplemented();
}

gfxVertexBuffer::~gfxVertexBuffer()
{
    unimplemented();
}

void gfxVertexBuffer::KillAll()
{
    return stub<cdecl_t<void>>(0x4AB800);
}

void gfxVertexBuffer::RestoreAll()
{
    return stub<cdecl_t<void>>(0x4AB730);
}

define_dummy_symbol(gfx_d3dpipe);
