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

#include "audio.h"

AudioOptions::AudioOptions(i32 arg1)
{
    unimplemented();
}

AudioOptions::~AudioOptions()
{
    unimplemented();
}

void AudioOptions::CancelAction()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8A90, this);
}

void AudioOptions::DoneAction()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8B20, this);
}

i32 AudioOptions::FindDevice(char* arg1)
{
    return stub<thiscall_t<i32, AudioOptions*, char*>>(0x4F8D50, this, arg1);
}

void AudioOptions::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, AudioOptions*, i32, i32>>(0x4F91C0, this, arg1, arg2);
}

char* AudioOptions::GetCurrentDeviceName()
{
    return stub<thiscall_t<char*, AudioOptions*>>(0x4F8DD0, this);
}

void AudioOptions::LoadUIMusicCSV(char* arg1)
{
    return stub<thiscall_t<void, AudioOptions*, char*>>(0x4F90D0, this, arg1);
}

void AudioOptions::PreSetup()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8750, this);
}

void AudioOptions::ResetAmbient()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8E70, this);
}

void AudioOptions::ResetCommentary()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8EE0, this);
}

void AudioOptions::ResetDefaultAction()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F89B0, this);
}

void AudioOptions::ResetMusic()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8E40, this);
}

void AudioOptions::ResetSoundFX()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8E10, this);
}

void AudioOptions::ResetSoundQuality()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8EA0, this);
}

void AudioOptions::ResetStereo()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8DF0, this);
}

void AudioOptions::SetAmbient()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8CD0, this);
}

void AudioOptions::SetAudioState()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8B30, this);
}

void AudioOptions::SetBalance()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8860, this);
}

void AudioOptions::SetCommentary()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8D20, this);
}

void AudioOptions::SetDevice(i32 arg1)
{
    return stub<thiscall_t<void, AudioOptions*, i32>>(0x4F8F00, this, arg1);
}

void AudioOptions::SetMusic()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8CB0, this);
}

void AudioOptions::SetMusicVolume()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8800, this);
}

void AudioOptions::SetQuality()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F88D0, this);
}

void AudioOptions::SetSFXVolume()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F87A0, this);
}

void AudioOptions::SetSoundFX()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8D00, this);
}

void AudioOptions::SetStereoFX()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8950, this);
}

void AudioOptions::StoreCurrentSetup()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F89A0, this);
}

void AudioOptions::ToggleAmbient()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F9090, this);
}

void AudioOptions::ToggleMusic()
{
    return stub<thiscall_t<void, AudioOptions*>>(0x4F8FA0, this);
}

define_dummy_symbol(mmui_audio);
