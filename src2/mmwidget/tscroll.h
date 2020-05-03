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
    mmwidget:tscroll

    0x4EA1E0 | public: __thiscall UITextScroll::UITextScroll(void) | ??0UITextScroll@@QAE@XZ
    0x4EA2F0 | public: virtual __thiscall UITextScroll::~UITextScroll(void) | ??1UITextScroll@@UAE@XZ
    0x4EA3D0 | public: void __thiscall UITextScroll::Init(void *,float,float,float,float,class string,int,int *,class datCallback) | ?Init@UITextScroll@@QAEXPAXMMMMVstring@@HPAHVdatCallback@@@Z
    0x4EA730 | public: void __thiscall UITextScroll::InitVScroll(float,float,float) | ?InitVScroll@UITextScroll@@QAEXMMM@Z
    0x4EA740 | public: void __thiscall UITextScroll::VScrollCB(void) | ?VScrollCB@UITextScroll@@QAEXXZ
    0x4EA780 | public: void __thiscall UITextScroll::SetVScrollVals(void) | ?SetVScrollVals@UITextScroll@@QAEXXZ
    0x4EA7A0 | public: void __thiscall UITextScroll::SetVScrollPos(void) | ?SetVScrollPos@UITextScroll@@QAEXXZ
    0x4EA7D0 | public: void __thiscall UITextScroll::Recalc(class string) | ?Recalc@UITextScroll@@QAEXVstring@@@Z
    0x4EA950 | private: void __thiscall UITextScroll::FillScroll(void) | ?FillScroll@UITextScroll@@AAEXXZ
    0x4EAA30 | public: void __thiscall UITextScroll::GetCurrentString(char *,int) | ?GetCurrentString@UITextScroll@@QAEXPADH@Z
    0x4EAA80 | public: void __thiscall UITextScroll::SetHighlight(int) | ?SetHighlight@UITextScroll@@QAEXH@Z
    0x4EAAD0 | public: int __thiscall UITextScroll::GetHit(float,float) | ?GetHit@UITextScroll@@QAEHMM@Z
    0x4EAB50 | private: void __thiscall UITextScroll::KeyAction(void) | ?KeyAction@UITextScroll@@AAEXXZ
    0x4EABB0 | public: virtual void __thiscall UITextScroll::Action(union eqEvent) | ?Action@UITextScroll@@UAEXTeqEvent@@@Z
    0x4EAC70 | public: virtual void __thiscall UITextScroll::Switch(int) | ?Switch@UITextScroll@@UAEXH@Z
    0x4EACB0 | private: void __thiscall UITextScroll::SetTextColor(void) | ?SetTextColor@UITextScroll@@AAEXXZ
    0x4EAD10 | public: void __thiscall UITextScroll::SetText(int,struct LocString *) | ?SetText@UITextScroll@@QAEXHPAULocString@@@Z
    0x4EAD50 | private: void __thiscall UITextScroll::ResetTextScroll(void) | ?ResetTextScroll@UITextScroll@@AAEXXZ
    0x4EADD0 | private: void __thiscall UITextScroll::InitTextScroll(class string) | ?InitTextScroll@UITextScroll@@AAEXVstring@@@Z
    0x4EAF00 | private: void __thiscall UITextScroll::AddTextScrollLine(char *,int) | ?AddTextScrollLine@UITextScroll@@AAEXPADH@Z
    0x4EAF80 | private: void __thiscall UITextScroll::AddTextScrollLine(char *) | ?AddTextScrollLine@UITextScroll@@AAEXPAD@Z
    0x4EB020 | public: virtual void * __thiscall UITextScroll::`scalar deleting destructor'(unsigned int) | ??_GUITextScroll@@UAEPAXI@Z
    public: virtual void * __thiscall UITextScroll::`vector deleting destructor'(unsigned int) | ??_EUITextScroll@@UAEPAXI@Z
    0x5B3518 | const UITextScroll::`vftable' | ??_7UITextScroll@@6B@
*/

class UITextScroll : public uiWidget
{
    // const UITextScroll::`vftable' @ 0x5B3518

public:
    // 0x4EA1E0 | ??0UITextScroll@@QAE@XZ
    UITextScroll();

    // 0x4EB020 | ??_GUITextScroll@@UAEPAXI@Z
    // 0x4EA2F0 | ??1UITextScroll@@UAE@XZ
    ~UITextScroll() override;

    // 0x4EABB0 | ?Action@UITextScroll@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EAA30 | ?GetCurrentString@UITextScroll@@QAEXPADH@Z
    void GetCurrentString(char* arg1, i32 arg2);

    // 0x4EAAD0 | ?GetHit@UITextScroll@@QAEHMM@Z
    i32 GetHit(f32 arg1, f32 arg2);

    // 0x4EA3D0 | ?Init@UITextScroll@@QAEXPAXMMMMVstring@@HPAHVdatCallback@@@Z
    void Init(void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class string arg6, i32 arg7, i32* arg8,
        class datCallback arg9);

    // 0x4EA730 | ?InitVScroll@UITextScroll@@QAEXMMM@Z
    void InitVScroll(f32 arg1, f32 arg2, f32 arg3);

    // 0x4EA7D0 | ?Recalc@UITextScroll@@QAEXVstring@@@Z
    void Recalc(class string arg1);

    // 0x4EAA80 | ?SetHighlight@UITextScroll@@QAEXH@Z
    void SetHighlight(i32 arg1);

    // 0x4EAD10 | ?SetText@UITextScroll@@QAEXHPAULocString@@@Z
    void SetText(i32 arg1, struct LocString* arg2);

    // 0x4EA7A0 | ?SetVScrollPos@UITextScroll@@QAEXXZ
    void SetVScrollPos();

    // 0x4EA780 | ?SetVScrollVals@UITextScroll@@QAEXXZ
    void SetVScrollVals();

    // 0x4EAC70 | ?Switch@UITextScroll@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4EA740 | ?VScrollCB@UITextScroll@@QAEXXZ
    void VScrollCB();

private:
    // 0x4EAF80 | ?AddTextScrollLine@UITextScroll@@AAEXPAD@Z
    void AddTextScrollLine(char* arg1);

    // 0x4EAF00 | ?AddTextScrollLine@UITextScroll@@AAEXPADH@Z
    void AddTextScrollLine(char* arg1, i32 arg2);

    // 0x4EA950 | ?FillScroll@UITextScroll@@AAEXXZ
    void FillScroll();

    // 0x4EADD0 | ?InitTextScroll@UITextScroll@@AAEXVstring@@@Z
    void InitTextScroll(class string arg1);

    // 0x4EAB50 | ?KeyAction@UITextScroll@@AAEXXZ
    void KeyAction();

    // 0x4EAD50 | ?ResetTextScroll@UITextScroll@@AAEXXZ
    void ResetTextScroll();

    // 0x4EACB0 | ?SetTextColor@UITextScroll@@AAEXXZ
    void SetTextColor();
};

check_size(UITextScroll, 0xD4);
