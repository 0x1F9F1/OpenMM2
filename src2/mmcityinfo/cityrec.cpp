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

#include "cityrec.h"

mmPlayerRecord::mmPlayerRecord()
{
    unimplemented();
}

mmPlayerRecord::mmPlayerRecord(class mmPlayerRecord const& arg1)
{
    unimplemented();
}

mmPlayerRecord::~mmPlayerRecord()
{
    unimplemented();
}

void mmPlayerRecord::operator=(class mmPlayerRecord& arg1)
{
    return stub<thiscall_t<void, mmPlayerRecord*, class mmPlayerRecord&>>(0x5287E0, this, arg1);
}

i32 mmPlayerRecord::operator==(class mmPlayerRecord const& arg1)
{
    return stub<thiscall_t<i32, mmPlayerRecord*, class mmPlayerRecord const&>>(0x528830, this, arg1);
}

u32 mmPlayerRecord::ComputeCRC()
{
    return stub<thiscall_t<u32, mmPlayerRecord*>>(0x5288C0, this);
}

i32 mmPlayerRecord::LoadBinary(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmPlayerRecord*, class Stream*>>(0x528990, this, arg1);
}

void mmPlayerRecord::Reset()
{
    return stub<thiscall_t<void, mmPlayerRecord*>>(0x5287B0, this);
}

i32 mmPlayerRecord::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmPlayerRecord*, class Stream*>>(0x528910, this, arg1);
}

mmPlayerCityRecord::mmPlayerCityRecord()
{
    unimplemented();
}

mmPlayerCityRecord::~mmPlayerCityRecord()
{
    unimplemented();
}

i32 mmPlayerCityRecord::Close()
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*>>(0x529360, this);
}

u32 mmPlayerCityRecord::ComputeCRC()
{
    return stub<thiscall_t<u32, mmPlayerCityRecord*>>(0x528A70, this);
}

i32 mmPlayerCityRecord::GetNumPassed(i32 arg1)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, i32>>(0x529490, this, arg1);
}

i32 mmPlayerCityRecord::GetNumRaces(i32 arg1)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, i32>>(0x529580, this, arg1);
}

u32 mmPlayerCityRecord::GetPassedMask(i32 arg1)
{
    return stub<thiscall_t<u32, mmPlayerCityRecord*, i32>>(0x5295E0, this, arg1);
}

i32 mmPlayerCityRecord::GetRecord(class mmPlayerRecord& arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, class mmPlayerRecord&, i32, i32>>(
        0x528FA0, this, arg1, arg2, arg3);
}

void mmPlayerCityRecord::InitCityRecord(char* arg1, f32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<void, mmPlayerCityRecord*, char*, f32, i32, i32, i32, i32>>(
        0x528B10, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 mmPlayerCityRecord::NewRecord(class mmPlayerRecord arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, class mmPlayerRecord, i32, i32>>(0x5290C0, this, arg1, arg2, arg3);
}

i32 mmPlayerCityRecord::Open(char* arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, char*, f32>>(0x528DB0, this, arg1, arg2);
}

void mmPlayerCityRecord::Reset()
{
    return stub<thiscall_t<void, mmPlayerCityRecord*>>(0x528A60, this);
}

i32 mmPlayerCityRecord::GetFileOffset(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerCityRecord*, i32, i32>>(0x529640, this, arg1, arg2);
}

define_dummy_symbol(mmcityinfo_cityrec);
