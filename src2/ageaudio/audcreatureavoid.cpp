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

#include "audcreatureavoid.h"

AudCreatureAvoid::AudCreatureAvoid()
{
    unimplemented();
}

AudCreatureAvoid::AudCreatureAvoid(class AudCreatureAvoid* arg1)
{
    unimplemented();
}

AudCreatureAvoid::~AudCreatureAvoid()
{
    unimplemented();
}

void AudCreatureAvoid::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudCreatureAvoid*, i32>>(0x514BF0, this, arg1);
}

void AudCreatureAvoid::EchoOff()
{
    return stub<thiscall_t<void, AudCreatureAvoid*>>(0x514E70, this);
}

void AudCreatureAvoid::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureAvoid*, f32>>(0x514E10, this, arg1);
}

bool AudCreatureAvoid::IsEligible()
{
    return stub<thiscall_t<bool, AudCreatureAvoid*>>(0x514F50, this);
}

i32 AudCreatureAvoid::ParseCSVBuffer(class Stream* arg1)
{
    return stub<thiscall_t<i32, AudCreatureAvoid*, class Stream*>>(0x5149C0, this, arg1);
}

void AudCreatureAvoid::QueuePlay()
{
    return stub<thiscall_t<void, AudCreatureAvoid*>>(0x514CB0, this);
}

bool AudCreatureAvoid::SamplePlaying()
{
    return stub<thiscall_t<bool, AudCreatureAvoid*>>(0x514D10, this);
}

void AudCreatureAvoid::SetAud3DObjectPtr(class Aud3DObject* arg1)
{
    return stub<thiscall_t<void, AudCreatureAvoid*, class Aud3DObject*>>(0x514CA0, this, arg1);
}

void AudCreatureAvoid::UnAssignSounds()
{
    return stub<thiscall_t<void, AudCreatureAvoid*>>(0x514C40, this);
}

void AudCreatureAvoid::Update(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureAvoid*, f32>>(0x514ED0, this, arg1);
}

void AudCreatureAvoid::UpdateAttenuation(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudCreatureAvoid*, f32, f32>>(0x514DA0, this, arg1, arg2);
}

void AudCreatureAvoid::UpdateEcho()
{
    return stub<thiscall_t<void, AudCreatureAvoid*>>(0x514EA0, this);
}

bool AudCreatureAvoid::InSpeedRange(f32 arg1)
{
    return stub<thiscall_t<bool, AudCreatureAvoid*, f32>>(0x514C70, this, arg1);
}

void AudCreatureAvoid::Play()
{
    return stub<thiscall_t<void, AudCreatureAvoid*>>(0x514D30, this);
}

define_dummy_symbol(ageaudio_audcreatureavoid);
