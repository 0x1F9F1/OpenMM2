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

#include "waypoints.h"

mmWaypoints::mmWaypoints()
{
    unimplemented();
}

mmWaypoints::~mmWaypoints()
{
    unimplemented();
}

i32 mmWaypoints::AIWPHit(i32 arg1, i32 arg2, class Matrix34 arg3, class Vector3 arg4, f32 arg5)
{
    return stub<thiscall_t<i32, mmWaypoints*, i32, i32, class Matrix34, class Vector3, f32>>(
        0x435CE0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 mmWaypoints::AnyDrawn()
{
    return stub<thiscall_t<i32, mmWaypoints*>>(0x435CA0, this);
}

i32 mmWaypoints::AnyWPHits(i32 arg1)
{
    return stub<thiscall_t<i32, mmWaypoints*, i32>>(0x435DE0, this, arg1);
}

void mmWaypoints::Cull()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435240, this);
}

void mmWaypoints::DeactivateFinish()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x4357D0, this);
}

void mmWaypoints::DisplayHUDMessage(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypoints*, i32>>(0x4360C0, this, arg1);
}

void mmWaypoints::GetClosestWaypoint()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435B10, this);
}

f32 mmWaypoints::GetCurrentDistance()
{
    return stub<thiscall_t<f32, mmWaypoints*>>(0x435A50, this);
}

f32 mmWaypoints::GetHeading(i32 arg1)
{
    return stub<thiscall_t<f32, mmWaypoints*, i32>>(0x435970, this, arg1);
}

i32 mmWaypoints::GetHitRoom(i32 arg1)
{
    return stub<thiscall_t<i32, mmWaypoints*, i32>>(0x435A00, this, arg1);
}

void mmWaypoints::GetLastWaypoint()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435C50, this);
}

void mmWaypoints::GetNextWaypoint()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435C40, this);
}

void mmWaypoints::GetStart(class Vector3& arg1)
{
    return stub<thiscall_t<void, mmWaypoints*, class Vector3&>>(0x4358F0, this, arg1);
}

f32 mmWaypoints::GetStartAngle()
{
    return stub<thiscall_t<f32, mmWaypoints*>>(0x434960, this);
}

void mmWaypoints::GetWaypoint(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, mmWaypoints*, i32, class Vector3&>>(0x435930, this, arg1, arg2);
}

i32 mmWaypoints::Init(class mmPlayer* arg1, char* arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, u32 arg7)
{
    return stub<thiscall_t<i32, mmWaypoints*, class mmPlayer*, char*, i32, i32, i32, i32, u32>>(
        0x434430, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void mmWaypoints::InitStatic(class mmPlayer* arg1, i32 arg2, u32 arg3)
{
    return stub<thiscall_t<void, mmWaypoints*, class mmPlayer*, i32, u32>>(0x434540, this, arg1, arg2, arg3);
}

i32 mmWaypoints::LoadCSV(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmWaypoints*, char*, i32>>(0x434A70, this, arg1, arg2);
}

void mmWaypoints::ReInit(i32 arg1, char* arg2, u32 arg3)
{
    return stub<thiscall_t<void, mmWaypoints*, i32, char*, u32>>(0x434700, this, arg1, arg2, arg3);
}

void mmWaypoints::Reset()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x4357E0, this);
}

void mmWaypoints::ResetAllTags()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435AA0, this);
}

i32 mmWaypoints::SaveCSV(char* arg1)
{
    return stub<thiscall_t<i32, mmWaypoints*, char*>>(0x434980, this, arg1);
}

void mmWaypoints::SetArrow()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435A20, this);
}

void mmWaypoints::Update()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x435280, this);
}

void mmWaypoints::ClearWaypoint(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypoints*, i32>>(0x435F60, this, arg1);
}

void mmWaypoints::CycleCurrentWaypoint(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypoints*, i32>>(0x435BD0, this, arg1);
}

void mmWaypoints::GenerateHitRooms()
{
    return stub<thiscall_t<void, mmWaypoints*>>(0x4359A0, this);
}

void mmWaypoints::SetCurrentGoals(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypoints*, i32>>(0x435C60, this, arg1);
}

define_dummy_symbol(mmgame_waypoints);
