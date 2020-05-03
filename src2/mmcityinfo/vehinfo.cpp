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

#include "vehinfo.h"

mmVehInfo::mmVehInfo()
{
    unimplemented();
}

mmVehInfo::~mmVehInfo()
{
    unimplemented();
}

void mmVehInfo::ComputeTuningCRC()
{
    return stub<thiscall_t<void, mmVehInfo*>>(0x529AB0, this);
}

u32 mmVehInfo::GetTuningCRC()
{
    return stub<thiscall_t<u32, mmVehInfo*>>(0x529AA0, this);
}

i32 mmVehInfo::HasColorVariations()
{
    return stub<thiscall_t<i32, mmVehInfo*>>(0x529A00, this);
}

i32 mmVehInfo::IsValid()
{
    return stub<thiscall_t<i32, mmVehInfo*>>(0x4F7A90, this);
}

i32 mmVehInfo::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmVehInfo*, char*>>(0x5297B0, this, arg1);
}

void mmVehInfo::Print()
{
    return stub<thiscall_t<void, mmVehInfo*>>(0x529A20, this);
}

void mygetstring(struct _iobuf* arg1, char* arg2)
{
    return stub<cdecl_t<void, struct _iobuf*, char*>>(0x529780, arg1, arg2);
}

define_dummy_symbol(mmcityinfo_vehinfo);
