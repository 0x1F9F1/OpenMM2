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

#include "segment.h"

void lvlSegment::CalculateInfo()
{
    return stub<thiscall_t<void, lvlSegment*>>(0x46A060, this);
}

void lvlSegment::Set(class Vector3 const& arg1, class Vector3 const& arg2, i32 arg3, class lvlSegmentInfo* arg4)
{
    return stub<thiscall_t<void, lvlSegment*, class Vector3 const&, class Vector3 const&, i32, class lvlSegmentInfo*>>(
        0x469F90, this, arg1, arg2, arg3, arg4);
}

void lvlSegmentInfo::AllocateState()
{
    return stub<thiscall_t<void, lvlSegmentInfo*>>(0x46A0F0, this);
}

define_dummy_symbol(phys_segment);
