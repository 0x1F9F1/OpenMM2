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

#include "sky.h"

lvlSky::lvlSky()
{
    unimplemented();
}

lvlSky::~lvlSky()
{
    unimplemented();
}

void lvlSky::AutoInit(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<void, lvlSky*, char const*, char const*, i32>>(0x464CB0, this, arg1, arg2, arg3);
}

void lvlSky::Init(char const* arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, lvlSky*, char const*, f32, f32, f32, i32>>(
        0x464E90, this, arg1, arg2, arg3, arg4, arg5);
}

void lvlSky::SetupFog(f32 arg1)
{
    return stub<thiscall_t<void, lvlSky*, f32>>(0x465270, this, arg1);
}

void lvlSky::Reset()
{
    return stub<thiscall_t<void, lvlSky*>>(0x464C90, this);
}

void lvlSky::Update()
{
    return stub<thiscall_t<void, lvlSky*>>(0x464F90, this);
}

void lvlSky::Draw()
{
    return stub<thiscall_t<void, lvlSky*>>(0x464FB0, this);
}

void lvlSky::DrawWithNoZState()
{
    return stub<thiscall_t<void, lvlSky*>>(0x4650B0, this);
}

void lvlSky::DrawHat()
{
    return stub<thiscall_t<void, lvlSky*>>(0x465140, this);
}

define_dummy_symbol(level_sky);
