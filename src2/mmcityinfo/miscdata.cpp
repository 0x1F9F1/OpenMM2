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

#include "miscdata.h"

mmMiscData::mmMiscData()
{
    unimplemented();
}

mmMiscData::~mmMiscData()
{
    unimplemented();
}

i32 mmMiscData::Close()
{
    return stub<thiscall_t<i32, mmMiscData*>>(0x524C90, this);
}

class mmRecord mmMiscData::GetRecord(i32 arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<class mmRecord, mmMiscData*, i32, i32, i32, i32>>(0x524F90, this, arg1, arg2, arg3, arg4);
}

i32 mmMiscData::Init(char* arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, mmMiscData*, char*, i32, i32, i32>>(0x524CC0, this, arg1, arg2, arg3, arg4);
}

i32 mmMiscData::NewRecord(i32 arg1, char* arg2, f32 arg3, i32 arg4, char* arg5, i32 arg6, i32 arg7)
{
    return stub<thiscall_t<i32, mmMiscData*, i32, char*, f32, i32, char*, i32, i32>>(
        0x525120, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 mmMiscData::Open(char* arg1)
{
    return stub<thiscall_t<i32, mmMiscData*, char*>>(0x524B20, this, arg1);
}

void mmMiscData::Reset()
{
    return stub<thiscall_t<void, mmMiscData*>>(0x524B00, this);
}

i32 mmMiscData::GetFileOffset(i32 arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, mmMiscData*, i32, i32, i32, i32>>(0x524EF0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(mmcityinfo_miscdata);
