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
    crbody:spinedata

    0x580FE0 | public: __thiscall crSpineData::crSpineData(void) | ??0crSpineData@@QAE@XZ
    0x581000 | public: virtual void __thiscall crSpineData::Init(class crSkeletonData &) | ?Init@crSpineData@@UAEXAAVcrSkeletonData@@@Z
    0x5810F0 | public: __thiscall crSpineData::~crSpineData(void) | ??1crSpineData@@QAE@XZ
    0x581110 | public: virtual void __thiscall crSpineData::MatchPose(class crSkeleton &,class crIKGoal &) const | ?MatchPose@crSpineData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x581170 | public: virtual void __thiscall crSpineData::SolveIK(class crSkeleton &,class crIKGoal &) const | ?SolveIK@crSpineData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    0x5B6440 | const crSpineData::`vftable' | ??_7crSpineData@@6B@
*/

struct crSpineData
{
    // const crSpineData::`vftable' @ 0x5B6440

public:
    // 0x580FE0 | ??0crSpineData@@QAE@XZ
    crSpineData();

    // 0x5810F0 | ??1crSpineData@@QAE@XZ
    ~crSpineData();

    // 0x581000 | ?Init@crSpineData@@UAEXAAVcrSkeletonData@@@Z
    virtual void Init(class crSkeletonData& arg1);

    // 0x581170 | ?SolveIK@crSpineData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual void SolveIK(class crSkeleton& arg1, class crIKGoal& arg2);

    // 0x581110 | ?MatchPose@crSpineData@@UBEXAAVcrSkeleton@@AAVcrIKGoal@@@Z
    virtual void MatchPose(class crSkeleton& arg1, class crIKGoal& arg2);
};

check_size(crSpineData, 0x0);
