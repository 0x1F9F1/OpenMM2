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

#include "texture.h"

void gfxTexture::Blit(i32 arg1, i32 arg2, class gfxTexture* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7)
{
    return stub<thiscall_t<void, gfxTexture*, i32, i32, class gfxTexture*, i32, i32, i32, i32>>(
        0x4AE1E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

class gfxTexture* gfxTexture::Clone()
{
    return stub<thiscall_t<class gfxTexture*, gfxTexture*>>(0x4AE250, this);
}

class gfxTexture* gfxTexture::CreateFromTexture(char const* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<class gfxTexture*, gfxTexture*, char const*, i32, i32, i32, i32>>(
        0x4AD720, this, arg1, arg2, arg3, arg4, arg5);
}

struct IDirectDrawSurface7* gfxTexture::FindEntry()
{
    return stub<thiscall_t<struct IDirectDrawSurface7*, gfxTexture*>>(0x4ADED0, this);
}

u32 gfxTexture::GetColor()
{
    return stub<thiscall_t<u32, gfxTexture*>>(0x45D180, this);
}

void gfxTexture::GetMIPMapEnv(u32& arg1, f32& arg2)
{
    return stub<thiscall_t<void, gfxTexture*, u32&, f32&>>(0x4AD760, this, arg1, arg2);
}

void gfxTexture::Load(class gfxImage* arg1)
{
    return stub<thiscall_t<void, gfxTexture*, class gfxImage*>>(0x4AD100, this, arg1);
}

void gfxTexture::MakeResident()
{
    return stub<thiscall_t<void, gfxTexture*>>(0x4AD7E0, this);
}

void gfxTexture::MakeUnresident()
{
    return stub<thiscall_t<void, gfxTexture*>>(0x4AD820, this);
}

void gfxTexture::PreLoad()
{
    return stub<thiscall_t<void, gfxTexture*>>(0x4AD790, this);
}

void gfxTexture::SetMIPMapEnv(u32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, gfxTexture*, u32, f32>>(0x4AD750, this, arg1, arg2);
}

void gfxTexture::SetName(char const* arg1)
{
    return stub<thiscall_t<void, gfxTexture*, char const*>>(0x4AE1B0, this, arg1);
}

void gfxTexture::SetTexEnv(u32 arg1)
{
    return stub<thiscall_t<void, gfxTexture*, u32>>(0x4AE1A0, this, arg1);
}

void gfxTexture::CalcMIPMapEnv(i32 arg1, i32 arg2, u16& arg3, u16& arg4)
{
    return stub<cdecl_t<void, i32, i32, u16&, u16&>>(0x4AD770, arg1, arg2, arg3, arg4);
}

class gfxTexture* gfxTexture::Create(class gfxImage* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxTexture*, class gfxImage*, bool>>(0x4AD090, arg1, arg2);
}

class gfxTexture* gfxTexture::Create(
    i32 arg1, i32 arg2, enum gfxImage::gfxImageFormat arg3, enum gfxImage::gfxImageFormat arg4, i32 arg5)
{
    return stub<
        cdecl_t<class gfxTexture*, i32, i32, enum gfxImage::gfxImageFormat, enum gfxImage::gfxImageFormat, i32>>(
        0x4ACA90, arg1, arg2, arg3, arg4, arg5);
}

class gfxTexture* gfxTexture::CreateCubeMap(i32 arg1, i32 arg2, class gfxTexture** const arg3)
{
    return stub<cdecl_t<class gfxTexture*, i32, i32, class gfxTexture** const>>(0x4ADFD0, arg1, arg2, arg3);
}

class gfxTexture* gfxTexture::CreateRenderTarget(i32 arg1, i32 arg2, u32 arg3, u32 arg4)
{
    return stub<cdecl_t<class gfxTexture*, i32, i32, u32, u32>>(0x4ADF00, arg1, arg2, arg3, arg4);
}

void gfxTexture::EnableCache(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4AD850, arg1);
}

void gfxTexture::EnableTrilinearMipMaping(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4AD780, arg1);
}

void gfxTexture::GetDefaultMIPMapEnv(u32& arg1, f32& arg2)
{
    return stub<cdecl_t<void, u32&, f32&>>(0x4AD740, arg1, arg2);
}

void gfxTexture::InitCache()
{
    return stub<cdecl_t<void>>(0x4AD880);
}

void gfxTexture::KillAll()
{
    return stub<cdecl_t<void>>(0x4AC9B0);
}

void gfxTexture::MakeAllUnresident()
{
    return stub<cdecl_t<void>>(0x4AD830);
}

void gfxTexture::SetDefaultMIPMapEnv(u32 arg1, f32 arg2)
{
    return stub<cdecl_t<void, u32, f32>>(0x4AD730, arg1, arg2);
}

void gfxTexture::SetLODs()
{
    return stub<cdecl_t<void>>(0x4AC9F0);
}

void gfxTexture::ShutdownCache()
{
    return stub<cdecl_t<void>>(0x4ADE30);
}

gfxTexture::gfxTexture()
{
    unimplemented();
}

gfxTexture::~gfxTexture()
{
    unimplemented();
}

void gfxTexture::MarkFirstUse()
{
    return stub<thiscall_t<void, gfxTexture*>>(0x4ACA10, this);
}

void gfxTexture::MarkHigherUse()
{
    return stub<thiscall_t<void, gfxTexture*>>(0x4ACA30, this);
}

i32 ilog2(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4AC8C0, arg1);
}

gfxTextureCacheEntry::~gfxTextureCacheEntry()
{
    unimplemented();
}

void gfxTextureCacheEntry::Evict()
{
    return stub<thiscall_t<void, gfxTextureCacheEntry*>>(0x4ADB00, this);
}

void gfxTextureCacheEntry::Lease(class gfxTexture* arg1)
{
    return stub<thiscall_t<void, gfxTextureCacheEntry*, class gfxTexture*>>(0x4ADB30, this, arg1);
}

gfxTextureCacheEntry::gfxTextureCacheEntry(struct IDirectDrawSurface7* arg1, class gfxTextureCacheEntry* arg2)
{
    unimplemented();
}

gfxTextureCachePool::gfxTextureCachePool(class gfxTextureCachePool* arg1)
{
    unimplemented();
}

gfxTextureCachePool::~gfxTextureCachePool()
{
    unimplemented();
}

bool gfxTextureCachePool::AddSlot()
{
    return stub<thiscall_t<bool, gfxTextureCachePool*>>(0x4ADD30, this);
}

void gfxTextureCachePool::FindEntry(class gfxTexture* arg1)
{
    return stub<thiscall_t<void, gfxTextureCachePool*, class gfxTexture*>>(0x4ADCF0, this, arg1);
}

void gfxTextureCachePool::Init(class gfxTexture* arg1)
{
    return stub<thiscall_t<void, gfxTextureCachePool*, class gfxTexture*>>(0x4ADC90, this, arg1);
}

bool gfxTextureCachePool::IsCompatibleWith(class gfxTexture* arg1)
{
    return stub<thiscall_t<bool, gfxTextureCachePool*, class gfxTexture*>>(0x4ADBE0, this, arg1);
}

void gfxBitmap::Clear(u32 arg1)
{
    return stub<thiscall_t<void, gfxBitmap*, u32>>(0x4AE580, this, arg1);
}

bool gfxBitmap::Load(class gfxImage* arg1)
{
    return stub<thiscall_t<bool, gfxBitmap*, class gfxImage*>>(0x4AE5C0, this, arg1);
}

void gfxBitmap::SetName(char const* arg1)
{
    return stub<thiscall_t<void, gfxBitmap*, char const*>>(0x4AE3B0, this, arg1);
}

class gfxBitmap* gfxBitmap::Create(class gfxImage* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxBitmap*, class gfxImage*, bool>>(0x4AE480, arg1, arg2);
}

class gfxBitmap* gfxBitmap::Create(i32 arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<class gfxBitmap*, i32, i32, bool>>(0x4AE4D0, arg1, arg2, arg3);
}

void gfxBitmap::KillAll()
{
    return stub<cdecl_t<void>>(0x4AE440);
}

gfxBitmap::gfxBitmap(i32 arg1, i32 arg2)
{
    unimplemented();
}

gfxBitmap::~gfxBitmap()
{
    unimplemented();
}

define_dummy_symbol(gfx_texture);
