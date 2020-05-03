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

#include "aiengineaudio.h"

aiEngineAudio::aiEngineAudio()
{
    unimplemented();
}

aiEngineAudio::aiEngineAudio(class aiEngineAudio* arg1)
{
    unimplemented();
}

aiEngineAudio::~aiEngineAudio()
{
    unimplemented();
}

void aiEngineAudio::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, aiEngineAudio*, i32>>(0x4DAC60, this, arg1);
}

void aiEngineAudio::CalculatePitch(f32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiEngineAudio*, f32, f32, i32>>(0x4DACA0, this, arg1, arg2, arg3);
}

void aiEngineAudio::EchoOff()
{
    return stub<thiscall_t<void, aiEngineAudio*>>(0x4DAC40, this);
}

void aiEngineAudio::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, aiEngineAudio*, f32>>(0x4DAC10, this, arg1);
}

void aiEngineAudio::UnAssignSounds()
{
    return stub<thiscall_t<void, aiEngineAudio*>>(0x4DAC80, this);
}

void aiEngineAudio::UpdateDoppler(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiEngineAudio*, f32, f32, f32>>(0x4DAD30, this, arg1, arg2, arg3);
}

void aiEngineAudio::UpdateEcho()
{
    return stub<thiscall_t<void, aiEngineAudio*>>(0x4DAC50, this);
}

void aiEngineAudio::AddToHash(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x4DA990, arg1, arg2);
}

i32 aiEngineAudio::Load(class aiEngineAudio** arg1, char* arg2, char* arg3, i32* arg4)
{
    return stub<cdecl_t<i32, class aiEngineAudio**, char*, char*, i32*>>(0x4DA8D0, arg1, arg2, arg3, arg4);
}

i32 aiEngineAudio::ReadCSV(class Stream* arg1)
{
    return stub<thiscall_t<i32, aiEngineAudio*, class Stream*>>(0x4DA9D0, this, arg1);
}

define_dummy_symbol(vehicle_aiengineaudio);
