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

#include "landmark.h"

i32 lvlLandmark::Init(char const* arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlLandmark*, char const*, class Matrix34 const&, i32>>(
        0x468010, this, arg1, arg2, arg3);
}

bool lvlLandmark::IsCollidable()
{
    return stub<thiscall_t<bool, lvlLandmark*>>(0x465EB0, this);
}

bool lvlLandmark::IsLandmark()
{
    return stub<thiscall_t<bool, lvlLandmark*>>(0x467FF0, this);
}

i32 lvlLandmark::IsVisible(class gfxViewport const& arg1)
{
    return stub<thiscall_t<i32, lvlLandmark*, class gfxViewport const&>>(0x468030, this, arg1);
}

u32 lvlLandmark::SizeOf()
{
    return stub<thiscall_t<u32, lvlLandmark*>>(0x468000, this);
}

define_dummy_symbol(level_landmark);
