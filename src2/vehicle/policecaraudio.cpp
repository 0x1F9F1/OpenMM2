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

#include "policecaraudio.h"

vehPoliceCarAudio::vehPoliceCarAudio(
    class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, char const* arg4, bool arg5)
{
    unimplemented();
}

vehPoliceCarAudio::~vehPoliceCarAudio()
{
    unimplemented();
}

void vehPoliceCarAudio::AssignSounds()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5130, this);
}

void vehPoliceCarAudio::DamageSiren()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4D50, this);
}

void vehPoliceCarAudio::EchoOff()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4670, this);
}

void vehPoliceCarAudio::EchoOn()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D45F0, this);
}

i32 vehPoliceCarAudio::ExplosionIsPlaying()
{
    return stub<thiscall_t<i32, vehPoliceCarAudio*>>(0x4D4B00, this);
}

void vehPoliceCarAudio::Init(
    class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, char const* arg4, bool arg5)
{
    return stub<
        thiscall_t<void, vehPoliceCarAudio*, class vehCarSim*, class vehCarDamage*, char const*, char const*, bool>>(
        0x4D46F0, this, arg1, arg2, arg3, arg4, arg5);
}

void vehPoliceCarAudio::PlayExplosion()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4C90, this);
}

void vehPoliceCarAudio::PlayVoice()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5120, this);
}

i16 vehPoliceCarAudio::RandomizeNumber()
{
    return stub<thiscall_t<i16, vehPoliceCarAudio*>>(0x4D5400, this);
}

void vehPoliceCarAudio::RemoveFromManager()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5580, this);
}

void vehPoliceCarAudio::Reset()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5290, this);
}

void vehPoliceCarAudio::Set2DPan(f32 arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, f32>>(0x4D54F0, this, arg1);
}

void vehPoliceCarAudio::Set3DParams()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5570, this);
}

void vehPoliceCarAudio::SetNon3DParams()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5450, this);
}

void vehPoliceCarAudio::StartSiren(i32 arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, i32>>(0x4D4B20, this, arg1);
}

void vehPoliceCarAudio::StopSiren()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4C20, this);
}

void vehPoliceCarAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, i32>>(0x4D5220, this, arg1);
}

void vehPoliceCarAudio::Update()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D5590, this);
}

void vehPoliceCarAudio::UpdateAudio()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D52A0, this);
}

void vehPoliceCarAudio::UpdateAudio3D()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D52F0, this);
}

i32 vehPoliceCarAudio::UpdateAudio3D(f32 arg1)
{
    return stub<thiscall_t<i32, vehPoliceCarAudio*, f32>>(0x4D5060, this, arg1);
}

void vehPoliceCarAudio::UpdateAudioNon3D()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D53B0, this);
}

void vehPoliceCarAudio::UpdateEcho()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D46B0, this);
}

void vehPoliceCarAudio::UpdateExplosion(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, f32, f32>>(0x4D50B0, this, arg1, arg2);
}

void vehPoliceCarAudio::UpdateSiren()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4F60, this);
}

i32 vehPoliceCarAudio::UpdateSiren(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<i32, vehPoliceCarAudio*, f32, f32, f32>>(0x4D4E40, this, arg1, arg2, arg3);
}

i32 vehPoliceCarAudio::GetNumCopsPursuingPlayer()
{
    return stub<cdecl_t<i32>>(0x4D5440);
}

void vehPoliceCarAudio::DeallocateSirenPlayInfo(struct tagSirenData* arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, struct tagSirenData*>>(0x4D4590, this, arg1);
}

void vehPoliceCarAudio::FluctuateSiren()
{
    return stub<thiscall_t<void, vehPoliceCarAudio*>>(0x4D4FB0, this);
}

void vehPoliceCarAudio::Load(char const* arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, char const*>>(0x4D4730, this, arg1);
}

void vehPoliceCarAudio::ReadSirenData(class Stream* arg1)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, class Stream*>>(0x4D4800, this, arg1);
}

void vehPoliceCarAudio::ReadSirenData(struct tagSirenData* arg1, char* arg2)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, struct tagSirenData*, char*>>(0x4D49E0, this, arg1, arg2);
}

void vehPoliceCarAudio::ReadSirenPlayInfo(struct tagSirenData* arg1, char* arg2)
{
    return stub<thiscall_t<void, vehPoliceCarAudio*, struct tagSirenData*, char*>>(0x4D4A50, this, arg1, arg2);
}

define_dummy_symbol(vehicle_policecaraudio);
