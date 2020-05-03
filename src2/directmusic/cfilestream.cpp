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

#include "cfilestream.h"

CFileStream::CFileStream(class CLoader* arg1)
{
    unimplemented();
}

CFileStream::~CFileStream()
{
    unimplemented();
}

u32 __stdcall CFileStream::AddRef()
{
    return stub<stdcall_t<u32, CFileStream*>>(0x518C80, this);
}

i32 __stdcall CFileStream::Clone(struct IStream** arg1)
{
    return stub<stdcall_t<i32, CFileStream*, struct IStream**>>(0x518E40, this, arg1);
}

i32 CFileStream::Close()
{
    return stub<thiscall_t<i32, CFileStream*>>(0x518B80, this);
}

i32 __stdcall CFileStream::Commit(u32 arg1)
{
    return stub<stdcall_t<i32, CFileStream*, u32>>(0x518DF0, this, arg1);
}

i32 __stdcall CFileStream::CopyTo(
    struct IStream* arg1, union _ULARGE_INTEGER arg2, union _ULARGE_INTEGER* arg3, union _ULARGE_INTEGER* arg4)
{
    return stub<stdcall_t<i32, CFileStream*, struct IStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER*,
        union _ULARGE_INTEGER*>>(0x518DE0, this, arg1, arg2, arg3, arg4);
}

i32 __stdcall CFileStream::GetLoader(struct IDirectMusicLoader** arg1)
{
    return stub<stdcall_t<i32, CFileStream*, struct IDirectMusicLoader**>>(0x518C40, this, arg1);
}

class CFileStream* CFileStream::GetNextPtr()
{
    return stub<thiscall_t<class CFileStream*, CFileStream*>>(0x518E50, this);
}

i32 __stdcall CFileStream::LockRegion(union _ULARGE_INTEGER arg1, union _ULARGE_INTEGER arg2, u32 arg3)
{
    return stub<stdcall_t<i32, CFileStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER, u32>>(
        0x518E10, this, arg1, arg2, arg3);
}

i32 CFileStream::Open(u16* arg1, u32 arg2)
{
    return stub<thiscall_t<i32, CFileStream*, u16*, u32>>(0x518AB0, this, arg1, arg2);
}

i32 __stdcall CFileStream::QueryInterface(struct _GUID const& arg1, void** arg2)
{
    return stub<stdcall_t<i32, CFileStream*, struct _GUID const&, void**>>(0x518BA0, this, arg1, arg2);
}

i32 __stdcall CFileStream::Read(void* arg1, u32 arg2, u32* arg3)
{
    return stub<stdcall_t<i32, CFileStream*, void*, u32, u32*>>(0x518CE0, this, arg1, arg2, arg3);
}

u32 __stdcall CFileStream::Release()
{
    return stub<stdcall_t<u32, CFileStream*>>(0x518CA0, this);
}

i32 __stdcall CFileStream::Revert()
{
    return stub<stdcall_t<i32, CFileStream*>>(0x518E00, this);
}

i32 __stdcall CFileStream::Seek(union _LARGE_INTEGER arg1, u32 arg2, union _ULARGE_INTEGER* arg3)
{
    return stub<stdcall_t<i32, CFileStream*, union _LARGE_INTEGER, u32, union _ULARGE_INTEGER*>>(
        0x518D60, this, arg1, arg2, arg3);
}

void CFileStream::SetNextPtr(class CFileStream* arg1)
{
    return stub<thiscall_t<void, CFileStream*, class CFileStream*>>(0x518E60, this, arg1);
}

i32 __stdcall CFileStream::SetSize(union _ULARGE_INTEGER arg1)
{
    return stub<stdcall_t<i32, CFileStream*, union _ULARGE_INTEGER>>(0x518DD0, this, arg1);
}

i32 __stdcall CFileStream::Stat(struct tagSTATSTG* arg1, u32 arg2)
{
    return stub<stdcall_t<i32, CFileStream*, struct tagSTATSTG*, u32>>(0x518E30, this, arg1, arg2);
}

i32 __stdcall CFileStream::UnlockRegion(union _ULARGE_INTEGER arg1, union _ULARGE_INTEGER arg2, u32 arg3)
{
    return stub<stdcall_t<i32, CFileStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER, u32>>(
        0x518E20, this, arg1, arg2, arg3);
}

i32 __stdcall CFileStream::Write(void const* arg1, u32 arg2, u32* arg3)
{
    return stub<stdcall_t<i32, CFileStream*, void const*, u32, u32*>>(0x518D20, this, arg1, arg2, arg3);
}

i32 __stdcall IDirectMusicGetLoader::QueryInterface(struct _GUID const& arg1, void** arg2)
{
    return stub<stdcall_t<i32, IDirectMusicGetLoader*, struct _GUID const&, void**>>(0x0, this, arg1, arg2);
}

u32 __stdcall IDirectMusicGetLoader::AddRef()
{
    return stub<stdcall_t<u32, IDirectMusicGetLoader*>>(0x0, this);
}

u32 __stdcall IDirectMusicGetLoader::Release()
{
    return stub<stdcall_t<u32, IDirectMusicGetLoader*>>(0x0, this);
}

i32 __stdcall IDirectMusicGetLoader::GetLoader(struct IDirectMusicLoader** arg1)
{
    return stub<stdcall_t<i32, IDirectMusicGetLoader*, struct IDirectMusicLoader**>>(0x0, this, arg1);
}

define_dummy_symbol(directmusic_cfilestream);
