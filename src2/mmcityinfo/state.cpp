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

#include "state.h"

mmStatePack::mmStatePack()
{
    unimplemented();
}

mmStatePack::~mmStatePack()
{
    unimplemented();
}

bool mmStatePack::ParseStateArgs()
{
    return stub<thiscall_t<bool, mmStatePack*>>(0x523590, this);
}

void mmStatePack::SetDefaults(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, mmStatePack*, char*, char*>>(0x523310, this, arg1, arg2);
}

NetStartArray::NetStartArray()
{
    unimplemented();
}

NetStartArray::~NetStartArray()
{
    unimplemented();
}

i32 NetStartArray::AssignOpenIndex(u32 arg1)
{
    return stub<thiscall_t<i32, NetStartArray*, u32>>(0x523610, this, arg1);
}

void NetStartArray::Clear()
{
    return stub<thiscall_t<void, NetStartArray*>>(0x5235C0, this);
}

void NetStartArray::ClearIndex(u32 arg1)
{
    return stub<thiscall_t<void, NetStartArray*, u32>>(0x5235F0, this, arg1);
}

i32 NetStartArray::GetIndex(u32 arg1)
{
    return stub<thiscall_t<i32, NetStartArray*, u32>>(0x5235D0, this, arg1);
}

void NetStartArray::Init(u32* arg1)
{
    return stub<thiscall_t<void, NetStartArray*, u32*>>(0x523650, this, arg1);
}

define_dummy_symbol(mmcityinfo_state);
