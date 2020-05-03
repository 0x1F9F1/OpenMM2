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

#include "aiBanger.h"

aiBanger::aiBanger(class lvlInstance* arg1, i32 arg2, i32 arg3)
{
    unimplemented();
}

aiBanger::~aiBanger()
{
    unimplemented();
}

f32 aiBanger::BreakThreshold()
{
    return stub<thiscall_t<f32, aiBanger*>>(0x56A780, this);
}

i32 aiBanger::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiBanger*>>(0x56A9D0, this);
}

i32 aiBanger::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiBanger*, class aiPath**, bool* const, i32*>>(0x56A880, this, arg1, arg2, arg3);
}

void aiBanger::Draw()
{
    return stub<thiscall_t<void, aiBanger*>>(0x56ACE0, this);
}

i32 aiBanger::Drivable()
{
    return stub<thiscall_t<i32, aiBanger*>>(0x56A790, this);
}

f32 aiBanger::IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, aiBanger*, class Vector3 const&, class Vector3 const&, f32, f32>>(
        0x56AB60, this, arg1, arg2, arg3, arg4);
}

void aiBanger::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiBanger*, class Vector3&>>(0x56A7B0, this, arg1);
}

void aiBanger::PreAvoid(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4, class Vector3& arg5)
{
    return stub<
        thiscall_t<void, aiBanger*, class Vector3 const&, class Vector3 const&, f32, class Vector3&, class Vector3&>>(
        0x56AA30, this, arg1, arg2, arg3, arg4, arg5);
}

f32 aiBanger::Radius()
{
    return stub<thiscall_t<f32, aiBanger*>>(0x56A750, this);
}

f32 aiBanger::Speed()
{
    return stub<thiscall_t<f32, aiBanger*>>(0x56ACF0, this);
}

define_dummy_symbol(ai_aiBanger);
