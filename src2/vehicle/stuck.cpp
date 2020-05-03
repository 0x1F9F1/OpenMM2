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

#include "stuck.h"

vehStuck::vehStuck()
{
    unimplemented();
}

vehStuck::~vehStuck()
{
    unimplemented();
}

void vehStuck::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehStuck*, class datParser&>>(0x4D6510, this, arg1);
}

char* vehStuck::GetClassName()
{
    return stub<thiscall_t<char*, vehStuck*>>(0x4D65F0, this);
}

char const* vehStuck::GetDirName()
{
    return stub<thiscall_t<char const*, vehStuck*>>(0x4D6080, this);
}

void vehStuck::Impact()
{
    return stub<thiscall_t<void, vehStuck*>>(0x4D60C0, this);
}

void vehStuck::Init(class vehCarSim* arg1, char const* arg2)
{
    return stub<thiscall_t<void, vehStuck*, class vehCarSim*, char const*>>(0x4D6090, this, arg1, arg2);
}

i32 vehStuck::Pegged()
{
    return stub<thiscall_t<i32, vehStuck*>>(0x4D6100, this);
}

void vehStuck::Reset()
{
    return stub<thiscall_t<void, vehStuck*>>(0x4D6060, this);
}

void vehStuck::Update()
{
    return stub<thiscall_t<void, vehStuck*>>(0x4D6140, this);
}

define_dummy_symbol(vehicle_stuck);
