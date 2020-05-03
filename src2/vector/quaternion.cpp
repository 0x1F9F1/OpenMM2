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

#include "quaternion.h"

void Quaternion::FromMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Quaternion*, class Matrix34 const&>>(0x4C4E60, this, arg1);
}

void Quaternion::Multiply(class Quaternion const& arg1)
{
    return stub<thiscall_t<void, Quaternion*, class Quaternion const&>>(0x4C50B0, this, arg1);
}

void Quaternion::Multiply(class Quaternion const& arg1, class Quaternion const& arg2)
{
    return stub<thiscall_t<void, Quaternion*, class Quaternion const&, class Quaternion const&>>(
        0x4C5020, this, arg1, arg2);
}

void Quaternion::MultiplyInverse(class Quaternion const& arg1)
{
    return stub<thiscall_t<void, Quaternion*, class Quaternion const&>>(0x4C5150, this, arg1);
}

void Quaternion::Print()
{
    return stub<thiscall_t<void, Quaternion*>>(0x4C4BE0, this);
}

void Quaternion::Print(char const* arg1)
{
    return stub<thiscall_t<void, Quaternion*, char const*>>(0x4C4C20, this, arg1);
}

void Quaternion::Slerp(f32 arg1, class Quaternion const& arg2, class Quaternion const& arg3)
{
    return stub<thiscall_t<void, Quaternion*, f32, class Quaternion const&, class Quaternion const&>>(
        0x4C4C60, this, arg1, arg2, arg3);
}

define_dummy_symbol(vector_quaternion);
