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

#include "aicablecaraudio.h"

aiCableCarAudio::aiCableCarAudio()
{
    unimplemented();
}

aiCableCarAudio::~aiCableCarAudio()
{
    unimplemented();
}

void aiCableCarAudio::AssignSounds()
{
    return stub<thiscall_t<void, aiCableCarAudio*>>(0x59D530, this);
}

void aiCableCarAudio::Init(class Vector3* arg1, f32* arg2)
{
    return stub<thiscall_t<void, aiCableCarAudio*, class Vector3*, f32*>>(0x59D400, this, arg1, arg2);
}

void aiCableCarAudio::Reset()
{
    return stub<thiscall_t<void, aiCableCarAudio*>>(0x59D440, this);
}

void aiCableCarAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, aiCableCarAudio*, i32>>(0x59D450, this, arg1);
}

void aiCableCarAudio::UpdateAudio()
{
    return stub<thiscall_t<void, aiCableCarAudio*>>(0x59D460, this);
}

i32 aiCableCarAudio::UpdateAudio(f32 arg1)
{
    return stub<thiscall_t<i32, aiCableCarAudio*, f32>>(0x59D490, this, arg1);
}

define_dummy_symbol(vehicle_aicablecaraudio);
