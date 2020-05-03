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
    0x6A3B48 | public: static class Matrix44 Matrix44::I | ?I@Matrix44@@2V1@A
*/

class Matrix44
{
public:
    // 0x4C0A30 | ?Add@Matrix44@@QAEXABV1@@Z
    void Add(class Matrix44 const& arg1);

    // 0x4C0AD0 | ?Add@Matrix44@@QAEXABV1@0@Z
    void Add(class Matrix44 const& arg1, class Matrix44 const& arg2);

    // 0x4C0CB0 | ?AddScaled@Matrix44@@QAEXABV1@M@Z
    void AddScaled(class Matrix44 const& arg1, f32 arg2);

    // 0x4C0820 | ?Bezier@Matrix44@@QAEXXZ
    void Bezier();

    // 0x4C08C0 | ?CatmullRom@Matrix44@@QAEXXZ
    void CatmullRom();

    // 0x4C1320 | ?Determinant@Matrix44@@QBEMXZ
    f32 Determinant();

    // 0x4C0D50 | ?Dot@Matrix44@@QAEAAV1@ABV1@@Z
    class Matrix44& Dot(class Matrix44 const& arg1);

    // 0x4C0FC0 | ?Dot@Matrix44@@QAEAAV1@ABV1@0@Z
    class Matrix44& Dot(class Matrix44 const& arg1, class Matrix44 const& arg2);

    // 0x4C1260 | ?FastInverse@Matrix44@@QAEXABV1@@Z
    void FastInverse(class Matrix44 const& arg1);

    // 0x4C0970 | ?FromMatrix34@Matrix44@@QAEXABVMatrix34@@@Z
    void FromMatrix34(class Matrix34 const& arg1);

    // 0x4C0870 | ?Hermite@Matrix44@@QAEXXZ
    void Hermite();

    // 0x4C0730 | ?Identity@Matrix44@@QAEXXZ
    void Identity();

    // 0x4C1510 | ?InvertTo@Matrix44@@QBEXAAV1@@Z
    void InvertTo(class Matrix44& arg1);

    // 0x4C1C00 | ?MakeRotX@Matrix44@@QAEAAV1@M@Z
    class Matrix44& MakeRotX(f32 arg1);

    // 0x4C1C50 | ?MakeRotY@Matrix44@@QAEAAV1@M@Z
    class Matrix44& MakeRotY(f32 arg1);

    // 0x4C1CA0 | ?MakeRotZ@Matrix44@@QAEAAV1@M@Z
    class Matrix44& MakeRotZ(f32 arg1);

    // 0x4C1CF0 | ?Print@Matrix44@@QBEXPBD@Z
    void Print(char const* arg1);

    // 0x4C07B0 | ?Set@Matrix44@@QAEXABV1@@Z
    void Set(class Matrix44 const& arg1);

    // 0x4C0B70 | ?Subtract@Matrix44@@QAEXABV1@@Z
    void Subtract(class Matrix44 const& arg1);

    // 0x4C0C10 | ?Subtract@Matrix44@@QAEXABV1@0@Z
    void Subtract(class Matrix44 const& arg1, class Matrix44 const& arg2);

    // 0x4C09E0 | ?ToMatrix34@Matrix44@@QBEXAAVMatrix34@@@Z
    void ToMatrix34(class Matrix34& arg1);

    // 0x4C1D60 | ?Transform4@Matrix44@@QBEXPBVVector3@@PAVVector4@@H@Z
    void Transform4(class Vector3 const* arg1, class Vector4* arg2, i32 arg3);

    // 0x4C0920 | ?Transpose@Matrix44@@QAEXXZ
    void Transpose();

    // 0x4C0770 | ?Zero@Matrix44@@QAEXXZ
    void Zero();

    // 0x6A3B48 | ?I@Matrix44@@2V1@A
    static inline extern_var(0x6A3B48, class Matrix44, I);
};

check_size(Matrix44, 0x0);

// 0x4C1DF0 | ?__vectorDotMatrix@@YAXAAVVector4@@ABV1@ABVMatrix44@@@Z
void __vectorDotMatrix(class Vector4& arg1, class Vector4 const& arg2, class Matrix44 const& arg3);
