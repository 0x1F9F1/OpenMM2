/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    crbody:headdata

    0x580CB0 | public: __thiscall crHeadData::crHeadData(void) | ??0crHeadData@@QAE@XZ
    0x580CD0 | public: virtual void __thiscall crHeadData::Init(class crSkeletonData &) | ?Init@crHeadData@@UAEXAAVcrSkeletonData@@@Z
    0x580DA0 | public: virtual void __thiscall crHeadData::MatchPose(class crSkeleton &,class crIKGoal &) const | ?MatchPose@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x580E00 | public: virtual void __thiscall crHeadData::SolveIK(class crSkeleton &,class crIKGoal &) const | ?SolveIK@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5B6434 | const crHeadData::`vftable' | ??_7crHeadData@@6B@
*/

struct crHeadData
{
public:
    // crHeadData::`vftable' @ 0x5B6434

    // 0x580CB0 | ??0crHeadData@@QAE@XZ
    inline crHeadData()
    {
        stub<member_func_t<void, crHeadData>>(0x580CB0, this);
    }

    // 0x580CD0 | ?Init@crHeadData@@UAEXAAVcrSkeletonData@@@Z
    virtual inline void Init(class crSkeletonData& arg1)
    {
        return stub<member_func_t<void, crHeadData, class crSkeletonData&>>(0x580CD0, this, arg1);
    }

    // 0x580E00 | ?SolveIK@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual inline void SolveIK(class crSkeleton& arg1, class crIKGoal& arg2)
    {
        return stub<member_func_t<void, crHeadData, class crSkeleton&, class crIKGoal&>>(0x580E00, this, arg1, arg2);
    }

    // 0x580DA0 | ?MatchPose@crHeadData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual inline void MatchPose(class crSkeleton& arg1, class crIKGoal& arg2)
    {
        return stub<member_func_t<void, crHeadData, class crSkeleton&, class crIKGoal&>>(0x580DA0, this, arg1, arg2);
    }
};
