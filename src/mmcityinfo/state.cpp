/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#include "state.h"

const char* dgGameModeNames[7] =
    {
        "roam", "race%d", "multicop", "circuit%d", "blitz%d", "croam", "crash%d"};

mmStatePack::mmStatePack()
{
    // Uninitlaized data is fun.
}

mmStatePack::~mmStatePack()
{
}

void mmStatePack::SetDefaults(const char* level, const char* car)
{
    stub<member_func_t<void, mmStatePack, const char*, const char*>>(0x523310, this, level, car);

    strcpy_s(AudioDeviceName, "Primary Sound Driver");
}

bool mmStatePack::ParseStateArgs(void)
{
    return false;
}

NetStartArray::NetStartArray()
{
    Clear();
}

NetStartArray::~NetStartArray()
{
    Clear();
}

void NetStartArray::Clear()
{
    memset(Slots, 0, sizeof(Slots));
}
