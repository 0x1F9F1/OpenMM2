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

#include "matrix34.h"

void Matrix34::Add(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC000, this, arg1);
}

void Matrix34::Add(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC080, this, arg1, arg2);
}

void Matrix34::Add3x3(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC100, this, arg1);
}

void Matrix34::Add3x3(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC160, this, arg1, arg2);
}

void Matrix34::AddScaled(class Matrix34 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, f32>>(0x4BC380, this, arg1, arg2);
}

f32 Matrix34::Determinant3x3()
{
    return stub<thiscall_t<f32, Matrix34*>>(0x4BF010, this);
}

void Matrix34::Dot(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC400, this, arg1);
}

void Matrix34::Dot(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC580, this, arg1, arg2);
}

void Matrix34::Dot3x3(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC970, this, arg1);
}

void Matrix34::Dot3x3(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BCA90, this, arg1, arg2);
}

void Matrix34::Dot3x3CrossProdMtx(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BED30, this, arg1);
}

void Matrix34::Dot3x3CrossProdTranspose(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BEDE0, this, arg1);
}

void Matrix34::Dot3x3Transpose(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BCB80, this, arg1);
}

void Matrix34::Dot3x3Transpose(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BCC80, this, arg1, arg2);
}

void Matrix34::DotTranspose(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC6C0, this, arg1);
}

void Matrix34::DotTranspose(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC830, this, arg1, arg2);
}

void Matrix34::FastInverse()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BE8B0, this);
}

void Matrix34::FastInverse(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BE8E0, this, arg1);
}

void Matrix34::FromEulers(class Vector3 const& arg1, char* arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, char*>>(0x4BD710, this, arg1, arg2);
}

void Matrix34::FromEulersXYZ(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BD810, this, arg1);
}

void Matrix34::FromEulersXZY(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BD920, this, arg1);
}

void Matrix34::FromEulersYXZ(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BDA30, this, arg1);
}

void Matrix34::FromEulersYZX(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BDB50, this, arg1);
}

void Matrix34::FromEulersZXY(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BDC60, this, arg1);
}

void Matrix34::FromEulersZYX(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&>>(0x4BDD70, this, arg1);
}

void Matrix34::FromQuaternion(class Quaternion const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Quaternion const&>>(0x4BDE80, this, arg1);
}

class Vector3 Matrix34::GetEulers()
{
    return stub<thiscall_t<class Vector3, Matrix34*>>(0x4BD6C0, this);
}

class Vector3 Matrix34::GetEulers(char const* arg1)
{
    return stub<thiscall_t<class Vector3, Matrix34*, char const*>>(0x4BD480, this, arg1);
}

void Matrix34::GetLookAt(class Vector3* arg1, class Vector3* arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3*, class Vector3*, f32>>(0x4BECE0, this, arg1, arg2, arg3);
}

void Matrix34::GetPolar(class Vector4* arg1, class Vector3* arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, class Vector4*, class Vector3*, f32>>(0x4BECA0, this, arg1, arg2, arg3);
}

void Matrix34::Identity()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BBF20, this);
}

void Matrix34::Identity3x3()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BBF50, this);
}

void Matrix34::Interpolate(class Matrix34 const& arg1, class Matrix34 const& arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&, f32>>(
        0x4BF080, this, arg1, arg2, arg3);
}

void Matrix34::Inverse()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BE720, this);
}

void Matrix34::Inverse(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BE890, this, arg1);
}

void Matrix34::LookAt(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, class Vector3 const&>>(0x4BEB20, this, arg1, arg2);
}

void Matrix34::MakeRotate(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BCFA0, this, arg1, arg2);
}

void Matrix34::MakeRotateUnitAxis(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BD1C0, this, arg1, arg2);
}

void Matrix34::MakeRotateX(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BD100, this, arg1);
}

void Matrix34::MakeRotateY(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BD140, this, arg1);
}

void Matrix34::MakeRotateZ(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BD180, this, arg1);
}

void Matrix34::MakeScale(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BE6C0, this, arg1);
}

void Matrix34::MakeScale(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, f32, f32, f32>>(0x4BE6F0, this, arg1, arg2, arg3);
}

void Matrix34::Normalize()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BEE90, this);
}

void Matrix34::PolarView(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, Matrix34*, f32, f32, f32, f32>>(0x4BEC50, this, arg1, arg2, arg3, arg4);
}

void Matrix34::Print(char const* arg1)
{
    return stub<thiscall_t<void, Matrix34*, char const*>>(0x4BF150, this, arg1);
}

void Matrix34::Rotate(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BCD70, this, arg1, arg2);
}

void Matrix34::RotateFull(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BCE60, this, arg1, arg2);
}

void Matrix34::RotateFullUnitAxis(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BCF60, this, arg1, arg2);
}

void Matrix34::RotateFullX(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCEA0, this, arg1);
}

void Matrix34::RotateFullY(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCEE0, this, arg1);
}

void Matrix34::RotateFullZ(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCF20, this, arg1);
}

void Matrix34::RotateTo(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, class Vector3 const&>>(0x4BD290, this, arg1, arg2);
}

void Matrix34::RotateTo(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, class Vector3 const&, f32>>(
        0x4BD380, this, arg1, arg2, arg3);
}

void Matrix34::RotateUnitAxis(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, f32>>(0x4BCE30, this, arg1, arg2);
}

void Matrix34::RotateX(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCDA0, this, arg1);
}

void Matrix34::RotateY(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCDD0, this, arg1);
}

void Matrix34::RotateZ(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BCE00, this, arg1);
}

void Matrix34::Scale(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BE500, this, arg1);
}

void Matrix34::Scale(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, f32, f32, f32>>(0x4BE560, this, arg1, arg2, arg3);
}

void Matrix34::ScaleFull(f32 arg1)
{
    return stub<thiscall_t<void, Matrix34*, f32>>(0x4BE5C0, this, arg1);
}

void Matrix34::ScaleFull(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, f32, f32, f32>>(0x4BE640, this, arg1, arg2, arg3);
}

void Matrix34::Set(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BBFB0, this, arg1);
}

class Vector3 Matrix34::SolveSVD(class Vector3 const& arg1)
{
    return stub<thiscall_t<class Vector3, Matrix34*, class Vector3 const&>>(0x4BF1F0, this, arg1);
}

void Matrix34::Subtract(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC1C0, this, arg1);
}

void Matrix34::Subtract(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC240, this, arg1, arg2);
}

void Matrix34::Subtract3x3(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BC2C0, this, arg1);
}

void Matrix34::Subtract3x3(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&, class Matrix34 const&>>(0x4BC320, this, arg1, arg2);
}

void Matrix34::ToEulers(class Vector3& arg1, char* arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&, char*>>(0x4BDF40, this, arg1, arg2);
}

void Matrix34::ToEulersXYZ(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE040, this, arg1);
}

void Matrix34::ToEulersXZY(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE110, this, arg1);
}

void Matrix34::ToEulersYXZ(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE1D0, this, arg1);
}

void Matrix34::ToEulersYZX(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE2A0, this, arg1);
}

void Matrix34::ToEulersZXY(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE360, this, arg1);
}

void Matrix34::ToEulersZYX(class Vector3& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3&>>(0x4BE430, this, arg1);
}

void Matrix34::Transform(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const&, class Vector3&>>(0x46EDA0, this, arg1, arg2);
}

void Matrix34::Transform4(class Vector3 const* arg1, class Vector4* arg2, i32 arg3)
{
    return stub<thiscall_t<void, Matrix34*, class Vector3 const*, class Vector4*, i32>>(
        0x4BFD60, this, arg1, arg2, arg3);
}

void Matrix34::Transpose()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BE990, this);
}

void Matrix34::Transpose(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BE9C0, this, arg1);
}

void Matrix34::Transpose3x4()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BEA00, this);
}

void Matrix34::Transpose3x4(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, Matrix34*, class Matrix34 const&>>(0x4BEA80, this, arg1);
}

void Matrix34::Zero()
{
    return stub<thiscall_t<void, Matrix34*>>(0x4BBF80, this);
}

define_dummy_symbol(vector_matrix34);
