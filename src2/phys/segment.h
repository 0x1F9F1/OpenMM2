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
    phys:segment

    0x469F90 | public: void __thiscall lvlSegment::Set(class Vector3 const &,class Vector3 const &,int,class lvlSegmentInfo *) | ?Set@lvlSegment@@QAEXABVVector3@@0HPAVlvlSegmentInfo@@@Z
    0x46A060 | public: void __thiscall lvlSegment::CalculateInfo(void) | ?CalculateInfo@lvlSegment@@QAEXXZ
    0x46A0F0 | public: void __thiscall lvlSegmentInfo::AllocateState(void) | ?AllocateState@lvlSegmentInfo@@QAEXXZ
*/

class lvlSegmentInfo
{
public:
    // 0x46A0F0 | ?AllocateState@lvlSegmentInfo@@QAEXXZ
    void AllocateState()
    {
        return stub<member_func_t<void, lvlSegmentInfo>>(0x46A0F0, this);
    }
};

class lvlSegment
{
public:
    // 0x469F90 | ?Set@lvlSegment@@QAEXABVVector3@@0HPAVlvlSegmentInfo@@@Z
    void Set(class Vector3 const& arg1, class Vector3 const& arg2, i32 arg3, class lvlSegmentInfo* arg4)
    {
        return stub<
            member_func_t<void, lvlSegment, class Vector3 const&, class Vector3 const&, i32, class lvlSegmentInfo*>>(
            0x469F90, this, arg1, arg2, arg3, arg4);
    }

    // 0x46A060 | ?CalculateInfo@lvlSegment@@QAEXXZ
    void CalculateInfo()
    {
        return stub<member_func_t<void, lvlSegment>>(0x46A060, this);
    }
};
