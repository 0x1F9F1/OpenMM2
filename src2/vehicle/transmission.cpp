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

#include "transmission.h"

vehTransmission::vehTransmission()
{
    unimplemented();
}

vehTransmission::~vehTransmission()
{
    unimplemented();
}

void vehTransmission::Automatic(i32 arg1)
{
    return stub<thiscall_t<void, vehTransmission*, i32>>(0x4CF6B0, this, arg1);
}

void vehTransmission::ComputeConstants()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF220, this);
}

i32 vehTransmission::Downshift()
{
    return stub<thiscall_t<i32, vehTransmission*>>(0x4CF5B0, this);
}

void vehTransmission::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehTransmission*, class datParser&>>(0x4CF740, this, arg1);
}

char* vehTransmission::GetClassName()
{
    return stub<thiscall_t<char*, vehTransmission*>>(0x4CF880, this);
}

void vehTransmission::Init(class vehCarSim* arg1)
{
    return stub<thiscall_t<void, vehTransmission*, class vehCarSim*>>(0x4CF560, this, arg1);
}

void vehTransmission::Reset()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF200, this);
}

i32 vehTransmission::SetCurrentGear(i32 arg1)
{
    return stub<thiscall_t<i32, vehTransmission*, i32>>(0x4CF700, this, arg1);
}

void vehTransmission::SetForward()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF6E0, this);
}

void vehTransmission::SetNeutral()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF6D0, this);
}

void vehTransmission::SetReverse()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF6C0, this);
}

void vehTransmission::Update()
{
    return stub<thiscall_t<void, vehTransmission*>>(0x4CF600, this);
}

i32 vehTransmission::Upshift()
{
    return stub<thiscall_t<i32, vehTransmission*>>(0x4CF570, this);
}

f32 vehTransmission::GearRatioFromMPH(f32 arg1)
{
    return stub<thiscall_t<f32, vehTransmission*, f32>>(0x4CF530, this, arg1);
}

define_dummy_symbol(vehicle_transmission);
