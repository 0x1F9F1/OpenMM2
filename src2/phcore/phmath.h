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

#pragma once

/*
    phcore:phmath

    0x494DE0 | void __cdecl AngleToMatrix(class Vector3 const &,class Matrix34 *) | ?AngleToMatrix@@YAXABVVector3@@PAVMatrix34@@@Z
    0x494EE0 | void __cdecl QuaternionToMatrix(class Quaternion const &,class Matrix34 *) | ?QuaternionToMatrix@@YAXABVQuaternion@@PAVMatrix34@@@Z
    0x494FB0 | class Matrix34 __cdecl CreateRotatedMatrix(class Vector3 const &,class Vector3 const &) | ?CreateRotatedMatrix@@YA?AVMatrix34@@ABVVector3@@0@Z
    0x495060 | void __cdecl RotateMatrix(class Matrix34 *,class Vector3 const &) | ?RotateMatrix@@YAXPAVMatrix34@@ABVVector3@@@Z
    0x4950E0 | void __cdecl ReOrderVerts(class Vector3 *,float *) | ?ReOrderVerts@@YAXPAVVector3@@PAM@Z
    0x495170 | bool __cdecl VertOrderIsOK(class Vector3 const *) | ?VertOrderIsOK@@YA_NPBVVector3@@@Z
    0x495220 | float __cdecl CubeRoot(float) | ?CubeRoot@@YAMM@Z
    0x495270 | float __cdecl ArcTangent(float,float) | ?ArcTangent@@YAMMM@Z
    0x4952D0 | int __cdecl RealQuadratic(float,float,float *,float *,float) | ?RealQuadratic@@YAHMMPAM0M@Z
    0x495350 | int __cdecl RealCubic(float,float,float,float *,float *,float *,float) | ?RealCubic@@YAHMMMPAM00M@Z
    0x495520 | int __cdecl RealQuartic(float,float,float,float,float *,float *,float *,float *,float) | ?RealQuartic@@YAHMMMMPAM000M@Z
    0x495A40 | int __cdecl FindTValuesLineToCircle(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float,float *,class Vector3 *,float *,float *,class Vector3 *,float *) | ?FindTValuesLineToCircle@@YAHABVVector3@@000MPAMPAV1@1121@Z
    0x495D60 | float __cdecl FindHomingAccel(float,float,float,float,float) | ?FindHomingAccel@@YAMMMMMM@Z
    0x495DE0 | class Vector3 __cdecl FindHomingAccel3D(float,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?FindHomingAccel3D@@YA?AVVector3@@MABV1@000@Z
    0x495E80 | class Vector3 __cdecl FindHomingAngAccel(class Vector3 const &,class Vector3 const &,float,float) | ?FindHomingAngAccel@@YA?AVVector3@@ABV1@0MM@Z
    0x495FF0 | class Vector3 __cdecl FindHomingAngAccel3D(float,float,class Matrix34 const &,class Vector3 const &,class Matrix34 const &,class Vector3 const &) | ?FindHomingAngAccel3D@@YA?AVVector3@@MMABVMatrix34@@ABV1@01@Z
    0x496230 | public: void __thiscall Matrix33::Set(class Matrix33 const &) | ?Set@Matrix33@@QAEXABV1@@Z
    0x496270 | public: void __thiscall Matrix33::Add(class Matrix33 const &) | ?Add@Matrix33@@QAEXABV1@@Z
    0x4962D0 | public: void __thiscall Matrix33::Add(class Matrix33 const &,class Matrix33 const &) | ?Add@Matrix33@@QAEXABV1@0@Z
    0x496330 | public: void __thiscall Matrix33::Subtract(class Matrix33 const &) | ?Subtract@Matrix33@@QAEXABV1@@Z
    0x496390 | public: void __thiscall Matrix33::Subtract(class Matrix33 const &,class Matrix33 const &) | ?Subtract@Matrix33@@QAEXABV1@0@Z
    0x4963F0 | public: bool __thiscall Matrix33::IsZero(void) const | ?IsZero@Matrix33@@QBE_NXZ
    0x496490 | public: void __thiscall Matrix33::Dot(class Matrix33 const &) | ?Dot@Matrix33@@QAEXABV1@@Z
    0x4965B0 | public: void __thiscall Matrix33::Dot(class Matrix33 const &,class Matrix33 const &) | ?Dot@Matrix33@@QAEXABV1@0@Z
    0x4966A0 | public: void __thiscall Matrix33::DotCrossProdMtx(class Vector3 const &) | ?DotCrossProdMtx@Matrix33@@QAEXABVVector3@@@Z
    0x496750 | public: void __thiscall Matrix33::CrossProduct(class Vector3 const &) | ?CrossProduct@Matrix33@@QAEXABVVector3@@@Z
    0x496790 | public: void __thiscall Matrix33::Diagonal(float) | ?Diagonal@Matrix33@@QAEXM@Z
    0x4967C0 | public: void __thiscall Matrix33::Diagonal(class Vector3 const &) | ?Diagonal@Matrix33@@QAEXABVVector3@@@Z
    0x4967F0 | public: void __thiscall Matrix33::Negate(void) | ?Negate@Matrix33@@QAEXXZ
    0x496840 | public: void __thiscall Matrix33::Transpose(void) | ?Transpose@Matrix33@@QAEXXZ
    0x496870 | public: void __thiscall Matrix33::Transpose(class Matrix33 const &) | ?Transpose@Matrix33@@QAEXABV1@@Z
    0x4968B0 | public: void __thiscall Matrix33::Inverse(void) | ?Inverse@Matrix33@@QAEXXZ
    0x4969D0 | public: void __thiscall Matrix33::Inverse(class Matrix33 const &) | ?Inverse@Matrix33@@QAEXABV1@@Z
    0x496A00 | public: void __thiscall Matrix66::Set(class Matrix66 const &) | ?Set@Matrix66@@QAEXABV1@@Z
    0x496A20 | public: void __thiscall Matrix66::Set(class Matrix33 const &,class Matrix33 const &,class Matrix33 const &,class Matrix33 const &) | ?Set@Matrix66@@QAEXABVMatrix33@@000@Z
    0x496A60 | public: void __thiscall Matrix66::Add(class Matrix66 const &) | ?Add@Matrix66@@QAEXABV1@@Z
    0x496AA0 | public: void __thiscall Matrix66::Add(class Matrix66 const &,class Matrix66 const &) | ?Add@Matrix66@@QAEXABV1@0@Z
    0x496AF0 | public: void __thiscall Matrix66::Subtract(class Matrix66 const &) | ?Subtract@Matrix66@@QAEXABV1@@Z
    0x496B30 | public: void __thiscall Matrix66::Subtract(class Matrix66 const &,class Matrix66 const &) | ?Subtract@Matrix66@@QAEXABV1@0@Z
    0x496B80 | public: void __thiscall Matrix66::Dot(class Matrix66 const &) | ?Dot@Matrix66@@QAEXABV1@@Z
    0x496C70 | public: void __thiscall Matrix66::Transpose(void) | ?Transpose@Matrix66@@QAEXXZ
    0x496CC0 | public: void __thiscall Matrix66::Transpose(class Matrix66 const &) | ?Transpose@Matrix66@@QAEXABV1@@Z
    0x496D00 | public: void __thiscall Matrix66::Inverse(void) | ?Inverse@Matrix66@@QAEXXZ
    0x496D30 | public: void __thiscall Matrix66::Inverse(class Matrix66 const &) | ?Inverse@Matrix66@@QAEXABV1@@Z
*/

// 0x494DE0 | ?AngleToMatrix@@YAXABVVector3@@PAVMatrix34@@@Z
void AngleToMatrix(class Vector3 const& arg1, class Matrix34* arg2);

// 0x495270 | ?ArcTangent@@YAMMM@Z
f32 ArcTangent(f32 arg1, f32 arg2);

// 0x494FB0 | ?CreateRotatedMatrix@@YA?AVMatrix34@@ABVVector3@@0@Z
class Matrix34 CreateRotatedMatrix(class Vector3 const& arg1, class Vector3 const& arg2);

// 0x495220 | ?CubeRoot@@YAMM@Z
f32 CubeRoot(f32 arg1);

// 0x495D60 | ?FindHomingAccel@@YAMMMMMM@Z
f32 FindHomingAccel(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

// 0x495DE0 | ?FindHomingAccel3D@@YA?AVVector3@@MABV1@000@Z
class Vector3 FindHomingAccel3D(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5);

// 0x495E80 | ?FindHomingAngAccel@@YA?AVVector3@@ABV1@0MM@Z
class Vector3 FindHomingAngAccel(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4);

// 0x495FF0 | ?FindHomingAngAccel3D@@YA?AVVector3@@MMABVMatrix34@@ABV1@01@Z
class Vector3 FindHomingAngAccel3D(f32 arg1, f32 arg2, class Matrix34 const& arg3, class Vector3 const& arg4,
    class Matrix34 const& arg5, class Vector3 const& arg6);

// 0x495A40 | ?FindTValuesLineToCircle@@YAHABVVector3@@000MPAMPAV1@1121@Z
i32 FindTValuesLineToCircle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, f32* arg6, class Vector3* arg7, f32* arg8, f32* arg9, class Vector3* arg10,
    f32* arg11);

// 0x494EE0 | ?QuaternionToMatrix@@YAXABVQuaternion@@PAVMatrix34@@@Z
void QuaternionToMatrix(class Quaternion const& arg1, class Matrix34* arg2);

// 0x4950E0 | ?ReOrderVerts@@YAXPAVVector3@@PAM@Z
void ReOrderVerts(class Vector3* arg1, f32* arg2);

// 0x495350 | ?RealCubic@@YAHMMMPAM00M@Z
i32 RealCubic(f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6, f32 arg7);

// 0x4952D0 | ?RealQuadratic@@YAHMMPAM0M@Z
i32 RealQuadratic(f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32 arg5);

// 0x495520 | ?RealQuartic@@YAHMMMMPAM000M@Z
i32 RealQuartic(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5, f32* arg6, f32* arg7, f32* arg8, f32 arg9);

// 0x495060 | ?RotateMatrix@@YAXPAVMatrix34@@ABVVector3@@@Z
void RotateMatrix(class Matrix34* arg1, class Vector3 const& arg2);

// 0x495170 | ?VertOrderIsOK@@YA_NPBVVector3@@@Z
bool VertOrderIsOK(class Vector3 const* arg1);

class Matrix33
{
public:
    // 0x496270 | ?Add@Matrix33@@QAEXABV1@@Z
    void Add(class Matrix33 const& arg1);

    // 0x4962D0 | ?Add@Matrix33@@QAEXABV1@0@Z
    void Add(class Matrix33 const& arg1, class Matrix33 const& arg2);

    // 0x496750 | ?CrossProduct@Matrix33@@QAEXABVVector3@@@Z
    void CrossProduct(class Vector3 const& arg1);

    // 0x4967C0 | ?Diagonal@Matrix33@@QAEXABVVector3@@@Z
    void Diagonal(class Vector3 const& arg1);

    // 0x496790 | ?Diagonal@Matrix33@@QAEXM@Z
    void Diagonal(f32 arg1);

    // 0x496490 | ?Dot@Matrix33@@QAEXABV1@@Z
    void Dot(class Matrix33 const& arg1);

    // 0x4965B0 | ?Dot@Matrix33@@QAEXABV1@0@Z
    void Dot(class Matrix33 const& arg1, class Matrix33 const& arg2);

    // 0x4966A0 | ?DotCrossProdMtx@Matrix33@@QAEXABVVector3@@@Z
    void DotCrossProdMtx(class Vector3 const& arg1);

    // 0x4968B0 | ?Inverse@Matrix33@@QAEXXZ
    void Inverse();

    // 0x4969D0 | ?Inverse@Matrix33@@QAEXABV1@@Z
    void Inverse(class Matrix33 const& arg1);

    // 0x4963F0 | ?IsZero@Matrix33@@QBE_NXZ
    bool IsZero();

    // 0x4967F0 | ?Negate@Matrix33@@QAEXXZ
    void Negate();

    // 0x496230 | ?Set@Matrix33@@QAEXABV1@@Z
    void Set(class Matrix33 const& arg1);

    // 0x496330 | ?Subtract@Matrix33@@QAEXABV1@@Z
    void Subtract(class Matrix33 const& arg1);

    // 0x496390 | ?Subtract@Matrix33@@QAEXABV1@0@Z
    void Subtract(class Matrix33 const& arg1, class Matrix33 const& arg2);

    // 0x496840 | ?Transpose@Matrix33@@QAEXXZ
    void Transpose();

    // 0x496870 | ?Transpose@Matrix33@@QAEXABV1@@Z
    void Transpose(class Matrix33 const& arg1);
};

check_size(Matrix33, 0x0);

class Matrix66
{
public:
    // 0x496A60 | ?Add@Matrix66@@QAEXABV1@@Z
    void Add(class Matrix66 const& arg1);

    // 0x496AA0 | ?Add@Matrix66@@QAEXABV1@0@Z
    void Add(class Matrix66 const& arg1, class Matrix66 const& arg2);

    // 0x496B80 | ?Dot@Matrix66@@QAEXABV1@@Z
    void Dot(class Matrix66 const& arg1);

    // 0x496D00 | ?Inverse@Matrix66@@QAEXXZ
    void Inverse();

    // 0x496D30 | ?Inverse@Matrix66@@QAEXABV1@@Z
    void Inverse(class Matrix66 const& arg1);

    // 0x496A00 | ?Set@Matrix66@@QAEXABV1@@Z
    void Set(class Matrix66 const& arg1);

    // 0x496A20 | ?Set@Matrix66@@QAEXABVMatrix33@@000@Z
    void Set(
        class Matrix33 const& arg1, class Matrix33 const& arg2, class Matrix33 const& arg3, class Matrix33 const& arg4);

    // 0x496AF0 | ?Subtract@Matrix66@@QAEXABV1@@Z
    void Subtract(class Matrix66 const& arg1);

    // 0x496B30 | ?Subtract@Matrix66@@QAEXABV1@0@Z
    void Subtract(class Matrix66 const& arg1, class Matrix66 const& arg2);

    // 0x496C70 | ?Transpose@Matrix66@@QAEXXZ
    void Transpose();

    // 0x496CC0 | ?Transpose@Matrix66@@QAEXABV1@@Z
    void Transpose(class Matrix66 const& arg1);
};

check_size(Matrix66, 0x0);
