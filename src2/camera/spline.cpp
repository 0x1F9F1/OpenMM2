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

#include "spline.h"

Spline::Spline()
{
    unimplemented();
}

Spline::~Spline()
{
    unimplemented();
}

void Spline::CalcCoeff()
{
    return stub<thiscall_t<void, Spline*>>(0x522D50, this);
}

void Spline::FixTimeStop()
{
    return stub<thiscall_t<void, Spline*>>(0x5231E0, this);
}

i32 Spline::InRange()
{
    return stub<thiscall_t<i32, Spline*>>(0x522D00, this);
}

void Spline::Init(f32* arg1, i32 arg2)
{
    return stub<thiscall_t<void, Spline*, f32*, i32>>(0x522BF0, this, arg1, arg2);
}

void Spline::Print(i32 arg1)
{
    return stub<thiscall_t<void, Spline*, i32>>(0x5230E0, this, arg1);
}

void Spline::SetGoal(f32* arg1, f32 arg2)
{
    return stub<thiscall_t<void, Spline*, f32*, f32>>(0x522ED0, this, arg1, arg2);
}

void Spline::SetValue(f32* arg1)
{
    return stub<thiscall_t<void, Spline*, f32*>>(0x522E60, this, arg1);
}

void Spline::Solve(f32 arg1)
{
    return stub<thiscall_t<void, Spline*, f32>>(0x522FB0, this, arg1);
}

void Spline::Update()
{
    return stub<thiscall_t<void, Spline*>>(0x523210, this);
}

define_dummy_symbol(camera_spline);
