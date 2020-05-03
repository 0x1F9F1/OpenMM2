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

#include "node/node.h"

/*
    mmwidget:textfield

    0x4E6690 | public: __thiscall UITextField::UITextField(void) | ??0UITextField@@QAE@XZ
    0x4E67B0 | public: virtual __thiscall UITextField::~UITextField(void) | ??1UITextField@@UAE@XZ
    0x4E6820 | public: void __thiscall UITextField::Init(struct LocString *,char *,float,float,float,float,int,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextField@@QAEXPAULocString@@PADMMMMHHHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E6B20 | public: void __thiscall UITextField::SetText(struct LocString *) | ?SetText@UITextField@@QAEXPAULocString@@@Z
    0x4E6B40 | public: void __thiscall UITextField::SetField(char *) | ?SetField@UITextField@@QAEXPAD@Z
    0x4E6BA0 | public: virtual void __thiscall UITextField::CaptureAction(union eqEvent) | ?CaptureAction@UITextField@@UAEXTeqEvent@@@Z
    0x4E6BB0 | public: virtual void __thiscall UITextField::Action(union eqEvent) | ?Action@UITextField@@UAEXTeqEvent@@@Z
    0x4E6C00 | public: void __thiscall UITextField::ClearField(void) | ?ClearField@UITextField@@QAEXXZ
    0x4E6C60 | public: void __thiscall UITextField::SetTextField(void) | ?SetTextField@UITextField@@QAEXXZ
    0x4E6CB0 | public: void __thiscall UITextField::ToggleField(int) | ?ToggleField@UITextField@@QAEXH@Z
    0x4E6E00 | public: virtual void __thiscall UITextField::Switch(int) | ?Switch@UITextField@@UAEXH@Z
    0x4E6EB0 | public: int __thiscall UITextField::IsValidChar(unsigned short) | ?IsValidChar@UITextField@@QAEHG@Z
    0x4E6F70 | public: void __thiscall UITextField::WmCharHandler(unsigned char) | ?WmCharHandler@UITextField@@QAEXE@Z
    0x4E70F0 | public: void __thiscall UITextField::KeyAction(union eqEvent *) | ?KeyAction@UITextField@@QAEXPATeqEvent@@@Z
    0x4E7200 | public: void __thiscall UITextField::SetCompositionWindow(void) | ?SetCompositionWindow@UITextField@@QAEXXZ
    0x4E72F0 | public: virtual void * __thiscall UITextField::`scalar deleting destructor'(unsigned int) | ??_GUITextField@@UAEPAXI@Z
    public: virtual void * __thiscall UITextField::`vector deleting destructor'(unsigned int) | ??_EUITextField@@UAEPAXI@Z
    0x4E7320 | public: virtual __thiscall uiWidget::~uiWidget(void) | ??1uiWidget@@UAE@XZ
    0x4E7330 | public: virtual void __thiscall uiWidget::Disable(void) | ?Disable@uiWidget@@UAEXXZ
    0x4E7340 | public: virtual void __thiscall uiWidget::Enable(void) | ?Enable@uiWidget@@UAEXXZ
    0x4E7350 | public: virtual void __thiscall uiWidget::TurnOn(void) | ?TurnOn@uiWidget@@UAEXXZ
    0x4E7370 | public: virtual void __thiscall uiWidget::TurnOff(void) | ?TurnOff@uiWidget@@UAEXXZ
    0x4E7380 | public: virtual void __thiscall uiWidget::SetReadOnly(int) | ?SetReadOnly@uiWidget@@UAEXH@Z
    0x4E73A0 | public: virtual void __thiscall uiWidget::Action(union eqEvent) | ?Action@uiWidget@@UAEXTeqEvent@@@Z
    0x4E73B0 | public: virtual void __thiscall uiWidget::CaptureAction(union eqEvent) | ?CaptureAction@uiWidget@@UAEXTeqEvent@@@Z
    0x4E73C0 | public: virtual void __thiscall uiWidget::EvalMouseX(float) | ?EvalMouseX@uiWidget@@UAEXM@Z
    0x4E73D0 | public: virtual char * __thiscall uiWidget::ReturnDescription(void) | ?ReturnDescription@uiWidget@@UAEPADXZ
    0x4E73E0 | public: virtual void __thiscall uiWidget::SetPosition(float,float) | ?SetPosition@uiWidget@@UAEXMM@Z
    0x4E73F0 | public: virtual float __thiscall uiWidget::GetScreenHeight(void) | ?GetScreenHeight@uiWidget@@UAEMXZ
    0x4E7400 | public: virtual void * __thiscall uiWidget::`scalar deleting destructor'(unsigned int) | ??_GuiWidget@@UAEPAXI@Z
    public: virtual void * __thiscall uiWidget::`vector deleting destructor'(unsigned int) | ??_EuiWidget@@UAEPAXI@Z
    0x4E7430 | public: virtual void __thiscall UITextField::Update(void) | ?Update@UITextField@@UAEXXZ
    0x5B3310 | const UITextField::`vftable' | ??_7UITextField@@6B@
    0x5B3374 | const uiWidget::`vftable' | ??_7uiWidget@@6B@
*/

class UITextField : public uiWidget
{
    // const UITextField::`vftable' @ 0x5B3310

public:
    // 0x4E6690 | ??0UITextField@@QAE@XZ
    UITextField();

    // 0x4E72F0 | ??_GUITextField@@UAEPAXI@Z
    // 0x4E67B0 | ??1UITextField@@UAE@XZ
    ~UITextField() override;

    // 0x4E6BB0 | ?Action@UITextField@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4E6BA0 | ?CaptureAction@UITextField@@UAEXTeqEvent@@@Z
    void CaptureAction(union eqEvent arg1) override;

    // 0x4E6C00 | ?ClearField@UITextField@@QAEXXZ
    void ClearField();

    // 0x4E6820 | ?Init@UITextField@@QAEXPAULocString@@PADMMMMHHHHHVdatCallback@@PAVUIMenu@@@Z
    void Init(struct LocString* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8, i32 arg9,
        i32 arg10, i32 arg11, class datCallback arg12, class UIMenu* arg13);

    // 0x4E6EB0 | ?IsValidChar@UITextField@@QAEHG@Z
    i32 IsValidChar(u16 arg1);

    // 0x4E70F0 | ?KeyAction@UITextField@@QAEXPATeqEvent@@@Z
    void KeyAction(union eqEvent* arg1);

    // 0x4E7200 | ?SetCompositionWindow@UITextField@@QAEXXZ
    void SetCompositionWindow();

    // 0x4E6B40 | ?SetField@UITextField@@QAEXPAD@Z
    void SetField(char* arg1);

    // 0x4E6B20 | ?SetText@UITextField@@QAEXPAULocString@@@Z
    void SetText(struct LocString* arg1);

    // 0x4E6C60 | ?SetTextField@UITextField@@QAEXXZ
    void SetTextField();

    // 0x4E6E00 | ?Switch@UITextField@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4E6CB0 | ?ToggleField@UITextField@@QAEXH@Z
    void ToggleField(i32 arg1);

    // 0x4E7430 | ?Update@UITextField@@UAEXXZ
    void Update() override;

    // 0x4E6F70 | ?WmCharHandler@UITextField@@QAEXE@Z
    void WmCharHandler(u8 arg1);
};

check_size(UITextField, 0x1E4);

class uiWidget : public asNode
{
    // const uiWidget::`vftable' @ 0x5B3374

public:
    // 0x4E7440 | ??0uiWidget@@QAE@XZ
    uiWidget();

    // 0x4E7400 | ??_GuiWidget@@UAEPAXI@Z
    // 0x4E7320 | ??1uiWidget@@UAE@XZ
    ~uiWidget() override;

    // 0x4E7470 | ?AddToolTip@uiWidget@@QAEXPAVUIMenu@@PAULocString@@@Z
    void AddToolTip(class UIMenu* arg1, struct LocString* arg2);

    // 0x4E74A0 | ?ResetToolTip@uiWidget@@QAEXXZ
    void ResetToolTip();

    // 0x4E74B0 | ?SetToolTipText@uiWidget@@QAEXPAULocString@@@Z
    void SetToolTipText(struct LocString* arg1);

    // 0x4E7330 | ?Disable@uiWidget@@UAEXXZ
    virtual void Disable();

    // 0x4E7340 | ?Enable@uiWidget@@UAEXXZ
    virtual void Enable();

    // 0x4E7350 | ?TurnOn@uiWidget@@UAEXXZ
    virtual void TurnOn();

    // 0x4E7370 | ?TurnOff@uiWidget@@UAEXXZ
    virtual void TurnOff();

    // 0x4E7380 | ?SetReadOnly@uiWidget@@UAEXH@Z
    virtual void SetReadOnly(i32 arg1);

    // 0x4E73A0 | ?Action@uiWidget@@UAEXTeqEvent@@@Z
    virtual void Action(union eqEvent arg1);

    // 0x4E73B0 | ?CaptureAction@uiWidget@@UAEXTeqEvent@@@Z
    virtual void CaptureAction(union eqEvent arg1);

    // 0x4E7480 | ?Switch@uiWidget@@UAEXH@Z
    virtual void Switch(i32 arg1);

    // 0x4E73C0 | ?EvalMouseX@uiWidget@@UAEXM@Z
    virtual void EvalMouseX(f32 arg1);

    // 0x4E73D0 | ?ReturnDescription@uiWidget@@UAEPADXZ
    virtual char* ReturnDescription();

    // 0x4E73E0 | ?SetPosition@uiWidget@@UAEXMM@Z
    virtual void SetPosition(f32 arg1, f32 arg2);

    // 0x4E73F0 | ?GetScreenHeight@uiWidget@@UAEMXZ
    virtual f32 GetScreenHeight();
};

check_size(uiWidget, 0x6C);
