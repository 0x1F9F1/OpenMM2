/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    vector:matrix44

    0x4C0730 | public: void __thiscall Matrix44::Identity(void) | ?Identity@Matrix44@@QAEXXZ
    0x4C0770 | public: void __thiscall Matrix44::Zero(void) | ?Zero@Matrix44@@QAEXXZ
    0x4C07B0 | public: void __thiscall Matrix44::Set(class Matrix44 const &) | ?Set@Matrix44@@QAEXABV1@@Z
    0x4C0820 | public: void __thiscall Matrix44::Bezier(void) | ?Bezier@Matrix44@@QAEXXZ
    0x4C0870 | public: void __thiscall Matrix44::Hermite(void) | ?Hermite@Matrix44@@QAEXXZ
    0x4C08C0 | public: void __thiscall Matrix44::CatmullRom(void) | ?CatmullRom@Matrix44@@QAEXXZ
    0x4C0920 | public: void __thiscall Matrix44::Transpose(void) | ?Transpose@Matrix44@@QAEXXZ
    0x4C0970 | public: void __thiscall Matrix44::FromMatrix34(class Matrix34 const &) | ?FromMatrix34@Matrix44@@QAEXABVMatrix34@@@Z
    0x4C09E0 | public: void __thiscall Matrix44::ToMatrix34(class Matrix34 &) const | ?ToMatrix34@Matrix44@@QBEXAAVMatrix34@@@Z
    0x4C0A30 | public: void __thiscall Matrix44::Add(class Matrix44 const &) | ?Add@Matrix44@@QAEXABV1@@Z
    0x4C0AD0 | public: void __thiscall Matrix44::Add(class Matrix44 const &,class Matrix44 const &) | ?Add@Matrix44@@QAEXABV1@0@Z
    0x4C0B70 | public: void __thiscall Matrix44::Subtract(class Matrix44 const &) | ?Subtract@Matrix44@@QAEXABV1@@Z
    0x4C0C10 | public: void __thiscall Matrix44::Subtract(class Matrix44 const &,class Matrix44 const &) | ?Subtract@Matrix44@@QAEXABV1@0@Z
    0x4C0CB0 | public: void __thiscall Matrix44::AddScaled(class Matrix44 const &,float) | ?AddScaled@Matrix44@@QAEXABV1@M@Z
    0x4C0D50 | public: class Matrix44 & __thiscall Matrix44::Dot(class Matrix44 const &) | ?Dot@Matrix44@@QAEAAV1@ABV1@@Z
    0x4C0FC0 | public: class Matrix44 & __thiscall Matrix44::Dot(class Matrix44 const &,class Matrix44 const &) | ?Dot@Matrix44@@QAEAAV1@ABV1@0@Z
    0x4C1170 | public: class Vector4 & __thiscall Vector4::Dot(class Vector4 const &,class Matrix44 const &) | ?Dot@Vector4@@QAEAAV1@ABV1@ABVMatrix44@@@Z
    0x4C1200 | public: class Vector4 & __thiscall Vector4::Dot3x3(class Vector4 const &,class Matrix44 const &) | ?Dot3x3@Vector4@@QAEAAV1@ABV1@ABVMatrix44@@@Z
    0x4C1260 | public: void __thiscall Matrix44::FastInverse(class Matrix44 const &) | ?FastInverse@Matrix44@@QAEXABV1@@Z
    0x4C1320 | public: float __thiscall Matrix44::Determinant(void) const | ?Determinant@Matrix44@@QBEMXZ
    0x4C1510 | public: void __thiscall Matrix44::InvertTo(class Matrix44 &) const | ?InvertTo@Matrix44@@QBEXAAV1@@Z
    0x4C1C00 | public: class Matrix44 & __thiscall Matrix44::MakeRotX(float) | ?MakeRotX@Matrix44@@QAEAAV1@M@Z
    0x4C1C50 | public: class Matrix44 & __thiscall Matrix44::MakeRotY(float) | ?MakeRotY@Matrix44@@QAEAAV1@M@Z
    0x4C1CA0 | public: class Matrix44 & __thiscall Matrix44::MakeRotZ(float) | ?MakeRotZ@Matrix44@@QAEAAV1@M@Z
    0x4C1CF0 | public: void __thiscall Matrix44::Print(char const *) const | ?Print@Matrix44@@QBEXPBD@Z
    0x4C1D60 | public: void __thiscall Matrix44::Transform4(class Vector3 const *,class Vector4 *,int) const | ?Transform4@Matrix44@@QBEXPBVVector3@@PAVVector4@@H@Z
    0x4C1DF0 | void __cdecl __vectorDotMatrix(class Vector4 &,class Vector4 const &,class Matrix44 const &) | ?__vectorDotMatrix@@YAXAAVVector4@@ABV1@ABVMatrix44@@@Z
    public: static class Matrix44 Matrix44::I | ?I@Matrix44@@2V1@A
*/

#include "hooking.h"

#include "matrix34.h"

class Matrix44
{
public:
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;

    Matrix44() = default;

    Matrix44(const Matrix34& rhs)
        : m00(rhs.m00), m01(rhs.m01), m02(rhs.m02), m03(0.0f)
        , m10(rhs.m10), m11(rhs.m11), m12(rhs.m12), m13(0.0f)
        , m20(rhs.m20), m21(rhs.m21), m22(rhs.m22), m23(0.0f)
        , m30(rhs.m30), m31(rhs.m31), m32(rhs.m32), m33(1.0f)
    { }

    void FastInverse(const Matrix44& rhs);

    Matrix44& Dot(const Matrix44& rhs);
    Matrix44& Dot(const Matrix44& lhs, const Matrix44& rhs);
};

check_size(Matrix44, 0x40);
