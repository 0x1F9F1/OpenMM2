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

#include "racedata.h"

mmRaceData::mmRaceData()
{
    unimplemented();
}

mmRaceData::~mmRaceData()
{
    unimplemented();
}

f32 mmRaceData::GetAmbientDensity(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<f32, mmRaceData*, i32, enum dgSkillLevel>>(0x52A050, this, arg1, arg2);
}

i32 mmRaceData::GetCarType(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529ED0, this, arg1, arg2);
}

f32 mmRaceData::GetDifficulty(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<f32, mmRaceData*, i32, enum dgSkillLevel>>(0x52A080, this, arg1, arg2);
}

i32 mmRaceData::GetNumCops(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529F90, this, arg1, arg2);
}

i32 mmRaceData::GetNumLaps(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529F00, this, arg1, arg2);
}

i32 mmRaceData::GetNumOpponents(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529F60, this, arg1, arg2);
}

i32 mmRaceData::GetNumRaces()
{
    return stub<thiscall_t<i32, mmRaceData*>>(0x529EB0, this);
}

f32 mmRaceData::GetPedDensity(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<f32, mmRaceData*, i32, enum dgSkillLevel>>(0x52A020, this, arg1, arg2);
}

char* mmRaceData::GetRaceName(i32 arg1)
{
    return stub<thiscall_t<char*, mmRaceData*, i32>>(0x529EC0, this, arg1);
}

f32 mmRaceData::GetTimeLimit(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<f32, mmRaceData*, i32, enum dgSkillLevel>>(0x529F30, this, arg1, arg2);
}

i32 mmRaceData::GetTimeOfDay(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529FC0, this, arg1, arg2);
}

i32 mmRaceData::GetWeather(i32 arg1, enum dgSkillLevel arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, i32, enum dgSkillLevel>>(0x529FF0, this, arg1, arg2);
}

i32 mmRaceData::Load(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, mmRaceData*, char*, char*>>(0x529BA0, this, arg1, arg2);
}

define_dummy_symbol(mmcityinfo_racedata);
