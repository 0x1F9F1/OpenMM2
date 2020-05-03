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

#include "mmracespeech.h"

mmRaceSpeech::mmRaceSpeech()
{
    unimplemented();
}

bool mmRaceSpeech::LoadCityInfo(char* arg1)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*>>(0x51A930, this, arg1);
}

bool mmRaceSpeech::LoadGroup(char* arg1, i32 arg2)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*, i32>>(0x51AC80, this, arg1, arg2);
}

bool mmRaceSpeech::LoadPreRace(char* arg1)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*>>(0x51AC00, this, arg1);
}

bool mmRaceSpeech::LoadResults(char* arg1)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*>>(0x51AC40, this, arg1);
}

bool mmRaceSpeech::LoadTextureUnlock(char* arg1)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*>>(0x51ABC0, this, arg1);
}

bool mmRaceSpeech::LoadVehicleUnlock(char* arg1)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*>>(0x51AB80, this, arg1);
}

void mmRaceSpeech::PlayDamagePenalty()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A7A0, this);
}

void mmRaceSpeech::PlayFinalCheckPoint()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A750, this);
}

void mmRaceSpeech::PlayFinalLap()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A780, this);
}

void mmRaceSpeech::PlayPreRace()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A590, this);
}

void mmRaceSpeech::PlayRaceProgress()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A7D0, this);
}

void mmRaceSpeech::PlayResults(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmRaceSpeech*, i32, i32>>(0x51A800, this, arg1, arg2);
}

void mmRaceSpeech::PlayResultsMid()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A8E0, this);
}

void mmRaceSpeech::PlayResultsPoor()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A840, this);
}

void mmRaceSpeech::PlayResultsWin()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A890, this);
}

void mmRaceSpeech::PlayUnlockRace()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A660, this);
}

void mmRaceSpeech::PlayUnlockTexture()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A720, this);
}

void mmRaceSpeech::PlayUnlockVehicle()
{
    return stub<thiscall_t<void, mmRaceSpeech*>>(0x51A6C0, this);
}

void mmRaceSpeech::CheckRaceLoadSanity(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmRaceSpeech*, f32, i32>>(0x51AF10, this, arg1, arg2);
}

bool mmRaceSpeech::SetReadState(char* arg1, f32 arg2, i32* arg3)
{
    return stub<thiscall_t<bool, mmRaceSpeech*, char*, f32, i32*>>(0x51AF20, this, arg1, arg2, arg3);
}

i32 mmRaceSpeech::locstrnicmp(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, mmRaceSpeech*, char*, char*>>(0x51B300, this, arg1, arg2);
}

define_dummy_symbol(mmaudio_mmracespeech);
