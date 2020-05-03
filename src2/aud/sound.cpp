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

#include "sound.h"

bool audSound::CloseSoundFile()
{
    return stub<thiscall_t<bool, audSound*>>(0x5A4680, this);
}

class audSoundBuffer* audSound::CreateDuplicateSoundBuffer(class audSound* arg1)
{
    return stub<thiscall_t<class audSoundBuffer*, audSound*, class audSound*>>(0x5A39E0, this, arg1);
}

class audSoundBuffer* audSound::CreateSoundBufferFromFile(
    char* arg1, char* arg2, enum audSoundBuffer::SOUNDBUFFERTYPE arg3, i32 arg4, u32 arg5)
{
    return stub<
        thiscall_t<class audSoundBuffer*, audSound*, char*, char*, enum audSoundBuffer::SOUNDBUFFERTYPE, i32, u32>>(
        0x5A3B20, this, arg1, arg2, arg3, arg4, arg5);
}

class audSoundBuffer* audSound::CreateSoundBufferFromMemory(
    void* arg1, enum audSoundBuffer::SOUNDBUFFERTYPE arg2, void** arg3)
{
    return stub<thiscall_t<class audSoundBuffer*, audSound*, void*, enum audSoundBuffer::SOUNDBUFFERTYPE, void**>>(
        0x5A4210, this, arg1, arg2, arg3);
}

void audSound::Destroy()
{
    return stub<thiscall_t<void, audSound*>>(0x5A3990, this);
}

enum audObject::AUD_OBJECTSTATUS audSound::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audSound*>>(0x5A4440, this);
}

void audSound::Init()
{
    return stub<thiscall_t<void, audSound*>>(0x5A3970, this);
}

i32 audSound::OpenSoundFile(i32 arg1)
{
    return stub<thiscall_t<i32, audSound*, i32>>(0x5A3AC0, this, arg1);
}

bool audSound::PauseResume(bool arg1)
{
    return stub<thiscall_t<bool, audSound*, bool>>(0x5A45F0, this, arg1);
}

bool audSound::Play()
{
    return stub<thiscall_t<bool, audSound*>>(0x5A4310, this);
}

bool audSound::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audSound*, f32>>(0x5A45A0, this, arg1);
}

bool audSound::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audSound*, f32>>(0x5A4530, this, arg1);
}

bool audSound::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audSound*, f32>>(0x5A44E0, this, arg1);
}

bool audSound::Stop()
{
    return stub<thiscall_t<bool, audSound*>>(0x5A4490, this);
}

bool audSound::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audSound*, i32>>(0x5A4220, this, arg1);
}

i32 audSound::WriteWaveDataToBuffer(i32 arg1, i32* arg2)
{
    return stub<thiscall_t<i32, audSound*, i32, i32*>>(0x5A3F10, this, arg1, arg2);
}

define_dummy_symbol(aud_sound);
