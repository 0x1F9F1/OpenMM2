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

#include "drivetrain.h"

vehDrivetrain::vehDrivetrain()
{
    unimplemented();
}

vehDrivetrain::~vehDrivetrain()
{
    unimplemented();
}

i32 vehDrivetrain::AddWheel(class vehWheel* arg1)
{
    return stub<thiscall_t<i32, vehDrivetrain*, class vehWheel*>>(0x4D9E50, this, arg1);
}

void vehDrivetrain::Attach()
{
    return stub<thiscall_t<void, vehDrivetrain*>>(0x4D9E20, this);
}

void vehDrivetrain::CopyVars(class vehDrivetrain* arg1)
{
    return stub<thiscall_t<void, vehDrivetrain*, class vehDrivetrain*>>(0x4D9DE0, this, arg1);
}

void vehDrivetrain::Detach()
{
    return stub<thiscall_t<void, vehDrivetrain*>>(0x4D9E40, this);
}

void vehDrivetrain::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehDrivetrain*, class datParser&>>(0x4DA570, this, arg1);
}

char* vehDrivetrain::GetClassName()
{
    return stub<thiscall_t<char*, vehDrivetrain*>>(0x4DA600, this);
}

void vehDrivetrain::Init(class vehCarSim* arg1)
{
    return stub<thiscall_t<void, vehDrivetrain*, class vehCarSim*>>(0x4D9DD0, this, arg1);
}

void vehDrivetrain::Reset()
{
    return stub<thiscall_t<void, vehDrivetrain*>>(0x4D9E00, this);
}

void vehDrivetrain::Update()
{
    return stub<thiscall_t<void, vehDrivetrain*>>(0x4D9E90, this);
}

define_dummy_symbol(vehicle_drivetrain);
