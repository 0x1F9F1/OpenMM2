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

#include "soundbuffer.h"

bool audSoundBuffer::BytesAdded(i32 arg1)
{
    return stub<thiscall_t<bool, audSoundBuffer*, i32>>(0x5A6280, this, arg1);
}

bool audSoundBuffer::BytesRemoved(i32 arg1)
{
    return stub<thiscall_t<bool, audSoundBuffer*, i32>>(0x5A6300, this, arg1);
}

class audSoundBuffer* audSoundBuffer::Create(enum audSoundBuffer::SOUNDBUFFERTYPE arg1, i32 arg2)
{
    return stub<thiscall_t<class audSoundBuffer*, audSoundBuffer*, enum audSoundBuffer::SOUNDBUFFERTYPE, i32>>(
        0x5A6160, this, arg1, arg2);
}

void audSoundBuffer::Destroy()
{
    return stub<thiscall_t<void, audSoundBuffer*>>(0x5A6240, this);
}

struct adpcm_state* audSoundBuffer::GetAdpcmState()
{
    return stub<thiscall_t<struct adpcm_state*, audSoundBuffer*>>(0x5A6450, this);
}

void* audSoundBuffer::GetDataPtr()
{
    return stub<thiscall_t<void*, audSoundBuffer*>>(0x5A6430, this);
}

i32 audSoundBuffer::GetExtra()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A6420, this);
}

i32 audSoundBuffer::GetIndex1()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A6400, this);
}

i32 audSoundBuffer::GetIndex2()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A6410, this);
}

i32 audSoundBuffer::GetSize()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A6260, this);
}

enum audSoundBuffer::SOUNDBUFFERTYPE audSoundBuffer::GetType()
{
    return stub<thiscall_t<enum audSoundBuffer::SOUNDBUFFERTYPE, audSoundBuffer*>>(0x5A6270, this);
}

void audSoundBuffer::Init(enum audSoundBuffer::SOUNDBUFFERTYPE arg1, i32 arg2, void* arg3)
{
    return stub<thiscall_t<void, audSoundBuffer*, enum audSoundBuffer::SOUNDBUFFERTYPE, i32, void*>>(
        0x5A61F0, this, arg1, arg2, arg3);
}

bool audSoundBuffer::IsEmpty()
{
    return stub<thiscall_t<bool, audSoundBuffer*>>(0x5A64D0, this);
}

bool audSoundBuffer::IsFull()
{
    return stub<thiscall_t<bool, audSoundBuffer*>>(0x5A64B0, this);
}

void audSoundBuffer::SetAdpcmState(struct adpcm_state* arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, struct adpcm_state*>>(0x5A6460, this, arg1);
}

void audSoundBuffer::SetDataPtr(void* arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, void*>>(0x5A6440, this, arg1);
}

void audSoundBuffer::SetExtra(i32 arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, i32>>(0x5A63D0, this, arg1);
}

void audSoundBuffer::SetIndex1(i32 arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, i32>>(0x5A6370, this, arg1);
}

void audSoundBuffer::SetIndex2(i32 arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, i32>>(0x5A63A0, this, arg1);
}

void audSoundBuffer::SetIndexes(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, audSoundBuffer*, i32, i32>>(0x5A6470, this, arg1, arg2);
}

void audSoundBuffer::SetSize(i32 arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, i32>>(0x5A63E0, this, arg1);
}

void audSoundBuffer::SetType(enum audSoundBuffer::SOUNDBUFFERTYPE arg1)
{
    return stub<thiscall_t<void, audSoundBuffer*, enum audSoundBuffer::SOUNDBUFFERTYPE>>(0x5A63F0, this, arg1);
}

i32 audSoundBuffer::Unused()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A64F0, this);
}

i32 audSoundBuffer::Used()
{
    return stub<thiscall_t<i32, audSoundBuffer*>>(0x5A64E0, this);
}

define_dummy_symbol(aud_soundbuffer);
