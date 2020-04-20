/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    crbody:armdata

    0x5804C0 | public: __thiscall crArmData::crArmData(void) | ??0crArmData@@QAE@XZ
    0x580500 | public: virtual void __thiscall crArmData::Init(class crSkeletonData &,char) | ?Init@crArmData@@UAEXAAVcrSkeletonData@@D@Z
    0x580660 | public: virtual void __thiscall crArmData::MatchPose(class crSkeleton &,class crIKGoal &) const | ?MatchPose@crArmData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5806C0 | public: virtual void __thiscall crArmData::SolveIK(class crSkeleton &,class crIKGoal &) const | ?SolveIK@crArmData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5B6428 | const crArmData::`vftable' | ??_7crArmData@@6B@
*/

struct crArmData
{
public:
    // crArmData::`vftable' @ 0x5B6428

    // 0x5804C0 | ??0crArmData@@QAE@XZ
    inline crArmData()
    {
        stub<member_func_t<void, crArmData>>(0x5804C0, this);
    }

    // 0x580500 | ?Init@crArmData@@UAEXAAVcrSkeletonData@@D@Z
    virtual inline void Init(class crSkeletonData& arg1, char arg2)
    {
        return stub<member_func_t<void, crArmData, class crSkeletonData&, char>>(0x580500, this, arg1, arg2);
    }

    // 0x5806C0 | ?SolveIK@crArmData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual inline void SolveIK(class crSkeleton& arg1, class crIKGoal& arg2)
    {
        return stub<member_func_t<void, crArmData, class crSkeleton&, class crIKGoal&>>(0x5806C0, this, arg1, arg2);
    }

    // 0x580660 | ?MatchPose@crArmData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual inline void MatchPose(class crSkeleton& arg1, class crIKGoal& arg2)
    {
        return stub<member_func_t<void, crArmData, class crSkeleton&, class crIKGoal&>>(0x580660, this, arg1, arg2);
    }
};
