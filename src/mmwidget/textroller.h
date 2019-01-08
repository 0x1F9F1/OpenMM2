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
    mmwidget:textroller

    0x4E88D0 | public: __thiscall UITextRoller::UITextRoller(void) | ??0UITextRoller@@QAE@XZ
    0x4E89A0 | public: virtual __thiscall UITextRoller::~UITextRoller(void) | ??1UITextRoller@@UAE@XZ
    0x4E8A10 | public: void __thiscall UITextRoller::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E8EA0 | public: virtual void __thiscall UITextRoller::Update(void) | ?Update@UITextRoller@@UAEXXZ
    0x4E8F00 | public: virtual void __thiscall UITextRoller::Switch(int) | ?Switch@UITextRoller@@UAEXH@Z
    0x4E8F30 | public: virtual void __thiscall UITextRoller::Action(union eqEvent) | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    0x4E9020 | public: void __thiscall UITextRoller::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    0x4E9100 | public: int __thiscall UITextRoller::SetValue(int) | ?SetValue@UITextRoller@@QAEHH@Z
    0x4E91A0 | public: void __thiscall UITextRoller::SetString(class string) | ?SetString@UITextRoller@@QAEXVstring@@@Z
    0x4E9270 | public: void __thiscall UITextRoller::SetText(void) | ?SetText@UITextRoller@@QAEXXZ
    0x4E92E0 | public: int __thiscall UITextRoller::Inc(void) | ?Inc@UITextRoller@@QAEHXZ
    0x4E9300 | public: int __thiscall UITextRoller::Dec(void) | ?Dec@UITextRoller@@QAEHXZ
    0x4E9320 | public: virtual void __thiscall UITextRoller::Cull(void) | ?Cull@UITextRoller@@UAEXXZ
    public: virtual void * __thiscall UITextRoller::`vector deleting destructor'(unsigned int) | ??_EUITextRoller@@UAEPAXI@Z
    0x4E93C0 | public: virtual void * __thiscall UITextRoller::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller@@UAEPAXI@Z
    0x5B344C | const UITextRoller::`vftable' | ??_7UITextRoller@@6B@
*/

#include "hooking.h"
