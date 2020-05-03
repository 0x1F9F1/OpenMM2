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

#include "audspeechdata.h"

AudSpeechData::AudSpeechData(char* arg1, f32 arg2, f32 arg3, bool arg4, char* arg5, char* arg6)
{
    unimplemented();
}

AudSpeechData::~AudSpeechData()
{
    unimplemented();
}

char* AudSpeechData::GetName(i32 arg1)
{
    return stub<thiscall_t<char*, AudSpeechData*, i32>>(0x513FB0, this, arg1);
}

class AudSoundBase* AudSpeechData::GetOneShot(i32 arg1)
{
    return stub<thiscall_t<class AudSoundBase*, AudSpeechData*, i32>>(0x513FF0, this, arg1);
}

char* AudSpeechData::GetRandomName()
{
    return stub<thiscall_t<char*, AudSpeechData*>>(0x514010, this);
}

class AudSoundBase* AudSpeechData::GetRandomOneShot()
{
    return stub<thiscall_t<class AudSoundBase*, AudSpeechData*>>(0x5140B0, this);
}

void AudSpeechData::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudSpeechData*, f32>>(0x513F70, this, arg1);
}

void AudSpeechData::LoadOneShots(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, AudSpeechData*, char*, char*>>(0x513E20, this, arg1, arg2);
}

define_dummy_symbol(ageaudio_audspeechdata);
