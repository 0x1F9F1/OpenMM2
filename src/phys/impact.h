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
    phys:impact

    0x46B620 | public: static int __cdecl dgImpact::CalcImpact(class dgImpact *,float,float) | ?CalcImpact@dgImpact@@SAHPAV1@MM@Z
    0x46B7D0 | public: int __thiscall dgImpact::CalcCollision(class Vector3 const &,float,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,float) | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@111M@Z
    0x46BE80 | public: int __thiscall dgImpact::CalcCollision(class Vector3 const &,float,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,bool,bool,int,int,float) | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@11111_N2HHM@Z
    public: void __thiscall Vector3::operator*=(float) | ??XVector3@@QAEXM@Z
    public: void __thiscall Vector3::Negate(void) | ?Negate@Vector3@@QAEXXZ
    0x45CCD0 | public: void __thiscall Vector3::operator+=(class Vector3 const &) | ??YVector3@@QAEXABV0@@Z
    public: void __thiscall Vector3::Dot(class Matrix34 const &) | ?Dot@Vector3@@QAEXABVMatrix34@@@Z
*/

#include "hooking.h"
