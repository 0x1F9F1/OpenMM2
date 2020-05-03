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

#include "cmemstream.h"

CMemStream::CMemStream(class CLoader* arg1)
{
    unimplemented();
}

CMemStream::~CMemStream()
{
    unimplemented();
}

u32 __stdcall CMemStream::AddRef()
{
    return stub<stdcall_t<u32, CMemStream*>>(0x519070, this);
}

i32 __stdcall CMemStream::Clone(struct IStream** arg1)
{
    return stub<stdcall_t<i32, CMemStream*, struct IStream**>>(0x519250, this, arg1);
}

i32 CMemStream::Close()
{
    return stub<thiscall_t<i32, CMemStream*>>(0x518F80, this);
}

i32 __stdcall CMemStream::Commit(u32 arg1)
{
    return stub<stdcall_t<i32, CMemStream*, u32>>(0x519200, this, arg1);
}

i32 __stdcall CMemStream::CopyTo(
    struct IStream* arg1, union _ULARGE_INTEGER arg2, union _ULARGE_INTEGER* arg3, union _ULARGE_INTEGER* arg4)
{
    return stub<stdcall_t<i32, CMemStream*, struct IStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER*,
        union _ULARGE_INTEGER*>>(0x5191F0, this, arg1, arg2, arg3, arg4);
}

i32 __stdcall CMemStream::GetLoader(struct IDirectMusicLoader** arg1)
{
    return stub<stdcall_t<i32, CMemStream*, struct IDirectMusicLoader**>>(0x519030, this, arg1);
}

i32 __stdcall CMemStream::LockRegion(union _ULARGE_INTEGER arg1, union _ULARGE_INTEGER arg2, u32 arg3)
{
    return stub<stdcall_t<i32, CMemStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER, u32>>(
        0x519220, this, arg1, arg2, arg3);
}

i32 CMemStream::Open(u8* arg1, i64 arg2)
{
    return stub<thiscall_t<i32, CMemStream*, u8*, i64>>(0x518F20, this, arg1, arg2);
}

i32 __stdcall CMemStream::QueryInterface(struct _GUID const& arg1, void** arg2)
{
    return stub<stdcall_t<i32, CMemStream*, struct _GUID const&, void**>>(0x518F90, this, arg1, arg2);
}

i32 __stdcall CMemStream::Read(void* arg1, u32 arg2, u32* arg3)
{
    return stub<stdcall_t<i32, CMemStream*, void*, u32, u32*>>(0x5190D0, this, arg1, arg2, arg3);
}

u32 __stdcall CMemStream::Release()
{
    return stub<stdcall_t<u32, CMemStream*>>(0x519090, this);
}

i32 __stdcall CMemStream::Revert()
{
    return stub<stdcall_t<i32, CMemStream*>>(0x519210, this);
}

i32 __stdcall CMemStream::Seek(union _LARGE_INTEGER arg1, u32 arg2, union _ULARGE_INTEGER* arg3)
{
    return stub<stdcall_t<i32, CMemStream*, union _LARGE_INTEGER, u32, union _ULARGE_INTEGER*>>(
        0x519160, this, arg1, arg2, arg3);
}

i32 __stdcall CMemStream::SetSize(union _ULARGE_INTEGER arg1)
{
    return stub<stdcall_t<i32, CMemStream*, union _ULARGE_INTEGER>>(0x5191E0, this, arg1);
}

i32 __stdcall CMemStream::Stat(struct tagSTATSTG* arg1, u32 arg2)
{
    return stub<stdcall_t<i32, CMemStream*, struct tagSTATSTG*, u32>>(0x519240, this, arg1, arg2);
}

i32 __stdcall CMemStream::UnlockRegion(union _ULARGE_INTEGER arg1, union _ULARGE_INTEGER arg2, u32 arg3)
{
    return stub<stdcall_t<i32, CMemStream*, union _ULARGE_INTEGER, union _ULARGE_INTEGER, u32>>(
        0x519230, this, arg1, arg2, arg3);
}

i32 __stdcall CMemStream::Write(void const* arg1, u32 arg2, u32* arg3)
{
    return stub<stdcall_t<i32, CMemStream*, void const*, u32, u32*>>(0x519150, this, arg1, arg2, arg3);
}

define_dummy_symbol(directmusic_cmemstream);
