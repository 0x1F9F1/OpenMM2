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

mmReplayManager::mmReplayManager()
{
    unimplemented();
}

mmReplayManager::~mmReplayManager()
{
    unimplemented();
}

void mmReplayManager::Cull()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x406DF0, this);
}

bool mmReplayManager::EndOfReplay()
{
    return stub<thiscall_t<bool, mmReplayManager*>>(0x407130, this);
}

f32 mmReplayManager::GetBrakes()
{
    return stub<thiscall_t<f32, mmReplayManager*>>(0x4072D0, this);
}

void mmReplayManager::GetData(i32* arg1, bool* arg2)
{
    return stub<thiscall_t<void, mmReplayManager*, i32*, bool*>>(0x407390, this, arg1, arg2);
}

f32 mmReplayManager::GetHandBrakes()
{
    return stub<thiscall_t<f32, mmReplayManager*>>(0x407300, this);
}

f32 mmReplayManager::GetSteering()
{
    return stub<thiscall_t<f32, mmReplayManager*>>(0x407330, this);
}

f32 mmReplayManager::GetThrottle()
{
    return stub<thiscall_t<f32, mmReplayManager*>>(0x407360, this);
}

void mmReplayManager::LoadReplay(char* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, char*>>(0x407000, this, arg1);
}

i32 mmReplayManager::LoadReplayDesc(char* arg1)
{
    return stub<thiscall_t<i32, mmReplayManager*, char*>>(0x406F30, this, arg1);
}

void mmReplayManager::Reset()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x406990, this);
}

void mmReplayManager::SaveReplay(char* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, char*>>(0x4071E0, this, arg1);
}

void mmReplayManager::SaveReplayDesc(char* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, char*>>(0x407150, this, arg1);
}

void mmReplayManager::SetData(i32 arg1, bool arg2)
{
    return stub<thiscall_t<void, mmReplayManager*, i32, bool>>(0x4073D0, this, arg1, arg2);
}

void mmReplayManager::SetReplayDesc(char* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, char*>>(0x406EF0, this, arg1);
}

void mmReplayManager::Update()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x4069E0, this);
}

void mmReplayManager::GetReplayInfo()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x407410, this);
}

void mmReplayManager::ProcessCam()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x406E00, this);
}

void mmReplayManager::ReadReplayInfo(class Stream* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, class Stream*>>(0x407920, this, arg1);
}

void mmReplayManager::SetReplayInfo()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x4075A0, this);
}

void mmReplayManager::StartReplay()
{
    return stub<thiscall_t<void, mmReplayManager*>>(0x406E80, this);
}

void mmReplayManager::WriteReplayInfo(class Stream* arg1)
{
    return stub<thiscall_t<void, mmReplayManager*, class Stream*>>(0x407720, this, arg1);
}

define_dummy_symbol(mmgame_replay);
