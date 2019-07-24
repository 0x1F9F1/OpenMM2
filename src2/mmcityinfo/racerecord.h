/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmcityinfo:racerecord

    0x5283E0 | public: __thiscall mmRecord::mmRecord(void) | ??0mmRecord@@QAE@XZ
    0x528430 | public: virtual __thiscall mmRecord::~mmRecord(void) | ??1mmRecord@@UAE@XZ
    0x528440 | public: void __thiscall mmRecord::Reset(void) | ?Reset@mmRecord@@QAEXXZ
    0x528480 | public: float __thiscall mmRecord::GetTime(void) | ?GetTime@mmRecord@@QAEMXZ
    0x528490 | public: char * __thiscall mmRecord::GetCarName(void) | ?GetCarName@mmRecord@@QAEPADXZ
    0x5284A0 | public: char * __thiscall mmRecord::GetName(void) | ?GetName@mmRecord@@QAEPADXZ
    0x5284B0 | public: int __thiscall mmRecord::GetPassed(void) | ?GetPassed@mmRecord@@QAEHXZ
    0x5284C0 | public: int __thiscall mmRecord::GetScore(void) | ?GetScore@mmRecord@@QAEHXZ
    0x5284D0 | public: void __thiscall mmRecord::SetTime(float) | ?SetTime@mmRecord@@QAEXM@Z
    0x5284E0 | public: void __thiscall mmRecord::SetCarName(char *) | ?SetCarName@mmRecord@@QAEXPAD@Z
    0x528500 | public: void __thiscall mmRecord::SetName(char *) | ?SetName@mmRecord@@QAEXPAD@Z
    0x528540 | public: void __thiscall mmRecord::SetPassed(int) | ?SetPassed@mmRecord@@QAEXH@Z
    0x528560 | public: void __thiscall mmRecord::SetScore(int) | ?SetScore@mmRecord@@QAEXH@Z
    0x528570 | public: void __thiscall mmRecord::operator=(class mmRecord &) | ??4mmRecord@@QAEXAAV0@@Z
    0x528600 | public: int __thiscall mmRecord::SaveBinary(class Stream *) | ?SaveBinary@mmRecord@@QAEHPAVStream@@@Z
    0x528680 | public: int __thiscall mmRecord::LoadBinary(class Stream *) | ?LoadBinary@mmRecord@@QAEHPAVStream@@@Z
    0x528700 | public: unsigned int __thiscall mmRecord::ComputeCRC(void) | ?ComputeCRC@mmRecord@@QAEIXZ
    0x6B1CD0 | public: static int mmRecord::SizeOf | ?SizeOf@mmRecord@@2HA
*/

class mmRecord : mmInfoBase
{
public:
    // mmRecord::`vftable' @ 0x5B5210

    // 0x5283E0 | ??0mmRecord@@QAE@XZ
    inline mmRecord()
    {
        stub<member_func_t<void, mmRecord>>(0x5283E0, this);
    }

    // 0x528440 | ?Reset@mmRecord@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmRecord>>(0x528440, this);
    }

    // 0x528480 | ?GetTime@mmRecord@@QAEMXZ
    inline float GetTime()
    {
        return stub<member_func_t<float, mmRecord>>(0x528480, this);
    }

    // 0x528490 | ?GetCarName@mmRecord@@QAEPADXZ
    inline char* GetCarName()
    {
        return stub<member_func_t<char*, mmRecord>>(0x528490, this);
    }

    // 0x5284A0 | ?GetName@mmRecord@@QAEPADXZ
    inline char* GetName()
    {
        return stub<member_func_t<char*, mmRecord>>(0x5284A0, this);
    }

    // 0x5284B0 | ?GetPassed@mmRecord@@QAEHXZ
    inline int32_t GetPassed()
    {
        return stub<member_func_t<int32_t, mmRecord>>(0x5284B0, this);
    }

    // 0x5284C0 | ?GetScore@mmRecord@@QAEHXZ
    inline int32_t GetScore()
    {
        return stub<member_func_t<int32_t, mmRecord>>(0x5284C0, this);
    }

    // 0x5284D0 | ?SetTime@mmRecord@@QAEXM@Z
    inline void SetTime(float arg1)
    {
        return stub<member_func_t<void, mmRecord, float>>(0x5284D0, this, arg1);
    }

    // 0x5284E0 | ?SetCarName@mmRecord@@QAEXPAD@Z
    inline void SetCarName(char* arg1)
    {
        return stub<member_func_t<void, mmRecord, char*>>(0x5284E0, this, arg1);
    }

    // 0x528500 | ?SetName@mmRecord@@QAEXPAD@Z
    inline void SetName(char* arg1)
    {
        return stub<member_func_t<void, mmRecord, char*>>(0x528500, this, arg1);
    }

    // 0x528540 | ?SetPassed@mmRecord@@QAEXH@Z
    inline void SetPassed(int32_t arg1)
    {
        return stub<member_func_t<void, mmRecord, int32_t>>(0x528540, this, arg1);
    }

    // 0x528560 | ?SetScore@mmRecord@@QAEXH@Z
    inline void SetScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmRecord, int32_t>>(0x528560, this, arg1);
    }

    // 0x528570 | ??4mmRecord@@QAEXAAV0@@Z
    inline void operator=(class mmRecord& arg1)
    {
        return stub<member_func_t<void, mmRecord, class mmRecord&>>(0x528570, this, arg1);
    }

    // 0x528600 | ?SaveBinary@mmRecord@@QAEHPAVStream@@@Z
    inline int32_t SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmRecord, class Stream*>>(0x528600, this, arg1);
    }

    // 0x528680 | ?LoadBinary@mmRecord@@QAEHPAVStream@@@Z
    inline int32_t LoadBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmRecord, class Stream*>>(0x528680, this, arg1);
    }

    // 0x528700 | ?ComputeCRC@mmRecord@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmRecord>>(0x528700, this);
    }

    // 0x6B1CD0 | ?SizeOf@mmRecord@@2HA
    static inline extern_var(0x6B1CD0, int32_t, SizeOf);

    // 0x528430 | ??1mmRecord@@UAE@XZ
    inline ~mmRecord() override
    {
        stub<member_func_t<void, mmRecord>>(0x528430, this);
    }
};
