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

#include "gyro.h"

vehGyro::vehGyro()
{
    unimplemented();
}

vehGyro::~vehGyro()
{
    unimplemented();
}

void vehGyro::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehGyro*, class datParser&>>(0x4D5EE0, this, arg1);
}

char* vehGyro::GetClassName()
{
    return stub<thiscall_t<char*, vehGyro*>>(0x4D5FA0, this);
}

char const* vehGyro::GetDirName()
{
    return stub<thiscall_t<char const*, vehGyro*>>(0x4D5BC0, this);
}

void vehGyro::Init(class vehCarSim* arg1, char const* arg2)
{
    return stub<thiscall_t<void, vehGyro*, class vehCarSim*, char const*>>(0x4D5BD0, this, arg1, arg2);
}

void vehGyro::Update()
{
    return stub<thiscall_t<void, vehGyro*>>(0x4D5C00, this);
}

define_dummy_symbol(vehicle_gyro);
