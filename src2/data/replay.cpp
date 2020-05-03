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

#include "replay.h"

void datReplay::BeginFrame()
{
    return stub<cdecl_t<void>>(0x4C91E0);
}

bool datReplay::BeginPlayback(class datMemStream* arg1)
{
    return stub<cdecl_t<bool, class datMemStream*>>(0x4C9150, arg1);
}

bool datReplay::BeginRecord(class datMemStream* arg1)
{
    return stub<cdecl_t<bool, class datMemStream*>>(0x4C9110, arg1);
}

void datReplay::Close()
{
    return stub<cdecl_t<void>>(0x4C91B0);
}

bool datReplay::EndFrame()
{
    return stub<cdecl_t<bool>>(0x4C91F0);
}

i32 datReplay::GetByte()
{
    return stub<cdecl_t<i32>>(0x4C9060);
}

i32 datReplay::GetInt()
{
    return stub<cdecl_t<i32>>(0x4C9080);
}

void datReplay::RecordByte(u8 arg1)
{
    return stub<cdecl_t<void, u8>>(0x4C90B0, arg1);
}

void datReplay::RecordInt(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x4C90E0, arg1);
}

void datReplay::Reset()
{
    return stub<cdecl_t<void>>(0x4C9040);
}

define_dummy_symbol(data_replay);
