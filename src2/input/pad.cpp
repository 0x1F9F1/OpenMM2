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

#include "pad.h"

ioPad::ioPad()
{
    unimplemented();
}

ioPad::~ioPad()
{
    unimplemented();
}

void ioPad::BeginAll()
{
    return stub<cdecl_t<void>>(0x4BB760);
}

void ioPad::EndAll()
{
    return stub<cdecl_t<void>>(0x4BB780);
}

void ioPad::UpdateAll()
{
    return stub<cdecl_t<void>>(0x4BB7A0);
}

void ioPad::Begin(i32 arg1)
{
    return stub<thiscall_t<void, ioPad*, i32>>(0x4BB4E0, this, arg1);
}

void ioPad::End()
{
    return stub<thiscall_t<void, ioPad*>>(0x4BB520, this);
}

void ioPad::Update()
{
    return stub<thiscall_t<void, ioPad*>>(0x4BB530, this);
}

f32 AddDeadZone(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x4BB710, arg1, arg2);
}

define_dummy_symbol(input_pad);
