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

#include "fixed.h"

lvlFixedAny::lvlFixedAny()
{
    unimplemented();
}

void lvlFixedAny::Draw(i32 arg1)
{
    return stub<thiscall_t<void, lvlFixedAny*, i32>>(0x467420, this, arg1);
}

void lvlFixedAny::DrawReflectedParts(i32 arg1)
{
    return stub<thiscall_t<void, lvlFixedAny*, i32>>(0x467320, this, arg1);
}

void lvlFixedAny::DrawShadow()
{
    return stub<thiscall_t<void, lvlFixedAny*>>(0x4677E0, this);
}

void lvlFixedAny::DrawShadowMap()
{
    return stub<thiscall_t<void, lvlFixedAny*>>(0x467740, this);
}

i32 lvlFixedAny::Init(char const* arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlFixedAny*, char const*, class Matrix34 const&, i32>>(
        0x467580, this, arg1, arg2, arg3);
}

void lvlFixedAny::SetVariant(i32 arg1)
{
    return stub<thiscall_t<void, lvlFixedAny*, i32>>(0x467540, this, arg1);
}

lvlFixedRotY::lvlFixedRotY()
{
    unimplemented();
}

class Matrix34 const& lvlFixedRotY::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, lvlFixedRotY*, class Matrix34&>>(0x4679A0, this, arg1);
}

class Vector3 const& lvlFixedRotY::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, lvlFixedRotY*>>(0x467940, this);
}

i32 lvlFixedRotY::IsVisible(class gfxViewport const& arg1)
{
    return stub<thiscall_t<i32, lvlFixedRotY*, class gfxViewport const&>>(0x467950, this, arg1);
}

void lvlFixedRotY::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, lvlFixedRotY*, class Matrix34 const&>>(0x4679F0, this, arg1);
}

u32 lvlFixedRotY::SizeOf()
{
    return stub<thiscall_t<u32, lvlFixedRotY*>>(0x467930, this);
}

lvlFixedMatrix::lvlFixedMatrix()
{
    unimplemented();
}

class Matrix34 const& lvlFixedMatrix::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, lvlFixedMatrix*, class Matrix34&>>(0x467AB0, this, arg1);
}

class Vector3 const& lvlFixedMatrix::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, lvlFixedMatrix*>>(0x467A50, this);
}

i32 lvlFixedMatrix::IsVisible(class gfxViewport const& arg1)
{
    return stub<thiscall_t<i32, lvlFixedMatrix*, class gfxViewport const&>>(0x467A60, this, arg1);
}

void lvlFixedMatrix::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, lvlFixedMatrix*, class Matrix34 const&>>(0x467AC0, this, arg1);
}

u32 lvlFixedMatrix::SizeOf()
{
    return stub<thiscall_t<u32, lvlFixedMatrix*>>(0x467A40, this);
}

define_dummy_symbol(level_fixed);
