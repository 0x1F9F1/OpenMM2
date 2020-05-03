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
    crskeleton:skeldata

    0x57C730 | public: __thiscall crSkeletonData::crSkeletonData(void) | ??0crSkeletonData@@QAE@XZ
    0x57C740 | public: __thiscall crSkeletonData::~crSkeletonData(void) | ??1crSkeletonData@@QAE@XZ
    0x57C750 | public: bool __thiscall crSkeletonData::Load(char const *) | ?Load@crSkeletonData@@QAE_NPBD@Z
    0x57C8C0 | public: class crBoneData * __thiscall crSkeletonData::FindBone(char const *,int,char) const | ?FindBone@crSkeletonData@@QBEPAVcrBoneData@@PBDHD@Z
    0x57C9C0 | public: int __thiscall crSkeletonData::HowMany(char const *,char) const | ?HowMany@crSkeletonData@@QBEHPBDD@Z
    0x57CA00 | private: void __thiscall crSkeletonData::InitMirror(void) | ?InitMirror@crSkeletonData@@AAEXXZ
*/

class crSkeletonData
{
public:
    // 0x57C730 | ??0crSkeletonData@@QAE@XZ
    crSkeletonData();

    // 0x57C740 | ??1crSkeletonData@@QAE@XZ
    ~crSkeletonData();

    // 0x57C8C0 | ?FindBone@crSkeletonData@@QBEPAVcrBoneData@@PBDHD@Z
    class crBoneData* FindBone(char const* arg1, i32 arg2, char arg3);

    // 0x57C9C0 | ?HowMany@crSkeletonData@@QBEHPBDD@Z
    i32 HowMany(char const* arg1, char arg2);

    // 0x57C750 | ?Load@crSkeletonData@@QAE_NPBD@Z
    bool Load(char const* arg1);

private:
    // 0x57CA00 | ?InitMirror@crSkeletonData@@AAEXXZ
    void InitMirror();
};

check_size(crSkeletonData, 0x8);
