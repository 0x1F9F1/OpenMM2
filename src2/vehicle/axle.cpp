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

#include "axle.h"

vehAxle::vehAxle()
{
    unimplemented();
}

vehAxle::~vehAxle()
{
    unimplemented();
}

void vehAxle::ComputeConstants()
{
    return stub<thiscall_t<void, vehAxle*>>(0x4D9A20, this);
}

void vehAxle::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehAxle*, class datParser&>>(0x4D9CA0, this, arg1);
}

char* vehAxle::GetClassName()
{
    return stub<thiscall_t<char*, vehAxle*>>(0x4D9D20, this);
}

void vehAxle::Init(
    class vehCarSim* arg1, char const* arg2, char const* arg3, class vehWheel* arg4, class vehWheel* arg5)
{
    return stub<
        thiscall_t<void, vehAxle*, class vehCarSim*, char const*, char const*, class vehWheel*, class vehWheel*>>(
        0x4D9A50, this, arg1, arg2, arg3, arg4, arg5);
}

void vehAxle::Update()
{
    return stub<thiscall_t<void, vehAxle*>>(0x4D9B20, this);
}

define_dummy_symbol(vehicle_axle);
