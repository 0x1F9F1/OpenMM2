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

#include "hornaudio.h"

vehHornAudio::vehHornAudio()
{
    unimplemented();
}

vehHornAudio::vehHornAudio(class vehHornAudio* arg1)
{
    unimplemented();
}

vehHornAudio::~vehHornAudio()
{
    unimplemented();
}

void vehHornAudio::AllocTiming()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB080, this);
}

void vehHornAudio::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehHornAudio*, i32>>(0x4DB320, this, arg1);
}

void vehHornAudio::EchoOff()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB6D0, this);
}

void vehHornAudio::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, vehHornAudio*, f32>>(0x4DB6A0, this, arg1);
}

class vehHornAudioTiming* vehHornAudio::GetHornAudioTimingPtr(i32 arg1)
{
    return stub<thiscall_t<class vehHornAudioTiming*, vehHornAudio*, i32>>(0x4DB130, this, arg1);
}

i32 vehHornAudio::GetNumTimings()
{
    return stub<thiscall_t<i32, vehHornAudio*>>(0x4DB140, this);
}

bool vehHornAudio::IsPlaying()
{
    return stub<thiscall_t<bool, vehHornAudio*>>(0x4DB1C0, this);
}

bool vehHornAudio::PlayAvoidance()
{
    return stub<thiscall_t<bool, vehHornAudio*>>(0x4DB1E0, this);
}

void vehHornAudio::PlayImpact(f32 arg1)
{
    return stub<thiscall_t<void, vehHornAudio*, f32>>(0x4DB280, this, arg1);
}

void vehHornAudio::Reset()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB310, this);
}

void vehHornAudio::UnAssignSounds()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB350, this);
}

void vehHornAudio::Update()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB680, this);
}

void vehHornAudio::UpdateDoppler(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehHornAudio*, f32, f32, f32>>(0x4DB150, this, arg1, arg2, arg3);
}

void vehHornAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehHornAudio*>>(0x4DB6E0, this);
}

void vehHornAudio::AddToHash(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x4DB490, arg1, arg2);
}

i32 vehHornAudio::Load(class vehHornAudio** arg1, char* arg2, char* arg3, i32* arg4)
{
    return stub<cdecl_t<i32, class vehHornAudio**, char*, char*, i32*>>(0x4DB3D0, arg1, arg2, arg3, arg4);
}

i32 vehHornAudio::ReadCSV(class Stream* arg1)
{
    return stub<thiscall_t<i32, vehHornAudio*, class Stream*>>(0x4DB4D0, this, arg1);
}

define_dummy_symbol(vehicle_hornaudio);
