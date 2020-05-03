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

#include "menu.h"

UIMenu::UIMenu(i32 arg1)
{
    unimplemented();
}

UIMenu::~UIMenu()
{
    unimplemented();
}

class UIBMButton* UIMenu::AddBMButton(i32 arg1, char* arg2, f32 arg3, f32 arg4, i32 arg5, class datCallback arg6,
    i32* arg7, i32 arg8, i32 arg9, class datCallback arg10)
{
    return stub<thiscall_t<class UIBMButton*, UIMenu*, i32, char*, f32, f32, i32, class datCallback, i32*, i32, i32,
        class datCallback>>(0x4E2340, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class UIBMLabel* UIMenu::AddBMLabel(i32 arg1, char* arg2, class string* arg3, f32 arg4, f32 arg5, i32* arg6)
{
    return stub<thiscall_t<class UIBMLabel*, UIMenu*, i32, char*, class string*, f32, f32, i32*>>(
        0x4E1CB0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

class UIButton* UIMenu::AddButton(i32 arg1, struct LocString* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7,
    i32 arg8, class datCallback arg9, i32 arg10)
{
    return stub<thiscall_t<class UIButton*, UIMenu*, i32, struct LocString*, f32, f32, f32, f32, i32, i32,
        class datCallback, i32>>(0x4E1A90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class UICWArray* UIMenu::AddCWArray(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, i32 arg6, class datCallback arg7)
{
    return stub<thiscall_t<class UICWArray*, UIMenu*, i32, f32, f32, f32, f32, i32, class datCallback>>(
        0x4E24D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

class UICompositeScroll* UIMenu::AddCompScroll(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7,
    i32* arg8, i32 arg9, i32 arg10, class datCallback arg11)
{
    return stub<thiscall_t<class UICompositeScroll*, UIMenu*, i32, f32, f32, f32, f32, f32, i32, i32*, i32, i32,
        class datCallback>>(0x4E1580, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

class uiWidget* UIMenu::AddHotSpot(i32 arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class datCallback arg7)
{
    return stub<thiscall_t<class uiWidget*, UIMenu*, i32, char*, f32, f32, f32, f32, class datCallback>>(
        0x4E0EB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

class UIIcon* UIMenu::AddIcon(i32 arg1, char* arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<class UIIcon*, UIMenu*, i32, char*, f32, f32>>(0x4E1DC0, this, arg1, arg2, arg3, arg4);
}

class UIIconW* UIMenu::AddIconW(
    i32 arg1, struct LocString* arg2, char* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, class datCallback arg8)
{
    return stub<
        thiscall_t<class UIIconW*, UIMenu*, i32, struct LocString*, char*, f32, f32, f32, f32, class datCallback>>(
        0x4E1ED0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

class UILabel* UIMenu::AddLabel(
    i32 arg1, struct LocString* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8)
{
    return stub<thiscall_t<class UILabel*, UIMenu*, i32, struct LocString*, f32, f32, f32, f32, i32, i32>>(
        0x4E1BB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

class UIMexButton* UIMenu::AddMex(i32 arg1, struct LocString* arg2, i32* arg3, i32 arg4, f32 arg5, f32 arg6, f32 arg7,
    f32 arg8, i32 arg9, i32 arg10, class datCallback arg11)
{
    return stub<thiscall_t<class UIMexButton*, UIMenu*, i32, struct LocString*, i32*, i32, f32, f32, f32, f32, i32, i32,
        class datCallback>>(0x4E2220, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

class UISlider* UIMenu::AddSlider(i32 arg1, struct LocString* arg2, f32* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
    f32 arg8, f32 arg9, i32 arg10, i32 arg11, i32 arg12, i32 arg13, class datCallback arg14, class datCallback arg15)
{
    return stub<thiscall_t<class UISlider*, UIMenu*, i32, struct LocString*, f32*, f32, f32, f32, f32, f32, f32, i32,
        i32, i32, i32, class datCallback, class datCallback>>(
        0x4E1940, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}

class UITextDropdown* UIMenu::AddTextDropdown(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, char* arg13,
    class datCallback arg14)
{
    return stub<thiscall_t<class UITextDropdown*, UIMenu*, i32, struct LocString*, i32*, f32, f32, f32, f32,
        class string, i32, i32, i32, class datCallback, char*, class datCallback>>(
        0x4E0F90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

class UITextField* UIMenu::AddTextField(i32 arg1, struct LocString* arg2, char* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, i32 arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13)
{
    return stub<thiscall_t<class UITextField*, UIMenu*, i32, struct LocString*, char*, f32, f32, f32, f32, i32, i32,
        i32, i32, i32, class datCallback>>(
        0x4E1700, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

class UITextRoller* UIMenu::AddTextRoller(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13)
{
    return stub<thiscall_t<class UITextRoller*, UIMenu*, i32, struct LocString*, i32*, f32, f32, f32, f32, class string,
        i32, i32, i32, i32, class datCallback>>(
        0x4E1120, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

class UITextRoller2* UIMenu::AddTextRoller2(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13)
{
    return stub<thiscall_t<class UITextRoller2*, UIMenu*, i32, struct LocString*, i32*, f32, f32, f32, f32,
        class string, i32, i32, i32, i32, class datCallback>>(
        0x4E1270, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

class UITextScroll* UIMenu::AddTextScroll(i32 arg1, void* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6,
    class string arg7, i32 arg8, i32* arg9, class datCallback arg10)
{
    return stub<thiscall_t<class UITextScroll*, UIMenu*, i32, void*, f32, f32, f32, f32, class string, i32, i32*,
        class datCallback>>(0x4E13E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class UIToggleButton* UIMenu::AddToggle(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, i32 arg8, i32 arg9, class datCallback arg10)
{
    return stub<thiscall_t<class UIToggleButton*, UIMenu*, i32, struct LocString*, i32*, f32, f32, f32, f32, i32, i32,
        class datCallback>>(0x4E1FE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class UIToggleButton2* UIMenu::AddToggle2(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
    f32 arg7, i32 arg8, i32 arg9, class datCallback arg10)
{
    return stub<thiscall_t<class UIToggleButton2*, UIMenu*, i32, struct LocString*, i32*, f32, f32, f32, f32, i32, i32,
        class datCallback>>(0x4E2100, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class UIControlWidget* UIMenu::AddUIControl(
    i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class mmIO* arg7, class datCallback arg8)
{
    return stub<
        thiscall_t<class UIControlWidget*, UIMenu*, i32, f32, f32, f32, f32, f32, class mmIO*, class datCallback>>(
        0x4E1860, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

class UIVScrollBar* UIMenu::AddVScrollBar(i32 arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
    f32 arg8, i32 arg9, i32 arg10, class datCallback arg11)
{
    return stub<
        thiscall_t<class UIVScrollBar*, UIMenu*, i32, i32*, f32, f32, f32, f32, f32, f32, i32, i32, class datCallback>>(
        0x4E2610, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

void UIMenu::AddWidget(class uiWidget* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, char* arg8)
{
    return stub<thiscall_t<void, UIMenu*, class uiWidget*, char*, f32, f32, f32, f32, i32, char*>>(
        0x4E2B40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void UIMenu::AssignBackground(char* arg1)
{
    return stub<thiscall_t<void, UIMenu*, char*>>(0x4E0980, this, arg1);
}

void UIMenu::AssignName(struct LocString* arg1)
{
    return stub<thiscall_t<void, UIMenu*, struct LocString*>>(0x4E0930, this, arg1);
}

void UIMenu::CheckMouseHits()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E29F0, this);
}

void UIMenu::ClearAction()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0AD0, this);
}

void UIMenu::ClearSelected()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E2990, this);
}

void UIMenu::ClearToolTip()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0AE0, this);
}

void UIMenu::ClearWidgets()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E29C0, this);
}

i32 UIMenu::Decrement()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E0CF0, this);
}

void UIMenu::Disable()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0A40, this);
}

void UIMenu::DisableIME()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0BE0, this);
}

void UIMenu::Enable()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E09D0, this);
}

i32 UIMenu::FindTheFirstFocusWidget()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E0C00, this);
}

void UIMenu::ForceWidgetAction(i32 arg1)
{
    return stub<thiscall_t<void, UIMenu*, i32>>(0x4E0AB0, this, arg1);
}

i32 UIMenu::GetBstate()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E0BA0, this);
}

void UIMenu::GetDimensions(f32& arg1, f32& arg2, f32& arg3, f32& arg4)
{
    return stub<thiscall_t<void, UIMenu*, f32&, f32&, f32&, f32&>>(0x4E0BB0, this, arg1, arg2, arg3, arg4);
}

i32 UIMenu::GetWidgetID()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E0B90, this);
}

i32 UIMenu::Increment()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E0C40, this);
}

void UIMenu::KeyboardAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, UIMenu*, union eqEvent>>(0x4E27D0, this, arg1);
}

void UIMenu::MouseAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, UIMenu*, union eqEvent>>(0x4E2760, this, arg1);
}

class uiWidget* UIMenu::MouseHitCheck(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<class uiWidget*, UIMenu*, i32, f32, f32>>(0x4E2860, this, arg1, arg2, arg3);
}

void UIMenu::ScaleWidget(f32& arg1, f32& arg2, f32& arg3, f32& arg4)
{
    return stub<thiscall_t<void, UIMenu*, f32&, f32&, f32&, f32&>>(0x4E0E70, this, arg1, arg2, arg3, arg4);
}

i32 UIMenu::ScanInput(union eqEvent* arg1)
{
    return stub<thiscall_t<i32, UIMenu*, union eqEvent*>>(0x4E0DA0, this, arg1);
}

void UIMenu::SetAction(enum UIMenu::eSource arg1)
{
    return stub<thiscall_t<void, UIMenu*, enum UIMenu::eSource>>(0x4E0A90, this, arg1);
}

void UIMenu::SetBstate(i32 arg1)
{
    return stub<thiscall_t<void, UIMenu*, i32>>(0x4E0B20, this, arg1);
}

void UIMenu::SetFocusWidget(i32 arg1)
{
    return stub<thiscall_t<void, UIMenu*, i32>>(0x4E0B50, this, arg1);
}

void UIMenu::SetSelected()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E2960, this);
}

void UIMenu::Update()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0A80, this);
}

void UIMenu::PreSetup()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0A60, this);
}

void UIMenu::PostSetup()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0A70, this);
}

void UIMenu::BackUp()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0B10, this);
}

void UIMenu::CheckInput()
{
    return stub<thiscall_t<void, UIMenu*>>(0x4E0DE0, this);
}

i32 UIMenu::IsAnOptionMenu()
{
    return stub<thiscall_t<i32, UIMenu*>>(0x4E2D70, this);
}

define_dummy_symbol(mmwidget_menu);
