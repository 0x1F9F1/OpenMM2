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
    vector:quaternion

    0x4C4BE0 | public: void __thiscall Quaternion::Print(void) const | ?Print@Quaternion@@QBEXXZ
    0x4C4C20 | public: void __thiscall Quaternion::Print(char const *) const | ?Print@Quaternion@@QBEXPBD@Z
    0x4C4C60 | public: void __thiscall Quaternion::Slerp(float,class Quaternion const &,class Quaternion const &) | ?Slerp@Quaternion@@QAEXMABV1@0@Z
    0x4C4E60 | public: void __thiscall Quaternion::FromMatrix(class Matrix34 const &) | ?FromMatrix@Quaternion@@QAEXABVMatrix34@@@Z
    0x4C5020 | public: void __thiscall Quaternion::Multiply(class Quaternion const &,class Quaternion const &) | ?Multiply@Quaternion@@QAEXABV1@0@Z
    0x4C50B0 | public: void __thiscall Quaternion::Multiply(class Quaternion const &) | ?Multiply@Quaternion@@QAEXABV1@@Z
    0x4C5150 | public: void __thiscall Quaternion::MultiplyInverse(class Quaternion const &) | ?MultiplyInverse@Quaternion@@QAEXABV1@@Z
*/

class Quaternion
{
public:
    // 0x4C4E60 | ?FromMatrix@Quaternion@@QAEXABVMatrix34@@@Z
    void FromMatrix(class Matrix34 const& arg1);

    // 0x4C50B0 | ?Multiply@Quaternion@@QAEXABV1@@Z
    void Multiply(class Quaternion const& arg1);

    // 0x4C5020 | ?Multiply@Quaternion@@QAEXABV1@0@Z
    void Multiply(class Quaternion const& arg1, class Quaternion const& arg2);

    // 0x4C5150 | ?MultiplyInverse@Quaternion@@QAEXABV1@@Z
    void MultiplyInverse(class Quaternion const& arg1);

    // 0x4C4BE0 | ?Print@Quaternion@@QBEXXZ
    void Print();

    // 0x4C4C20 | ?Print@Quaternion@@QBEXPBD@Z
    void Print(char const* arg1);

    // 0x4C4C60 | ?Slerp@Quaternion@@QAEXMABV1@0@Z
    void Slerp(f32 arg1, class Quaternion const& arg2, class Quaternion const& arg3);
};

check_size(Quaternion, 0x0);
