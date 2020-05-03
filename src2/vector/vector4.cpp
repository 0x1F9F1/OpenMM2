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

#include "vector4.h"

void Vector4::ComputePlane(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, Vector4*, class Vector3 const&, class Vector3 const&>>(0x4C53B0, this, arg1, arg2);
}

void Vector4::ComputePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, Vector4*, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4C52D0, this, arg1, arg2, arg3);
}

void Vector4::Cross(class Vector4 const& arg1, class Vector4 const& arg2)
{
    return stub<thiscall_t<void, Vector4*, class Vector4 const&, class Vector4 const&>>(0x494C90, this, arg1, arg2);
}

f32 Vector4::Dot(class Vector4 const& arg1)
{
    return stub<thiscall_t<f32, Vector4*, class Vector4 const&>>(0x43DDA0, this, arg1);
}

class Vector4& Vector4::Dot(class Vector4 const& arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<class Vector4&, Vector4*, class Vector4 const&, class Matrix44 const&>>(
        0x4C1170, this, arg1, arg2);
}

f32 Vector4::Dot3(class Vector4 const& arg1)
{
    return stub<thiscall_t<f32, Vector4*, class Vector4 const&>>(0x494C70, this, arg1);
}

class Vector4& Vector4::Dot3x3(class Vector4 const& arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<class Vector4&, Vector4*, class Vector4 const&, class Matrix44 const&>>(
        0x4C1200, this, arg1, arg2);
}

void Vector4::Max(class Vector4 const& arg1, class Vector4 const& arg2)
{
    return stub<thiscall_t<void, Vector4*, class Vector4 const&, class Vector4 const&>>(0x4C5460, this, arg1, arg2);
}

void Vector4::Min(class Vector4 const& arg1, class Vector4 const& arg2)
{
    return stub<thiscall_t<void, Vector4*, class Vector4 const&, class Vector4 const&>>(0x4C53F0, this, arg1, arg2);
}

i32 Vector4::Outcode()
{
    return stub<thiscall_t<i32, Vector4*>>(0x4C54D0, this);
}

void Vector4::Print()
{
    return stub<thiscall_t<void, Vector4*>>(0x4C5250, this);
}

void Vector4::Print(char const* arg1)
{
    return stub<thiscall_t<void, Vector4*, char const*>>(0x4C5290, this, arg1);
}

void Vector4::Set(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, Vector4*, f32, f32, f32, f32>>(0x43DD80, this, arg1, arg2, arg3, arg4);
}

void Vector4::Subtract(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, Vector4*, class Vector3 const&, class Vector3 const&>>(0x494C40, this, arg1, arg2);
}

define_dummy_symbol(vector_vector4);
