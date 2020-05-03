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

#include "aiVehiclePlayer.h"

aiVehiclePlayer::aiVehiclePlayer()
{
    unimplemented();
}

aiVehiclePlayer::~aiVehiclePlayer()
{
    unimplemented();
}

void aiVehiclePlayer::Attach(class vehCar* arg1)
{
    return stub<thiscall_t<void, aiVehiclePlayer*, class vehCar*>>(0x53F350, this, arg1);
}

f32 aiVehiclePlayer::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiVehiclePlayer*>>(0x53F680, this);
}

i32 aiVehiclePlayer::CurrentLane()
{
    return stub<thiscall_t<i32, aiVehiclePlayer*>>(0x53F6E0, this);
}

i32 aiVehiclePlayer::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiVehiclePlayer*>>(0x53F5B0, this);
}

i32 aiVehiclePlayer::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiVehiclePlayer*>>(0x53F6F0, this);
}

i32 aiVehiclePlayer::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiVehiclePlayer*, class aiPath**, bool* const, i32*>>(0x53F540, this, arg1, arg2, arg3);
}

void aiVehiclePlayer::DrawId()
{
    return stub<thiscall_t<void, aiVehiclePlayer*>>(0x53F5C0, this);
}

f32 aiVehiclePlayer::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiVehiclePlayer*>>(0x53F660, this);
}

class Matrix34& aiVehiclePlayer::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiVehiclePlayer*>>(0x53F650, this);
}

f32 aiVehiclePlayer::LSideDistance()
{
    return stub<thiscall_t<f32, aiVehiclePlayer*>>(0x53F6A0, this);
}

void aiVehiclePlayer::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiVehiclePlayer*, class Vector3&>>(0x53F620, this, arg1);
}

f32 aiVehiclePlayer::RSideDistance()
{
    return stub<thiscall_t<f32, aiVehiclePlayer*>>(0x53F6C0, this);
}

void aiVehiclePlayer::Reset()
{
    return stub<thiscall_t<void, aiVehiclePlayer*>>(0x53F360, this);
}

f32 aiVehiclePlayer::Speed()
{
    return stub<thiscall_t<f32, aiVehiclePlayer*>>(0x53F610, this);
}

i32 aiVehiclePlayer::Type()
{
    return stub<thiscall_t<i32, aiVehiclePlayer*>>(0x53F600, this);
}

void aiVehiclePlayer::Update()
{
    return stub<thiscall_t<void, aiVehiclePlayer*>>(0x53F420, this);
}

i32 aiObstacle::InAccident()
{
    return stub<thiscall_t<i32, aiObstacle*>>(0x53F5D0, this);
}

void aiObstacle::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiObstacle*, class Vector3&>>(0x0, this, arg1);
}

f32 aiObstacle::Speed()
{
    return stub<thiscall_t<f32, aiObstacle*>>(0x0, this);
}

f32 aiObstacle::BreakThreshold()
{
    return stub<thiscall_t<f32, aiObstacle*>>(0x53F5E0, this);
}

i32 aiObstacle::Drivable()
{
    return stub<thiscall_t<i32, aiObstacle*>>(0x53F5F0, this);
}

i32 aiObstacle::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiObstacle*, class aiPath**, bool* const, i32*>>(0x0, this, arg1, arg2, arg3);
}

i32 aiObstacle::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiObstacle*>>(0x0, this);
}

void aiObstacle::PreAvoid(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4, class Vector3& arg5)
{
    return stub<
        thiscall_t<void, aiObstacle*, class Vector3 const&, class Vector3 const&, f32, class Vector3&, class Vector3&>>(
        0x0, this, arg1, arg2, arg3, arg4, arg5);
}

f32 aiObstacle::IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, aiObstacle*, class Vector3 const&, class Vector3 const&, f32, f32>>(
        0x0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(ai_aiVehiclePlayer);
