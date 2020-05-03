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

#include "audimpactdata.h"

AudImpactData::AudImpactData()
{
    unimplemented();
}

AudImpactData::AudImpactData(class AudImpactData* arg1)
{
    unimplemented();
}

AudImpactData::~AudImpactData()
{
    unimplemented();
}

void AudImpactData::AssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, AudImpactData*, i32>>(0x5143A0, this, arg1);
}

void AudImpactData::Play(f32 arg1)
{
    return stub<thiscall_t<void, AudImpactData*, f32>>(0x5144C0, this, arg1);
}

void AudImpactData::Play(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudImpactData*, f32, f32, f32>>(0x5145A0, this, arg1, arg2, arg3);
}

bool AudImpactData::ReadCSV(class Stream* arg1, i32 arg2)
{
    return stub<thiscall_t<bool, AudImpactData*, class Stream*, i32>>(0x5141A0, this, arg1, arg2);
}

void AudImpactData::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, AudImpactData*, f32>>(0x5146B0, this, arg1);
}

void AudImpactData::UnAssignSounds()
{
    return stub<thiscall_t<void, AudImpactData*>>(0x514410, this);
}

void AudImpactData::UpdateAttenuation(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudImpactData*, f32, f32>>(0x514430, this, arg1, arg2);
}

void AudImpactData::PlaySample(struct tagImpactSampleWrapper* arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudImpactData*, struct tagImpactSampleWrapper*, f32>>(0x514520, this, arg1, arg2);
}

void AudImpactData::PlaySample(struct tagImpactSampleWrapper* arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, AudImpactData*, struct tagImpactSampleWrapper*, f32, f32, f32>>(
        0x514610, this, arg1, arg2, arg3, arg4);
}

void AudImpactData::UpdateAttenuation(struct tagImpactSampleWrapper* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudImpactData*, struct tagImpactSampleWrapper*, f32, f32>>(
        0x514470, this, arg1, arg2, arg3);
}

define_dummy_symbol(ageaudio_audimpactdata);
