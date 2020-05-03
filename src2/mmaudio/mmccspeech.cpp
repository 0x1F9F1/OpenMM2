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

#include "mmccspeech.h"

mmCCSpeech::mmCCSpeech()
{
    unimplemented();
}

mmCCSpeech::~mmCCSpeech()
{
    unimplemented();
}

bool mmCCSpeech::LoadCheckPointIndexInfo(char* arg1)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*>>(0x51BDB0, this, arg1);
}

bool mmCCSpeech::LoadGroup(char* arg1, i32 arg2)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*, i32>>(0x51BB80, this, arg1, arg2);
}

bool mmCCSpeech::LoadPreRace(char* arg1)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*>>(0x51BB00, this, arg1);
}

bool mmCCSpeech::LoadResults(char* arg1)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*>>(0x51BB40, this, arg1);
}

bool mmCCSpeech::LoadUnlock(char* arg1)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*>>(0x51BAC0, this, arg1);
}

void mmCCSpeech::PlayCheckPoint(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmCCSpeech*, i32, f32>>(0x51B970, this, arg1, arg2);
}

void mmCCSpeech::PlayPreRace()
{
    return stub<thiscall_t<void, mmCCSpeech*>>(0x51B900, this);
}

void mmCCSpeech::PlayResults(i32 arg1)
{
    return stub<thiscall_t<void, mmCCSpeech*, i32>>(0x51B9B0, this, arg1);
}

void mmCCSpeech::PlayResultsPoor()
{
    return stub<thiscall_t<void, mmCCSpeech*>>(0x51B9D0, this);
}

void mmCCSpeech::PlayResultsWin()
{
    return stub<thiscall_t<void, mmCCSpeech*>>(0x51B9F0, this);
}

void mmCCSpeech::PlayUnlock()
{
    return stub<thiscall_t<void, mmCCSpeech*>>(0x51B950, this);
}

bool mmCCSpeech::SetSubPath(char* arg1)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*>>(0x51BA10, this, arg1);
}

void mmCCSpeech::CheckRaceLoadSanity(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCCSpeech*, f32, i32>>(0x51BF40, this, arg1, arg2);
}

bool mmCCSpeech::SetReadState(char* arg1, f32 arg2, i32* arg3)
{
    return stub<thiscall_t<bool, mmCCSpeech*, char*, f32, i32*>>(0x51BF50, this, arg1, arg2, arg3);
}

i32 mmCCSpeech::locstrnicmp(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, mmCCSpeech*, char*, char*>>(0x51C0D0, this, arg1, arg2);
}

define_dummy_symbol(mmaudio_mmccspeech);
