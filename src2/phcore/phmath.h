/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
inline void AngleToMatrix(class Vector3 const& arg1, class Matrix34* arg2)
{
    return stub<cdecl_t<void, class Vector3 const&, class Matrix34*>>(0x494DE0, arg1, arg2);
}

// 0x494EE0 | ?QuaternionToMatrix@@YAXABVQuaternion@@PAVMatrix34@@@Z
inline void QuaternionToMatrix(class Quaternion const& arg1, class Matrix34* arg2)
{
    return stub<cdecl_t<void, class Quaternion const&, class Matrix34*>>(0x494EE0, arg1, arg2);
}

// 0x494FB0 | ?CreateRotatedMatrix@@YA?AVMatrix34@@ABVVector3@@0@Z
inline class Matrix34 CreateRotatedMatrix(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<class Matrix34, class Vector3 const&, class Vector3 const&>>(0x494FB0, arg1, arg2);
}

// 0x495060 | ?RotateMatrix@@YAXPAVMatrix34@@ABVVector3@@@Z
inline void RotateMatrix(class Matrix34* arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<void, class Matrix34*, class Vector3 const&>>(0x495060, arg1, arg2);
}

// 0x4950E0 | ?ReOrderVerts@@YAXPAVVector3@@PAM@Z
inline void ReOrderVerts(class Vector3* arg1, float* arg2)
{
    return stub<cdecl_t<void, class Vector3*, float*>>(0x4950E0, arg1, arg2);
}

// 0x495170 | ?VertOrderIsOK@@YA_NPBVVector3@@@Z
inline bool VertOrderIsOK(class Vector3 const* arg1)
{
    return stub<cdecl_t<bool, class Vector3 const*>>(0x495170, arg1);
}

// 0x495220 | ?CubeRoot@@YAMM@Z
inline float CubeRoot(float arg1)
{
    return stub<cdecl_t<float, float>>(0x495220, arg1);
}

// 0x495270 | ?ArcTangent@@YAMMM@Z
inline float ArcTangent(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x495270, arg1, arg2);
}

// 0x4952D0 | ?RealQuadratic@@YAHMMPAM0M@Z
inline int32_t RealQuadratic(float arg1, float arg2, float* arg3, float* arg4, float arg5)
{
    return stub<cdecl_t<int32_t, float, float, float*, float*, float>>(0x4952D0, arg1, arg2, arg3, arg4, arg5);
}

// 0x495350 | ?RealCubic@@YAHMMMPAM00M@Z
inline int32_t RealCubic(float arg1, float arg2, float arg3, float* arg4, float* arg5, float* arg6, float arg7)
{
    return stub<cdecl_t<int32_t, float, float, float, float*, float*, float*, float>>(
        0x495350, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x495520 | ?RealQuartic@@YAHMMMMPAM000M@Z
inline int32_t RealQuartic(
    float arg1, float arg2, float arg3, float arg4, float* arg5, float* arg6, float* arg7, float* arg8, float arg9)
{
    return stub<cdecl_t<int32_t, float, float, float, float, float*, float*, float*, float*, float>>(
        0x495520, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// 0x495A40 | ?FindTValuesLineToCircle@@YAHABVVector3@@000MPAMPAV1@1121@Z
inline int32_t FindTValuesLineToCircle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float arg5, float* arg6, class Vector3* arg7, float* arg8, float* arg9,
    class Vector3* arg10, float* arg11)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float, float*, class Vector3*, float*, float*, class Vector3*, float*>>(
        0x495A40, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// 0x495D60 | ?FindHomingAccel@@YAMMMMMM@Z
inline float FindHomingAccel(float arg1, float arg2, float arg3, float arg4, float arg5)
{
    return stub<cdecl_t<float, float, float, float, float, float>>(0x495D60, arg1, arg2, arg3, arg4, arg5);
}

// 0x495DE0 | ?FindHomingAccel3D@@YA?AVVector3@@MABV1@000@Z
inline class Vector3 FindHomingAccel3D(float arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5)
{
    return stub<cdecl_t<class Vector3, float, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&>>(0x495DE0, arg1, arg2, arg3, arg4, arg5);
}

// 0x495E80 | ?FindHomingAngAccel@@YA?AVVector3@@ABV1@0MM@Z
inline class Vector3 FindHomingAngAccel(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4)
{
    return stub<cdecl_t<class Vector3, class Vector3 const&, class Vector3 const&, float, float>>(
        0x495E80, arg1, arg2, arg3, arg4);
}

// 0x495FF0 | ?FindHomingAngAccel3D@@YA?AVVector3@@MMABVMatrix34@@ABV1@01@Z
inline class Vector3 FindHomingAngAccel3D(float arg1, float arg2, class Matrix34 const& arg3, class Vector3 const& arg4,
    class Matrix34 const& arg5, class Vector3 const& arg6)
{
    return stub<cdecl_t<class Vector3, float, float, class Matrix34 const&, class Vector3 const&, class Matrix34 const&,
        class Vector3 const&>>(0x495FF0, arg1, arg2, arg3, arg4, arg5, arg6);
}

class Matrix66
{
public:
    // 0x496A00 | ?Set@Matrix66@@QAEXABV1@@Z
    inline void Set(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496A00, this, arg1);
    }

    // 0x496A20 | ?Set@Matrix66@@QAEXABVMatrix33@@000@Z
    inline void Set(
        class Matrix33 const& arg1, class Matrix33 const& arg2, class Matrix33 const& arg3, class Matrix33 const& arg4)
    {
        return stub<member_func_t<void, Matrix66, class Matrix33 const&, class Matrix33 const&, class Matrix33 const&,
            class Matrix33 const&>>(0x496A20, this, arg1, arg2, arg3, arg4);
    }

    // 0x496A60 | ?Add@Matrix66@@QAEXABV1@@Z
    inline void Add(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496A60, this, arg1);
    }

    // 0x496AA0 | ?Add@Matrix66@@QAEXABV1@0@Z
    inline void Add(class Matrix66 const& arg1, class Matrix66 const& arg2)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&, class Matrix66 const&>>(
            0x496AA0, this, arg1, arg2);
    }

    // 0x496AF0 | ?Subtract@Matrix66@@QAEXABV1@@Z
    inline void Subtract(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496AF0, this, arg1);
    }

    // 0x496B30 | ?Subtract@Matrix66@@QAEXABV1@0@Z
    inline void Subtract(class Matrix66 const& arg1, class Matrix66 const& arg2)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&, class Matrix66 const&>>(
            0x496B30, this, arg1, arg2);
    }

    // 0x496B80 | ?Dot@Matrix66@@QAEXABV1@@Z
    inline void Dot(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496B80, this, arg1);
    }

    // 0x496C70 | ?Transpose@Matrix66@@QAEXXZ
    inline void Transpose()
    {
        return stub<member_func_t<void, Matrix66>>(0x496C70, this);
    }

    // 0x496CC0 | ?Transpose@Matrix66@@QAEXABV1@@Z
    inline void Transpose(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496CC0, this, arg1);
    }

    // 0x496D00 | ?Inverse@Matrix66@@QAEXXZ
    inline void Inverse()
    {
        return stub<member_func_t<void, Matrix66>>(0x496D00, this);
    }

    // 0x496D30 | ?Inverse@Matrix66@@QAEXABV1@@Z
    inline void Inverse(class Matrix66 const& arg1)
    {
        return stub<member_func_t<void, Matrix66, class Matrix66 const&>>(0x496D30, this, arg1);
    }
};

class Matrix33
{
public:
    // 0x496230 | ?Set@Matrix33@@QAEXABV1@@Z
    inline void Set(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x496230, this, arg1);
    }

    // 0x496270 | ?Add@Matrix33@@QAEXABV1@@Z
    inline void Add(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x496270, this, arg1);
    }

    // 0x4962D0 | ?Add@Matrix33@@QAEXABV1@0@Z
    inline void Add(class Matrix33 const& arg1, class Matrix33 const& arg2)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&, class Matrix33 const&>>(
            0x4962D0, this, arg1, arg2);
    }

    // 0x496330 | ?Subtract@Matrix33@@QAEXABV1@@Z
    inline void Subtract(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x496330, this, arg1);
    }

    // 0x496390 | ?Subtract@Matrix33@@QAEXABV1@0@Z
    inline void Subtract(class Matrix33 const& arg1, class Matrix33 const& arg2)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&, class Matrix33 const&>>(
            0x496390, this, arg1, arg2);
    }

    // 0x4963F0 | ?IsZero@Matrix33@@QBE_NXZ
    inline bool IsZero()
    {
        return stub<member_func_t<bool, Matrix33>>(0x4963F0, this);
    }

    // 0x496490 | ?Dot@Matrix33@@QAEXABV1@@Z
    inline void Dot(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x496490, this, arg1);
    }

    // 0x4965B0 | ?Dot@Matrix33@@QAEXABV1@0@Z
    inline void Dot(class Matrix33 const& arg1, class Matrix33 const& arg2)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&, class Matrix33 const&>>(
            0x4965B0, this, arg1, arg2);
    }

    // 0x4966A0 | ?DotCrossProdMtx@Matrix33@@QAEXABVVector3@@@Z
    inline void DotCrossProdMtx(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Vector3 const&>>(0x4966A0, this, arg1);
    }

    // 0x496750 | ?CrossProduct@Matrix33@@QAEXABVVector3@@@Z
    inline void CrossProduct(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Vector3 const&>>(0x496750, this, arg1);
    }

    // 0x496790 | ?Diagonal@Matrix33@@QAEXM@Z
    inline void Diagonal(float arg1)
    {
        return stub<member_func_t<void, Matrix33, float>>(0x496790, this, arg1);
    }

    // 0x4967C0 | ?Diagonal@Matrix33@@QAEXABVVector3@@@Z
    inline void Diagonal(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Vector3 const&>>(0x4967C0, this, arg1);
    }

    // 0x4967F0 | ?Negate@Matrix33@@QAEXXZ
    inline void Negate()
    {
        return stub<member_func_t<void, Matrix33>>(0x4967F0, this);
    }

    // 0x496840 | ?Transpose@Matrix33@@QAEXXZ
    inline void Transpose()
    {
        return stub<member_func_t<void, Matrix33>>(0x496840, this);
    }

    // 0x496870 | ?Transpose@Matrix33@@QAEXABV1@@Z
    inline void Transpose(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x496870, this, arg1);
    }

    // 0x4968B0 | ?Inverse@Matrix33@@QAEXXZ
    inline void Inverse()
    {
        return stub<member_func_t<void, Matrix33>>(0x4968B0, this);
    }

    // 0x4969D0 | ?Inverse@Matrix33@@QAEXABV1@@Z
    inline void Inverse(class Matrix33 const& arg1)
    {
        return stub<member_func_t<void, Matrix33, class Matrix33 const&>>(0x4969D0, this, arg1);
    }
};
