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

#include "suspension.h"

vehSuspension::vehSuspension()
{
    unimplemented();
}

vehSuspension::~vehSuspension()
{
    unimplemented();
}

void vehSuspension::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehSuspension*, class datParser&>>(0x4D9920, this, arg1);
}

char* vehSuspension::GetClassName()
{
    return stub<thiscall_t<char*, vehSuspension*>>(0x4D9980, this);
}

void vehSuspension::Init(class vehCarSim* arg1, char const* arg2, char const* arg3, class vehWheel* arg4)
{
    return stub<thiscall_t<void, vehSuspension*, class vehCarSim*, char const*, char const*, class vehWheel*>>(
        0x4D9810, this, arg1, arg2, arg3, arg4);
}

void vehSuspension::Update()
{
    return stub<thiscall_t<void, vehSuspension*>>(0x4D98B0, this);
}

define_dummy_symbol(vehicle_suspension);
