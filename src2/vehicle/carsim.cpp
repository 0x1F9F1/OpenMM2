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

#include "carsim.h"

vehCarSim::vehCarSim()
{
    unimplemented();
}

vehCarSim::~vehCarSim()
{
    unimplemented();
}

i32 vehCarSim::BottomedOut()
{
    return stub<thiscall_t<i32, vehCarSim*>>(0x4CBB40, this);
}

void vehCarSim::ClearDamage()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC880, this);
}

void vehCarSim::ConfigureDrivetrain()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC0D0, this);
}

void vehCarSim::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehCarSim*, class datParser&>>(0x4CCC70, this, arg1);
}

char* vehCarSim::GetClassName()
{
    return stub<thiscall_t<char*, vehCarSim*>>(0x4CCF10, this);
}

char const* vehCarSim::GetDirName()
{
    return stub<thiscall_t<char const*, vehCarSim*>>(0x4CBAF0, this);
}

f32 vehCarSim::GetSSSFactor(f32 arg1)
{
    return stub<thiscall_t<f32, vehCarSim*, f32>>(0x4CC890, this, arg1);
}

void vehCarSim::Init(char const* arg1, class phColliderJointed* arg2, class lvlInstance* arg3)
{
    return stub<thiscall_t<void, vehCarSim*, char const*, class phColliderJointed*, class lvlInstance*>>(
        0x4CBB80, this, arg1, arg2, arg3);
}

i32 vehCarSim::OnGround()
{
    return stub<thiscall_t<i32, vehCarSim*>>(0x4CBB00, this);
}

void vehCarSim::PlaybackReplay()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CCAB0, this);
}

void vehCarSim::ReconfigureDrivetrain()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC0B0, this);
}

void vehCarSim::RecordReplay()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CCB30, this);
}

void vehCarSim::Reset()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CBA70, this);
}

void vehCarSim::RestoreImpactParams()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC050, this);
}

void vehCarSim::SetHackedImpactParams()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC080, this);
}

void vehCarSim::SetResetPos(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, vehCarSim*, class Vector3 const&>>(0x4CC830, this, arg1);
}

void vehCarSim::SetWorldMatrix()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CBF50, this);
}

void vehCarSim::UnconfigureDrivetrain()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC4E0, this);
}

void vehCarSim::Update()
{
    return stub<thiscall_t<void, vehCarSim*>>(0x4CC8E0, this);
}

define_dummy_symbol(vehicle_carsim);
