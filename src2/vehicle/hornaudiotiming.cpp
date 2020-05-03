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

#include "hornaudiotiming.h"

vehHornAudioTiming::vehHornAudioTiming()
{
    unimplemented();
}

vehHornAudioTiming::vehHornAudioTiming(class vehHornAudioTiming* arg1)
{
    unimplemented();
}

vehHornAudioTiming::~vehHornAudioTiming()
{
    unimplemented();
}

void vehHornAudioTiming::AllocPlayPause(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, vehHornAudioTiming*, f32, f32>>(0x4DF340, this, arg1, arg2);
}

void vehHornAudioTiming::Play(class AudSoundBase* arg1)
{
    return stub<thiscall_t<void, vehHornAudioTiming*, class AudSoundBase*>>(0x4DF400, this, arg1);
}

void vehHornAudioTiming::Reset()
{
    return stub<thiscall_t<void, vehHornAudioTiming*>>(0x4DF330, this);
}

void vehHornAudioTiming::Stop(class AudSoundBase* arg1)
{
    return stub<thiscall_t<void, vehHornAudioTiming*, class AudSoundBase*>>(0x4DF3D0, this, arg1);
}

void vehHornAudioTiming::Update(class AudSoundBase* arg1)
{
    return stub<thiscall_t<void, vehHornAudioTiming*, class AudSoundBase*>>(0x4DF440, this, arg1);
}

define_dummy_symbol(vehicle_hornaudiotiming);
