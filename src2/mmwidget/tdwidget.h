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
    mmwidget:tdwidget

    0x4F1810 | public: __thiscall TextDropWidget::TextDropWidget(void) | ??0TextDropWidget@@QAE@XZ
    0x4F18D0 | public: virtual __thiscall TextDropWidget::~TextDropWidget(void) | ??1TextDropWidget@@UAE@XZ
    0x4F1940 | public: void __thiscall TextDropWidget::Init(void *,float,float,float,float,float,class string,int) | ?Init@TextDropWidget@@QAEXPAXMMMMMVstring@@H@Z
    0x4F1A50 | public: int __thiscall TextDropWidget::GetCount(void) | ?GetCount@TextDropWidget@@QAEHXZ
    0x4F1A60 | public: void __thiscall TextDropWidget::SetString(class string) | ?SetString@TextDropWidget@@QAEXVstring@@@Z
    0x4F1B20 | public: int __thiscall TextDropWidget::SetValue(int) | ?SetValue@TextDropWidget@@QAEHH@Z
    0x4F1BC0 | public: int __thiscall TextDropWidget::SetHighlight(int) | ?SetHighlight@TextDropWidget@@QAEHH@Z
    0x4F1C30 | public: int __thiscall TextDropWidget::Inc(void) | ?Inc@TextDropWidget@@QAEHXZ
    0x4F1C40 | public: int __thiscall TextDropWidget::Dec(void) | ?Dec@TextDropWidget@@QAEHXZ
    0x4F1C50 | public: int __thiscall TextDropWidget::IncDrop(void) | ?IncDrop@TextDropWidget@@QAEHXZ
    0x4F1C80 | public: int __thiscall TextDropWidget::DecDrop(void) | ?DecDrop@TextDropWidget@@QAEHXZ
    0x4F1CB0 | public: int __thiscall TextDropWidget::Capture(float,float) | ?Capture@TextDropWidget@@QAEHMM@Z
    0x4F1CF0 | public: void __thiscall TextDropWidget::Switch(int,class Vector4 &) | ?Switch@TextDropWidget@@QAEXHAAVVector4@@@Z
    0x4F1D10 | public: virtual void __thiscall TextDropWidget::Update(void) | ?Update@TextDropWidget@@UAEXXZ
    0x4F1D20 | public: int __thiscall TextDropWidget::IsActive(void) | ?IsActive@TextDropWidget@@QAEHXZ
    0x4F1D30 | public: void __thiscall TextDropWidget::SetActive(int) | ?SetActive@TextDropWidget@@QAEXH@Z
    0x4F1D40 | public: void __thiscall TextDropWidget::SetDisabledMask(long) | ?SetDisabledMask@TextDropWidget@@QAEXJ@Z
    0x4F1D60 | public: long __thiscall TextDropWidget::GetDisabledMask(void) | ?GetDisabledMask@TextDropWidget@@QAEJXZ
    public: virtual void * __thiscall TextDropWidget::`vector deleting destructor'(unsigned int) | ??_ETextDropWidget@@UAEPAXI@Z
    0x4F1D70 | public: virtual void * __thiscall TextDropWidget::`scalar deleting destructor'(unsigned int) | ??_GTextDropWidget@@UAEPAXI@Z
    0x5B3B98 | const TextDropWidget::`vftable' | ??_7TextDropWidget@@6B@
*/

struct TextDropWidget : asNode
{
public:
    // TextDropWidget::`vftable' @ 0x5B3B98

    // 0x4F1810 | ??0TextDropWidget@@QAE@XZ
    inline TextDropWidget()
    {
        stub<member_func_t<void, TextDropWidget>>(0x4F1810, this);
    }

    // 0x4F1940 | ?Init@TextDropWidget@@QAEXPAXMMMMMVstring@@H@Z
    inline void Init(void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7, i32 arg8)
    {
        return stub<member_func_t<void, TextDropWidget, void*, f32, f32, f32, f32, f32, class string, i32>>(
            0x4F1940, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4F1A50 | ?GetCount@TextDropWidget@@QAEHXZ
    inline i32 GetCount()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1A50, this);
    }

    // 0x4F1A60 | ?SetString@TextDropWidget@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, TextDropWidget, class string>>(0x4F1A60, this, arg1);
    }

    // 0x4F1B20 | ?SetValue@TextDropWidget@@QAEHH@Z
    inline i32 SetValue(i32 arg1)
    {
        return stub<member_func_t<i32, TextDropWidget, i32>>(0x4F1B20, this, arg1);
    }

    // 0x4F1BC0 | ?SetHighlight@TextDropWidget@@QAEHH@Z
    inline i32 SetHighlight(i32 arg1)
    {
        return stub<member_func_t<i32, TextDropWidget, i32>>(0x4F1BC0, this, arg1);
    }

    // 0x4F1C30 | ?Inc@TextDropWidget@@QAEHXZ
    inline i32 Inc()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1C30, this);
    }

    // 0x4F1C40 | ?Dec@TextDropWidget@@QAEHXZ
    inline i32 Dec()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1C40, this);
    }

    // 0x4F1C50 | ?IncDrop@TextDropWidget@@QAEHXZ
    inline i32 IncDrop()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1C50, this);
    }

    // 0x4F1C80 | ?DecDrop@TextDropWidget@@QAEHXZ
    inline i32 DecDrop()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1C80, this);
    }

    // 0x4F1CB0 | ?Capture@TextDropWidget@@QAEHMM@Z
    inline i32 Capture(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, TextDropWidget, f32, f32>>(0x4F1CB0, this, arg1, arg2);
    }

    // 0x4F1CF0 | ?Switch@TextDropWidget@@QAEXHAAVVector4@@@Z
    inline void Switch(i32 arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, TextDropWidget, i32, class Vector4&>>(0x4F1CF0, this, arg1, arg2);
    }

    // 0x4F1D20 | ?IsActive@TextDropWidget@@QAEHXZ
    inline i32 IsActive()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1D20, this);
    }

    // 0x4F1D30 | ?SetActive@TextDropWidget@@QAEXH@Z
    inline void SetActive(i32 arg1)
    {
        return stub<member_func_t<void, TextDropWidget, i32>>(0x4F1D30, this, arg1);
    }

    // 0x4F1D40 | ?SetDisabledMask@TextDropWidget@@QAEXJ@Z
    inline void SetDisabledMask(i32 arg1)
    {
        return stub<member_func_t<void, TextDropWidget, i32>>(0x4F1D40, this, arg1);
    }

    // 0x4F1D60 | ?GetDisabledMask@TextDropWidget@@QAEJXZ
    inline i32 GetDisabledMask()
    {
        return stub<member_func_t<i32, TextDropWidget>>(0x4F1D60, this);
    }

    // 0x4F18D0 | ??1TextDropWidget@@UAE@XZ
    inline ~TextDropWidget() override
    {
        stub<member_func_t<void, TextDropWidget>>(0x4F18D0, this);
    }

    // 0x4F1D10 | ?Update@TextDropWidget@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, TextDropWidget>>(0x4F1D10, this);
    }
};
