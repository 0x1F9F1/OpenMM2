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

#include "matrix44.h"

void Matrix44::Add(class Matrix44 const& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&>>(0x4C0A30, this, arg1);
}

void Matrix44::Add(class Matrix44 const& arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&, class Matrix44 const&>>(0x4C0AD0, this, arg1, arg2);
}

void Matrix44::AddScaled(class Matrix44 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&, f32>>(0x4C0CB0, this, arg1, arg2);
}

void Matrix44::Bezier()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C0820, this);
}

void Matrix44::CatmullRom()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C08C0, this);
}

f32 Matrix44::Determinant()
{
    return stub<thiscall_t<f32, Matrix44*>>(0x4C1320, this);
}

class Matrix44& Matrix44::Dot(class Matrix44 const& arg1)
{
    return stub<thiscall_t<class Matrix44&, Matrix44*, class Matrix44 const&>>(0x4C0D50, this, arg1);
}

class Matrix44& Matrix44::Dot(class Matrix44 const& arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<class Matrix44&, Matrix44*, class Matrix44 const&, class Matrix44 const&>>(
        0x4C0FC0, this, arg1, arg2);
}

void Matrix44::FastInverse(class Matrix44 const& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&>>(0x4C1260, this, arg1);
}

void Matrix44::FromMatrix34(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix34 const&>>(0x4C0970, this, arg1);
}

void Matrix44::Hermite()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C0870, this);
}

void Matrix44::Identity()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C0730, this);
}

void Matrix44::InvertTo(class Matrix44& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44&>>(0x4C1510, this, arg1);
}

class Matrix44& Matrix44::MakeRotX(f32 arg1)
{
    return stub<thiscall_t<class Matrix44&, Matrix44*, f32>>(0x4C1C00, this, arg1);
}

class Matrix44& Matrix44::MakeRotY(f32 arg1)
{
    return stub<thiscall_t<class Matrix44&, Matrix44*, f32>>(0x4C1C50, this, arg1);
}

class Matrix44& Matrix44::MakeRotZ(f32 arg1)
{
    return stub<thiscall_t<class Matrix44&, Matrix44*, f32>>(0x4C1CA0, this, arg1);
}

void Matrix44::Print(char const* arg1)
{
    return stub<thiscall_t<void, Matrix44*, char const*>>(0x4C1CF0, this, arg1);
}

void Matrix44::Set(class Matrix44 const& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&>>(0x4C07B0, this, arg1);
}

void Matrix44::Subtract(class Matrix44 const& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&>>(0x4C0B70, this, arg1);
}

void Matrix44::Subtract(class Matrix44 const& arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix44 const&, class Matrix44 const&>>(0x4C0C10, this, arg1, arg2);
}

void Matrix44::ToMatrix34(class Matrix34& arg1)
{
    return stub<thiscall_t<void, Matrix44*, class Matrix34&>>(0x4C09E0, this, arg1);
}

void Matrix44::Transform4(class Vector3 const* arg1, class Vector4* arg2, i32 arg3)
{
    return stub<thiscall_t<void, Matrix44*, class Vector3 const*, class Vector4*, i32>>(
        0x4C1D60, this, arg1, arg2, arg3);
}

void Matrix44::Transpose()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C0920, this);
}

void Matrix44::Zero()
{
    return stub<thiscall_t<void, Matrix44*>>(0x4C0770, this);
}

void __vectorDotMatrix(class Vector4& arg1, class Vector4 const& arg2, class Matrix44 const& arg3)
{
    return stub<cdecl_t<void, class Vector4&, class Vector4 const&, class Matrix44 const&>>(0x4C1DF0, arg1, arg2, arg3);
}

define_dummy_symbol(vector_matrix44);
