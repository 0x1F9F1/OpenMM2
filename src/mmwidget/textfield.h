/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#include "hooking.h"
