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
    crbody:headdata

    0x580CB0 | public: __thiscall crHeadData::crHeadData(void) | ??0crHeadData@@QAE@XZ
    0x580CD0 | public: virtual void __thiscall crHeadData::Init(class crSkeletonData &) | ?Init@crHeadData@@UAEXAAVcrSkeletonData@@@Z
    0x580DA0 | public: virtual void __thiscall crHeadData::MatchPose(class crSkeleton &,class crIKGoal &) const | ?MatchPose@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x580E00 | public: virtual void __thiscall crHeadData::SolveIK(class crSkeleton &,class crIKGoal &) const | ?SolveIK@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5B6434 | const crHeadData::`vftable' | ??_7crHeadData@@6B@
*/

struct crHeadData
{
    // const crHeadData::`vftable' @ 0x5B6434

public:
    // 0x580CB0 | ??0crHeadData@@QAE@XZ
    crHeadData();

    // 0x580CD0 | ?Init@crHeadData@@UAEXAAVcrSkeletonData@@@Z
    virtual void Init(class crSkeletonData& arg1);

    // 0x580E00 | ?SolveIK@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual void SolveIK(class crSkeleton& arg1, class crIKGoal& arg2);

    // 0x580DA0 | ?MatchPose@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual void MatchPose(class crSkeleton& arg1, class crIKGoal& arg2);
};

check_size(crHeadData, 0x0);
