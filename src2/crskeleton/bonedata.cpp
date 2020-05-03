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

#include "bonedata.h"

crBoneData::crBoneData()
{
    unimplemented();
}

void crBoneData::AddChild(class crBoneData* arg1)
{
    return stub<thiscall_t<void, crBoneData*, class crBoneData*>>(0x57CC00, this, arg1);
}

void crBoneData::ApplyLimits(class Matrix34& arg1)
{
    return stub<thiscall_t<void, crBoneData*, class Matrix34&>>(0x57CDC0, this, arg1);
}

bool crBoneData::Load(class datTokenizer& arg1, class crBoneData** arg2, i32& arg3)
{
    return stub<thiscall_t<bool, crBoneData*, class datTokenizer&, class crBoneData**, i32&>>(
        0x57CC40, this, arg1, arg2, arg3);
}

void crBoneData::Transform(class Matrix34 const* arg1, class crBone* arg2)
{
    return stub<thiscall_t<void, crBoneData*, class Matrix34 const*, class crBone*>>(0x57CD50, this, arg1, arg2);
}

define_dummy_symbol(crskeleton_bonedata);
