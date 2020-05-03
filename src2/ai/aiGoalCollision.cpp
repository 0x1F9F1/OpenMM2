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

#include "aiGoalCollision.h"

aiGoalCollision::aiGoalCollision(class aiRailSet* arg1, class aiVehicleSpline* arg2)
{
    unimplemented();
}

aiGoalCollision::~aiGoalCollision()
{
    unimplemented();
}

i32 aiGoalCollision::Context()
{
    return stub<thiscall_t<i32, aiGoalCollision*>>(0x56F620, this);
}

i32 aiGoalCollision::Priority()
{
    return stub<thiscall_t<i32, aiGoalCollision*>>(0x56F640, this);
}

void aiGoalCollision::Init()
{
    return stub<thiscall_t<void, aiGoalCollision*>>(0x56F590, this);
}

void aiGoalCollision::Reset()
{
    return stub<thiscall_t<void, aiGoalCollision*>>(0x56F5A0, this);
}

void aiGoalCollision::Update()
{
    return stub<thiscall_t<void, aiGoalCollision*>>(0x56F5B0, this);
}

define_dummy_symbol(ai_aiGoalCollision);
