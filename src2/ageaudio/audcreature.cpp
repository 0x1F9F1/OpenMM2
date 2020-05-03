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

#include "audcreature.h"

AudCreature::AudCreature()
{
    unimplemented();
}

AudCreature::AudCreature(class AudCreature* arg1)
{
    unimplemented();
}

AudCreature::~AudCreature()
{
    unimplemented();
}

void AudCreature::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudCreature*, i32>>(0x512D90, this, arg1);
}

void AudCreature::EchoOff()
{
    return stub<thiscall_t<void, AudCreature*>>(0x512E50, this);
}

void AudCreature::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, AudCreature*, f32>>(0x512E10, this, arg1);
}

bool AudCreature::IsPlaying()
{
    return stub<thiscall_t<bool, AudCreature*>>(0x512940, this);
}

void AudCreature::PlayAvoidance(f32 arg1)
{
    return stub<thiscall_t<void, AudCreature*, f32>>(0x512900, this, arg1);
}

void AudCreature::PlayImpact(f32 arg1)
{
    return stub<thiscall_t<void, AudCreature*, f32>>(0x512990, this, arg1);
}

void AudCreature::SetAud3DObjectPtr(class Aud3DObject* arg1)
{
    return stub<thiscall_t<void, AudCreature*, class Aud3DObject*>>(0x5128C0, this, arg1);
}

void AudCreature::UnAssignSounds()
{
    return stub<thiscall_t<void, AudCreature*>>(0x512DD0, this);
}

void AudCreature::Update(f32 arg1)
{
    return stub<thiscall_t<void, AudCreature*, f32>>(0x512E90, this, arg1);
}

void AudCreature::UpdateAttenuation(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudCreature*, f32, f32, f32>>(0x5129B0, this, arg1, arg2, arg3);
}

void AudCreature::UpdateEcho()
{
    return stub<thiscall_t<void, AudCreature*>>(0x512ED0, this);
}

void AudCreature::AddToHash(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x512B00, arg1, arg2);
}

i32 AudCreature::Load(class AudCreature** arg1, char* arg2, char* arg3, i32* arg4)
{
    return stub<cdecl_t<i32, class AudCreature**, char*, char*, i32*>>(0x512A60, arg1, arg2, arg3, arg4);
}

i32 AudCreature::ReadCSV(class Stream* arg1)
{
    return stub<thiscall_t<i32, AudCreature*, class Stream*>>(0x512B20, this, arg1);
}

define_dummy_symbol(ageaudio_audcreature);
