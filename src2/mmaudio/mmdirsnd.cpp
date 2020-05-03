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

#include "mmdirsnd.h"

mmDirSnd::mmDirSnd()
{
    unimplemented();
}

mmDirSnd::~mmDirSnd()
{
    unimplemented();
}

u32 mmDirSnd::DSound3DEnabled()
{
    return stub<thiscall_t<u32, mmDirSnd*>>(0x51CE70, this);
}

void mmDirSnd::DeInit(i16 arg1, i16 arg2)
{
    return stub<thiscall_t<void, mmDirSnd*, i16, i16>>(0x51CC10, this, arg1, arg2);
}

u32 mmDirSnd::EAXEnabled()
{
    return stub<thiscall_t<u32, mmDirSnd*>>(0x51CE60, this);
}

i32 mmDirSnd::InitPrimarySoundBuffer(u32 arg1, u8 arg2, char* arg3)
{
    return stub<thiscall_t<i32, mmDirSnd*, u32, u8, char*>>(0x51CD90, this, arg1, arg2, arg3);
}

class mmDirSnd* mmDirSnd::Init(u32 arg1, u8 arg2, i32 arg3, i32 arg4, char* arg5, i16 arg6, i16 arg7)
{
    return stub<cdecl_t<class mmDirSnd*, u32, u8, i32, i32, char*, i16, i16>>(
        0x51CC50, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

define_dummy_symbol(mmaudio_mmdirsnd);
