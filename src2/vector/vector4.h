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
    vector:vector4

    0x4C5250 | public: void __thiscall Vector4::Print(void) const | ?Print@Vector4@@QBEXXZ
    0x4C5290 | public: void __thiscall Vector4::Print(char const *) const | ?Print@Vector4@@QBEXPBD@Z
    0x4C52D0 | public: void __thiscall Vector4::ComputePlane(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?ComputePlane@Vector4@@QAEXABVVector3@@00@Z
    0x4C53B0 | public: void __thiscall Vector4::ComputePlane(class Vector3 const &,class Vector3 const &) | ?ComputePlane@Vector4@@QAEXABVVector3@@0@Z
    0x4C53F0 | public: void __thiscall Vector4::Min(class Vector4 const &,class Vector4 const &) | ?Min@Vector4@@QAEXABV1@0@Z
    0x4C5460 | public: void __thiscall Vector4::Max(class Vector4 const &,class Vector4 const &) | ?Max@Vector4@@QAEXABV1@0@Z
    0x4C54D0 | public: int __thiscall Vector4::Outcode(void) const | ?Outcode@Vector4@@QBEHXZ
*/

class Vector4
{
public:
    // 0x4C53B0 | ?ComputePlane@Vector4@@QAEXABVVector3@@0@Z
    void ComputePlane(class Vector3 const& arg1, class Vector3 const& arg2);

    // 0x4C52D0 | ?ComputePlane@Vector4@@QAEXABVVector3@@00@Z
    void ComputePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3);

    // 0x494C90 | ?Cross@Vector4@@QAEXABV1@0@Z
    void Cross(class Vector4 const& arg1, class Vector4 const& arg2);

    // 0x43DDA0 | ?Dot@Vector4@@QBEMABV1@@Z
    f32 Dot(class Vector4 const& arg1);

    // 0x4C1170 | ?Dot@Vector4@@QAEAAV1@ABV1@ABVMatrix44@@@Z
    class Vector4& Dot(class Vector4 const& arg1, class Matrix44 const& arg2);

    // 0x494C70 | ?Dot3@Vector4@@QBEMABV1@@Z
    f32 Dot3(class Vector4 const& arg1);

    // 0x4C1200 | ?Dot3x3@Vector4@@QAEAAV1@ABV1@ABVMatrix44@@@Z
    class Vector4& Dot3x3(class Vector4 const& arg1, class Matrix44 const& arg2);

    // 0x4C5460 | ?Max@Vector4@@QAEXABV1@0@Z
    void Max(class Vector4 const& arg1, class Vector4 const& arg2);

    // 0x4C53F0 | ?Min@Vector4@@QAEXABV1@0@Z
    void Min(class Vector4 const& arg1, class Vector4 const& arg2);

    // 0x4C54D0 | ?Outcode@Vector4@@QBEHXZ
    i32 Outcode();

    // 0x4C5250 | ?Print@Vector4@@QBEXXZ
    void Print();

    // 0x4C5290 | ?Print@Vector4@@QBEXPBD@Z
    void Print(char const* arg1);

    // 0x43DD80 | ?Set@Vector4@@QAEXMMMM@Z
    void Set(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x494C40 | ?Subtract@Vector4@@QAEXABVVector3@@0@Z
    void Subtract(class Vector3 const& arg1, class Vector3 const& arg2);
};

check_size(Vector4, 0x0);
