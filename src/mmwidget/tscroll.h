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

// #include "hooking.h"
