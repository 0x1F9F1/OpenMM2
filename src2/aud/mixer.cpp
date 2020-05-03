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

#include "mixer.h"

class audSoundBuffer* audMixer::CreateDuplicateMixerBuffer(class audMixer* arg1)
{
    return stub<thiscall_t<class audSoundBuffer*, audMixer*, class audMixer*>>(0x5A6E50, this, arg1);
}

class audSoundBuffer* audMixer::CreateMixerBufferFromFile(
    char* arg1, char* arg2, enum audSoundBuffer::SOUNDBUFFERTYPE arg3, i32 arg4)
{
    return stub<thiscall_t<class audSoundBuffer*, audMixer*, char*, char*, enum audSoundBuffer::SOUNDBUFFERTYPE, i32>>(
        0x5A6E60, this, arg1, arg2, arg3, arg4);
}

enum audObject::AUD_OBJECTSTATUS audMixer::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audMixer*>>(0x5A6E10, this);
}

bool audMixer::Play()
{
    return stub<thiscall_t<bool, audMixer*>>(0x5A6E20, this);
}

bool audMixer::Set3D(struct _audvector3_* arg1)
{
    return stub<thiscall_t<bool, audMixer*, struct _audvector3_*>>(0x5A6E90, this, arg1);
}

bool audMixer::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audMixer*, f32>>(0x5A6E80, this, arg1);
}

bool audMixer::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audMixer*, f32>>(0x5A6E70, this, arg1);
}

bool audMixer::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audMixer*, f32>>(0x5A6E40, this, arg1);
}

bool audMixer::Stop()
{
    return stub<thiscall_t<bool, audMixer*>>(0x5A6E30, this);
}

bool audMixer::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audMixer*, i32>>(0x5A6E00, this, arg1);
}

define_dummy_symbol(aud_mixer);
