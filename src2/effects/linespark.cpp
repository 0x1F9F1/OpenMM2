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

#include "linespark.h"

void asSparkLut::Init(char* arg1)
{
    return stub<thiscall_t<void, asSparkLut*, char*>>(0x4604B0, this, arg1);
}

class asSparkLut* asSparkLut::Get(char* arg1)
{
    return stub<cdecl_t<class asSparkLut*, char*>>(0x460470, arg1);
}

asLineSparks::asLineSparks()
{
    unimplemented();
}

asLineSparks::~asLineSparks()
{
    unimplemented();
}

void asLineSparks::Draw()
{
    return stub<thiscall_t<void, asLineSparks*>>(0x460DE0, this);
}

void asLineSparks::Init(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, asLineSparks*, i32, char*>>(0x460740, this, arg1, arg2);
}

void asLineSparks::RadialBlast(i32 arg1, class Vector3& arg2, class Vector3& arg3)
{
    return stub<thiscall_t<void, asLineSparks*, i32, class Vector3&, class Vector3&>>(0x460830, this, arg1, arg2, arg3);
}

void asLineSparks::Update()
{
    return stub<thiscall_t<void, asLineSparks*>>(0x460BE0, this);
}

void asLineSparks::Update(f32 arg1)
{
    return stub<thiscall_t<void, asLineSparks*, f32>>(0x460C20, this, arg1);
}

define_dummy_symbol(effects_linespark);
