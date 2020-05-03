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

#include "nitrocaraudio.h"

vehNitroCarAudio::vehNitroCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5)
{
    unimplemented();
}

vehNitroCarAudio::~vehNitroCarAudio()
{
    unimplemented();
}

void vehNitroCarAudio::AssignSounds()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD390, this);
}

void vehNitroCarAudio::EchoOff()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD650, this);
}

void vehNitroCarAudio::EchoOn()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD5F0, this);
}

void vehNitroCarAudio::Init(
    class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5, bool arg6)
{
    return stub<thiscall_t<void, vehNitroCarAudio*, class vehCarSim*, class vehCarDamage*, char*, bool, bool, bool>>(
        0x4DD240, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void vehNitroCarAudio::Load(char* arg1)
{
    return stub<thiscall_t<void, vehNitroCarAudio*, char*>>(0x4DD450, this, arg1);
}

void vehNitroCarAudio::PlayNitro()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD6D0, this);
}

void vehNitroCarAudio::RemoveFromManager()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD550, this);
}

void vehNitroCarAudio::Reset()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD380, this);
}

void vehNitroCarAudio::Set2DPan(f32 arg1)
{
    return stub<thiscall_t<void, vehNitroCarAudio*, f32>>(0x4DD670, this, arg1);
}

void vehNitroCarAudio::Set3DParams()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD5D0, this);
}

void vehNitroCarAudio::SetNon3DParams()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD560, this);
}

void vehNitroCarAudio::StopNitro()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD760, this);
}

void vehNitroCarAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehNitroCarAudio*, i32>>(0x4DD400, this, arg1);
}

void vehNitroCarAudio::Update()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD5E0, this);
}

void vehNitroCarAudio::UpdateAudio()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD2A0, this);
}

void vehNitroCarAudio::UpdateAudio3D()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD2F0, this);
}

void vehNitroCarAudio::UpdateAudioNon3D()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD370, this);
}

void vehNitroCarAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehNitroCarAudio*>>(0x4DD6B0, this);
}

define_dummy_symbol(vehicle_nitrocaraudio);
