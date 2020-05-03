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
    mmcityinfo:cityrec

    0x528750 | public: __thiscall mmPlayerRecord::mmPlayerRecord(void) | ??0mmPlayerRecord@@QAE@XZ
    0x5287A0 | public: virtual __thiscall mmPlayerRecord::~mmPlayerRecord(void) | ??1mmPlayerRecord@@UAE@XZ
    0x5287B0 | public: void __thiscall mmPlayerRecord::Reset(void) | ?Reset@mmPlayerRecord@@QAEXXZ
    0x5287E0 | public: void __thiscall mmPlayerRecord::operator=(class mmPlayerRecord &) | ??4mmPlayerRecord@@QAEXAAV0@@Z
    0x528830 | public: int __thiscall mmPlayerRecord::operator==(class mmPlayerRecord const &) | ??8mmPlayerRecord@@QAEHABV0@@Z
    0x5288C0 | public: unsigned int __thiscall mmPlayerRecord::ComputeCRC(void) | ?ComputeCRC@mmPlayerRecord@@QAEIXZ
    0x528910 | public: int __thiscall mmPlayerRecord::SaveBinary(class Stream *) | ?SaveBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    0x528990 | public: int __thiscall mmPlayerRecord::LoadBinary(class Stream *) | ?LoadBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    0x528A10 | public: __thiscall mmPlayerCityRecord::mmPlayerCityRecord(void) | ??0mmPlayerCityRecord@@QAE@XZ
    0x528A60 | public: void __thiscall mmPlayerCityRecord::Reset(void) | ?Reset@mmPlayerCityRecord@@QAEXXZ
    0x528A70 | public: unsigned int __thiscall mmPlayerCityRecord::ComputeCRC(void) | ?ComputeCRC@mmPlayerCityRecord@@QAEIXZ
    0x528B10 | public: void __thiscall mmPlayerCityRecord::InitCityRecord(char *,float,int,int,int,int) | ?InitCityRecord@mmPlayerCityRecord@@QAEXPADMHHHH@Z
    0x528DB0 | public: int __thiscall mmPlayerCityRecord::Open(char *,float) | ?Open@mmPlayerCityRecord@@QAEHPADM@Z
    0x528FA0 | public: int __thiscall mmPlayerCityRecord::GetRecord(class mmPlayerRecord &,int,int) | ?GetRecord@mmPlayerCityRecord@@QAEHAAVmmPlayerRecord@@HH@Z
    0x5290C0 | public: int __thiscall mmPlayerCityRecord::NewRecord(class mmPlayerRecord,int,int) | ?NewRecord@mmPlayerCityRecord@@QAEHVmmPlayerRecord@@HH@Z
    0x529360 | public: int __thiscall mmPlayerCityRecord::Close(void) | ?Close@mmPlayerCityRecord@@QAEHXZ
    0x529490 | public: int __thiscall mmPlayerCityRecord::GetNumPassed(int) | ?GetNumPassed@mmPlayerCityRecord@@QAEHH@Z
    0x529580 | public: int __thiscall mmPlayerCityRecord::GetNumRaces(int) | ?GetNumRaces@mmPlayerCityRecord@@QAEHH@Z
    0x5295E0 | public: unsigned long __thiscall mmPlayerCityRecord::GetPassedMask(int) | ?GetPassedMask@mmPlayerCityRecord@@QAEKH@Z
    0x529640 | private: long __thiscall mmPlayerCityRecord::GetFileOffset(int,int) | ?GetFileOffset@mmPlayerCityRecord@@AAEJHH@Z
    public: virtual void * __thiscall mmPlayerCityRecord::`vector deleting destructor'(unsigned int) | ??_EmmPlayerCityRecord@@UAEPAXI@Z
    0x5296F0 | public: virtual void * __thiscall mmPlayerCityRecord::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerCityRecord@@UAEPAXI@Z
    0x5B5234 | const mmPlayerCityRecord::`vftable' | ??_7mmPlayerCityRecord@@6B@
    0x6B1CD4 | public: static int mmPlayerRecord::SizeOf | ?SizeOf@mmPlayerRecord@@2HA
*/

class mmPlayerRecord : public mmInfoBase
{
    // const mmPlayerRecord::`vftable' @ 0x5B062C

public:
    // 0x528750 | ??0mmPlayerRecord@@QAE@XZ
    mmPlayerRecord();

    // 0x41AA70 | ??0mmPlayerRecord@@QAE@ABV0@@Z
    mmPlayerRecord(class mmPlayerRecord const& arg1);

    // 0x41AB20 | ??_GmmPlayerRecord@@UAEPAXI@Z
    // 0x5287A0 | ??1mmPlayerRecord@@UAE@XZ
    ~mmPlayerRecord() override;

    // 0x5287E0 | ??4mmPlayerRecord@@QAEXAAV0@@Z
    void operator=(class mmPlayerRecord& arg1);

    // 0x528830 | ??8mmPlayerRecord@@QAEHABV0@@Z
    i32 operator==(class mmPlayerRecord const& arg1);

    // 0x5288C0 | ?ComputeCRC@mmPlayerRecord@@QAEIXZ
    u32 ComputeCRC();

    // 0x528990 | ?LoadBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    i32 LoadBinary(class Stream* arg1);

    // 0x5287B0 | ?Reset@mmPlayerRecord@@QAEXXZ
    void Reset();

    // 0x528910 | ?SaveBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    i32 SaveBinary(class Stream* arg1);

    // 0x6B1CD4 | ?SizeOf@mmPlayerRecord@@2HA
    static inline extern_var(0x6B1CD4, i32, SizeOf);
};

check_size(mmPlayerRecord, 0x0);

struct mmPlayerCityRecord : mmInfoBase
{
    // const mmPlayerCityRecord::`vftable' @ 0x5B5234

public:
    // 0x528A10 | ??0mmPlayerCityRecord@@QAE@XZ
    mmPlayerCityRecord();

    // 0x5296F0 | ??_GmmPlayerCityRecord@@UAEPAXI@Z
    // 0x528220 | ??1mmPlayerCityRecord@@UAE@XZ
    ~mmPlayerCityRecord() override;

    // 0x529360 | ?Close@mmPlayerCityRecord@@QAEHXZ
    i32 Close();

    // 0x528A70 | ?ComputeCRC@mmPlayerCityRecord@@QAEIXZ
    u32 ComputeCRC();

    // 0x529490 | ?GetNumPassed@mmPlayerCityRecord@@QAEHH@Z
    i32 GetNumPassed(i32 arg1);

    // 0x529580 | ?GetNumRaces@mmPlayerCityRecord@@QAEHH@Z
    i32 GetNumRaces(i32 arg1);

    // 0x5295E0 | ?GetPassedMask@mmPlayerCityRecord@@QAEKH@Z
    u32 GetPassedMask(i32 arg1);

    // 0x528FA0 | ?GetRecord@mmPlayerCityRecord@@QAEHAAVmmPlayerRecord@@HH@Z
    i32 GetRecord(class mmPlayerRecord& arg1, i32 arg2, i32 arg3);

    // 0x528B10 | ?InitCityRecord@mmPlayerCityRecord@@QAEXPADMHHHH@Z
    void InitCityRecord(char* arg1, f32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6);

    // 0x5290C0 | ?NewRecord@mmPlayerCityRecord@@QAEHVmmPlayerRecord@@HH@Z
    i32 NewRecord(class mmPlayerRecord arg1, i32 arg2, i32 arg3);

    // 0x528DB0 | ?Open@mmPlayerCityRecord@@QAEHPADM@Z
    i32 Open(char* arg1, f32 arg2);

    // 0x528A60 | ?Reset@mmPlayerCityRecord@@QAEXXZ
    void Reset();

private:
    // 0x529640 | ?GetFileOffset@mmPlayerCityRecord@@AAEJHH@Z
    i32 GetFileOffset(i32 arg1, i32 arg2);
};

check_size(mmPlayerCityRecord, 0x0);
