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

#include "dirsnd.h"

DirSnd::DirSnd()
{
    unimplemented();
}

DirSnd::~DirSnd()
{
    unimplemented();
}

void DirSnd::ClearDSDeviceList()
{
    return stub<thiscall_t<void, DirSnd*>>(0x5A5770, this);
}

void DirSnd::DeInit()
{
    return stub<thiscall_t<void, DirSnd*>>(0x5A4FD0, this);
}

i32 DirSnd::EnumDSDevices()
{
    return stub<thiscall_t<i32, DirSnd*>>(0x5A5510, this);
}

char** DirSnd::GetDeviceNames()
{
    return stub<thiscall_t<char**, DirSnd*>>(0x5A5BD0, this);
}

u32 DirSnd::GetNum3DHallBufs()
{
    return stub<thiscall_t<u32, DirSnd*>>(0x5A5C00, this);
}

i32 DirSnd::Init3DListener(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<i32, DirSnd*, f32, f32, f32, f32, f32>>(0x5A5160, this, arg1, arg2, arg3, arg4, arg5);
}

i32 DirSnd::IsDSDeviceInList(struct _GUID* arg1)
{
    return stub<thiscall_t<i32, DirSnd*, struct _GUID*>>(0x5A51C0, this, arg1);
}

void DirSnd::ScanAvailableDSFormats()
{
    return stub<thiscall_t<void, DirSnd*>>(0x5A5950, this);
}

void DirSnd::SetBitDepth(i32 arg1)
{
    return stub<thiscall_t<void, DirSnd*, i32>>(0x5A5BB0, this, arg1);
}

void DirSnd::SetDeviceRating(struct tag_dsdevdesc* arg1)
{
    return stub<thiscall_t<void, DirSnd*, struct tag_dsdevdesc*>>(0x5A5390, this, arg1);
}

void DirSnd::SetPrimaryBufferFormat(u32 arg1, u8 arg2)
{
    return stub<thiscall_t<void, DirSnd*, u32, u8>>(0x5A5860, this, arg1, arg2);
}

char* DirSnd::TranslateDSError(i32 arg1)
{
    return stub<thiscall_t<char*, DirSnd*, i32>>(0x5A5A30, this, arg1);
}

i32 DirSnd::InitPrimarySoundBuffer(u32 arg1, u8 arg2, char* arg3)
{
    return stub<thiscall_t<i32, DirSnd*, u32, u8, char*>>(0x5A5530, this, arg1, arg2, arg3);
}

class DirSnd* DirSnd::Init(u32 arg1, u8 arg2, bool arg3, char* arg4)
{
    return stub<cdecl_t<class DirSnd*, u32, u8, bool, char*>>(0x5A5080, arg1, arg2, arg3, arg4);
}

i32 DirSnd::CreatePrimaryInterfaceAndBuffer(struct _DSBUFFERDESC* arg1)
{
    return stub<thiscall_t<i32, DirSnd*, struct _DSBUFFERDESC*>>(0x5A5630, this, arg1);
}

i32 __stdcall DSEnumProc(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<i32, struct _GUID*, char*, char*, void*>>(0x5A5210, arg1, arg2, arg3, arg4);
}

i32 FormatCodeToWFX(u32 arg1, struct tWAVEFORMATEX* arg2)
{
    return stub<cdecl_t<i32, u32, struct tWAVEFORMATEX*>>(0x5A57B0, arg1, arg2);
}

void UpperCase(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5A5170, arg1);
}

define_dummy_symbol(aud_dirsnd);
