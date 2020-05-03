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

#include "aiambientvehicleaudio.h"

aiAmbientVehicleAudio::aiAmbientVehicleAudio()
{
    unimplemented();
}

aiAmbientVehicleAudio::~aiAmbientVehicleAudio()
{
    unimplemented();
}

void aiAmbientVehicleAudio::AssignSounds()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4CF9D0, this);
}

void aiAmbientVehicleAudio::EchoOff()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4D0030, this);
}

void aiAmbientVehicleAudio::EchoOn()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4CFFE0, this);
}

class AudImpact* aiAmbientVehicleAudio::GetAudImpactPtr()
{
    return stub<thiscall_t<class AudImpact*, aiAmbientVehicleAudio*>>(0x4CFB10, this);
}

void aiAmbientVehicleAudio::Init(char* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*, char*, class Vector3*>>(0x4CF8F0, this, arg1, arg2);
}

bool aiAmbientVehicleAudio::LoadEngine(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, aiAmbientVehicleAudio*, char*, char*>>(0x4D00D0, this, arg1, arg2);
}

bool aiAmbientVehicleAudio::LoadHorn(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, aiAmbientVehicleAudio*, char*, char*>>(0x4D0300, this, arg1, arg2);
}

bool aiAmbientVehicleAudio::LoadImpacts(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, aiAmbientVehicleAudio*, char*, char*>>(0x4D07B0, this, arg1, arg2);
}

bool aiAmbientVehicleAudio::LoadVoices(char* arg1, char* arg2, bool arg3)
{
    return stub<thiscall_t<bool, aiAmbientVehicleAudio*, char*, char*, bool>>(0x4D0530, this, arg1, arg2, arg3);
}

bool aiAmbientVehicleAudio::PlayAvoidanceHorn()
{
    return stub<thiscall_t<bool, aiAmbientVehicleAudio*>>(0x4CFAB0, this);
}

void aiAmbientVehicleAudio::PlayAvoidanceReaction(f32 arg1)
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*, f32>>(0x4D00B0, this, arg1);
}

void aiAmbientVehicleAudio::PlayImpactHorn(f32 arg1)
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*, f32>>(0x4CFAD0, this, arg1);
}

void aiAmbientVehicleAudio::PlayImpactReaction(f32 arg1)
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*, f32>>(0x4D0090, this, arg1);
}

void aiAmbientVehicleAudio::Reset()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4CF9B0, this);
}

void aiAmbientVehicleAudio::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*, i32>>(0x4CFA50, this, arg1);
}

void aiAmbientVehicleAudio::UpdateAudio()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4CFB20, this);
}

i32 aiAmbientVehicleAudio::UpdateAudio(f32 arg1)
{
    return stub<thiscall_t<i32, aiAmbientVehicleAudio*, f32>>(0x4CFB90, this, arg1);
}

void aiAmbientVehicleAudio::UpdateHorn()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4CFAF0, this);
}

void aiAmbientVehicleAudio::DeallocateStatics()
{
    return stub<cdecl_t<void>>(0x4CFD00);
}

void aiAmbientVehicleAudio::InitStatics()
{
    return stub<cdecl_t<void>>(0x4CFCC0);
}

void aiAmbientVehicleAudio::LoadNumVFileChoices(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x4CFFA0, arg1);
}

void aiAmbientVehicleAudio::SetCSVCatString(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x4CFF70, arg1);
}

void aiAmbientVehicleAudio::UpdateStatics(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x4CFF00, arg1);
}

void aiAmbientVehicleAudio::UpdateEcho()
{
    return stub<thiscall_t<void, aiAmbientVehicleAudio*>>(0x4D0060, this);
}

void aiAmbientVehicleAudio::UpdateVoices(i32 arg1, f32 arg2)
{
    return stub<cdecl_t<void, i32, f32>>(0x4CFF30, arg1, arg2);
}

void DeallocateAudioData(class AudCreature*** arg1, i32* arg2)
{
    return stub<cdecl_t<void, class AudCreature***, i32*>>(0x4D0B70, arg1, arg2);
}

void DeallocateAudioData(class AudImpact*** arg1, i32* arg2)
{
    return stub<cdecl_t<void, class AudImpact***, i32*>>(0x4D0BE0, arg1, arg2);
}

void DeallocateAudioData(class aiEngineAudio*** arg1, i32* arg2)
{
    return stub<cdecl_t<void, class aiEngineAudio***, i32*>>(0x4D0B00, arg1, arg2);
}

define_dummy_symbol(vehicle_aiambientvehicleaudio);
