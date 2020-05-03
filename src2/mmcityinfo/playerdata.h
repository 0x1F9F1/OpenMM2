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

#include "mmgame/singlestunt.h"

/*
    mmcityinfo:playerdata

    0x526FE0 | public: __thiscall mmPlayerData::mmPlayerData(void) | ??0mmPlayerData@@QAE@XZ
    0x5270C0 | public: void __thiscall mmPlayerData::operator=(class mmPlayerData &) | ??4mmPlayerData@@QAEXAAV0@@Z
    0x5271B0 | public: int __thiscall mmPlayerData::OpenCityRecord(char *) | ?OpenCityRecord@mmPlayerData@@QAEHPAD@Z
    0x527220 | public: int __thiscall mmPlayerData::CloseCityRecord(void) | ?CloseCityRecord@mmPlayerData@@QAEHXZ
    0x527230 | public: int __thiscall mmPlayerData::GetCheckpointProgress(char *,int) | ?GetCheckpointProgress@mmPlayerData@@QAEHPADH@Z
    0x527250 | public: float __thiscall mmPlayerData::GetTagID(void) | ?GetTagID@mmPlayerData@@QAEMXZ
    0x527260 | public: void __thiscall mmPlayerData::SetTagID(float) | ?SetTagID@mmPlayerData@@QAEXM@Z
    0x527270 | public: int __thiscall mmPlayerData::GetProgress(char *,int) | ?GetProgress@mmPlayerData@@QAEHPADH@Z
    0x5272A0 | public: int __thiscall mmPlayerData::GetPassedMask(char *,int) | ?GetPassedMask@mmPlayerData@@QAEHPADH@Z
    0x527370 | public: int __thiscall mmPlayerData::GetNumPassed(char *,int) | ?GetNumPassed@mmPlayerData@@QAEHPADH@Z
    0x527440 | public: int __thiscall mmPlayerData::GetTotalPassed(char *) | ?GetTotalPassed@mmPlayerData@@QAEHPAD@Z
    0x527530 | public: int __thiscall mmPlayerData::GetScore(char *,int) | ?GetScore@mmPlayerData@@QAEHPADH@Z
    0x527710 | public: int __thiscall mmPlayerData::GetTotalScore(char *) | ?GetTotalScore@mmPlayerData@@QAEHPAD@Z
    0x527890 | public: int __thiscall mmPlayerData::ResolveCheckpointProgress(char *) | ?ResolveCheckpointProgress@mmPlayerData@@QAEHPAD@Z
    0x5279D0 | public: int __thiscall mmPlayerData::ResolveCrashProgress(char *) | ?ResolveCrashProgress@mmPlayerData@@QAEHPAD@Z
    0x527B30 | public: int __thiscall mmPlayerData::RegisterFinish(class mmPlayerRecord,int,int) | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    0x527BB0 | public: void __thiscall mmPlayerData::Reset(void) | ?Reset@mmPlayerData@@QAEXXZ
    0x527C30 | public: void __thiscall mmPlayerData::SetCity(char *) | ?SetCity@mmPlayerData@@QAEXPAD@Z
    0x527C70 | public: char * __thiscall mmPlayerData::GetCity(void) | ?GetCity@mmPlayerData@@QAEPADXZ
    0x527C80 | public: void __thiscall mmPlayerData::SetName(char *) | ?SetName@mmPlayerData@@QAEXPAD@Z
    0x527CC0 | public: char * __thiscall mmPlayerData::GetName(void) | ?GetName@mmPlayerData@@QAEPADXZ
    0x527CD0 | public: void __thiscall mmPlayerData::SetNetName(char *) | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    0x527D10 | public: char * __thiscall mmPlayerData::GetNetName(void) | ?GetNetName@mmPlayerData@@QAEPADXZ
    0x527D20 | public: void __thiscall mmPlayerData::SetFileName(char *) | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    0x527D60 | public: char * __thiscall mmPlayerData::GetFileName(void) | ?GetFileName@mmPlayerData@@QAEPADXZ
    0x527D70 | public: int __thiscall mmPlayerData::Load(char *) | ?Load@mmPlayerData@@QAEHPAD@Z
    0x527DA0 | public: int __thiscall mmPlayerData::Save(char *,int) | ?Save@mmPlayerData@@QAEHPADH@Z
    0x527E40 | public: unsigned int __thiscall mmPlayerData::ComputeCRC(void) | ?ComputeCRC@mmPlayerData@@QAEIXZ
    0x527EF0 | public: int __thiscall mmPlayerData::LoadBinary(char *) | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    0x5280B0 | public: int __thiscall mmPlayerData::SaveBinary(char *) | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    0x528220 | public: virtual __thiscall mmPlayerCityRecord::~mmPlayerCityRecord(void) | ??1mmPlayerCityRecord@@UAE@XZ
*/

class mmPlayerData : public mmInfoBase
{
    // const mmPlayerData::`vftable' @ 0x5B51F8

public:
    // 0x526FE0 | ??0mmPlayerData@@QAE@XZ
    mmPlayerData();

    // 0x5238B0 | ??_GmmPlayerData@@UAEPAXI@Z
    // 0x523850 | ??1mmPlayerData@@UAE@XZ
    ~mmPlayerData() override;

    // 0x5270C0 | ??4mmPlayerData@@QAEXAAV0@@Z
    void operator=(class mmPlayerData& arg1);

    // 0x527220 | ?CloseCityRecord@mmPlayerData@@QAEHXZ
    i32 CloseCityRecord();

    // 0x527E40 | ?ComputeCRC@mmPlayerData@@QAEIXZ
    u32 ComputeCRC();

    // 0x527230 | ?GetCheckpointProgress@mmPlayerData@@QAEHPADH@Z
    i32 GetCheckpointProgress(char* arg1, i32 arg2);

    // 0x527C70 | ?GetCity@mmPlayerData@@QAEPADXZ
    char* GetCity();

    // 0x527D60 | ?GetFileName@mmPlayerData@@QAEPADXZ
    char* GetFileName();

    // 0x527CC0 | ?GetName@mmPlayerData@@QAEPADXZ
    char* GetName();

    // 0x527D10 | ?GetNetName@mmPlayerData@@QAEPADXZ
    char* GetNetName();

    // 0x527370 | ?GetNumPassed@mmPlayerData@@QAEHPADH@Z
    i32 GetNumPassed(char* arg1, i32 arg2);

    // 0x5272A0 | ?GetPassedMask@mmPlayerData@@QAEHPADH@Z
    i32 GetPassedMask(char* arg1, i32 arg2);

    // 0x527270 | ?GetProgress@mmPlayerData@@QAEHPADH@Z
    i32 GetProgress(char* arg1, i32 arg2);

    // 0x527530 | ?GetScore@mmPlayerData@@QAEHPADH@Z
    i32 GetScore(char* arg1, i32 arg2);

    // 0x527250 | ?GetTagID@mmPlayerData@@QAEMXZ
    f32 GetTagID();

    // 0x527440 | ?GetTotalPassed@mmPlayerData@@QAEHPAD@Z
    i32 GetTotalPassed(char* arg1);

    // 0x527710 | ?GetTotalScore@mmPlayerData@@QAEHPAD@Z
    i32 GetTotalScore(char* arg1);

    // 0x527D70 | ?Load@mmPlayerData@@QAEHPAD@Z
    i32 Load(char* arg1);

    // 0x527EF0 | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    i32 LoadBinary(char* arg1);

    // 0x5271B0 | ?OpenCityRecord@mmPlayerData@@QAEHPAD@Z
    i32 OpenCityRecord(char* arg1);

    // 0x527B30 | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    i32 RegisterFinish(class mmPlayerRecord arg1, i32 arg2, i32 arg3);

    // 0x527BB0 | ?Reset@mmPlayerData@@QAEXXZ
    void Reset();

    // 0x527890 | ?ResolveCheckpointProgress@mmPlayerData@@QAEHPAD@Z
    i32 ResolveCheckpointProgress(char* arg1);

    // 0x5279D0 | ?ResolveCrashProgress@mmPlayerData@@QAEHPAD@Z
    i32 ResolveCrashProgress(char* arg1);

    // 0x527DA0 | ?Save@mmPlayerData@@QAEHPADH@Z
    i32 Save(char* arg1, i32 arg2);

    // 0x5280B0 | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    i32 SaveBinary(char* arg1);

    // 0x527C30 | ?SetCity@mmPlayerData@@QAEXPAD@Z
    void SetCity(char* arg1);

    // 0x527D20 | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    void SetFileName(char* arg1);

    // 0x527C80 | ?SetName@mmPlayerData@@QAEXPAD@Z
    void SetName(char* arg1);

    // 0x527CD0 | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    void SetNetName(char* arg1);

    // 0x527260 | ?SetTagID@mmPlayerData@@QAEXM@Z
    void SetTagID(f32 arg1);
};

check_size(mmPlayerData, 0x0);
