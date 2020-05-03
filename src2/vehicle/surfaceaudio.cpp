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

#include "surfaceaudio.h"

vehSurfaceAudio::vehSurfaceAudio()
{
    unimplemented();
}

vehSurfaceAudio::~vehSurfaceAudio()
{
    unimplemented();
}

void vehSurfaceAudio::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, i32>>(0x4DE980, this, arg1);
}

void vehSurfaceAudio::EchoOff()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DE8F0, this);
}

void vehSurfaceAudio::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32>>(0x4DE8C0, this, arg1);
}

bool vehSurfaceAudio::IsBrakeing()
{
    return stub<thiscall_t<bool, vehSurfaceAudio*>>(0x4DDFA0, this);
}

bool vehSurfaceAudio::LoadCSV(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, vehSurfaceAudio*, char*, char*>>(0x4DE560, this, arg1, arg2);
}

i32 vehSurfaceAudio::LoadSuspension(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, vehSurfaceAudio*, char*, char*>>(0x4DE730, this, arg1, arg2);
}

i32 vehSurfaceAudio::LoadTireWobble(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, vehSurfaceAudio*, char*, char*>>(0x4DEC10, this, arg1, arg2);
}

void vehSurfaceAudio::SetDamagePtr(class vehCarDamage* arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehCarDamage*>>(0x4DDF50, this, arg1);
}

void vehSurfaceAudio::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32>>(0x4DE920, this, arg1);
}

void vehSurfaceAudio::SetPositionPtr(class Vector3* arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class Vector3*>>(0x4DF250, this, arg1);
}

void vehSurfaceAudio::SetWheelPointers(
    class vehWheel* arg1, class vehWheel* arg2, class vehWheel* arg3, class vehWheel* arg4)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehWheel*, class vehWheel*, class vehWheel*, class vehWheel*>>(
        0x4DDF60, this, arg1, arg2, arg3, arg4);
}

void vehSurfaceAudio::StopSkid()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DE960, this);
}

void vehSurfaceAudio::StopSurface()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DE970, this);
}

i32 vehSurfaceAudio::SurfaceChanged()
{
    return stub<thiscall_t<i32, vehSurfaceAudio*>>(0x4DE530, this);
}

void vehSurfaceAudio::UnAssignSounds()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DE9F0, this);
}

void vehSurfaceAudio::Update(class vehCarSim* arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehCarSim*>>(0x4DE030, this, arg1);
}

void vehSurfaceAudio::Update(class vehCarSim* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehCarSim*, f32, f32>>(0x4DDFD0, this, arg1, arg2, arg3);
}

void vehSurfaceAudio::UpdateAir()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DF180, this);
}

void vehSurfaceAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DF170, this);
}

void vehSurfaceAudio::UpdateSkid(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32>>(0x4DE2C0, this, arg1);
}

void vehSurfaceAudio::UpdateSkid(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32, f32, f32>>(0x4DE3F0, this, arg1, arg2, arg3);
}

void vehSurfaceAudio::UpdateSurface(f32 arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32>>(0x4DE080, this, arg1);
}

void vehSurfaceAudio::UpdateSurface(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32, f32, f32>>(0x4DE1A0, this, arg1, arg2, arg3);
}

void vehSurfaceAudio::UpdateSuspension()
{
    return stub<thiscall_t<void, vehSurfaceAudio*>>(0x4DEA30, this);
}

void vehSurfaceAudio::UpdateSuspension(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, f32, f32>>(0x4DEB10, this, arg1, arg2);
}

void vehSurfaceAudio::UpdateTireWobble(class vehCarSim* arg1)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehCarSim*>>(0x4DED90, this, arg1);
}

void vehSurfaceAudio::UpdateTireWobble(class vehCarSim* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, vehSurfaceAudio*, class vehCarSim*, f32, f32>>(0x4DF020, this, arg1, arg2, arg3);
}

define_dummy_symbol(vehicle_surfaceaudio);
