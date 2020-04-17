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
    mminput:iodev

    0x52F3C0 | public: __thiscall mmIODev::mmIODev(void) | ??0mmIODev@@QAE@XZ
    0x52F400 | public: virtual __thiscall mmIODev::~mmIODev(void) | ??1mmIODev@@UAE@XZ
    0x52F410 | public: void __thiscall mmIODev::Init(int,__int64) | ?Init@mmIODev@@QAEXH_J@Z
    0x52F440 | public: void __thiscall mmIODev::Assign(int,int,int) | ?Assign@mmIODev@@QAEXHHH@Z
    0x52F570 | public: int __thiscall mmIODev::operator==(union eqEvent *) | ??8mmIODev@@QAEHPATeqEvent@@@Z
    0x52F5D0 | int __cdecl ConvertDItoString(int,char *,int) | ?ConvertDItoString@@YAHHPADH@Z
    0x52F630 | public: void __thiscall mmIODev::GetDescription(char *) | ?GetDescription@mmIODev@@QAEXPAD@Z
    0x52F8F0 | public: int __thiscall mmIODev::GetComponentType(int,int) | ?GetComponentType@mmIODev@@QAEHHH@Z
    0x52F950 | public: int __thiscall mmIODev::SanityCheckioType(int,int,int) | ?SanityCheckioType@mmIODev@@QAEHHHH@Z
    0x52F9D0 | public: void __thiscall mmIODev::Print(int) | ?Print@mmIODev@@QAEXH@Z
    0x52FAA0 | public: int __thiscall mmIODev::Write(class Stream *) | ?Write@mmIODev@@QAEHPAVStream@@@Z
    0x52FAF0 | public: int __thiscall mmIODev::WriteBinary(class Stream *) | ?WriteBinary@mmIODev@@QAEHPAVStream@@@Z
    0x52FB40 | public: int __thiscall mmIODev::Read(class Stream *) | ?Read@mmIODev@@QAEHPAVStream@@@Z
    0x52FB90 | public: int __thiscall mmIODev::ReadBinary(class Stream *) | ?ReadBinary@mmIODev@@QAEHPAVStream@@@Z
    0x52FBE0 | public: virtual void * __thiscall mmIODev::`scalar deleting destructor'(unsigned int) | ??_GmmIODev@@UAEPAXI@Z
    0x5B5294 | const mmIODev::`vftable' | ??_7mmIODev@@6B@
*/

// 0x52F5D0 | ?ConvertDItoString@@YAHHPADH@Z
inline i32 ConvertDItoString(i32 arg1, char* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, char*, i32>>(0x52F5D0, arg1, arg2, arg3);
}

class mmIODev : mmInfoBase
{
public:
    // mmIODev::`vftable' @ 0x5B5294

    // 0x52F3C0 | ??0mmIODev@@QAE@XZ
    mmIODev()
    {
        stub<member_func_t<void, mmIODev>>(0x52F3C0, this);
    }

    // 0x52F410 | ?Init@mmIODev@@QAEXH_J@Z
    void Init(i32 arg1, i64 arg2)
    {
        return stub<member_func_t<void, mmIODev, i32, i64>>(0x52F410, this, arg1, arg2);
    }

    // 0x52F440 | ?Assign@mmIODev@@QAEXHHH@Z
    void Assign(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, mmIODev, i32, i32, i32>>(0x52F440, this, arg1, arg2, arg3);
    }

    // 0x52F570 | ??8mmIODev@@QAEHPATeqEvent@@@Z
    i32 operator==(union eqEvent* arg1)
    {
        return stub<member_func_t<i32, mmIODev, union eqEvent*>>(0x52F570, this, arg1);
    }

    // 0x52F630 | ?GetDescription@mmIODev@@QAEXPAD@Z
    void GetDescription(char* arg1)
    {
        return stub<member_func_t<void, mmIODev, char*>>(0x52F630, this, arg1);
    }

    // 0x52F8F0 | ?GetComponentType@mmIODev@@QAEHHH@Z
    i32 GetComponentType(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmIODev, i32, i32>>(0x52F8F0, this, arg1, arg2);
    }

    // 0x52F950 | ?SanityCheckioType@mmIODev@@QAEHHHH@Z
    i32 SanityCheckioType(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<i32, mmIODev, i32, i32, i32>>(0x52F950, this, arg1, arg2, arg3);
    }

    // 0x52F9D0 | ?Print@mmIODev@@QAEXH@Z
    void Print(i32 arg1)
    {
        return stub<member_func_t<void, mmIODev, i32>>(0x52F9D0, this, arg1);
    }

    // 0x52FAA0 | ?Write@mmIODev@@QAEHPAVStream@@@Z
    i32 Write(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIODev, class Stream*>>(0x52FAA0, this, arg1);
    }

    // 0x52FAF0 | ?WriteBinary@mmIODev@@QAEHPAVStream@@@Z
    i32 WriteBinary(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIODev, class Stream*>>(0x52FAF0, this, arg1);
    }

    // 0x52FB40 | ?Read@mmIODev@@QAEHPAVStream@@@Z
    i32 Read(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIODev, class Stream*>>(0x52FB40, this, arg1);
    }

    // 0x52FB90 | ?ReadBinary@mmIODev@@QAEHPAVStream@@@Z
    i32 ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIODev, class Stream*>>(0x52FB90, this, arg1);
    }

    // 0x52F400 | ??1mmIODev@@UAE@XZ
    ~mmIODev() override
    {
        stub<member_func_t<void, mmIODev>>(0x52F400, this);
    }
};
