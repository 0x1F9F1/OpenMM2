/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#include "hooking.h"
