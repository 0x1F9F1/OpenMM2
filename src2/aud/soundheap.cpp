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

#include "soundheap.h"

class audSoundHeap* audSoundHeap::Create(class audSoundHeap* arg1, i32 arg2)
{
    return stub<thiscall_t<class audSoundHeap*, audSoundHeap*, class audSoundHeap*, i32>>(0x5A5E90, this, arg1, arg2);
}

class audSoundHeap* audSoundHeap::CreateNodeList(class audSoundHeap* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<class audSoundHeap*, audSoundHeap*, class audSoundHeap*, i32, i32>>(
        0x5A5EB0, this, arg1, arg2, arg3);
}

void audSoundHeap::Destroy()
{
    return stub<thiscall_t<void, audSoundHeap*>>(0x5A6080, this);
}

void* audSoundHeap::GetBottom()
{
    return stub<thiscall_t<void*, audSoundHeap*>>(0x5A6150, this);
}

void* audSoundHeap::GetBotttomOfTopStack()
{
    return stub<thiscall_t<void*, audSoundHeap*>>(0x5A6130, this);
}

class audSoundBuffer* audSoundHeap::GetSoundBufferList()
{
    return stub<thiscall_t<class audSoundBuffer*, audSoundHeap*>>(0x5A6110, this);
}

void* audSoundHeap::GetTop()
{
    return stub<thiscall_t<void*, audSoundHeap*>>(0x5A6120, this);
}

void* audSoundHeap::GetTopOfBottomStack()
{
    return stub<thiscall_t<void*, audSoundHeap*>>(0x5A6140, this);
}

bool audSoundHeap::ReleaseBuffer(class audSoundBuffer* arg1)
{
    return stub<thiscall_t<bool, audSoundHeap*, class audSoundBuffer*>>(0x5A6010, this, arg1);
}

class audSoundBuffer* audSoundHeap::ReserveBuffer(i32 arg1)
{
    return stub<thiscall_t<class audSoundBuffer*, audSoundHeap*, i32>>(0x5A5F90, this, arg1);
}

bool audSoundHeap::SetBottomOfTopStack(void* arg1)
{
    return stub<thiscall_t<bool, audSoundHeap*, void*>>(0x5A6090, this, arg1);
}

bool audSoundHeap::SetTopOfBottomStack(void* arg1)
{
    return stub<thiscall_t<bool, audSoundHeap*, void*>>(0x5A60D0, this, arg1);
}

define_dummy_symbol(aud_soundheap);
