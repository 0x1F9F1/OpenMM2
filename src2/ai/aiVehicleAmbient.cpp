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

#include "aiVehicleAmbient.h"

aiVehicleAmbient::aiVehicleAmbient()
{
    unimplemented();
}

aiVehicleAmbient::~aiVehicleAmbient()
{
    unimplemented();
}

void aiVehicleAmbient::DrawBBox(i16 arg1)
{
    return stub<thiscall_t<void, aiVehicleAmbient*, i16>>(0x551A70, this, arg1);
}

void aiVehicleAmbient::DrawId()
{
    return stub<thiscall_t<void, aiVehicleAmbient*>>(0x551A60, this);
}

void aiVehicleAmbient::Dump()
{
    return stub<thiscall_t<void, aiVehicleAmbient*>>(0x551A80, this);
}

void aiVehicleAmbient::Impact(i32 arg1)
{
    return stub<thiscall_t<void, aiVehicleAmbient*, i32>>(0x5519C0, this, arg1);
}

void aiVehicleAmbient::Init(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, aiVehicleAmbient*, char*, i32>>(0x551380, this, arg1, arg2);
}

void aiVehicleAmbient::ReplayDebug()
{
    return stub<thiscall_t<void, aiVehicleAmbient*>>(0x551950, this);
}

void aiVehicleAmbient::Reset()
{
    return stub<thiscall_t<void, aiVehicleAmbient*>>(0x551520, this);
}

i32 aiVehicleAmbient::Type()
{
    return stub<thiscall_t<i32, aiVehicleAmbient*>>(0x551CC0, this);
}

void aiVehicleAmbient::Update()
{
    return stub<thiscall_t<void, aiVehicleAmbient*>>(0x551600, this);
}

define_dummy_symbol(ai_aiVehicleAmbient);
