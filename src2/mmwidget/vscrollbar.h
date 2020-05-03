/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "textfield.h"

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

class UIVScrollBar : public uiWidget
{
    // const UIVScrollBar::`vftable' @ 0x5B3ACC

public:
    // 0x4F0300 | ??0UIVScrollBar@@QAE@XZ
    UIVScrollBar();

    // 0x4F0C90 | ??_GUIVScrollBar@@UAEPAXI@Z
    // 0x4F03A0 | ??1UIVScrollBar@@UAE@XZ
    ~UIVScrollBar() override;

    // 0x4F08C0 | ?Action@UIVScrollBar@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4F0B20 | ?Cull@UIVScrollBar@@UAEXXZ
    void Cull() override;

    // 0x4F06B0 | ?Dec@UIVScrollBar@@QAEMXZ
    f32 Dec();

    // 0x4F0D00 | ?Disable@UIVScrollBar@@UAEXXZ
    void Disable() override;

    // 0x4F0CE0 | ?Enable@UIVScrollBar@@UAEXXZ
    void Enable() override;

    // 0x4F0990 | ?EvalMouseXY@UIVScrollBar@@QAEXMM@Z
    void EvalMouseXY(f32 arg1, f32 arg2);

    // 0x4F0650 | ?Inc@UIVScrollBar@@QAEMXZ
    f32 Inc();

    // 0x4F0430 | ?Init@UIVScrollBar@@QAEXMMMMHMMPAHVdatCallback@@H@Z
    void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5, f32 arg6, f32 arg7, i32* arg8, class datCallback arg9,
        i32 arg10);

    // 0x4F04A0 | ?LoadBitmap@UIVScrollBar@@QAEXXZ
    void LoadBitmap();

    // 0x4F05C0 | ?SetHotSpots@UIVScrollBar@@QAEXXZ
    void SetHotSpots();

    // 0x4F0CC0 | ?SetPosition@UIVScrollBar@@UAEXMM@Z
    void SetPosition(f32 arg1, f32 arg2) override;

    // 0x4F0770 | ?SetRange@UIVScrollBar@@QAEXMM@Z
    void SetRange(f32 arg1, f32 arg2);

    // 0x4F0710 | ?SetStep@UIVScrollBar@@QAEXHM@Z
    void SetStep(i32 arg1, f32 arg2);

    // 0x4F07D0 | ?SetTrough@UIVScrollBar@@QAEXMM@Z
    void SetTrough(f32 arg1, f32 arg2);

    // 0x4F0870 | ?Switch@UIVScrollBar@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4F0850 | ?Update@UIVScrollBar@@UAEXXZ
    void Update() override;
};

check_size(UIVScrollBar, 0xFC);
