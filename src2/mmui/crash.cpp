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

#include "crash.h"

ccStatus::ccStatus()
{
    unimplemented();
}

ccStatus::~ccStatus()
{
    unimplemented();
}

void ccStatus::Cull()
{
    return stub<thiscall_t<void, ccStatus*>>(0x503010, this);
}

void ccStatus::LoadBitmap(char* arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, ccStatus*, char*, i32, i32, i32>>(0x502F80, this, arg1, arg2, arg3, arg4);
}

void ccStatus::SetStatus(i16 arg1)
{
    return stub<thiscall_t<void, ccStatus*, i16>>(0x503060, this, arg1);
}

void ccStatus::Update()
{
    return stub<thiscall_t<void, ccStatus*>>(0x502FF0, this);
}

CrashCourse::CrashCourse(i32 arg1)
{
    unimplemented();
}

CrashCourse::~CrashCourse()
{
    unimplemented();
}

void CrashCourse::ChangeLocalVals()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x503CF0, this);
}

void CrashCourse::DecRaceName()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x504010, this);
}

void CrashCourse::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, CrashCourse*, i32, i32>>(0x503F00, this, arg1, arg2);
}

void CrashCourse::GameCallback()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x503960, this);
}

void CrashCourse::IncRaceName()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x503F70, this);
}

void CrashCourse::PreSetup()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x5037C0, this);
}

void CrashCourse::SetBlitzMask(i32 arg1)
{
    return stub<thiscall_t<void, CrashCourse*, i32>>(0x503F30, this, arg1);
}

void CrashCourse::SetCheckpointMask(i32 arg1)
{
    return stub<thiscall_t<void, CrashCourse*, i32>>(0x503F50, this, arg1);
}

void CrashCourse::SetEnvironment()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x503980, this);
}

void CrashCourse::SetProgressMask(i32 arg1)
{
    return stub<thiscall_t<void, CrashCourse*, i32>>(0x503F10, this, arg1);
}

void CrashCourse::SetRaceGrade(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, CrashCourse*, i32, i32>>(0x503790, this, arg1, arg2);
}

void CrashCourse::SetRaceState()
{
    return stub<thiscall_t<void, CrashCourse*>>(0x503BD0, this);
}

void CrashCourse::SetVehicleNext(bool arg1)
{
    return stub<thiscall_t<void, CrashCourse*, bool>>(0x504080, this, arg1);
}

define_dummy_symbol(mmui_crash);
