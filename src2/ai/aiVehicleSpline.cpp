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

#include "aiVehicleSpline.h"

aiVehicleSpline::aiVehicleSpline()
{
    unimplemented();
}

aiVehicleSpline::~aiVehicleSpline()
{
    unimplemented();
}

void aiVehicleSpline::AvoidPlayerCollision(i32 arg1)
{
    return stub<thiscall_t<void, aiVehicleSpline*, i32>>(0x569EC0, this, arg1);
}

f32 aiVehicleSpline::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x551C10, this);
}

i32 aiVehicleSpline::CurrentLane()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x551BE0, this);
}

i32 aiVehicleSpline::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x5683F0, this);
}

i32 aiVehicleSpline::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x551BF0, this);
}

i32 aiVehicleSpline::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, class aiPath**, bool* const, i32*>>(0x5681C0, this, arg1, arg2, arg3);
}

i32 aiVehicleSpline::DetectPlayerCollision(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x569930, this, arg1);
}

i32 aiVehicleSpline::DetectPlayerForwardCollision(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x5696B0, this, arg1);
}

i32 aiVehicleSpline::DetectPlayerTargetPtCollision(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x5697B0, this, arg1);
}

i32 aiVehicleSpline::DetectPlayerZoneCollision(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x569AC0, this, arg1);
}

f32 aiVehicleSpline::DistanceToIntersection()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x56A2C0, this);
}

f32 aiVehicleSpline::DistanceToVehicle(class aiVehicleSpline* arg1)
{
    return stub<thiscall_t<f32, aiVehicleSpline*, class aiVehicleSpline*>>(0x569FC0, this, arg1);
}

void aiVehicleSpline::DrawId()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x56A4F0, this);
}

void aiVehicleSpline::Dump()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x56A360, this);
}

f32 aiVehicleSpline::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x551C00, this);
}

class Matrix34& aiVehicleSpline::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiVehicleSpline*>>(0x551C80, this);
}

i32 aiVehicleSpline::InAccident()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x569F70, this);
}

void aiVehicleSpline::Init(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, aiVehicleSpline*, char*, i32>>(0x567F30, this, arg1, arg2);
}

i32 aiVehicleSpline::IsAmbientBlockingPlayer(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x569DD0, this, arg1);
}

i32 aiVehicleSpline::IsThePlayerInFrontOfMe(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehicleSpline*, i32>>(0x569CB0, this, arg1);
}

f32 aiVehicleSpline::LSideDistance()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x551C20, this);
}

void aiVehicleSpline::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiVehicleSpline*, class Vector3&>>(0x551C40, this, arg1);
}

f32 aiVehicleSpline::RSideDistance()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x551C30, this);
}

void aiVehicleSpline::ReplayDebug()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x56A500, this);
}

void aiVehicleSpline::Reset()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x568050, this);
}

void aiVehicleSpline::ResetReactTicks()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x568180, this);
}

f32 aiVehicleSpline::Speed()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x551C70, this);
}

f32 aiVehicleSpline::TotLength()
{
    return stub<thiscall_t<f32, aiVehicleSpline*>>(0x569FA0, this);
}

i32 aiVehicleSpline::Type()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x56A700, this);
}

void aiVehicleSpline::Update()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x568100, this);
}

void aiVehicleSpline::UpdateObstacleMap()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x568410, this);
}

i32 aiVehicleSpline::WaitTime()
{
    return stub<thiscall_t<i32, aiVehicleSpline*>>(0x569F80, this);
}

void aiVehicleSpline::Impact(i32 arg1)
{
    return stub<thiscall_t<void, aiVehicleSpline*, i32>>(0x569FB0, this, arg1);
}

class AudImpact* aiVehicleSpline::GetAudImpactPtr()
{
    return stub<thiscall_t<class AudImpact*, aiVehicleSpline*>>(0x551C90, this);
}

void aiVehicleSpline::PlayHorn(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiVehicleSpline*, f32, f32>>(0x551CA0, this, arg1, arg2);
}

void aiVehicleSpline::StopVoice()
{
    return stub<thiscall_t<void, aiVehicleSpline*>>(0x551CB0, this);
}

define_dummy_symbol(ai_aiVehicleSpline);
