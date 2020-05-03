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

#include "playerdata.h"

mmPlayerData::mmPlayerData()
{
    unimplemented();
}

mmPlayerData::~mmPlayerData()
{
    unimplemented();
}

void mmPlayerData::operator=(class mmPlayerData& arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, class mmPlayerData&>>(0x5270C0, this, arg1);
}

i32 mmPlayerData::CloseCityRecord()
{
    return stub<thiscall_t<i32, mmPlayerData*>>(0x527220, this);
}

u32 mmPlayerData::ComputeCRC()
{
    return stub<thiscall_t<u32, mmPlayerData*>>(0x527E40, this);
}

i32 mmPlayerData::GetCheckpointProgress(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x527230, this, arg1, arg2);
}

char* mmPlayerData::GetCity()
{
    return stub<thiscall_t<char*, mmPlayerData*>>(0x527C70, this);
}

char* mmPlayerData::GetFileName()
{
    return stub<thiscall_t<char*, mmPlayerData*>>(0x527D60, this);
}

char* mmPlayerData::GetName()
{
    return stub<thiscall_t<char*, mmPlayerData*>>(0x527CC0, this);
}

char* mmPlayerData::GetNetName()
{
    return stub<thiscall_t<char*, mmPlayerData*>>(0x527D10, this);
}

i32 mmPlayerData::GetNumPassed(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x527370, this, arg1, arg2);
}

i32 mmPlayerData::GetPassedMask(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x5272A0, this, arg1, arg2);
}

i32 mmPlayerData::GetProgress(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x527270, this, arg1, arg2);
}

i32 mmPlayerData::GetScore(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x527530, this, arg1, arg2);
}

f32 mmPlayerData::GetTagID()
{
    return stub<thiscall_t<f32, mmPlayerData*>>(0x527250, this);
}

i32 mmPlayerData::GetTotalPassed(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x527440, this, arg1);
}

i32 mmPlayerData::GetTotalScore(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x527710, this, arg1);
}

i32 mmPlayerData::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x527D70, this, arg1);
}

i32 mmPlayerData::LoadBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x527EF0, this, arg1);
}

i32 mmPlayerData::OpenCityRecord(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x5271B0, this, arg1);
}

i32 mmPlayerData::RegisterFinish(class mmPlayerRecord arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, mmPlayerData*, class mmPlayerRecord, i32, i32>>(0x527B30, this, arg1, arg2, arg3);
}

void mmPlayerData::Reset()
{
    return stub<thiscall_t<void, mmPlayerData*>>(0x527BB0, this);
}

i32 mmPlayerData::ResolveCheckpointProgress(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x527890, this, arg1);
}

i32 mmPlayerData::ResolveCrashProgress(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x5279D0, this, arg1);
}

i32 mmPlayerData::Save(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*, i32>>(0x527DA0, this, arg1, arg2);
}

i32 mmPlayerData::SaveBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerData*, char*>>(0x5280B0, this, arg1);
}

void mmPlayerData::SetCity(char* arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, char*>>(0x527C30, this, arg1);
}

void mmPlayerData::SetFileName(char* arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, char*>>(0x527D20, this, arg1);
}

void mmPlayerData::SetName(char* arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, char*>>(0x527C80, this, arg1);
}

void mmPlayerData::SetNetName(char* arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, char*>>(0x527CD0, this, arg1);
}

void mmPlayerData::SetTagID(f32 arg1)
{
    return stub<thiscall_t<void, mmPlayerData*, f32>>(0x527260, this, arg1);
}

define_dummy_symbol(mmcityinfo_playerdata);
