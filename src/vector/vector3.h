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
    vector:vector3

    0x4BFEB0 | public: void __thiscall Vector3::Print(void) const | ?Print@Vector3@@QBEXXZ
    0x4BFEE0 | public: void __thiscall Vector3::Print(char const *) const | ?Print@Vector3@@QBEXPBD@Z
    0x4BFF20 | public: bool __thiscall Vector3::Approach(class Vector3 const &,float,float) | ?Approach@Vector3@@QAE_NABV1@MM@Z
    0x4C0020 | public: void __thiscall Vector3::RotateAboutAxis(float,int) | ?RotateAboutAxis@Vector3@@QAEXMH@Z
    0x4C00C0 | public: void __thiscall Vector3::GetVector2(int,class Vector2 &) const | ?GetVector2@Vector3@@QBEXHAAVVector2@@@Z
    0x4C0160 | public: void __thiscall Vector3::RGBtoHSV(void) | ?RGBtoHSV@Vector3@@QAEXXZ
    0x4C0270 | public: void __thiscall Vector3::HSVtoRGB(void) | ?HSVtoRGB@Vector3@@QAEXXZ
    0x4C0390 | public: void __thiscall Vector3::RotateX(float) | ?RotateX@Vector3@@QAEXM@Z
    0x4C03D0 | public: void __thiscall Vector3::RotateY(float) | ?RotateY@Vector3@@QAEXM@Z
    0x4C0400 | public: void __thiscall Vector3::RotateZ(float) | ?RotateZ@Vector3@@QAEXM@Z
    0x4C0430 | public: float __thiscall Vector3::Angle(class Vector3 const &) const | ?Angle@Vector3@@QBEMABV1@@Z
    0x4C0500 | public: float __thiscall Vector3::FastAngle(class Vector3 const &) const | ?FastAngle@Vector3@@QBEMABV1@@Z
    0x4C0530 | public: void __thiscall Vector3::GetPolar(class Vector3 const &,class Vector4 *,class Vector3 *) const | ?GetPolar@Vector3@@QBEXABV1@PAVVector4@@PAV1@@Z
    0x4C05D0 | public: void __thiscall Vector3::Extend(float) | ?Extend@Vector3@@QAEXM@Z
    0x4C0620 | public: void __thiscall Vector3::Extend(class Vector3 const &,float) | ?Extend@Vector3@@QAEXABV1@M@Z
    class Vector3 ORIGIN | ?ORIGIN@@3VVector3@@A
    class Vector3 XAXIS | ?XAXIS@@3VVector3@@A
    class Vector3 YAXIS | ?YAXIS@@3VVector3@@A
    class Vector3 ZAXIS | ?ZAXIS@@3VVector3@@A
*/

#include "hooking.h"

class Vector3
{
public:
    float x;
    float y;
    float z;
};

check_size(Vector3, 0xC);
