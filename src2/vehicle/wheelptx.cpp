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

#include "wheelptx.h"

vehWheelPtx::vehWheelPtx()
{
    unimplemented();
}

vehWheelPtx::~vehWheelPtx()
{
    unimplemented();
}

void vehWheelPtx::Blast(class vehWheel* arg1, f32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehWheelPtx*, class vehWheel*, f32, i32, i32>>(0x4D1EF0, this, arg1, arg2, arg3, arg4);
}

void vehWheelPtx::Init(class vehCarSim* arg1)
{
    return stub<thiscall_t<void, vehWheelPtx*, class vehCarSim*>>(0x4D1DD0, this, arg1);
}

void vehWheelPtx::Reset()
{
    return stub<thiscall_t<void, vehWheelPtx*>>(0x4D1DC0, this);
}

void vehWheelPtx::Update()
{
    return stub<thiscall_t<void, vehWheelPtx*>>(0x4D1E40, this);
}

void vehWheelPtx::UpdateWheel(class vehWheel* arg1)
{
    return stub<thiscall_t<void, vehWheelPtx*, class vehWheel*>>(0x4D1E90, this, arg1);
}

void vehWheelPtx::ConstructClass(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4D1CC0, arg1);
}

void vehWheelPtx::DestroyClass()
{
    return stub<cdecl_t<void>>(0x4D1D90);
}

define_dummy_symbol(vehicle_wheelptx);
