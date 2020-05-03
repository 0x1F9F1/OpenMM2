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

#include "loader.h"

void setUnicodeMode()
{
    return stub<cdecl_t<void>>(0x517C00);
}

CLoader::CLoader()
{
    unimplemented();
}

CLoader::~CLoader()
{
    unimplemented();
}

void CLoader::AddCFileStreamToList(class CFileStream* arg1)
{
    return stub<thiscall_t<void, CLoader*, class CFileStream*>>(0x518590, this, arg1);
}

u32 CLoader::AddRefP()
{
    return stub<thiscall_t<u32, CLoader*>>(0x517E90, this);
}

void CLoader::DestroyCFileStreamList()
{
    return stub<thiscall_t<void, CLoader*>>(0x5185E0, this);
}

i32 CLoader::Init()
{
    return stub<thiscall_t<i32, CLoader*>>(0x517CC0, this);
}

u32 CLoader::ReleaseP()
{
    return stub<thiscall_t<u32, CLoader*>>(0x517F00, this);
}

i32 __stdcall CLoader::QueryInterface(struct _GUID const& arg1, void** arg2)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&, void**>>(0x517E10, this, arg1, arg2);
}

u32 __stdcall CLoader::AddRef()
{
    return stub<stdcall_t<u32, CLoader*>>(0x517E70, this);
}

u32 __stdcall CLoader::Release()
{
    return stub<stdcall_t<u32, CLoader*>>(0x517EA0, this);
}

i32 __stdcall CLoader::GetObjectA(struct _DMUS_OBJECTDESC* arg1, struct _GUID const& arg2, void** arg3)
{
    return stub<stdcall_t<i32, CLoader*, struct _DMUS_OBJECTDESC*, struct _GUID const&, void**>>(
        0x517F40, this, arg1, arg2, arg3);
}

i32 __stdcall CLoader::SetObject(struct _DMUS_OBJECTDESC* arg1)
{
    return stub<stdcall_t<i32, CLoader*, struct _DMUS_OBJECTDESC*>>(0x5184E0, this, arg1);
}

i32 __stdcall CLoader::SetSearchDirectory(struct _GUID const& arg1, u16* arg2, i32 arg3)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&, u16*, i32>>(0x518510, this, arg1, arg2, arg3);
}

i32 __stdcall CLoader::ScanDirectory(struct _GUID const& arg1, u16* arg2, u16* arg3)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&, u16*, u16*>>(0x518530, this, arg1, arg2, arg3);
}

i32 __stdcall CLoader::CacheObject(struct IDirectMusicObject* arg1)
{
    return stub<stdcall_t<i32, CLoader*, struct IDirectMusicObject*>>(0x518540, this, arg1);
}

i32 __stdcall CLoader::ReleaseObject(struct IDirectMusicObject* arg1)
{
    return stub<stdcall_t<i32, CLoader*, struct IDirectMusicObject*>>(0x518550, this, arg1);
}

i32 __stdcall CLoader::ClearCache(struct _GUID const& arg1)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&>>(0x518560, this, arg1);
}

i32 __stdcall CLoader::EnableCache(struct _GUID const& arg1, i32 arg2)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&, i32>>(0x518570, this, arg1, arg2);
}

i32 __stdcall CLoader::EnumObject(struct _GUID const& arg1, u32 arg2, struct _DMUS_OBJECTDESC* arg3)
{
    return stub<stdcall_t<i32, CLoader*, struct _GUID const&, u32, struct _DMUS_OBJECTDESC*>>(
        0x518580, this, arg1, arg2, arg3);
}

i32 CLoader::LoadFromFile(struct _DMUS_OBJECTDESC* arg1, struct IDirectMusicObject** arg2)
{
    return stub<thiscall_t<i32, CLoader*, struct _DMUS_OBJECTDESC*, struct IDirectMusicObject**>>(
        0x5182A0, this, arg1, arg2);
}

i32 CLoader::LoadFromMemory(struct _DMUS_OBJECTDESC* arg1, struct IDirectMusicObject** arg2)
{
    return stub<thiscall_t<i32, CLoader*, struct _DMUS_OBJECTDESC*, struct IDirectMusicObject**>>(
        0x5183F0, this, arg1, arg2);
}

define_dummy_symbol(directmusic_loader);
