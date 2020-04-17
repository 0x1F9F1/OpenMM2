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
    mmcityinfo:miscdata

    0x524A30 | public: __thiscall mmMiscData::mmMiscData(void) | ??0mmMiscData@@QAE@XZ
    0x524AA0 | public: virtual __thiscall mmMiscData::~mmMiscData(void) | ??1mmMiscData@@UAE@XZ
    0x524B00 | public: void __thiscall mmMiscData::Reset(void) | ?Reset@mmMiscData@@QAEXXZ
    0x524B20 | public: int __thiscall mmMiscData::Open(char *) | ?Open@mmMiscData@@QAEHPAD@Z
    0x524C90 | public: int __thiscall mmMiscData::Close(void) | ?Close@mmMiscData@@QAEHXZ
    0x524CC0 | public: int __thiscall mmMiscData::Init(char *,int,int,int) | ?Init@mmMiscData@@QAEHPADHHH@Z
    0x524EF0 | private: long __thiscall mmMiscData::GetFileOffset(int,int,int,int) | ?GetFileOffset@mmMiscData@@AAEJHHHH@Z
    0x524F90 | public: class mmRecord __thiscall mmMiscData::GetRecord(int,int,int,int) | ?GetRecord@mmMiscData@@QAE?AVmmRecord@@HHHH@Z
    0x525120 | public: int __thiscall mmMiscData::NewRecord(int,char *,float,int,char *,int,int) | ?NewRecord@mmMiscData@@QAEHHPADMH0HH@Z
    public: virtual void * __thiscall mmMiscData::`vector deleting destructor'(unsigned int) | ??_EmmMiscData@@UAEPAXI@Z
    0x525450 | public: virtual void * __thiscall mmMiscData::`scalar deleting destructor'(unsigned int) | ??_GmmMiscData@@UAEPAXI@Z
    public: virtual void * __thiscall mmRecord::`vector deleting destructor'(unsigned int) | ??_EmmRecord@@UAEPAXI@Z
    0x525480 | public: virtual void * __thiscall mmRecord::`scalar deleting destructor'(unsigned int) | ??_GmmRecord@@UAEPAXI@Z
    0x5B5208 | const mmMiscData::`vftable' | ??_7mmMiscData@@6B@
    0x5B5210 | const mmRecord::`vftable' | ??_7mmRecord@@6B@
*/

struct mmMiscData
    : Base
    , mmInfoBase
{
public:
    // mmMiscData::`vftable' @ 0x5B5208

    // 0x524A30 | ??0mmMiscData@@QAE@XZ
    mmMiscData()
    {
        stub<member_func_t<void, mmMiscData>>(0x524A30, this);
    }

    // 0x524B00 | ?Reset@mmMiscData@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, mmMiscData>>(0x524B00, this);
    }

    // 0x524B20 | ?Open@mmMiscData@@QAEHPAD@Z
    i32 Open(char* arg1)
    {
        return stub<member_func_t<i32, mmMiscData, char*>>(0x524B20, this, arg1);
    }

    // 0x524C90 | ?Close@mmMiscData@@QAEHXZ
    i32 Close()
    {
        return stub<member_func_t<i32, mmMiscData>>(0x524C90, this);
    }

    // 0x524CC0 | ?Init@mmMiscData@@QAEHPADHHH@Z
    i32 Init(char* arg1, i32 arg2, i32 arg3, i32 arg4)
    {
        return stub<member_func_t<i32, mmMiscData, char*, i32, i32, i32>>(0x524CC0, this, arg1, arg2, arg3, arg4);
    }

    // 0x524EF0 | ?GetFileOffset@mmMiscData@@AAEJHHHH@Z
    i32 GetFileOffset(i32 arg1, i32 arg2, i32 arg3, i32 arg4)
    {
        return stub<member_func_t<i32, mmMiscData, i32, i32, i32, i32>>(0x524EF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x524F90 | ?GetRecord@mmMiscData@@QAE?AVmmRecord@@HHHH@Z
    class mmRecord GetRecord(i32 arg1, i32 arg2, i32 arg3, i32 arg4)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, i32, i32, i32, i32>>(
            0x524F90, this, arg1, arg2, arg3, arg4);
    }

    // 0x525120 | ?NewRecord@mmMiscData@@QAEHHPADMH0HH@Z
    i32 NewRecord(i32 arg1, char* arg2, f32 arg3, i32 arg4, char* arg5, i32 arg6, i32 arg7)
    {
        return stub<member_func_t<i32, mmMiscData, i32, char*, f32, i32, char*, i32, i32>>(
            0x525120, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x524AA0 | ??1mmMiscData@@UAE@XZ
    virtual ~mmMiscData()
    {
        stub<member_func_t<void, mmMiscData>>(0x524AA0, this);
    }
};
