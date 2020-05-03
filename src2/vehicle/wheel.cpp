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

#include "wheel.h"

vehWheel::vehWheel()
{
    unimplemented();
}

vehWheel::~vehWheel()
{
    unimplemented();
}

void vehWheel::AddNormalLoad(f32 arg1)
{
    return stub<thiscall_t<void, vehWheel*, f32>>(0x4D2490, this, arg1);
}

void vehWheel::ComputeConstants()
{
    return stub<thiscall_t<void, vehWheel*>>(0x4D23F0, this);
}

void vehWheel::ComputeDwtdw(f32 arg1, f32* arg2, f32* arg3, f32* arg4)
{
    return stub<thiscall_t<void, vehWheel*, f32, f32*, f32*, f32*>>(0x4D2A00, this, arg1, arg2, arg3, arg4);
}

void vehWheel::CopyVars(class vehWheel* arg1)
{
    return stub<thiscall_t<void, vehWheel*, class vehWheel*>>(0x4D4110, this, arg1);
}

void vehWheel::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehWheel*, class datParser&>>(0x4D41C0, this, arg1);
}

char* vehWheel::GetClassName()
{
    return stub<thiscall_t<char*, vehWheel*>>(0x4D43C0, this);
}

i32 vehWheel::GetSurfaceSound()
{
    return stub<thiscall_t<i32, vehWheel*>>(0x4D3F60, this);
}

f32 vehWheel::GetVisualDispLat()
{
    return stub<thiscall_t<f32, vehWheel*>>(0x4D4090, this);
}

f32 vehWheel::GetVisualDispLong()
{
    return stub<thiscall_t<f32, vehWheel*>>(0x4D40D0, this);
}

f32 vehWheel::GetVisualDispVert()
{
    return stub<thiscall_t<f32, vehWheel*>>(0x4D4030, this);
}

void vehWheel::Init(class vehCarSim* arg1, char const* arg2, char* arg3, class Vector3 arg4, class phInertialCS* arg5,
    i32 arg6, i32 arg7)
{
    return stub<thiscall_t<void, vehWheel*, class vehCarSim*, char const*, char*, class Vector3, class phInertialCS*,
        i32, i32>>(0x4D2690, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void vehWheel::Reset()
{
    return stub<thiscall_t<void, vehWheel*>>(0x4D22E0, this);
}

void vehWheel::SetInputs(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehWheel*, f32, f32, f32>>(0x4D3F80, this, arg1, arg2, arg3);
}

void vehWheel::SetNormalLoad(f32 arg1)
{
    return stub<thiscall_t<void, vehWheel*, f32>>(0x4D24C0, this, arg1);
}

void vehWheel::Update()
{
    return stub<thiscall_t<void, vehWheel*>>(0x4D34E0, this);
}

void vehWheel::CalcSuspensionForce(f32 arg1, bool arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehWheel*, f32, bool, f32>>(0x4D2720, this, arg1, arg2, arg3);
}

f32 vehWheel::ComputeFriction(f32 arg1, f32* arg2)
{
    return stub<thiscall_t<f32, vehWheel*, f32, f32*>>(0x4D25D0, this, arg1, arg2);
}

f32 vehWheel::GetBumpDisplacement(f32 arg1)
{
    return stub<thiscall_t<f32, vehWheel*, f32>>(0x4D3440, this, arg1);
}

define_dummy_symbol(vehicle_wheel);
