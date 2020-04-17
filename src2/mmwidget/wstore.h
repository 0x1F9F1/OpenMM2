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
    mmwidget:wstore

    0x4E74D0 | public: __thiscall WArray::WArray(void) | ??0WArray@@QAE@XZ
    0x4E74E0 | public: __thiscall WArray::~WArray(void) | ??1WArray@@QAE@XZ
    0x4E74F0 | public: void __thiscall WArray::Init(int) | ?Init@WArray@@QAEXH@Z
    0x4E7530 | public: void __thiscall WArray::Write(char *) | ?Write@WArray@@QAEXPAD@Z
    0x4E75F0 | public: void __thiscall WArray::DumpMenu(class Stream *,class UIMenu *) | ?DumpMenu@WArray@@QAEXPAVStream@@PAVUIMenu@@@Z
    0x4E7830 | public: void __thiscall WArray::Flush(void) | ?Flush@WArray@@QAEXXZ
    0x4E7840 | public: void __thiscall WArray::Read(char *) | ?Read@WArray@@QAEXPAD@Z
    0x4E7A00 | public: void __thiscall WArray::AddWidgetData(int,int,class Vector4 &,char *) | ?AddWidgetData@WArray@@QAEXHHAAVVector4@@PAD@Z
    0x4E7A60 | public: int __thiscall WArray::RetrieveWidgetData(int,int,float &,float &,float &,float &) | ?RetrieveWidgetData@WArray@@QAEHHHAAM000@Z
*/

struct WArray
{
public:
    // 0x4E74D0 | ??0WArray@@QAE@XZ
    WArray()
    {
        stub<member_func_t<void, WArray>>(0x4E74D0, this);
    }

    // 0x4E74E0 | ??1WArray@@QAE@XZ
    ~WArray()
    {
        stub<member_func_t<void, WArray>>(0x4E74E0, this);
    }

    // 0x4E74F0 | ?Init@WArray@@QAEXH@Z
    void Init(i32 arg1)
    {
        return stub<member_func_t<void, WArray, i32>>(0x4E74F0, this, arg1);
    }

    // 0x4E7530 | ?Write@WArray@@QAEXPAD@Z
    void Write(char* arg1)
    {
        return stub<member_func_t<void, WArray, char*>>(0x4E7530, this, arg1);
    }

    // 0x4E75F0 | ?DumpMenu@WArray@@QAEXPAVStream@@PAVUIMenu@@@Z
    void DumpMenu(class Stream* arg1, class UIMenu* arg2)
    {
        return stub<member_func_t<void, WArray, class Stream*, class UIMenu*>>(0x4E75F0, this, arg1, arg2);
    }

    // 0x4E7830 | ?Flush@WArray@@QAEXXZ
    void Flush()
    {
        return stub<member_func_t<void, WArray>>(0x4E7830, this);
    }

    // 0x4E7840 | ?Read@WArray@@QAEXPAD@Z
    void Read(char* arg1)
    {
        return stub<member_func_t<void, WArray, char*>>(0x4E7840, this, arg1);
    }

    // 0x4E7A00 | ?AddWidgetData@WArray@@QAEXHHAAVVector4@@PAD@Z
    void AddWidgetData(i32 arg1, i32 arg2, class Vector4& arg3, char* arg4)
    {
        return stub<member_func_t<void, WArray, i32, i32, class Vector4&, char*>>(
            0x4E7A00, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E7A60 | ?RetrieveWidgetData@WArray@@QAEHHHAAM000@Z
    i32 RetrieveWidgetData(i32 arg1, i32 arg2, f32& arg3, f32& arg4, f32& arg5, f32& arg6)
    {
        return stub<member_func_t<i32, WArray, i32, i32, f32&, f32&, f32&, f32&>>(
            0x4E7A60, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
