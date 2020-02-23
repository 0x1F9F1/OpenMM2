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
    mmwidget:mstore

    0x4F0D20 | public: __thiscall MArray::MArray(void) | ??0MArray@@QAE@XZ
    0x4F0D30 | public: __thiscall MArray::~MArray(void) | ??1MArray@@QAE@XZ
    0x4F0D40 | public: void __thiscall MArray::Init(int) | ?Init@MArray@@QAEXH@Z
    0x4F0D80 | public: void __thiscall MArray::Write(char *) | ?Write@MArray@@QAEXPAD@Z
    0x4F0F30 | public: void __thiscall MArray::Flush(void) | ?Flush@MArray@@QAEXXZ
    0x4F0F40 | public: void __thiscall MArray::Read(char *) | ?Read@MArray@@QAEXPAD@Z
    0x4F10E0 | public: void __thiscall MArray::AddMenuData(int,class Vector4 &,char *) | ?AddMenuData@MArray@@QAEXHAAVVector4@@PAD@Z
    0x4F1130 | public: int __thiscall MArray::RetrieveMenuData(int,float &,float &,float &,float &) | ?RetrieveMenuData@MArray@@QAEHHAAM000@Z
*/

struct MArray
{
public:
    // 0x4F0D20 | ??0MArray@@QAE@XZ
    inline MArray()
    {
        stub<member_func_t<void, MArray>>(0x4F0D20, this);
    }

    // 0x4F0D30 | ??1MArray@@QAE@XZ
    inline ~MArray()
    {
        stub<member_func_t<void, MArray>>(0x4F0D30, this);
    }

    // 0x4F0D40 | ?Init@MArray@@QAEXH@Z
    inline void Init(i32 arg1)
    {
        return stub<member_func_t<void, MArray, i32>>(0x4F0D40, this, arg1);
    }

    // 0x4F0D80 | ?Write@MArray@@QAEXPAD@Z
    inline void Write(char* arg1)
    {
        return stub<member_func_t<void, MArray, char*>>(0x4F0D80, this, arg1);
    }

    // 0x4F0F30 | ?Flush@MArray@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, MArray>>(0x4F0F30, this);
    }

    // 0x4F0F40 | ?Read@MArray@@QAEXPAD@Z
    inline void Read(char* arg1)
    {
        return stub<member_func_t<void, MArray, char*>>(0x4F0F40, this, arg1);
    }

    // 0x4F10E0 | ?AddMenuData@MArray@@QAEXHAAVVector4@@PAD@Z
    inline void AddMenuData(i32 arg1, class Vector4& arg2, char* arg3)
    {
        return stub<member_func_t<void, MArray, i32, class Vector4&, char*>>(0x4F10E0, this, arg1, arg2, arg3);
    }

    // 0x4F1130 | ?RetrieveMenuData@MArray@@QAEHHAAM000@Z
    inline i32 RetrieveMenuData(i32 arg1, f32& arg2, f32& arg3, f32& arg4, f32& arg5)
    {
        return stub<member_func_t<i32, MArray, i32, f32&, f32&, f32&, f32&>>(
            0x4F1130, this, arg1, arg2, arg3, arg4, arg5);
    }
};
