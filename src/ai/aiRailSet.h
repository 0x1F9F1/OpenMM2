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
    ai:aiRailSet

    0x556D50 | public: __thiscall aiRailSet::aiRailSet(void) | ??0aiRailSet@@QAE@XZ
    0x556E10 | public: __thiscall aiRailSet::~aiRailSet(void) | ??1aiRailSet@@QAE@XZ
    0x556E20 | public: void __thiscall aiRailSet::Reset(void) | ?Reset@aiRailSet@@QAEXXZ
    0x556E60 | public: void __thiscall aiRailSet::CalcRailPosition(class Vector3 &,float) | ?CalcRailPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x5577A0 | public: void __thiscall aiRailSet::CalcRailPosOrient(class Vector3 &,class Vector3 &,float) | ?CalcRailPosOrient@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x558270 | public: int __thiscall aiRailSet::SolveTurnType(class aiPath *,class aiPath *) | ?SolveTurnType@aiRailSet@@QAEHPAVaiPath@@0@Z
    0x5583F0 | public: void __thiscall aiRailSet::CalcXZPosition(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosition@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x5585E0 | public: void __thiscall aiRailSet::CalcXZDirection(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZDirection@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x558780 | public: void __thiscall aiRailSet::CalcXZPosOrient(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosOrient@aiRailSet@@QAEXAAVVector3@@00000M@Z
    0x558990 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000@Z
    0x558B40 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector4 &,class Vector4 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000AAVVector4@@1@Z
    0x558D00 | public: void __thiscall aiRailSet::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x558D80 | public: void __thiscall aiRailSet::SolveXZPosition(class Vector3 &,float) | ?SolveXZPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x558DC0 | public: void __thiscall aiRailSet::Dump(void) | ?Dump@aiRailSet@@QAEXXZ
    0x558FB0 | public: void __thiscall aiRailSet::ReplayDebug(void) | ?ReplayDebug@aiRailSet@@QAEXXZ
    public: class Vector3 * __thiscall aiPath::VertXDir(int,int) | ?VertXDir@aiPath@@QAEPAVVector3@@HH@Z
*/

#include "hooking.h"
