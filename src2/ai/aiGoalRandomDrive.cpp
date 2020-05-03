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

#include "aiGoalRandomDrive.h"

aiGoalRandomDrive::aiGoalRandomDrive(class aiRailSet* arg1, class aiVehicleSpline* arg2)
{
    unimplemented();
}

aiGoalRandomDrive::~aiGoalRandomDrive()
{
    unimplemented();
}

i32 aiGoalRandomDrive::Context()
{
    return stub<thiscall_t<i32, aiGoalRandomDrive*>>(0x56CDC0, this);
}

void aiGoalRandomDrive::Dump()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56F3C0, this);
}

i32 aiGoalRandomDrive::Priority()
{
    return stub<thiscall_t<i32, aiGoalRandomDrive*>>(0x56CDE0, this);
}

void aiGoalRandomDrive::ReplayDebug()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56F3F0, this);
}

void aiGoalRandomDrive::SolvePosition(class Vector3& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiGoalRandomDrive*, class Vector3&, f32>>(0x56DD60, this, arg1, arg2);
}

void aiGoalRandomDrive::Init()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56C190, this);
}

void aiGoalRandomDrive::Reset()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56C1B0, this);
}

void aiGoalRandomDrive::Update()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56CBF0, this);
}

i32 aiGoalRandomDrive::AnyVehiclesComingThisWay()
{
    return stub<thiscall_t<i32, aiGoalRandomDrive*>>(0x56D8A0, this);
}

void aiGoalRandomDrive::AvoidCollision(class aiVehicleSpline* arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiGoalRandomDrive*, class aiVehicleSpline*, f32>>(0x56DB20, this, arg1, arg2);
}

void aiGoalRandomDrive::ChangeLanes()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56EE60, this);
}

i32 aiGoalRandomDrive::OkayToEnterIntersection(f32 arg1)
{
    return stub<thiscall_t<i32, aiGoalRandomDrive*, f32>>(0x56D6F0, this, arg1);
}

void aiGoalRandomDrive::SolveLane()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56ED50, this);
}

bool aiGoalRandomDrive::SolveRailType()
{
    return stub<thiscall_t<bool, aiGoalRandomDrive*>>(0x56DDB0, this);
}

void aiGoalRandomDrive::SolveVelocity()
{
    return stub<thiscall_t<void, aiGoalRandomDrive*>>(0x56CDF0, this);
}

f32 aiGoalRandomDrive::SpeedLimit()
{
    return stub<thiscall_t<f32, aiGoalRandomDrive*>>(0x56D6A0, this);
}

i32 aiGoalRandomDrive::UpcomingAccident()
{
    return stub<thiscall_t<i32, aiGoalRandomDrive*>>(0x56D5F0, this);
}

define_dummy_symbol(ai_aiGoalRandomDrive);
