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

#include "rewards.h"

mmRewardRecord::mmRewardRecord()
{
    unimplemented();
}

mmRewardRecord::~mmRewardRecord()
{
    unimplemented();
}

mmRewardList::mmRewardList()
{
    unimplemented();
}

mmRewardList::~mmRewardList()
{
    unimplemented();
}

class mmRewardRecord* mmRewardList::GetRecord(i32 arg1)
{
    return stub<thiscall_t<class mmRewardRecord*, mmRewardList*, i32>>(0x523C90, this, arg1);
}

void mmRewardList::Init(i32 arg1)
{
    return stub<thiscall_t<void, mmRewardList*, i32>>(0x523930, this, arg1);
}

bool mmRewardList::Load(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, mmRewardList*, char*, char*, char*>>(0x5239B0, this, arg1, arg2, arg3);
}

bool mmRewardList::CheckReward(char* arg1, i32 arg2, class mmRewardRecord* arg3)
{
    return stub<cdecl_t<bool, char*, i32, class mmRewardRecord*>>(0x523E70, arg1, arg2, arg3);
}

void mmRewardList::UnlockPlayerRewards(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x523CA0, arg1);
}

define_dummy_symbol(mmcityinfo_rewards);
