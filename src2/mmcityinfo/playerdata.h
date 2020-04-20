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

class mmPlayerData : mmInfoBase
{
public:
    // mmPlayerData::`vftable' @ 0x5B51F8

    // 0x526FE0 | ??0mmPlayerData@@QAE@XZ
    inline mmPlayerData()
    {
        stub<member_func_t<void, mmPlayerData>>(0x526FE0, this);
    }

    // 0x5270C0 | ??4mmPlayerData@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerData& arg1)
    {
        return stub<member_func_t<void, mmPlayerData, class mmPlayerData&>>(0x5270C0, this, arg1);
    }

    // 0x5271B0 | ?OpenCityRecord@mmPlayerData@@QAEHPAD@Z
    inline int32_t OpenCityRecord(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x5271B0, this, arg1);
    }

    // 0x527220 | ?CloseCityRecord@mmPlayerData@@QAEHXZ
    inline int32_t CloseCityRecord()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x527220, this);
    }

    // 0x527230 | ?GetCheckpointProgress@mmPlayerData@@QAEHPADH@Z
    inline int32_t GetCheckpointProgress(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x527230, this, arg1, arg2);
    }

    // 0x527250 | ?GetTagID@mmPlayerData@@QAEMXZ
    inline float GetTagID()
    {
        return stub<member_func_t<float, mmPlayerData>>(0x527250, this);
    }

    // 0x527260 | ?SetTagID@mmPlayerData@@QAEXM@Z
    inline void SetTagID(float arg1)
    {
        return stub<member_func_t<void, mmPlayerData, float>>(0x527260, this, arg1);
    }

    // 0x527270 | ?GetProgress@mmPlayerData@@QAEHPADH@Z
    inline int32_t GetProgress(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x527270, this, arg1, arg2);
    }

    // 0x5272A0 | ?GetPassedMask@mmPlayerData@@QAEHPADH@Z
    inline int32_t GetPassedMask(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x5272A0, this, arg1, arg2);
    }

    // 0x527370 | ?GetNumPassed@mmPlayerData@@QAEHPADH@Z
    inline int32_t GetNumPassed(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x527370, this, arg1, arg2);
    }

    // 0x527440 | ?GetTotalPassed@mmPlayerData@@QAEHPAD@Z
    inline int32_t GetTotalPassed(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x527440, this, arg1);
    }

    // 0x527530 | ?GetScore@mmPlayerData@@QAEHPADH@Z
    inline int32_t GetScore(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x527530, this, arg1, arg2);
    }

    // 0x527710 | ?GetTotalScore@mmPlayerData@@QAEHPAD@Z
    inline int32_t GetTotalScore(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x527710, this, arg1);
    }

    // 0x527890 | ?ResolveCheckpointProgress@mmPlayerData@@QAEHPAD@Z
    inline int32_t ResolveCheckpointProgress(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x527890, this, arg1);
    }

    // 0x5279D0 | ?ResolveCrashProgress@mmPlayerData@@QAEHPAD@Z
    inline int32_t ResolveCrashProgress(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x5279D0, this, arg1);
    }

    // 0x527B30 | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    inline int32_t RegisterFinish(class mmPlayerRecord arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmPlayerData, class mmPlayerRecord, int32_t, int32_t>>(
            0x527B30, this, arg1, arg2, arg3);
    }

    // 0x527BB0 | ?Reset@mmPlayerData@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerData>>(0x527BB0, this);
    }

    // 0x527C30 | ?SetCity@mmPlayerData@@QAEXPAD@Z
    inline void SetCity(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x527C30, this, arg1);
    }

    // 0x527C70 | ?GetCity@mmPlayerData@@QAEPADXZ
    inline char* GetCity()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x527C70, this);
    }

    // 0x527C80 | ?SetName@mmPlayerData@@QAEXPAD@Z
    inline void SetName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x527C80, this, arg1);
    }

    // 0x527CC0 | ?GetName@mmPlayerData@@QAEPADXZ
    inline char* GetName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x527CC0, this);
    }

    // 0x527CD0 | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    inline void SetNetName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x527CD0, this, arg1);
    }

    // 0x527D10 | ?GetNetName@mmPlayerData@@QAEPADXZ
    inline char* GetNetName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x527D10, this);
    }

    // 0x527D20 | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    inline void SetFileName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x527D20, this, arg1);
    }

    // 0x527D60 | ?GetFileName@mmPlayerData@@QAEPADXZ
    inline char* GetFileName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x527D60, this);
    }

    // 0x527D70 | ?Load@mmPlayerData@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x527D70, this, arg1);
    }

    // 0x527DA0 | ?Save@mmPlayerData@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x527DA0, this, arg1, arg2);
    }

    // 0x527E40 | ?ComputeCRC@mmPlayerData@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmPlayerData>>(0x527E40, this);
    }

    // 0x527EF0 | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x527EF0, this, arg1);
    }

    // 0x5280B0 | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x5280B0, this, arg1);
    }

    // 0x523850 | ??1mmPlayerData@@UAE@XZ
    inline ~mmPlayerData() override
    {
        stub<member_func_t<void, mmPlayerData>>(0x523850, this);
    }
};
