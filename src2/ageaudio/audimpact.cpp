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

#include "audimpact.h"

AudImpact::AudImpact()
{
    unimplemented();
}

AudImpact::AudImpact(class AudImpact* arg1)
{
    unimplemented();
}

AudImpact::~AudImpact()
{
    unimplemented();
}

void AudImpact::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudImpact*, i32>>(0x5117F0, this, arg1);
}

class AudImpactData* AudImpact::GetAudImpactDataPtr(i32 arg1)
{
    return stub<thiscall_t<class AudImpactData*, AudImpact*, i32>>(0x5112F0, this, arg1);
}

void AudImpact::Play(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, AudImpact*, f32, i32>>(0x511860, this, arg1, arg2);
}

void AudImpact::Play(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudImpact*, i32, f32>>(0x511880, this, arg1, arg2);
}

void AudImpact::Set3D(bool arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudImpact*, bool, f32>>(0x5118D0, this, arg1, arg2);
}

void AudImpact::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, AudImpact*, f32>>(0x5118F0, this, arg1);
}

void AudImpact::UnAssignSounds()
{
    return stub<thiscall_t<void, AudImpact*>>(0x511820, this);
}

void AudImpact::Update()
{
    return stub<thiscall_t<void, AudImpact*>>(0x511840, this);
}

void AudImpact::UpdateAttenuation(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudImpact*, f32, f32>>(0x511950, this, arg1, arg2);
}

void AudImpact::AddToHash(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x511460, arg1, arg2);
}

f32 AudImpact::GetSecondsElapsed()
{
    return stub<cdecl_t<f32>>(0x5112E0);
}

i32 AudImpact::Load(class AudImpact** arg1, char* arg2, char* arg3, i32* arg4)
{
    return stub<cdecl_t<i32, class AudImpact**, char*, char*, i32*>>(0x511370, arg1, arg2, arg3, arg4);
}

void AudImpact::SetSecondsElapsed(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x5112D0, arg1);
}

i32 AudImpact::ReadCSV(class Stream* arg1)
{
    return stub<thiscall_t<i32, AudImpact*, class Stream*>>(0x5114A0, this, arg1);
}

define_dummy_symbol(ageaudio_audimpact);
