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

#include "surfaceaudiodata.h"

vehSurfaceAudioData::vehSurfaceAudioData()
{
    unimplemented();
}

vehSurfaceAudioData::~vehSurfaceAudioData()
{
    unimplemented();
}

void vehSurfaceAudioData::AllocateSkidSamples(i32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, i32>>(0x4DFDA0, this, arg1);
}

void vehSurfaceAudioData::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, i32>>(0x4E0550, this, arg1);
}

void vehSurfaceAudioData::EchoOff()
{
    return stub<thiscall_t<void, vehSurfaceAudioData*>>(0x4E06C0, this);
}

void vehSurfaceAudioData::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32>>(0x4E0640, this, arg1);
}

class AudSoundBase* vehSurfaceAudioData::GetSurfaceSoundPtr()
{
    return stub<thiscall_t<class AudSoundBase*, vehSurfaceAudioData*>>(0x4E0540, this);
}

bool vehSurfaceAudioData::ParseCSVBuffer(class Stream* arg1)
{
    return stub<thiscall_t<bool, vehSurfaceAudioData*, class Stream*>>(0x4E0200, this, arg1);
}

void vehSurfaceAudioData::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32>>(0x4E05E0, this, arg1);
}

i32 vehSurfaceAudioData::SkidPlaying()
{
    return stub<thiscall_t<i32, vehSurfaceAudioData*>>(0x4E04E0, this);
}

void vehSurfaceAudioData::StopSkid()
{
    return stub<thiscall_t<void, vehSurfaceAudioData*>>(0x4DFDD0, this);
}

void vehSurfaceAudioData::StopSurface()
{
    return stub<thiscall_t<void, vehSurfaceAudioData*>>(0x4E01E0, this);
}

i32 vehSurfaceAudioData::SurfacePlaying()
{
    return stub<thiscall_t<i32, vehSurfaceAudioData*>>(0x4E0520, this);
}

void vehSurfaceAudioData::UnAssignSounds()
{
    return stub<thiscall_t<void, vehSurfaceAudioData*>>(0x4E05B0, this);
}

void vehSurfaceAudioData::UpdateSkid(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32>>(0x4E0010, this, arg1);
}

void vehSurfaceAudioData::UpdateSkid(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32, f32, f32>>(0x4DFE10, this, arg1, arg2, arg3);
}

void vehSurfaceAudioData::UpdateSurface(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32>>(0x4E0160, this, arg1);
}

void vehSurfaceAudioData::UpdateSurface(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudioData*, f32, f32, f32>>(0x4E00C0, this, arg1, arg2, arg3);
}

define_dummy_symbol(vehicle_surfaceaudiodata);
