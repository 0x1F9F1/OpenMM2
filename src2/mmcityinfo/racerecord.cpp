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

#include "racerecord.h"

mmRecord::mmRecord()
{
    unimplemented();
}

mmRecord::~mmRecord()
{
    unimplemented();
}

void mmRecord::operator=(class mmRecord& arg1)
{
    return stub<thiscall_t<void, mmRecord*, class mmRecord&>>(0x528570, this, arg1);
}

u32 mmRecord::ComputeCRC()
{
    return stub<thiscall_t<u32, mmRecord*>>(0x528700, this);
}

char* mmRecord::GetCarName()
{
    return stub<thiscall_t<char*, mmRecord*>>(0x528490, this);
}

char* mmRecord::GetName()
{
    return stub<thiscall_t<char*, mmRecord*>>(0x5284A0, this);
}

i32 mmRecord::GetPassed()
{
    return stub<thiscall_t<i32, mmRecord*>>(0x5284B0, this);
}

i32 mmRecord::GetScore()
{
    return stub<thiscall_t<i32, mmRecord*>>(0x5284C0, this);
}

f32 mmRecord::GetTime()
{
    return stub<thiscall_t<f32, mmRecord*>>(0x528480, this);
}

i32 mmRecord::LoadBinary(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmRecord*, class Stream*>>(0x528680, this, arg1);
}

void mmRecord::Reset()
{
    return stub<thiscall_t<void, mmRecord*>>(0x528440, this);
}

i32 mmRecord::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmRecord*, class Stream*>>(0x528600, this, arg1);
}

void mmRecord::SetCarName(char* arg1)
{
    return stub<thiscall_t<void, mmRecord*, char*>>(0x5284E0, this, arg1);
}

void mmRecord::SetName(char* arg1)
{
    return stub<thiscall_t<void, mmRecord*, char*>>(0x528500, this, arg1);
}

void mmRecord::SetPassed(i32 arg1)
{
    return stub<thiscall_t<void, mmRecord*, i32>>(0x528540, this, arg1);
}

void mmRecord::SetScore(i32 arg1)
{
    return stub<thiscall_t<void, mmRecord*, i32>>(0x528560, this, arg1);
}

void mmRecord::SetTime(f32 arg1)
{
    return stub<thiscall_t<void, mmRecord*, f32>>(0x5284D0, this, arg1);
}

define_dummy_symbol(mmcityinfo_racerecord);
