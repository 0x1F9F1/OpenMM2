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
    crbody:legdata

    0x57ECF0 | public: __thiscall crLegData::crLegData(void) | ??0crLegData@@QAE@XZ
    0x57ED20 | public: virtual void __thiscall crLegData::Init(class crSkeletonData &,char) | ?Init@crLegData@@UAEXAAVcrSkeletonData@@D@Z
    0x57EE70 | public: virtual void __thiscall crLegData::MatchPose(class crSkeleton &,class crIKGoal &) const | ?MatchPose@crLegData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x57EF00 | protected: float __thiscall crLegData::Acosf(float) const | ?Acosf@crLegData@@IBEMM@Z
    0x57EF60 | public: virtual void __thiscall crLegData::SolveIK(class crSkeleton &,class crIKGoal &) const | ?SolveIK@crLegData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x57FF20 | public: virtual void __thiscall crLegData::SolveLimpIK(class crSkeleton &,class crIKGoal &) const | ?SolveLimpIK@crLegData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5B6414 | const crLegData::`vftable' | ??_7crLegData@@6B@
*/

#include "hooking.h"
