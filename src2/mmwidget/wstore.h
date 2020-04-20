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
    inline WArray()
    {
        stub<member_func_t<void, WArray>>(0x4E74D0, this);
    }

    // 0x4E74E0 | ??1WArray@@QAE@XZ
    inline ~WArray()
    {
        stub<member_func_t<void, WArray>>(0x4E74E0, this);
    }

    // 0x4E74F0 | ?Init@WArray@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, WArray, int32_t>>(0x4E74F0, this, arg1);
    }

    // 0x4E7530 | ?Write@WArray@@QAEXPAD@Z
    inline void Write(char* arg1)
    {
        return stub<member_func_t<void, WArray, char*>>(0x4E7530, this, arg1);
    }

    // 0x4E75F0 | ?DumpMenu@WArray@@QAEXPAVStream@@PAVUIMenu@@@Z
    inline void DumpMenu(class Stream* arg1, class UIMenu* arg2)
    {
        return stub<member_func_t<void, WArray, class Stream*, class UIMenu*>>(0x4E75F0, this, arg1, arg2);
    }

    // 0x4E7830 | ?Flush@WArray@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, WArray>>(0x4E7830, this);
    }

    // 0x4E7840 | ?Read@WArray@@QAEXPAD@Z
    inline void Read(char* arg1)
    {
        return stub<member_func_t<void, WArray, char*>>(0x4E7840, this, arg1);
    }

    // 0x4E7A00 | ?AddWidgetData@WArray@@QAEXHHAAVVector4@@PAD@Z
    inline void AddWidgetData(int32_t arg1, int32_t arg2, class Vector4& arg3, char* arg4)
    {
        return stub<member_func_t<void, WArray, int32_t, int32_t, class Vector4&, char*>>(
            0x4E7A00, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E7A60 | ?RetrieveWidgetData@WArray@@QAEHHHAAM000@Z
    inline int32_t RetrieveWidgetData(int32_t arg1, int32_t arg2, float& arg3, float& arg4, float& arg5, float& arg6)
    {
        return stub<member_func_t<int32_t, WArray, int32_t, int32_t, float&, float&, float&, float&>>(
            0x4E7A60, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
