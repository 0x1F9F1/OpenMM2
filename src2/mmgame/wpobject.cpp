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

#include "wpobject.h"

f32 wpmax(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x43DE10, arg1, arg2);
}

f32 wpmin(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x43DDF0, arg1, arg2);
}

mmWaypointObject::mmWaypointObject(class Vector4& arg1, char* arg2, i32 arg3, f32 arg4, i32 arg5, f32 arg6)
{
    unimplemented();
}

mmWaypointObject::~mmWaypointObject()
{
    unimplemented();
}

void mmWaypointObject::Activate()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E0C0, this);
}

void mmWaypointObject::CalculateGatePoints()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E190, this);
}

void mmWaypointObject::Deactivate()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E0D0, this);
}

i32 mmWaypointObject::GetDrawFlag()
{
    return stub<thiscall_t<i32, mmWaypointObject*>>(0x43E5E0, this);
}

i32 mmWaypointObject::GetHitFlag()
{
    return stub<thiscall_t<i32, mmWaypointObject*>>(0x43E6C0, this);
}

i32 mmWaypointObject::LineIntersect(
    class Vector2 arg1, class Vector2 arg2, class Vector2 arg3, class Vector2 arg4, f32 arg5)
{
    return stub<thiscall_t<i32, mmWaypointObject*, class Vector2, class Vector2, class Vector2, class Vector2, f32>>(
        0x43E400, this, arg1, arg2, arg3, arg4, arg5);
}

void mmWaypointObject::Move()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E5F0, this);
}

i32 mmWaypointObject::PlaneHit(class Matrix34 arg1, class Vector2 arg2, class Vector2 arg3, class Vector3 arg4)
{
    return stub<thiscall_t<i32, mmWaypointObject*, class Matrix34, class Vector2, class Vector2, class Vector3>>(
        0x43E210, this, arg1, arg2, arg3, arg4);
}

i32 mmWaypointObject::RadiusHit(class Vector3 arg1)
{
    return stub<thiscall_t<i32, mmWaypointObject*, class Vector3>>(0x43E3B0, this, arg1);
}

void mmWaypointObject::Reset()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E020, this);
}

void mmWaypointObject::SetHeading(f32 arg1)
{
    return stub<thiscall_t<void, mmWaypointObject*, f32>>(0x43E0E0, this, arg1);
}

void mmWaypointObject::SetHeadingType(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypointObject*, i32>>(0x43E160, this, arg1);
}

void mmWaypointObject::SetHitFlag(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypointObject*, i32>>(0x43E6D0, this, arg1);
}

void mmWaypointObject::SetPos(class Vector3 arg1)
{
    return stub<thiscall_t<void, mmWaypointObject*, class Vector3>>(0x43E140, this, arg1);
}

void mmWaypointObject::SetRadius(f32 arg1)
{
    return stub<thiscall_t<void, mmWaypointObject*, f32>>(0x43E170, this, arg1);
}

void mmWaypointObject::Update()
{
    return stub<thiscall_t<void, mmWaypointObject*>>(0x43E060, this);
}

define_dummy_symbol(mmgame_wpobject);
