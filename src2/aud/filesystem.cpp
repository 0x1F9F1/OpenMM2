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

#include "filesystem.h"

class audFileSystem* audFileSystem::Create(class audManager* arg1)
{
    return stub<thiscall_t<class audFileSystem*, audFileSystem*, class audManager*>>(0x5A6930, this, arg1);
}

void audFileSystem::Destroy()
{
    return stub<thiscall_t<void, audFileSystem*>>(0x5A6980, this);
}

void audFileSystem::FileClose()
{
    return stub<thiscall_t<void, audFileSystem*>>(0x5A6B20, this);
}

bool audFileSystem::FileOpenRead(char* arg1, char* arg2, bool arg3)
{
    return stub<thiscall_t<bool, audFileSystem*, char*, char*, bool>>(0x5A69A0, this, arg1, arg2, arg3);
}

i32 audFileSystem::FileRead(void* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, audFileSystem*, void*, i32>>(0x5A6BB0, this, arg1, arg2);
}

void audFileSystem::FileSeek(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, audFileSystem*, i32, i32>>(0x5A6B40, this, arg1, arg2);
}

void* audFileSystem::GetFileHandle()
{
    return stub<thiscall_t<void*, audFileSystem*>>(0x5A6B10, this);
}

i32 audFileSystem::GetFileSize()
{
    return stub<thiscall_t<i32, audFileSystem*>>(0x5A6B90, this);
}

char* audFileSystem::GetName()
{
    return stub<thiscall_t<char*, audFileSystem*>>(0x5A6C00, this);
}

char* audFileSystem::GetPath()
{
    return stub<thiscall_t<char*, audFileSystem*>>(0x5A6C10, this);
}

void audFileSystem::Init()
{
    return stub<thiscall_t<void, audFileSystem*>>(0x5A6960, this);
}

bool audFileSystem::IsOpen()
{
    return stub<thiscall_t<bool, audFileSystem*>>(0x5A6BE0, this);
}

bool audFileSystem::IsPersistent()
{
    return stub<thiscall_t<bool, audFileSystem*>>(0x5A6BF0, this);
}

define_dummy_symbol(aud_filesystem);
