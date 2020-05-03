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

#include "headdata.h"

crHeadData::crHeadData()
{
    unimplemented();
}

void crHeadData::Init(class crSkeletonData& arg1)
{
    return stub<thiscall_t<void, crHeadData*, class crSkeletonData&>>(0x580CD0, this, arg1);
}

void crHeadData::SolveIK(class crSkeleton& arg1, class crIKGoal& arg2)
{
    return stub<thiscall_t<void, crHeadData*, class crSkeleton&, class crIKGoal&>>(0x580E00, this, arg1, arg2);
}

void crHeadData::MatchPose(class crSkeleton& arg1, class crIKGoal& arg2)
{
    return stub<thiscall_t<void, crHeadData*, class crSkeleton&, class crIKGoal&>>(0x580DA0, this, arg1, arg2);
}

define_dummy_symbol(crbody_headdata);
