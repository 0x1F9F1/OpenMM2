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

#include "vector3.h"

Vector3::Vector3()
{
    unimplemented();
}

Vector3::Vector3(f32 arg1, f32 arg2, f32 arg3)
{
    unimplemented();
}

class Vector3 Vector3::operator%(class Vector3 const& arg1)
{
    return stub<thiscall_t<class Vector3, Vector3*, class Vector3 const&>>(0x541770, this, arg1);
}

void Vector3::operator+=(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x45CCD0, this, arg1);
}

class Vector3 Vector3::operator-(class Vector3 const& arg1)
{
    return stub<thiscall_t<class Vector3, Vector3*, class Vector3 const&>>(0x491860, this, arg1);
}

void Vector3::operator-=(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x45CD00, this, arg1);
}

class Vector3 Vector3::operator/(f32 arg1)
{
    return stub<thiscall_t<class Vector3, Vector3*, f32>>(0x4918A0, this, arg1);
}

void Vector3::Add(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x45CE00, this, arg1);
}

void Vector3::AddScaled(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, class Vector3 const&, f32>>(
        0x484420, this, arg1, arg2, arg3);
}

f32 Vector3::Angle(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, Vector3*, class Vector3 const&>>(0x4C0430, this, arg1);
}

bool Vector3::Approach(class Vector3 const& arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<bool, Vector3*, class Vector3 const&, f32, f32>>(0x4BFF20, this, arg1, arg2, arg3);
}

void Vector3::Cross(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x45CE80, this, arg1);
}

void Vector3::Cross(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, class Vector3 const&>>(0x4429C0, this, arg1, arg2);
}

f32 Vector3::Dist(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, Vector3*, class Vector3 const&>>(0x45CEC0, this, arg1);
}

f32 Vector3::Dot(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, Vector3*, class Vector3 const&>>(0x466470, this, arg1);
}

void Vector3::Dot(class Vector3 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, class Matrix34 const&>>(0x43BBB0, this, arg1, arg2);
}

void Vector3::Dot3x3(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Matrix34 const&>>(0x479560, this, arg1);
}

void Vector3::Dot3x3Transpose(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Matrix34 const&>>(0x4795C0, this, arg1);
}

void Vector3::Extend(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x4C05D0, this, arg1);
}

void Vector3::Extend(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, f32>>(0x4C0620, this, arg1, arg2);
}

f32 Vector3::FastAngle(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, Vector3*, class Vector3 const&>>(0x4C0500, this, arg1);
}

f32 Vector3::FlatDist(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, Vector3*, class Vector3 const&>>(0x45CF00, this, arg1);
}

void Vector3::GetPolar(class Vector3 const& arg1, class Vector4* arg2, class Vector3* arg3)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, class Vector4*, class Vector3*>>(
        0x4C0530, this, arg1, arg2, arg3);
}

void Vector3::GetVector2(i32 arg1, class Vector2& arg2)
{
    return stub<thiscall_t<void, Vector3*, i32, class Vector2&>>(0x4C00C0, this, arg1, arg2);
}

void Vector3::HSVtoRGB()
{
    return stub<thiscall_t<void, Vector3*>>(0x4C0270, this);
}

f32 Vector3::InvMag()
{
    return stub<thiscall_t<f32, Vector3*>>(0x45CDC0, this);
}

void Vector3::InvScale(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x595B70, this, arg1);
}

bool Vector3::IsEqual(class Vector3 const& arg1)
{
    return stub<thiscall_t<bool, Vector3*, class Vector3 const&>>(0x522B80, this, arg1);
}

void Vector3::Lerp(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, Vector3*, f32, class Vector3 const&, class Vector3 const&>>(
        0x494C00, this, arg1, arg2, arg3);
}

f32 Vector3::Mag()
{
    return stub<thiscall_t<f32, Vector3*>>(0x466490, this);
}

f32 Vector3::Mag2()
{
    return stub<thiscall_t<f32, Vector3*>>(0x46C990, this);
}

void Vector3::Negate(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x480AC0, this, arg1);
}

void Vector3::Normalize()
{
    return stub<thiscall_t<void, Vector3*>>(0x45CD60, this);
}

void Vector3::Print()
{
    return stub<thiscall_t<void, Vector3*>>(0x4BFEB0, this);
}

void Vector3::Print(char const* arg1)
{
    return stub<thiscall_t<void, Vector3*, char const*>>(0x4BFEE0, this, arg1);
}

void Vector3::RGBtoHSV()
{
    return stub<thiscall_t<void, Vector3*>>(0x4C0160, this);
}

void Vector3::RotateAboutAxis(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, Vector3*, f32, i32>>(0x4C0020, this, arg1, arg2);
}

void Vector3::RotateX(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x4C0390, this, arg1);
}

void Vector3::RotateY(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x4C03D0, this, arg1);
}

void Vector3::RotateZ(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x4C0400, this, arg1);
}

void Vector3::Scale(f32 arg1)
{
    return stub<thiscall_t<void, Vector3*, f32>>(0x42EB40, this, arg1);
}

void Vector3::Scale(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, f32>>(0x45CE40, this, arg1, arg2);
}

void Vector3::Set(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x480AA0, this, arg1);
}

void Vector3::Set(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, Vector3*, f32, f32, f32>>(0x45CCB0, this, arg1, arg2, arg3);
}

void Vector3::Subtract(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&>>(0x45CD30, this, arg1);
}

void Vector3::SubtractScaled(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Vector3*, class Vector3 const&, f32>>(0x474000, this, arg1, arg2);
}

define_dummy_symbol(vector_vector3);
