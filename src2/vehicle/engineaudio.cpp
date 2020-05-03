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

#include "engineaudio.h"

vehEngineAudio::vehEngineAudio()
{
    unimplemented();
}

vehEngineAudio::~vehEngineAudio()
{
    unimplemented();
}

void vehEngineAudio::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, i32>>(0x4DDA70, this, arg1);
}

void vehEngineAudio::Disable3DMode()
{
    return stub<thiscall_t<void, vehEngineAudio*>>(0x4DDA60, this);
}

void vehEngineAudio::EchoOff()
{
    return stub<thiscall_t<void, vehEngineAudio*>>(0x4DDA20, this);
}

void vehEngineAudio::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, f32>>(0x4DD9F0, this, arg1);
}

void vehEngineAudio::Enable3DMode(class Vector3* arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, class Vector3*>>(0x4DDA50, this, arg1);
}

i32 vehEngineAudio::GetSoundIndex(i32 arg1)
{
    return stub<thiscall_t<i32, vehEngineAudio*, i32>>(0x4DD930, this, arg1);
}

i32 vehEngineAudio::Load(class Stream* arg1)
{
    return stub<thiscall_t<i32, vehEngineAudio*, class Stream*>>(0x4DDAF0, this, arg1);
}

void vehEngineAudio::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, f32>>(0x4DDD00, this, arg1);
}

void vehEngineAudio::Silence(i32 arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, i32>>(0x4DDCD0, this, arg1);
}

void vehEngineAudio::Stop()
{
    return stub<thiscall_t<void, vehEngineAudio*>>(0x4DD950, this);
}

void vehEngineAudio::UnAssignSounds()
{
    return stub<thiscall_t<void, vehEngineAudio*>>(0x4DDAC0, this);
}

void vehEngineAudio::UpdateRPM(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineAudio*, f32>>(0x4DD9C0, this, arg1);
}

void vehEngineAudio::UpdateRPM(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, vehEngineAudio*, f32, f32, f32, f32>>(0x4DD980, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(vehicle_engineaudio);
