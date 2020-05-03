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

#include "engine.h"

vehEngine::vehEngine()
{
    unimplemented();
}

vehEngine::~vehEngine()
{
    unimplemented();
}

f32 vehEngine::CalcHPAtFullThrottle(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngine*, f32>>(0x4D8F10, this, arg1);
}

f32 vehEngine::CalcTorque(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngine*, f32>>(0x4D8ED0, this, arg1);
}

f32 vehEngine::CalcTorqueAtFullThrottle(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngine*, f32>>(0x4D8E20, this, arg1);
}

f32 vehEngine::CalcTorqueAtZeroThrottle()
{
    return stub<thiscall_t<f32, vehEngine*>>(0x4D8EA0, this);
}

void vehEngine::ComputeConstants()
{
    return stub<thiscall_t<void, vehEngine*>>(0x4D8DC0, this);
}

void vehEngine::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehEngine*, class datParser&>>(0x4D9240, this, arg1);
}

char* vehEngine::GetClassName()
{
    return stub<thiscall_t<char*, vehEngine*>>(0x4D9310, this);
}

void vehEngine::Init(class vehCarSim* arg1, char const* arg2, char const* arg3)
{
    return stub<thiscall_t<void, vehEngine*, class vehCarSim*, char const*, char const*>>(
        0x4D8D20, this, arg1, arg2, arg3);
}

void vehEngine::Reset()
{
    return stub<thiscall_t<void, vehEngine*>>(0x4D8CE0, this);
}

void vehEngine::Update()
{
    return stub<thiscall_t<void, vehEngine*>>(0x4D8F30, this);
}

define_dummy_symbol(vehicle_engine);
