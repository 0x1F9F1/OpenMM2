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

#include "enginesamplewrapper.h"

vehEngineSampleWrapper::vehEngineSampleWrapper()
{
    unimplemented();
}

vehEngineSampleWrapper::~vehEngineSampleWrapper()
{
    unimplemented();
}

f32 vehEngineSampleWrapper::CalculatePitch(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngineSampleWrapper*, f32>>(0x4DF860, this, arg1);
}

f32 vehEngineSampleWrapper::CalculateVolume(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngineSampleWrapper*, f32>>(0x4DF7F0, this, arg1);
}

f32 vehEngineSampleWrapper::CalculateVolumeOld(f32 arg1)
{
    return stub<thiscall_t<f32, vehEngineSampleWrapper*, f32>>(0x4DF790, this, arg1);
}

void vehEngineSampleWrapper::DeallocateSoundPtr()
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*>>(0x4DF5B0, this);
}

void vehEngineSampleWrapper::EchoOff()
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*>>(0x4DF8D0, this);
}

void vehEngineSampleWrapper::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, f32>>(0x4DF8A0, this, arg1);
}

void vehEngineSampleWrapper::ParseCSVBuffer(char* arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, char*>>(0x4DFA40, this, arg1);
}

void vehEngineSampleWrapper::ParseCSVBufferOld(char* arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, char*>>(0x4DF920, this, arg1);
}

void vehEngineSampleWrapper::SetMaxVolume(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, f32>>(0x4DFC10, this, arg1);
}

void vehEngineSampleWrapper::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, f32>>(0x4DF5F0, this, arg1);
}

void vehEngineSampleWrapper::SetSoundPtr(class AudSoundBase* arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, class AudSoundBase*>>(0x4DF580, this, arg1);
}

void vehEngineSampleWrapper::Silence(i32 arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, i32>>(0x4DF8F0, this, arg1);
}

void vehEngineSampleWrapper::Stop()
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*>>(0x4DF5D0, this);
}

void vehEngineSampleWrapper::UpdateRPM(f32 arg1)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, f32>>(0x4DF6E0, this, arg1);
}

void vehEngineSampleWrapper::UpdateRPM(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, vehEngineSampleWrapper*, f32, f32, f32, f32>>(0x4DF610, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(vehicle_enginesamplewrapper);
