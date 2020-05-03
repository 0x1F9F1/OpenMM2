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

#include "stream.h"

bool audStream::CloseStream()
{
    return stub<thiscall_t<bool, audStream*>>(0x5A4E00, this);
}

class audStream* audStream::Create(class audObject* arg1)
{
    return stub<thiscall_t<class audStream*, audStream*, class audObject*>>(0x5A4C80, this, arg1);
}

void audStream::Destroy()
{
    return stub<thiscall_t<void, audStream*>>(0x5A4CD0, this);
}

i32 audStream::GetBufferSize()
{
    return stub<thiscall_t<i32, audStream*>>(0x5A4E80, this);
}

i32 audStream::GetCurrentCursor()
{
    return stub<thiscall_t<i32, audStream*>>(0x5A4E60, this);
}

void audStream::Init()
{
    return stub<thiscall_t<void, audStream*>>(0x5A4CC0, this);
}

bool audStream::IsFinished()
{
    return stub<thiscall_t<bool, audStream*>>(0x5A4EA0, this);
}

void audStream::SetBufferSize(i32 arg1)
{
    return stub<thiscall_t<void, audStream*, i32>>(0x5A4E70, this, arg1);
}

void audStream::SetFileInfo(void* arg1)
{
    return stub<thiscall_t<void, audStream*, void*>>(0x5A4E90, this, arg1);
}

void audStream::SetLooping(bool arg1)
{
    return stub<thiscall_t<void, audStream*, bool>>(0x5A4EC0, this, arg1);
}

void audStream::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, audStream*, f32>>(0x5A4EB0, this, arg1);
}

bool audStream::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audStream*, i32>>(0x5A4CF0, this, arg1);
}

define_dummy_symbol(aud_stream);
