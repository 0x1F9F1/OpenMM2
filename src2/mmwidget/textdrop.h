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
    mmwidget:textdrop

    0x4E7C80 | public: __thiscall UITextDropdown::UITextDropdown(void) | ??0UITextDropdown@@QAE@XZ
    0x4E7D20 | public: virtual __thiscall UITextDropdown::~UITextDropdown(void) | ??1UITextDropdown@@UAE@XZ
    0x4E7DB0 | public: void __thiscall UITextDropdown::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,class datCallback,char *,class datCallback) | ?Init@UITextDropdown@@QAEXPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    0x4E8180 | public: virtual float __thiscall UITextDropdown::GetScreenHeight(void) | ?GetScreenHeight@UITextDropdown@@UAEMXZ
    0x4E8190 | public: void __thiscall UITextDropdown::SetPos(float,float) | ?SetPos@UITextDropdown@@QAEXMM@Z
    0x4E81A0 | public: void __thiscall UITextDropdown::AssignString(class string) | ?AssignString@UITextDropdown@@QAEXVstring@@@Z
    0x4E8250 | public: void __thiscall UITextDropdown::SetData(int *) | ?SetData@UITextDropdown@@QAEXPAH@Z
    0x4E8280 | public: virtual void __thiscall UITextDropdown::Update(void) | ?Update@UITextDropdown@@UAEXXZ
    0x4E82F0 | public: void __thiscall UITextDropdown::SetText(struct LocString *) | ?SetText@UITextDropdown@@QAEXPAULocString@@@Z
    0x4E8300 | public: virtual void __thiscall UITextDropdown::CaptureAction(union eqEvent) | ?CaptureAction@UITextDropdown@@UAEXTeqEvent@@@Z
    0x4E8570 | int __cdecl inRange(float,float,float) | ?inRange@@YAHMMM@Z
    0x4E85D0 | public: virtual void __thiscall UITextDropdown::Action(union eqEvent) | ?Action@UITextDropdown@@UAEXTeqEvent@@@Z
    0x4E8680 | public: virtual void __thiscall UITextDropdown::Switch(int) | ?Switch@UITextDropdown@@UAEXH@Z
    0x4E8710 | public: void __thiscall UITextDropdown::SetSliderFocus(int) | ?SetSliderFocus@UITextDropdown@@QAEXH@Z
    0x4E87C0 | public: int __thiscall UITextDropdown::GetValue(void) | ?GetValue@UITextDropdown@@QAEHXZ
    0x4E87D0 | public: int __thiscall UITextDropdown::SetValue(int) | ?SetValue@UITextDropdown@@QAEHH@Z
    0x4E8800 | public: void __thiscall UITextDropdown::SetDisabledMask(long) | ?SetDisabledMask@UITextDropdown@@QAEXJ@Z
    0x4E8820 | public: int __thiscall UITextDropdown::AnyEnabled(void) | ?AnyEnabled@UITextDropdown@@QAEHXZ
    0x4E8830 | public: virtual void __thiscall UITextDropdown::Cull(void) | ?Cull@UITextDropdown@@UAEXXZ
    public: virtual void * __thiscall UITextDropdown::`vector deleting destructor'(unsigned int) | ??_EUITextDropdown@@UAEPAXI@Z
    0x4E8890 | public: virtual void * __thiscall UITextDropdown::`scalar deleting destructor'(unsigned int) | ??_GUITextDropdown@@UAEPAXI@Z
    0x4E88C0 | public: static int __cdecl gfxPipeline::GetWidth(void) | ?GetWidth@gfxPipeline@@SAHXZ
    0x5B33E0 | const UITextDropdown::`vftable' | ??_7UITextDropdown@@6B@
*/

class UITextDropdown : public uiWidget
{
    // const UITextDropdown::`vftable' @ 0x5B33E0

public:
    // 0x4E7C80 | ??0UITextDropdown@@QAE@XZ
    UITextDropdown();

    // 0x4E8890 | ??_GUITextDropdown@@UAEPAXI@Z
    // 0x4E7D20 | ??1UITextDropdown@@UAE@XZ
    ~UITextDropdown() override;

    // 0x4E85D0 | ?Action@UITextDropdown@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4E8820 | ?AnyEnabled@UITextDropdown@@QAEHXZ
    i32 AnyEnabled();

    // 0x4E81A0 | ?AssignString@UITextDropdown@@QAEXVstring@@@Z
    void AssignString(class string arg1);

    // 0x4E8300 | ?CaptureAction@UITextDropdown@@UAEXTeqEvent@@@Z
    void CaptureAction(union eqEvent arg1) override;

    // 0x4E8830 | ?Cull@UITextDropdown@@UAEXXZ
    void Cull() override;

    // 0x4E8180 | ?GetScreenHeight@UITextDropdown@@UAEMXZ
    f32 GetScreenHeight() override;

    // 0x4E87C0 | ?GetValue@UITextDropdown@@QAEHXZ
    i32 GetValue();

    // 0x4E7DB0 | ?Init@UITextDropdown@@QAEXPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7, i32 arg8,
        i32 arg9, i32 arg10, class datCallback arg11, char* arg12, class datCallback arg13);

    // 0x4E8250 | ?SetData@UITextDropdown@@QAEXPAH@Z
    void SetData(i32* arg1);

    // 0x4E8800 | ?SetDisabledMask@UITextDropdown@@QAEXJ@Z
    void SetDisabledMask(i32 arg1);

    // 0x4E8190 | ?SetPos@UITextDropdown@@QAEXMM@Z
    void SetPos(f32 arg1, f32 arg2);

    // 0x4E8710 | ?SetSliderFocus@UITextDropdown@@QAEXH@Z
    void SetSliderFocus(i32 arg1);

    // 0x4E82F0 | ?SetText@UITextDropdown@@QAEXPAULocString@@@Z
    void SetText(struct LocString* arg1);

    // 0x4E87D0 | ?SetValue@UITextDropdown@@QAEHH@Z
    i32 SetValue(i32 arg1);

    // 0x4E8680 | ?Switch@UITextDropdown@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4E8280 | ?Update@UITextDropdown@@UAEXXZ
    void Update() override;
};

check_size(UITextDropdown, 0x100);

// 0x4E8570 | ?inRange@@YAHMMM@Z
i32 inRange(f32 arg1, f32 arg2, f32 arg3);
