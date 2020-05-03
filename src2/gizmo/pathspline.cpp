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

#include "pathspline.h"

gizPathspline::gizPathspline()
{
    unimplemented();
}

gizPathspline::~gizPathspline()
{
    unimplemented();
}

f32 gizPathspline::GetCurrRatio()
{
    return stub<thiscall_t<f32, gizPathspline*>>(0x57A520, this);
}

i32 gizPathspline::GetNumVertex()
{
    return stub<thiscall_t<i32, gizPathspline*>>(0x57A750, this);
}

class Vector3& gizPathspline::GetVertex(i32 arg1)
{
    return stub<thiscall_t<class Vector3&, gizPathspline*, i32>>(0x57A780, this, arg1);
}

void gizPathspline::Init(class dgPath* arg1, f32 arg2)
{
    return stub<thiscall_t<void, gizPathspline*, class dgPath*, f32>>(0x57A0E0, this, arg1, arg2);
}

void gizPathspline::Reset()
{
    return stub<thiscall_t<void, gizPathspline*>>(0x57A090, this);
}

void gizPathspline::SetSpeed(f32 arg1)
{
    return stub<thiscall_t<void, gizPathspline*, f32>>(0x57A760, this, arg1);
}

void gizPathspline::Update(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, gizPathspline*, class Vector3&, class Vector3&, f32>>(
        0x57A410, this, arg1, arg2, arg3);
}

void gizPathspline::UpdateRatio(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, gizPathspline*, class Vector3&, class Vector3&, f32>>(
        0x57A440, this, arg1, arg2, arg3);
}

void gizPathspline::Compute(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<thiscall_t<void, gizPathspline*, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x57A100, this, arg1, arg2, arg3, arg4);
}

void gizPathspline::ComputePath(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, gizPathspline*, i32, i32, i32>>(0x57A530, this, arg1, arg2, arg3);
}

void gizPathspline::DecrementPath()
{
    return stub<thiscall_t<void, gizPathspline*>>(0x57A710, this);
}

void gizPathspline::IncrementPath()
{
    return stub<thiscall_t<void, gizPathspline*>>(0x57A6D0, this);
}

void gizPathspline::Solve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, gizPathspline*, class Vector3&, class Vector3&, f32>>(
        0x57A370, this, arg1, arg2, arg3);
}

define_dummy_symbol(gizmo_pathspline);
