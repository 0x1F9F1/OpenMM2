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

#include "legdata.h"

crLegData::crLegData()
{
    unimplemented();
}

void crLegData::Init(class crSkeletonData& arg1, char arg2)
{
    return stub<thiscall_t<void, crLegData*, class crSkeletonData&, char>>(0x57ED20, this, arg1, arg2);
}

void crLegData::SolveIK(class crSkeleton& arg1, class crIKGoal& arg2)
{
    return stub<thiscall_t<void, crLegData*, class crSkeleton&, class crIKGoal&>>(0x57EF60, this, arg1, arg2);
}

void crLegData::SolveLimpIK(class crSkeleton& arg1, class crIKGoal& arg2)
{
    return stub<thiscall_t<void, crLegData*, class crSkeleton&, class crIKGoal&>>(0x57FF20, this, arg1, arg2);
}

void crLegData::MatchPose(class crSkeleton& arg1, class crIKGoal& arg2)
{
    return stub<thiscall_t<void, crLegData*, class crSkeleton&, class crIKGoal&>>(0x57EE70, this, arg1, arg2);
}

f32 crLegData::Acosf(f32 arg1)
{
    return stub<thiscall_t<f32, crLegData*, f32>>(0x57EF00, this, arg1);
}

define_dummy_symbol(crbody_legdata);
