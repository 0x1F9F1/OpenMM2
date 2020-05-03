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

#include "ageaudio.h"

void Aud_Stream_Close(class Stream* arg1)
{
    return stub<cdecl_t<void, class Stream*>>(0x50ED70, arg1);
}

class Stream* Aud_Stream_Open(char* arg1)
{
    return stub<cdecl_t<class Stream*, char*>>(0x50ED50, arg1);
}

i32 Aud_Stream_Read(class Stream* arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, class Stream*, void*, i32>>(0x50EDF0, arg1, arg2, arg3);
}

i32 Aud_Stream_Seek(class Stream* arg1, i32 arg2)
{
    return stub<cdecl_t<i32, class Stream*, i32>>(0x50EDA0, arg1, arg2);
}

i32 Aud_Stream_Size(class Stream* arg1)
{
    return stub<cdecl_t<i32, class Stream*>>(0x50EDC0, arg1);
}

i32 Aud_Stream_Tell(class Stream* arg1)
{
    return stub<cdecl_t<i32, class Stream*>>(0x50ED90, arg1);
}

AudManagerBase::AudManagerBase()
{
    unimplemented();
}

AudManagerBase::~AudManagerBase()
{
    unimplemented();
}

void AudManagerBase::Disable()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F120, this);
}

void AudManagerBase::Enable()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F0F0, this);
}

class audManager* AudManagerBase::GetAgeAudioManager()
{
    return stub<thiscall_t<class audManager*, AudManagerBase*>>(0x50F300, this);
}

f32 AudManagerBase::GetMasterSFXVolume()
{
    return stub<thiscall_t<f32, AudManagerBase*>>(0x50F1C0, this);
}

void AudManagerBase::Init(i32 arg1, i16 arg2, i16 arg3, i32 arg4)
{
    return stub<thiscall_t<void, AudManagerBase*, i32, i16, i16, i32>>(0x50EED0, this, arg1, arg2, arg3, arg4);
}

bool AudManagerBase::IsEnabled()
{
    return stub<thiscall_t<bool, AudManagerBase*>>(0x50F100, this);
}

i32 AudManagerBase::IsStereo()
{
    return stub<thiscall_t<i32, AudManagerBase*>>(0x50F0D0, this);
}

class audSoundBankHdr* AudManagerBase::LoadSoundBank(char* arg1)
{
    return stub<thiscall_t<class audSoundBankHdr*, AudManagerBase*, char*>>(0x50F060, this, arg1);
}

f32 AudManagerBase::RandomizeNumber(f32 arg1)
{
    return stub<thiscall_t<f32, AudManagerBase*, f32>>(0x50F230, this, arg1);
}

f32 AudManagerBase::RandomizeNumber(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<f32, AudManagerBase*, f32, f32>>(0x50F290, this, arg1, arg2);
}

void AudManagerBase::RestartAudio(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, AudManagerBase*, i32, i32, i32>>(0x50EF80, this, arg1, arg2, arg3);
}

void AudManagerBase::SetReverb(i32 arg1)
{
    return stub<thiscall_t<void, AudManagerBase*, i32>>(0x50F310, this, arg1);
}

void AudManagerBase::SetReverbFlags(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, AudManagerBase*, i32, i32>>(0x50F0C0, this, arg1, arg2);
}

void AudManagerBase::SetStereoFlag(i32 arg1)
{
    return stub<thiscall_t<void, AudManagerBase*, i32>>(0x50F090, this, arg1);
}

void AudManagerBase::ShutDownAudio()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F000, this);
}

bool AudManagerBase::SoundFXOn()
{
    return stub<thiscall_t<bool, AudManagerBase*>>(0x50F070, this);
}

void AudManagerBase::StopAllSounds()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F1E0, this);
}

void AudManagerBase::Update()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F130, this);
}

void AudManagerBase::UpdatePaused()
{
    return stub<thiscall_t<void, AudManagerBase*>>(0x50F1A0, this);
}

define_dummy_symbol(ageaudio_ageaudio);
