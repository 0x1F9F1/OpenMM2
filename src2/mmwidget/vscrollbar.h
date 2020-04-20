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
    mmwidget:vscrollbar

    0x4F0300 | public: __thiscall UIVScrollBar::UIVScrollBar(void) | ??0UIVScrollBar@@QAE@XZ
    0x4F03A0 | public: virtual __thiscall UIVScrollBar::~UIVScrollBar(void) | ??1UIVScrollBar@@UAE@XZ
    0x4F0430 | public: void __thiscall UIVScrollBar::Init(float,float,float,float,int,float,float,int *,class datCallback,int) | ?Init@UIVScrollBar@@QAEXMMMMHMMPAHVdatCallback@@H@Z
    0x4F04A0 | public: void __thiscall UIVScrollBar::LoadBitmap(void) | ?LoadBitmap@UIVScrollBar@@QAEXXZ
    0x4F05C0 | public: void __thiscall UIVScrollBar::SetHotSpots(void) | ?SetHotSpots@UIVScrollBar@@QAEXXZ
    0x4F0650 | public: float __thiscall UIVScrollBar::Inc(void) | ?Inc@UIVScrollBar@@QAEMXZ
    0x4F06B0 | public: float __thiscall UIVScrollBar::Dec(void) | ?Dec@UIVScrollBar@@QAEMXZ
    0x4F0710 | public: void __thiscall UIVScrollBar::SetStep(int,float) | ?SetStep@UIVScrollBar@@QAEXHM@Z
    0x4F0770 | public: void __thiscall UIVScrollBar::SetRange(float,float) | ?SetRange@UIVScrollBar@@QAEXMM@Z
    0x4F07D0 | public: void __thiscall UIVScrollBar::SetTrough(float,float) | ?SetTrough@UIVScrollBar@@QAEXMM@Z
    0x4F0850 | public: virtual void __thiscall UIVScrollBar::Update(void) | ?Update@UIVScrollBar@@UAEXXZ
    0x4F0870 | public: virtual void __thiscall UIVScrollBar::Switch(int) | ?Switch@UIVScrollBar@@UAEXH@Z
    0x4F08C0 | public: virtual void __thiscall UIVScrollBar::Action(union eqEvent) | ?Action@UIVScrollBar@@UAEXTeqEvent@@@Z
    0x4F0990 | public: void __thiscall UIVScrollBar::EvalMouseXY(float,float) | ?EvalMouseXY@UIVScrollBar@@QAEXMM@Z
    0x4F0B20 | public: virtual void __thiscall UIVScrollBar::Cull(void) | ?Cull@UIVScrollBar@@UAEXXZ
    0x4F0C90 | public: virtual void * __thiscall UIVScrollBar::`scalar deleting destructor'(unsigned int) | ??_GUIVScrollBar@@UAEPAXI@Z
    public: virtual void * __thiscall UIVScrollBar::`vector deleting destructor'(unsigned int) | ??_EUIVScrollBar@@UAEPAXI@Z
    0x4F0CC0 | public: virtual void __thiscall UIVScrollBar::SetPosition(float,float) | ?SetPosition@UIVScrollBar@@UAEXMM@Z
    0x4F0CE0 | public: virtual void __thiscall UIVScrollBar::Enable(void) | ?Enable@UIVScrollBar@@UAEXXZ
    0x4F0D00 | public: virtual void __thiscall UIVScrollBar::Disable(void) | ?Disable@UIVScrollBar@@UAEXXZ
    0x5B3ACC | const UIVScrollBar::`vftable' | ??_7UIVScrollBar@@6B@
*/

class UIVScrollBar : uiWidget
{
public:
    // UIVScrollBar::`vftable' @ 0x5B3ACC

    // 0x4F0300 | ??0UIVScrollBar@@QAE@XZ
    inline UIVScrollBar()
    {
        stub<member_func_t<void, UIVScrollBar>>(0x4F0300, this);
    }

    // 0x4F0430 | ?Init@UIVScrollBar@@QAEXMMMMHMMPAHVdatCallback@@H@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, float arg6, float arg7,
        int32_t* arg8, class datCallback arg9, int32_t arg10)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float, float, float, int32_t, float, float, int32_t*,
            class datCallback, int32_t>>(0x4F0430, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4F04A0 | ?LoadBitmap@UIVScrollBar@@QAEXXZ
    inline void LoadBitmap()
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F04A0, this);
    }

    // 0x4F05C0 | ?SetHotSpots@UIVScrollBar@@QAEXXZ
    inline void SetHotSpots()
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F05C0, this);
    }

    // 0x4F0650 | ?Inc@UIVScrollBar@@QAEMXZ
    inline float Inc()
    {
        return stub<member_func_t<float, UIVScrollBar>>(0x4F0650, this);
    }

    // 0x4F06B0 | ?Dec@UIVScrollBar@@QAEMXZ
    inline float Dec()
    {
        return stub<member_func_t<float, UIVScrollBar>>(0x4F06B0, this);
    }

    // 0x4F0710 | ?SetStep@UIVScrollBar@@QAEXHM@Z
    inline void SetStep(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, int32_t, float>>(0x4F0710, this, arg1, arg2);
    }

    // 0x4F0770 | ?SetRange@UIVScrollBar@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4F0770, this, arg1, arg2);
    }

    // 0x4F07D0 | ?SetTrough@UIVScrollBar@@QAEXMM@Z
    inline void SetTrough(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4F07D0, this, arg1, arg2);
    }

    // 0x4F0990 | ?EvalMouseXY@UIVScrollBar@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4F0990, this, arg1, arg2);
    }

    // 0x4F03A0 | ??1UIVScrollBar@@UAE@XZ
    inline ~UIVScrollBar() override
    {
        stub<member_func_t<void, UIVScrollBar>>(0x4F03A0, this);
    }

    // 0x4F0B20 | ?Cull@UIVScrollBar@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F0B20, this);
    }

    // 0x4F0850 | ?Update@UIVScrollBar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F0850, this);
    }

    // 0x4F0D00 | ?Disable@UIVScrollBar@@UAEXXZ
    inline void Disable() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F0D00, this);
    }

    // 0x4F0CE0 | ?Enable@UIVScrollBar@@UAEXXZ
    inline void Enable() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4F0CE0, this);
    }

    // 0x4F08C0 | ?Action@UIVScrollBar@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIVScrollBar, union eqEvent>>(0x4F08C0, this, arg1);
    }

    // 0x4F0870 | ?Switch@UIVScrollBar@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIVScrollBar, int32_t>>(0x4F0870, this, arg1);
    }

    // 0x4F0CC0 | ?SetPosition@UIVScrollBar@@UAEXMM@Z
    inline void SetPosition(float arg1, float arg2) override
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4F0CC0, this, arg1, arg2);
    }
};
