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

#include "audspeech.h"

AudSpeech::AudSpeech(bool arg1)
{
    unimplemented();
}

AudSpeech::~AudSpeech()
{
    unimplemented();
}

void AudSpeech::AllocateQueuePlayData()
{
    return stub<thiscall_t<void, AudSpeech*>>(0x510350, this);
}

void AudSpeech::AllocateSpeechData(char* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudSpeech*, char*, f32, f32>>(0x510270, this, arg1, arg2, arg3);
}

i32 AudSpeech::GetCatAddValue(i32 arg1)
{
    return stub<thiscall_t<i32, AudSpeech*, i32>>(0x510890, this, arg1);
}

i32 AudSpeech::GetEndSufixNumber(i32 arg1)
{
    return stub<thiscall_t<i32, AudSpeech*, i32>>(0x5108B0, this, arg1);
}

bool AudSpeech::IsPlaying()
{
    return stub<thiscall_t<bool, AudSpeech*>>(0x5105E0, this);
}

void AudSpeech::Play(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSpeech*, i32, f32>>(0x510450, this, arg1, arg2);
}

void AudSpeech::Play(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudSpeech*, i32, i32, f32>>(0x510600, this, arg1, arg2, arg3);
}

void AudSpeech::SetExtension(char* arg1)
{
    return stub<thiscall_t<void, AudSpeech*, char*>>(0x510220, this, arg1);
}

void AudSpeech::SetSubPath(char* arg1)
{
    return stub<thiscall_t<void, AudSpeech*, char*>>(0x5101D0, this, arg1);
}

void AudSpeech::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudSpeech*, f32>>(0x510480, this, arg1);
}

void AudSpeech::Stop()
{
    return stub<thiscall_t<void, AudSpeech*>>(0x510840, this);
}

void AudSpeech::Update()
{
    return stub<thiscall_t<void, AudSpeech*>>(0x510720, this);
}

void AudSpeech::EmptyQueue()
{
    return stub<thiscall_t<void, AudSpeech*>>(0x5107F0, this);
}

void AudSpeech::PlayOneShot(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSpeech*, i32, f32>>(0x510570, this, arg1, arg2);
}

void AudSpeech::PlayOneShot(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudSpeech*, i32, i32, f32>>(0x5106B0, this, arg1, arg2, arg3);
}

void AudSpeech::PlayStream(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSpeech*, i32, f32>>(0x510510, this, arg1, arg2);
}

void AudSpeech::PlayStream(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudSpeech*, i32, i32, f32>>(0x510640, this, arg1, arg2, arg3);
}

void AudSpeech::PutInQueue(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, AudSpeech*, i32, i32, f32>>(0x5103F0, this, arg1, arg2, arg3);
}

void AudSpeech::SetOneShotVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudSpeech*, f32>>(0x5104D0, this, arg1);
}

void AudSpeech::SetStreamVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudSpeech*, f32>>(0x5104B0, this, arg1);
}

define_dummy_symbol(ageaudio_audspeech);
