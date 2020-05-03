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
    phys:segment

    0x469F90 | public: void __thiscall lvlSegment::Set(class Vector3 const &,class Vector3 const &,int,class lvlSegmentInfo *) | ?Set@lvlSegment@@QAEXABVVector3@@0HPAVlvlSegmentInfo@@@Z
    0x46A060 | public: void __thiscall lvlSegment::CalculateInfo(void) | ?CalculateInfo@lvlSegment@@QAEXXZ
    0x46A0F0 | public: void __thiscall lvlSegmentInfo::AllocateState(void) | ?AllocateState@lvlSegmentInfo@@QAEXXZ
*/

class lvlSegment
{
public:
    // 0x46A060 | ?CalculateInfo@lvlSegment@@QAEXXZ
    void CalculateInfo();

    // 0x469F90 | ?Set@lvlSegment@@QAEXABVVector3@@0HPAVlvlSegmentInfo@@@Z
    void Set(class Vector3 const& arg1, class Vector3 const& arg2, i32 arg3, class lvlSegmentInfo* arg4);
};

check_size(lvlSegment, 0x0);

class lvlSegmentInfo
{
public:
    // 0x46A0F0 | ?AllocateState@lvlSegmentInfo@@QAEXXZ
    void AllocateState();
};

check_size(lvlSegmentInfo, 0x0);
