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
    crskeleton:bonedata

    0x57CB90 | public: __thiscall crBoneData::crBoneData(void) | ??0crBoneData@@QAE@XZ
    0x57CC00 | public: void __thiscall crBoneData::AddChild(class crBoneData *) | ?AddChild@crBoneData@@QAEXPAV1@@Z
    0x57CC40 | public: bool __thiscall crBoneData::Load(class datTokenizer &,class crBoneData * *,int &) | ?Load@crBoneData@@QAE_NAAVdatTokenizer@@PAPAV1@AAH@Z
    0x57CD50 | public: void __thiscall crBoneData::Transform(class Matrix34 const *,class crBone *) const | ?Transform@crBoneData@@QBEXPBVMatrix34@@PAVcrBone@@@Z
    0x57CDC0 | public: void __thiscall crBoneData::ApplyLimits(class Matrix34 &) const | ?ApplyLimits@crBoneData@@QBEXAAVMatrix34@@@Z
*/

class crBoneData
{
public:
    // 0x57CB90 | ??0crBoneData@@QAE@XZ
    crBoneData()
    {
        stub<member_func_t<void, crBoneData>>(0x57CB90, this);
    }

    // 0x57CC00 | ?AddChild@crBoneData@@QAEXPAV1@@Z
    void AddChild(class crBoneData* arg1)
    {
        return stub<member_func_t<void, crBoneData, class crBoneData*>>(0x57CC00, this, arg1);
    }

    // 0x57CC40 | ?Load@crBoneData@@QAE_NAAVdatTokenizer@@PAPAV1@AAH@Z
    bool Load(class datTokenizer& arg1, class crBoneData** arg2, i32& arg3)
    {
        return stub<member_func_t<bool, crBoneData, class datTokenizer&, class crBoneData**, i32&>>(
            0x57CC40, this, arg1, arg2, arg3);
    }

    // 0x57CD50 | ?Transform@crBoneData@@QBEXPBVMatrix34@@PAVcrBone@@@Z
    void Transform(class Matrix34 const* arg1, class crBone* arg2)
    {
        return stub<member_func_t<void, crBoneData, class Matrix34 const*, class crBone*>>(0x57CD50, this, arg1, arg2);
    }

    // 0x57CDC0 | ?ApplyLimits@crBoneData@@QBEXAAVMatrix34@@@Z
    void ApplyLimits(class Matrix34& arg1)
    {
        return stub<member_func_t<void, crBoneData, class Matrix34&>>(0x57CDC0, this, arg1);
    }
};
