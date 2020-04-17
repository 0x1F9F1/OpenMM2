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
    mminput:io

    0x52EEB0 | public: __thiscall mmIO::mmIO(void) | ??0mmIO@@QAE@XZ
    0x52EED0 | public: __thiscall mmIO::~mmIO(void) | ??1mmIO@@QAE@XZ
    0x52EEE0 | public: void __thiscall mmIO::Clear(void) | ?Clear@mmIO@@QAEXXZ
    0x52EF00 | public: void __thiscall mmIO::Init(char *,int,long) | ?Init@mmIO@@QAEXPADHJ@Z
    0x52EF60 | public: void __thiscall mmIO::InitDev(int,__int64,int,int,int) | ?InitDev@mmIO@@QAEXH_JHHH@Z
    0x52F010 | public: void __thiscall mmIO::Assign(int,int) | ?Assign@mmIO@@QAEXHH@Z
    0x52F070 | public: int __thiscall mmIO::operator==(union eqEvent *) | ??8mmIO@@QAEHPATeqEvent@@@Z
    0x52F0C0 | public: void __thiscall mmIO::GetDescription(char *) | ?GetDescription@mmIO@@QAEXPAD@Z
    0x52F110 | public: int __thiscall mmIO::Write(class Stream *) | ?Write@mmIO@@QAEHPAVStream@@@Z
    0x52F150 | public: int __thiscall mmIO::Read(class Stream *) | ?Read@mmIO@@QAEHPAVStream@@@Z
    0x52F220 | public: int __thiscall mmIO::CompareComponent(int) | ?CompareComponent@mmIO@@QAEHH@Z
    0x52F2F0 | public: void __thiscall mmIO::ForceSettingAcrossConfigs(int) | ?ForceSettingAcrossConfigs@mmIO@@QAEXH@Z
*/

class mmIO
{
public:
    // 0x52EDF0 | ??_EmmIO@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x52EEB0 | ??0mmIO@@QAE@XZ
    mmIO()
    {
        stub<member_func_t<void, mmIO>>(0x52EEB0, this);
    }

    // 0x52EED0 | ??1mmIO@@QAE@XZ
    ~mmIO()
    {
        stub<member_func_t<void, mmIO>>(0x52EED0, this);
    }

    // 0x52EEE0 | ?Clear@mmIO@@QAEXXZ
    void Clear()
    {
        return stub<member_func_t<void, mmIO>>(0x52EEE0, this);
    }

    // 0x52EF00 | ?Init@mmIO@@QAEXPADHJ@Z
    void Init(char* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, mmIO, char*, i32, i32>>(0x52EF00, this, arg1, arg2, arg3);
    }

    // 0x52EF60 | ?InitDev@mmIO@@QAEXH_JHHH@Z
    void InitDev(i32 arg1, i64 arg2, i32 arg3, i32 arg4, i32 arg5)
    {
        return stub<member_func_t<void, mmIO, i32, i64, i32, i32, i32>>(0x52EF60, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x52F010 | ?Assign@mmIO@@QAEXHH@Z
    void Assign(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmIO, i32, i32>>(0x52F010, this, arg1, arg2);
    }

    // 0x52F070 | ??8mmIO@@QAEHPATeqEvent@@@Z
    i32 operator==(union eqEvent* arg1)
    {
        return stub<member_func_t<i32, mmIO, union eqEvent*>>(0x52F070, this, arg1);
    }

    // 0x52F0C0 | ?GetDescription@mmIO@@QAEXPAD@Z
    void GetDescription(char* arg1)
    {
        return stub<member_func_t<void, mmIO, char*>>(0x52F0C0, this, arg1);
    }

    // 0x52F110 | ?Write@mmIO@@QAEHPAVStream@@@Z
    i32 Write(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIO, class Stream*>>(0x52F110, this, arg1);
    }

    // 0x52F150 | ?Read@mmIO@@QAEHPAVStream@@@Z
    i32 Read(class Stream* arg1)
    {
        return stub<member_func_t<i32, mmIO, class Stream*>>(0x52F150, this, arg1);
    }

    // 0x52F220 | ?CompareComponent@mmIO@@QAEHH@Z
    i32 CompareComponent(i32 arg1)
    {
        return stub<member_func_t<i32, mmIO, i32>>(0x52F220, this, arg1);
    }

    // 0x52F2F0 | ?ForceSettingAcrossConfigs@mmIO@@QAEXH@Z
    void ForceSettingAcrossConfigs(i32 arg1)
    {
        return stub<member_func_t<void, mmIO, i32>>(0x52F2F0, this, arg1);
    }
};
