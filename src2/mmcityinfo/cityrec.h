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

class mmPlayerRecord : mmInfoBase
{
public:
    // mmPlayerRecord::`vftable' @ 0x5B062C

    // 0x41AA70 | ??0mmPlayerRecord@@QAE@ABV0@@Z
    inline mmPlayerRecord(class mmPlayerRecord const& arg1)
    {
        stub<member_func_t<void, mmPlayerRecord, class mmPlayerRecord const&>>(0x41AA70, this, arg1);
    }

    // 0x528750 | ??0mmPlayerRecord@@QAE@XZ
    inline mmPlayerRecord()
    {
        stub<member_func_t<void, mmPlayerRecord>>(0x528750, this);
    }

    // 0x5287B0 | ?Reset@mmPlayerRecord@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerRecord>>(0x5287B0, this);
    }

    // 0x5287E0 | ??4mmPlayerRecord@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerRecord& arg1)
    {
        return stub<member_func_t<void, mmPlayerRecord, class mmPlayerRecord&>>(0x5287E0, this, arg1);
    }

    // 0x528830 | ??8mmPlayerRecord@@QAEHABV0@@Z
    inline int32_t operator==(class mmPlayerRecord const& arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerRecord, class mmPlayerRecord const&>>(0x528830, this, arg1);
    }

    // 0x5288C0 | ?ComputeCRC@mmPlayerRecord@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmPlayerRecord>>(0x5288C0, this);
    }

    // 0x528910 | ?SaveBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    inline int32_t SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerRecord, class Stream*>>(0x528910, this, arg1);
    }

    // 0x528990 | ?LoadBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    inline int32_t LoadBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerRecord, class Stream*>>(0x528990, this, arg1);
    }

    // 0x6B1CD4 | ?SizeOf@mmPlayerRecord@@2HA
    inline extern_var(0x6B1CD4, int32_t, SizeOf);

    // 0x5287A0 | ??1mmPlayerRecord@@UAE@XZ
    inline ~mmPlayerRecord() override
    {
        stub<member_func_t<void, mmPlayerRecord>>(0x5287A0, this);
    }
};

struct mmPlayerCityRecord : mmInfoBase
{
public:
    // mmPlayerCityRecord::`vftable' @ 0x5B5234

    // 0x528A10 | ??0mmPlayerCityRecord@@QAE@XZ
    inline mmPlayerCityRecord()
    {
        stub<member_func_t<void, mmPlayerCityRecord>>(0x528A10, this);
    }

    // 0x528A60 | ?Reset@mmPlayerCityRecord@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerCityRecord>>(0x528A60, this);
    }

    // 0x528A70 | ?ComputeCRC@mmPlayerCityRecord@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmPlayerCityRecord>>(0x528A70, this);
    }

    // 0x528B10 | ?InitCityRecord@mmPlayerCityRecord@@QAEXPADMHHHH@Z
    inline void InitCityRecord(char* arg1, float arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<void, mmPlayerCityRecord, char*, float, int32_t, int32_t, int32_t, int32_t>>(
            0x528B10, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x528DB0 | ?Open@mmPlayerCityRecord@@QAEHPADM@Z
    inline int32_t Open(char* arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, char*, float>>(0x528DB0, this, arg1, arg2);
    }

    // 0x528FA0 | ?GetRecord@mmPlayerCityRecord@@QAEHAAVmmPlayerRecord@@HH@Z
    inline int32_t GetRecord(class mmPlayerRecord& arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, class mmPlayerRecord&, int32_t, int32_t>>(
            0x528FA0, this, arg1, arg2, arg3);
    }

    // 0x5290C0 | ?NewRecord@mmPlayerCityRecord@@QAEHVmmPlayerRecord@@HH@Z
    inline int32_t NewRecord(class mmPlayerRecord arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, class mmPlayerRecord, int32_t, int32_t>>(
            0x5290C0, this, arg1, arg2, arg3);
    }

    // 0x529360 | ?Close@mmPlayerCityRecord@@QAEHXZ
    inline int32_t Close()
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord>>(0x529360, this);
    }

    // 0x529490 | ?GetNumPassed@mmPlayerCityRecord@@QAEHH@Z
    inline int32_t GetNumPassed(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, int32_t>>(0x529490, this, arg1);
    }

    // 0x529580 | ?GetNumRaces@mmPlayerCityRecord@@QAEHH@Z
    inline int32_t GetNumRaces(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, int32_t>>(0x529580, this, arg1);
    }

    // 0x5295E0 | ?GetPassedMask@mmPlayerCityRecord@@QAEKH@Z
    inline uint32_t GetPassedMask(int32_t arg1)
    {
        return stub<member_func_t<uint32_t, mmPlayerCityRecord, int32_t>>(0x5295E0, this, arg1);
    }

    // 0x529640 | ?GetFileOffset@mmPlayerCityRecord@@AAEJHH@Z
    inline int32_t GetFileOffset(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerCityRecord, int32_t, int32_t>>(0x529640, this, arg1, arg2);
    }

    // 0x528220 | ??1mmPlayerCityRecord@@UAE@XZ
    inline ~mmPlayerCityRecord() override
    {
        stub<member_func_t<void, mmPlayerCityRecord>>(0x528220, this);
    }
};
