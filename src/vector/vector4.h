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
    vector:vector4

    0x4C5250 | public: void __thiscall Vector4::Print(void) const | ?Print@Vector4@@QBEXXZ
    0x4C5290 | public: void __thiscall Vector4::Print(char const *) const | ?Print@Vector4@@QBEXPBD@Z
    0x4C52D0 | public: void __thiscall Vector4::ComputePlane(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?ComputePlane@Vector4@@QAEXABVVector3@@00@Z
    0x4C53B0 | public: void __thiscall Vector4::ComputePlane(class Vector3 const &,class Vector3 const &) | ?ComputePlane@Vector4@@QAEXABVVector3@@0@Z
    0x4C53F0 | public: void __thiscall Vector4::Min(class Vector4 const &,class Vector4 const &) | ?Min@Vector4@@QAEXABV1@0@Z
    0x4C5460 | public: void __thiscall Vector4::Max(class Vector4 const &,class Vector4 const &) | ?Max@Vector4@@QAEXABV1@0@Z
    0x4C54D0 | public: int __thiscall Vector4::Outcode(void) const | ?Outcode@Vector4@@QBEHXZ
*/

#include "hooking.h"

class Vector4
{
public:
    float x;
    float y;
    float z;
    float w;
};

check_size(Vector4, 0x10);
