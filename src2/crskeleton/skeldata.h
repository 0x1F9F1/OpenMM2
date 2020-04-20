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
    inline crSkeletonData()
    {
        stub<member_func_t<void, crSkeletonData>>(0x57C730, this);
    }

    // 0x57C740 | ??1crSkeletonData@@QAE@XZ
    inline ~crSkeletonData()
    {
        stub<member_func_t<void, crSkeletonData>>(0x57C740, this);
    }

    // 0x57C750 | ?Load@crSkeletonData@@QAE_NPBD@Z
    inline bool Load(char const* arg1)
    {
        return stub<member_func_t<bool, crSkeletonData, char const*>>(0x57C750, this, arg1);
    }

    // 0x57C8C0 | ?FindBone@crSkeletonData@@QBEPAVcrBoneData@@PBDHD@Z
    inline class crBoneData* FindBone(char const* arg1, int32_t arg2, char arg3)
    {
        return stub<member_func_t<class crBoneData*, crSkeletonData, char const*, int32_t, char>>(
            0x57C8C0, this, arg1, arg2, arg3);
    }

    // 0x57C9C0 | ?HowMany@crSkeletonData@@QBEHPBDD@Z
    inline int32_t HowMany(char const* arg1, char arg2)
    {
        return stub<member_func_t<int32_t, crSkeletonData, char const*, char>>(0x57C9C0, this, arg1, arg2);
    }

    // 0x57CA00 | ?InitMirror@crSkeletonData@@AAEXXZ
    inline void InitMirror()
    {
        return stub<member_func_t<void, crSkeletonData>>(0x57CA00, this);
    }
};
