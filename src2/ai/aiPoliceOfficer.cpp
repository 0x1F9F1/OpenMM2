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

#include "aiPoliceOfficer.h"

aiPoliceOfficer::aiPoliceOfficer()
{
    unimplemented();
}

aiPoliceOfficer::~aiPoliceOfficer()
{
    unimplemented();
}

void aiPoliceOfficer::DrawId()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53F1E0, this);
}

void aiPoliceOfficer::DrawRouteThroughTraffic()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53F1F0, this);
}

i32 aiPoliceOfficer::InPersuit()
{
    return stub<thiscall_t<i32, aiPoliceOfficer*>>(0x53E400, this);
}

void aiPoliceOfficer::Init(i32 arg1)
{
    return stub<thiscall_t<void, aiPoliceOfficer*, i32>>(0x53D930, this, arg1);
}

void aiPoliceOfficer::PerpEscapes(bool arg1)
{
    return stub<thiscall_t<void, aiPoliceOfficer*, bool>>(0x53F170, this, arg1);
}

void aiPoliceOfficer::Reset()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53DAA0, this);
}

void aiPoliceOfficer::StartSiren()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53DBF0, this);
}

void aiPoliceOfficer::StopSiren()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53DC40, this);
}

void aiPoliceOfficer::Update()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53DC70, this);
}

void aiPoliceOfficer::ApprehendPerpetrator()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53E580, this);
}

void aiPoliceOfficer::Barricade()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53E700, this);
}

void aiPoliceOfficer::Block()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53EA60, this);
}

i32 aiPoliceOfficer::Collision(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E370, this, arg1);
}

void aiPoliceOfficer::DetectPerpetrator()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53DFD0, this);
}

void aiPoliceOfficer::FollowPerpetrator()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53E410, this);
}

i32 aiPoliceOfficer::Fov(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E2A0, this, arg1);
}

i32 aiPoliceOfficer::HitMe(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E390, this, arg1);
}

i32 aiPoliceOfficer::IsPerpACop(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E3E0, this, arg1);
}

i32 aiPoliceOfficer::OffRoad(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E3F0, this, arg1);
}

void aiPoliceOfficer::Push()
{
    return stub<thiscall_t<void, aiPoliceOfficer*>>(0x53E710, this);
}

i32 aiPoliceOfficer::Speeding(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E360, this, arg1);
}

i32 aiPoliceOfficer::Stopped(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiPoliceOfficer*, class vehCar*>>(0x53E3B0, this, arg1);
}

define_dummy_symbol(ai_aiPoliceOfficer);
