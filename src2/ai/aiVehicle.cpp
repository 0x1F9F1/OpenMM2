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

#include "aiVehicle.h"

aiVehicle::aiVehicle()
{
    unimplemented();
}

aiVehicle::~aiVehicle()
{
    unimplemented();
}

void aiVehicle::Init(i32 arg1)
{
    return stub<thiscall_t<void, aiVehicle*, i32>>(0x556200, this, arg1);
}

f32 aiVehicle::IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, aiVehicle*, class Vector3 const&, class Vector3 const&, f32, f32>>(
        0x556850, this, arg1, arg2, arg3, arg4);
}

void aiVehicle::PreAvoid(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4, class Vector3& arg5)
{
    return stub<
        thiscall_t<void, aiVehicle*, class Vector3 const&, class Vector3 const&, f32, class Vector3&, class Vector3&>>(
        0x556250, this, arg1, arg2, arg3, arg4, arg5);
}

void aiVehicle::Update()
{
    return stub<thiscall_t<void, aiVehicle*>>(0x556230, this);
}

void aiVehicle::Reset()
{
    return stub<thiscall_t<void, aiVehicle*>>(0x556210, this);
}

i32 aiVehicle::Type()
{
    return stub<thiscall_t<i32, aiVehicle*>>(0x0, this);
}

class Matrix34& aiVehicle::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiVehicle*>>(0x0, this);
}

f32 aiVehicle::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiVehicle*>>(0x0, this);
}

f32 aiVehicle::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiVehicle*>>(0x0, this);
}

f32 aiVehicle::LSideDistance()
{
    return stub<thiscall_t<f32, aiVehicle*>>(0x0, this);
}

f32 aiVehicle::RSideDistance()
{
    return stub<thiscall_t<f32, aiVehicle*>>(0x0, this);
}

i32 aiVehicle::CurrentLane()
{
    return stub<thiscall_t<i32, aiVehicle*>>(0x0, this);
}

i32 aiVehicle::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiVehicle*>>(0x0, this);
}

void aiVehicle::DrawId()
{
    return stub<thiscall_t<void, aiVehicle*>>(0x0, this);
}

void aiVehicle::ReplayDebug()
{
    return stub<thiscall_t<void, aiVehicle*>>(0x556D00, this);
}

define_dummy_symbol(ai_aiVehicle);
