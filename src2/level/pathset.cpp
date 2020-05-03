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

#include "pathset.h"

dgPath::dgPath(char const* arg1)
{
    unimplemented();
}

dgPath::~dgPath()
{
    unimplemented();
}

void dgPath::Enumerate(void (*arg1)(char const*, class Matrix34 const&, bool), f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, dgPath*, void (*)(char const*, class Matrix34 const&, bool), f32, f32>>(
        0x466D40, this, arg1, arg2, arg3);
}

void dgPath::SetName(char const* arg1)
{
    return stub<thiscall_t<void, dgPath*, char const*>>(0x466B80, this, arg1);
}

class dgPath* dgPath::Load(class Stream* arg1)
{
    return stub<cdecl_t<class dgPath*, class Stream*>>(0x466BD0, arg1);
}

dgPathSet::dgPathSet()
{
    unimplemented();
}

dgPathSet::~dgPathSet()
{
    unimplemented();
}

void dgPathSet::Kill()
{
    return stub<thiscall_t<void, dgPathSet*>>(0x4671C0, this);
}

bool dgPathSet::Load(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, dgPathSet*, char const*, char const*>>(0x467210, this, arg1, arg2);
}

define_dummy_symbol(level_pathset);
