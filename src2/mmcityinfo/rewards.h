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
    mmcityinfo:rewards

    0x5238E0 | public: __thiscall mmRewardList::mmRewardList(void) | ??0mmRewardList@@QAE@XZ
    0x5238F0 | public: __thiscall mmRewardList::~mmRewardList(void) | ??1mmRewardList@@QAE@XZ
    0x523930 | public: void __thiscall mmRewardList::Init(int) | ?Init@mmRewardList@@QAEXH@Z
    0x5239B0 | public: bool __thiscall mmRewardList::Load(char *,char *,char *) | ?Load@mmRewardList@@QAE_NPAD00@Z
    0x523C90 | public: class mmRewardRecord * __thiscall mmRewardList::GetRecord(int) | ?GetRecord@mmRewardList@@QAEPAVmmRewardRecord@@H@Z
    0x523CA0 | public: static void __cdecl mmRewardList::UnlockPlayerRewards(char *) | ?UnlockPlayerRewards@mmRewardList@@SAXPAD@Z
    0x523E70 | public: static bool __cdecl mmRewardList::CheckReward(char *,int,class mmRewardRecord *) | ?CheckReward@mmRewardList@@SA_NPADHPAVmmRewardRecord@@@Z
    0x5240D0 | public: void * __thiscall mmRewardRecord::`vector deleting destructor'(unsigned int) | ??_EmmRewardRecord@@QAEPAXI@Z
    0x524140 | public: __thiscall mmRewardRecord::mmRewardRecord(void) | ??0mmRewardRecord@@QAE@XZ
    int SpamCount | ?SpamCount@@3HA
*/

class mmRewardRecord
{
public:
    // 0x524140 | ??0mmRewardRecord@@QAE@XZ
    mmRewardRecord();

    // 0x433F30 | ??1mmRewardRecord@@QAE@XZ
    // 0x5240D0 | ??_EmmRewardRecord@@QAEPAXI@Z
    ~mmRewardRecord();
};

check_size(mmRewardRecord, 0x8);

struct mmRewardList
{
public:
    // 0x5238E0 | ??0mmRewardList@@QAE@XZ
    mmRewardList();

    // 0x5238F0 | ??1mmRewardList@@QAE@XZ
    ~mmRewardList();

    // 0x523C90 | ?GetRecord@mmRewardList@@QAEPAVmmRewardRecord@@H@Z
    class mmRewardRecord* GetRecord(i32 arg1);

    // 0x523930 | ?Init@mmRewardList@@QAEXH@Z
    void Init(i32 arg1);

    // 0x5239B0 | ?Load@mmRewardList@@QAE_NPAD00@Z
    bool Load(char* arg1, char* arg2, char* arg3);

    // 0x523E70 | ?CheckReward@mmRewardList@@SA_NPADHPAVmmRewardRecord@@@Z
    static bool CheckReward(char* arg1, i32 arg2, class mmRewardRecord* arg3);

    // 0x523CA0 | ?UnlockPlayerRewards@mmRewardList@@SAXPAD@Z
    static void UnlockPlayerRewards(char* arg1);
};

check_size(mmRewardList, 0x0);
