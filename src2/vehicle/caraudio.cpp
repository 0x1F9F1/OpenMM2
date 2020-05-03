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

#include "caraudio.h"

vehCarAudio::vehCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, bool arg4, bool arg5)
{
    unimplemented();
}

vehCarAudio::~vehCarAudio()
{
    unimplemented();
}

void vehCarAudio::AssignSounds()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DBE40, this);
}

void vehCarAudio::EchoOff()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC400, this);
}

void vehCarAudio::EchoOn()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC350, this);
}

class AudImpact* vehCarAudio::GetAudImpactPtr()
{
    return stub<thiscall_t<class AudImpact*, vehCarAudio*>>(0x4DC730, this);
}

i32 vehCarAudio::GetCurrentGear()
{
    return stub<thiscall_t<i32, vehCarAudio*>>(0x4DBB50, this);
}

f32 vehCarAudio::GetSpeed()
{
    return stub<thiscall_t<f32, vehCarAudio*>>(0x4DC500, this);
}

void vehCarAudio::Init(
    class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, bool arg4, bool arg5, bool arg6)
{
    return stub<thiscall_t<void, vehCarAudio*, class vehCarSim*, class vehCarDamage*, char const*, bool, bool, bool>>(
        0x4DB900, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool vehCarAudio::IsAirBorne()
{
    return stub<thiscall_t<bool, vehCarAudio*>>(0x4DC340, this);
}

bool vehCarAudio::IsBrakeing()
{
    return stub<thiscall_t<bool, vehCarAudio*>>(0x4DC4F0, this);
}

i32 vehCarAudio::Load(char const* arg1, bool arg2)
{
    return stub<thiscall_t<i32, vehCarAudio*, char const*, bool>>(0x4DC020, this, arg1, arg2);
}

void vehCarAudio::PlayHorn()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC1D0, this);
}

void vehCarAudio::RemoveFromManager()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC1C0, this);
}

void vehCarAudio::Reset()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DBE30, this);
}

void vehCarAudio::Set2DPan(f32 arg1)
{
    return stub<thiscall_t<void, vehCarAudio*, f32>>(0x4DC450, this, arg1);
}

void vehCarAudio::Set3DParams()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC300, this);
}

void vehCarAudio::SetMinAmpSpeed(f32 arg1)
{
    return stub<thiscall_t<void, vehCarAudio*, f32>>(0x4DC000, this, arg1);
}

void vehCarAudio::SetNon3DParams()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC240, this);
}

void vehCarAudio::StopHorn()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC210, this);
}

void vehCarAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehCarAudio*, i32>>(0x4DBF80, this, arg1);
}

void vehCarAudio::Update()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC320, this);
}

void vehCarAudio::UpdateAudio()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DBBB0, this);
}

i32 vehCarAudio::UpdateAudio3D()
{
    return stub<thiscall_t<i32, vehCarAudio*>>(0x4DBC10, this);
}

i32 vehCarAudio::UpdateAudio3D(f32 arg1)
{
    return stub<thiscall_t<i32, vehCarAudio*, f32>>(0x4DBD00, this, arg1);
}

void vehCarAudio::UpdateAudioNon3D()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DBCB0, this);
}

void vehCarAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DC4C0, this);
}

void vehCarAudio::UpdateGear()
{
    return stub<thiscall_t<void, vehCarAudio*>>(0x4DBB60, this);
}

void vehCarAudio::DeallocateStatics()
{
    return stub<cdecl_t<void>>(0x4DC750);
}

void vehCarAudio::InitStatics()
{
    return stub<cdecl_t<void>>(0x4DC740);
}

bool vehCarAudio::LoadImpacts(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, vehCarAudio*, char*, char*>>(0x4DC510, this, arg1, arg2);
}

define_dummy_symbol(vehicle_caraudio);
