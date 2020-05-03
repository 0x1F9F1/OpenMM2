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

#include "semicaraudio.h"

vehSemiCarAudio::vehSemiCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5)
{
    unimplemented();
}

vehSemiCarAudio::~vehSemiCarAudio()
{
    unimplemented();
}

void vehSemiCarAudio::AssignSounds()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCC50, this);
}

void vehSemiCarAudio::EchoOff()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCFD0, this);
}

void vehSemiCarAudio::EchoOn()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCF50, this);
}

void vehSemiCarAudio::Init(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5, bool arg6)
{
    return stub<thiscall_t<void, vehSemiCarAudio*, class vehCarSim*, class vehCarDamage*, char*, bool, bool, bool>>(
        0x4DC9D0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void vehSemiCarAudio::Load(char* arg1)
{
    return stub<thiscall_t<void, vehSemiCarAudio*, char*>>(0x4DCD70, this, arg1);
}

void vehSemiCarAudio::RemoveFromManager()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCE80, this);
}

void vehSemiCarAudio::Reset()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCC40, this);
}

void vehSemiCarAudio::Set2DPan(f32 arg1)
{
    return stub<thiscall_t<void, vehSemiCarAudio*, f32>>(0x4DD000, this, arg1);
}

void vehSemiCarAudio::Set3DParams()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCF30, this);
}

void vehSemiCarAudio::SetNon3DParams()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCE90, this);
}

void vehSemiCarAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehSemiCarAudio*, i32>>(0x4DCCF0, this, arg1);
}

void vehSemiCarAudio::Update()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCF40, this);
}

void vehSemiCarAudio::UpdateAirBlow()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCBD0, this);
}

void vehSemiCarAudio::UpdateAudio()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCA40, this);
}

void vehSemiCarAudio::UpdateAudio3D()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCA90, this);
}

void vehSemiCarAudio::UpdateAudioNon3D()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCB50, this);
}

void vehSemiCarAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DD050, this);
}

void vehSemiCarAudio::UpdateReverse()
{
    return stub<thiscall_t<void, vehSemiCarAudio*>>(0x4DCB70, this);
}

define_dummy_symbol(vehicle_semicaraudio);
