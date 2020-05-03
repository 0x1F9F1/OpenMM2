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

#include "skeldata.h"

crSkeletonData::crSkeletonData()
{
    unimplemented();
}

crSkeletonData::~crSkeletonData()
{
    unimplemented();
}

class crBoneData* crSkeletonData::FindBone(char const* arg1, i32 arg2, char arg3)
{
    return stub<thiscall_t<class crBoneData*, crSkeletonData*, char const*, i32, char>>(
        0x57C8C0, this, arg1, arg2, arg3);
}

i32 crSkeletonData::HowMany(char const* arg1, char arg2)
{
    return stub<thiscall_t<i32, crSkeletonData*, char const*, char>>(0x57C9C0, this, arg1, arg2);
}

bool crSkeletonData::Load(char const* arg1)
{
    return stub<thiscall_t<bool, crSkeletonData*, char const*>>(0x57C750, this, arg1);
}

void crSkeletonData::InitMirror()
{
    return stub<thiscall_t<void, crSkeletonData*>>(0x57CA00, this);
}

define_dummy_symbol(crskeleton_skeldata);
