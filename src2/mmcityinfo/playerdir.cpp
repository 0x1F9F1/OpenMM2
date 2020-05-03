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

#include "playerdir.h"

mmPlayerDirectory::mmPlayerDirectory()
{
    unimplemented();
}

mmPlayerDirectory::~mmPlayerDirectory()
{
    unimplemented();
}

i32 mmPlayerDirectory::AddPlayer(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526700, this, arg1);
}

i32 mmPlayerDirectory::FindPlayer(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526930, this, arg1);
}

char* mmPlayerDirectory::GetFileName(char* arg1)
{
    return stub<thiscall_t<char*, mmPlayerDirectory*, char*>>(0x5269A0, this, arg1);
}

char* mmPlayerDirectory::GetFileName(i32 arg1)
{
    return stub<thiscall_t<char*, mmPlayerDirectory*, i32>>(0x526AC0, this, arg1);
}

char* mmPlayerDirectory::GetLastPlayer()
{
    return stub<thiscall_t<char*, mmPlayerDirectory*>>(0x5266D0, this);
}

i32 mmPlayerDirectory::GetNumPlayers()
{
    return stub<thiscall_t<i32, mmPlayerDirectory*>>(0x5266C0, this);
}

char* mmPlayerDirectory::GetPlayer(i32 arg1)
{
    return stub<thiscall_t<char*, mmPlayerDirectory*, i32>>(0x526690, this, arg1);
}

char* mmPlayerDirectory::GetPlayerName(char* arg1)
{
    return stub<thiscall_t<char*, mmPlayerDirectory*, char*>>(0x526A30, this, arg1);
}

i32 mmPlayerDirectory::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526CA0, this, arg1);
}

i32 mmPlayerDirectory::LoadBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526E70, this, arg1);
}

void mmPlayerDirectory::NewDirectory(i32 arg1)
{
    return stub<thiscall_t<void, mmPlayerDirectory*, i32>>(0x5265D0, this, arg1);
}

i32 mmPlayerDirectory::RemovePlayer(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526BB0, this, arg1);
}

i32 mmPlayerDirectory::Save(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*, i32>>(0x526CD0, this, arg1, arg2);
}

i32 mmPlayerDirectory::SaveBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerDirectory*, char*>>(0x526D70, this, arg1);
}

void mmPlayerDirectory::SetLastPlayer(char* arg1)
{
    return stub<thiscall_t<void, mmPlayerDirectory*, char*>>(0x526640, this, arg1);
}

void mmPlayerDirectory::SetPlayer(i32 arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<void, mmPlayerDirectory*, i32, char*, char*>>(0x526610, this, arg1, arg2, arg3);
}

void mmPlayerDirectory::CreatePlayer(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, mmPlayerDirectory*, char*, char*>>(0x526830, this, arg1, arg2);
}

char* mmPlayerDirectory::MakeFileName()
{
    return stub<thiscall_t<char*, mmPlayerDirectory*>>(0x526AF0, this);
}

define_dummy_symbol(mmcityinfo_playerdir);
