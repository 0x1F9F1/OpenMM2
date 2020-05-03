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

#include "audcreaturecontainer.h"

AudCreatureContainer::AudCreatureContainer()
{
    unimplemented();
}

AudCreatureContainer::~AudCreatureContainer()
{
    unimplemented();
}

void AudCreatureContainer::AssignSounds()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x5109A0, this);
}

void AudCreatureContainer::EchoOff()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510C90, this);
}

void AudCreatureContainer::EchoOn()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510C60, this);
}

void AudCreatureContainer::Init(char* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, AudCreatureContainer*, char*, class Vector3*>>(0x510920, this, arg1, arg2);
}

bool AudCreatureContainer::IsPlaying()
{
    return stub<thiscall_t<bool, AudCreatureContainer*>>(0x510910, this);
}

bool AudCreatureContainer::LoadVoices(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, AudCreatureContainer*, char*, char*>>(0x510D20, this, arg1, arg2);
}

void AudCreatureContainer::PlayAvoidanceReaction(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureContainer*, f32>>(0x510CF0, this, arg1);
}

void AudCreatureContainer::PlayImpactReaction(f32 arg1)
{
    return stub<thiscall_t<void, AudCreatureContainer*, f32>>(0x510CC0, this, arg1);
}

void AudCreatureContainer::Reset()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510980, this);
}

void AudCreatureContainer::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudCreatureContainer*, i32>>(0x5109E0, this, arg1);
}

void AudCreatureContainer::Update()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510950, this);
}

void AudCreatureContainer::UpdateAudio()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510A20, this);
}

i32 AudCreatureContainer::UpdateAudio(f32 arg1)
{
    return stub<thiscall_t<i32, AudCreatureContainer*, f32>>(0x510A80, this, arg1);
}

void AudCreatureContainer::DeallocateStatics()
{
    return stub<cdecl_t<void>>(0x510B30);
}

void AudCreatureContainer::InitStatics()
{
    return stub<cdecl_t<void>>(0x510B10);
}

void AudCreatureContainer::LoadNumFileChoices(char* arg1, i32* arg2)
{
    return stub<cdecl_t<void, char*, i32*>>(0x510F50, arg1, arg2);
}

void AudCreatureContainer::UpdateStatics(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x510BF0, arg1);
}

void AudCreatureContainer::UpdateEcho()
{
    return stub<thiscall_t<void, AudCreatureContainer*>>(0x510CB0, this);
}

void AudCreatureContainer::UpdateVoices(i32 arg1, f32 arg2)
{
    return stub<cdecl_t<void, i32, f32>>(0x510C20, arg1, arg2);
}

define_dummy_symbol(ageaudio_audcreaturecontainer);
