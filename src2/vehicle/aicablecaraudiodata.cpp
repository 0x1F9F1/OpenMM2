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

#include "aicablecaraudiodata.h"

aiCableCarAudioData::aiCableCarAudioData()
{
    unimplemented();
}

aiCableCarAudioData::~aiCableCarAudioData()
{
    unimplemented();
}

void aiCableCarAudioData::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, aiCableCarAudioData*, i32>>(0x59E630, this, arg1);
}

class AudSoundBase* aiCableCarAudioData::GetCrossIntersectionPtr()
{
    return stub<thiscall_t<class AudSoundBase*, aiCableCarAudioData*>>(0x59E3C0, this);
}

class AudSoundBase* aiCableCarAudioData::GetGetSpeedPtr()
{
    return stub<thiscall_t<class AudSoundBase*, aiCableCarAudioData*>>(0x59E3B0, this);
}

class AudSoundBase* aiCableCarAudioData::GetGoPtr()
{
    return stub<thiscall_t<class AudSoundBase*, aiCableCarAudioData*>>(0x59E380, this);
}

class AudSoundBase* aiCableCarAudioData::GetLoopPtr()
{
    return stub<thiscall_t<class AudSoundBase*, aiCableCarAudioData*>>(0x59E3A0, this);
}

class AudSoundBase* aiCableCarAudioData::GetStopPtr()
{
    return stub<thiscall_t<class AudSoundBase*, aiCableCarAudioData*>>(0x59E390, this);
}

void aiCableCarAudioData::Stop()
{
    return stub<thiscall_t<void, aiCableCarAudioData*>>(0x59E350, this);
}

void aiCableCarAudioData::UnAssignSounds()
{
    return stub<thiscall_t<void, aiCableCarAudioData*>>(0x59E6A0, this);
}

void aiCableCarAudioData::UpdatePlay(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiCableCarAudioData*, f32, f32, f32>>(0x59E3D0, this, arg1, arg2, arg3);
}

void aiCableCarAudioData::UpdateState(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiCableCarAudioData*, f32, f32>>(0x59E580, this, arg1, arg2);
}

define_dummy_symbol(vehicle_aicablecaraudiodata);
