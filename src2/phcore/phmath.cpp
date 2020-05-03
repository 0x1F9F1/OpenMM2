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

#include "phmath.h"

void AngleToMatrix(class Vector3 const& arg1, class Matrix34* arg2)
{
    return stub<cdecl_t<void, class Vector3 const&, class Matrix34*>>(0x494DE0, arg1, arg2);
}

f32 ArcTangent(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x495270, arg1, arg2);
}

class Matrix34 CreateRotatedMatrix(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<class Matrix34, class Vector3 const&, class Vector3 const&>>(0x494FB0, arg1, arg2);
}

f32 CubeRoot(f32 arg1)
{
    return stub<cdecl_t<f32, f32>>(0x495220, arg1);
}

f32 FindHomingAccel(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<cdecl_t<f32, f32, f32, f32, f32, f32>>(0x495D60, arg1, arg2, arg3, arg4, arg5);
}

class Vector3 FindHomingAccel3D(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5)
{
    return stub<cdecl_t<class Vector3, f32, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&>>(0x495DE0, arg1, arg2, arg3, arg4, arg5);
}

class Vector3 FindHomingAngAccel(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4)
{
    return stub<cdecl_t<class Vector3, class Vector3 const&, class Vector3 const&, f32, f32>>(
        0x495E80, arg1, arg2, arg3, arg4);
}

class Vector3 FindHomingAngAccel3D(f32 arg1, f32 arg2, class Matrix34 const& arg3, class Vector3 const& arg4,
    class Matrix34 const& arg5, class Vector3 const& arg6)
{
    return stub<cdecl_t<class Vector3, f32, f32, class Matrix34 const&, class Vector3 const&, class Matrix34 const&,
        class Vector3 const&>>(0x495FF0, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 FindTValuesLineToCircle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, f32* arg6, class Vector3* arg7, f32* arg8, f32* arg9, class Vector3* arg10,
    f32* arg11)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32, f32*, class Vector3*, f32*, f32*, class Vector3*, f32*>>(
        0x495A40, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

void QuaternionToMatrix(class Quaternion const& arg1, class Matrix34* arg2)
{
    return stub<cdecl_t<void, class Quaternion const&, class Matrix34*>>(0x494EE0, arg1, arg2);
}

void ReOrderVerts(class Vector3* arg1, f32* arg2)
{
    return stub<cdecl_t<void, class Vector3*, f32*>>(0x4950E0, arg1, arg2);
}

i32 RealCubic(f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6, f32 arg7)
{
    return stub<cdecl_t<i32, f32, f32, f32, f32*, f32*, f32*, f32>>(0x495350, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 RealQuadratic(f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32 arg5)
{
    return stub<cdecl_t<i32, f32, f32, f32*, f32*, f32>>(0x4952D0, arg1, arg2, arg3, arg4, arg5);
}

i32 RealQuartic(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5, f32* arg6, f32* arg7, f32* arg8, f32 arg9)
{
    return stub<cdecl_t<i32, f32, f32, f32, f32, f32*, f32*, f32*, f32*, f32>>(
        0x495520, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void RotateMatrix(class Matrix34* arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<void, class Matrix34*, class Vector3 const&>>(0x495060, arg1, arg2);
}

bool VertOrderIsOK(class Vector3 const* arg1)
{
    return stub<cdecl_t<bool, class Vector3 const*>>(0x495170, arg1);
}

void Matrix33::Add(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x496270, this, arg1);
}

void Matrix33::Add(class Matrix33 const& arg1, class Matrix33 const& arg2)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&, class Matrix33 const&>>(0x4962D0, this, arg1, arg2);
}

void Matrix33::CrossProduct(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Vector3 const&>>(0x496750, this, arg1);
}

void Matrix33::Diagonal(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Vector3 const&>>(0x4967C0, this, arg1);
}

void Matrix33::Diagonal(f32 arg1)
{
    return stub<thiscall_t<void, Matrix33*, f32>>(0x496790, this, arg1);
}

void Matrix33::Dot(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x496490, this, arg1);
}

void Matrix33::Dot(class Matrix33 const& arg1, class Matrix33 const& arg2)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&, class Matrix33 const&>>(0x4965B0, this, arg1, arg2);
}

void Matrix33::DotCrossProdMtx(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Vector3 const&>>(0x4966A0, this, arg1);
}

void Matrix33::Inverse()
{
    return stub<thiscall_t<void, Matrix33*>>(0x4968B0, this);
}

void Matrix33::Inverse(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x4969D0, this, arg1);
}

bool Matrix33::IsZero()
{
    return stub<thiscall_t<bool, Matrix33*>>(0x4963F0, this);
}

void Matrix33::Negate()
{
    return stub<thiscall_t<void, Matrix33*>>(0x4967F0, this);
}

void Matrix33::Set(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x496230, this, arg1);
}

void Matrix33::Subtract(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x496330, this, arg1);
}

void Matrix33::Subtract(class Matrix33 const& arg1, class Matrix33 const& arg2)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&, class Matrix33 const&>>(0x496390, this, arg1, arg2);
}

void Matrix33::Transpose()
{
    return stub<thiscall_t<void, Matrix33*>>(0x496840, this);
}

void Matrix33::Transpose(class Matrix33 const& arg1)
{
    return stub<thiscall_t<void, Matrix33*, class Matrix33 const&>>(0x496870, this, arg1);
}

void Matrix66::Add(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496A60, this, arg1);
}

void Matrix66::Add(class Matrix66 const& arg1, class Matrix66 const& arg2)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&, class Matrix66 const&>>(0x496AA0, this, arg1, arg2);
}

void Matrix66::Dot(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496B80, this, arg1);
}

void Matrix66::Inverse()
{
    return stub<thiscall_t<void, Matrix66*>>(0x496D00, this);
}

void Matrix66::Inverse(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496D30, this, arg1);
}

void Matrix66::Set(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496A00, this, arg1);
}

void Matrix66::Set(
    class Matrix33 const& arg1, class Matrix33 const& arg2, class Matrix33 const& arg3, class Matrix33 const& arg4)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix33 const&, class Matrix33 const&, class Matrix33 const&,
        class Matrix33 const&>>(0x496A20, this, arg1, arg2, arg3, arg4);
}

void Matrix66::Subtract(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496AF0, this, arg1);
}

void Matrix66::Subtract(class Matrix66 const& arg1, class Matrix66 const& arg2)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&, class Matrix66 const&>>(0x496B30, this, arg1, arg2);
}

void Matrix66::Transpose()
{
    return stub<thiscall_t<void, Matrix66*>>(0x496C70, this);
}

void Matrix66::Transpose(class Matrix66 const& arg1)
{
    return stub<thiscall_t<void, Matrix66*, class Matrix66 const&>>(0x496CC0, this, arg1);
}

define_dummy_symbol(phcore_phmath);
