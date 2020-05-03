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

#include "audcreatureimpact.h"

AudCreatureImpact::AudCreatureImpact()
{
    unimplemented();
}

AudCreatureImpact::AudCreatureImpact(class AudCreatureImpact* arg1)
{
    unimplemented();
}

AudCreatureImpact::~AudCreatureImpact()
{
    unimplemented();
}

void AudCreatureImpact::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudCreatureImpact*, i32>>(0x5132D0, this, arg1);
}

void AudCreatureImpact::EchoOff()
{
    return stub<thiscall_t<void, AudCreatureImpact*>>(0x513530, this);
}

void AudCreatureImpact::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureImpact*, f32>>(0x5134D0, this, arg1);
}

i32 AudCreatureImpact::ParseCSVBuffer(class Stream* arg1)
{
    return stub<thiscall_t<i32, AudCreatureImpact*, class Stream*>>(0x5130C0, this, arg1);
}

void AudCreatureImpact::QueuePlay(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureImpact*, f32>>(0x513350, this, arg1);
}

bool AudCreatureImpact::SamplePlaying()
{
    return stub<thiscall_t<bool, AudCreatureImpact*>>(0x5130A0, this);
}

void AudCreatureImpact::SetAud3DObjectPtr(class Aud3DObject* arg1)
{
    return stub<thiscall_t<void, AudCreatureImpact*, class Aud3DObject*>>(0x513090, this, arg1);
}

void AudCreatureImpact::UnAssignSounds()
{
    return stub<thiscall_t<void, AudCreatureImpact*>>(0x513320, this);
}

void AudCreatureImpact::Update()
{
    return stub<thiscall_t<void, AudCreatureImpact*>>(0x513590, this);
}

void AudCreatureImpact::UpdateAttenuation(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudCreatureImpact*, f32, f32>>(0x513460, this, arg1, arg2);
}

void AudCreatureImpact::UpdateEcho()
{
    return stub<thiscall_t<void, AudCreatureImpact*>>(0x513560, this);
}

void AudCreatureImpact::UpdateStatics()
{
    return stub<cdecl_t<void>>(0x5135D0);
}

void AudCreatureImpact::Play()
{
    return stub<thiscall_t<void, AudCreatureImpact*>>(0x5133D0, this);
}

define_dummy_symbol(ageaudio_audcreatureimpact);
