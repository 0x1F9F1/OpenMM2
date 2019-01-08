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
    mmwidget:slider

    0x4EC520 | public: __thiscall UISlider::UISlider(void) | ??0UISlider@@QAE@XZ
    0x4EC5C0 | public: virtual __thiscall UISlider::~UISlider(void) | ??1UISlider@@UAE@XZ
    0x4EC630 | public: void __thiscall UISlider::Init(struct LocString *,float *,float,float,float,float,float,float,int,int,int,int,class datCallback,class UIMenu *,class datCallback) | ?Init@UISlider@@QAEXPAULocString@@PAMMMMMMMHHHHVdatCallback@@PAVUIMenu@@2@Z
    0x4EC860 | public: virtual void __thiscall UISlider::SetPosition(float,float) | ?SetPosition@UISlider@@UAEXMM@Z
    0x4EC990 | public: void __thiscall UISlider::SetText(struct LocString *) | ?SetText@UISlider@@QAEXPAULocString@@@Z
    0x4EC9A0 | public: virtual void __thiscall UISlider::Update(void) | ?Update@UISlider@@UAEXXZ
    0x4ECA00 | public: virtual void __thiscall UISlider::Action(union eqEvent) | ?Action@UISlider@@UAEXTeqEvent@@@Z
    0x4ECAC0 | public: virtual void __thiscall UISlider::Switch(int) | ?Switch@UISlider@@UAEXH@Z
    0x4ECB40 | public: int __thiscall UISlider::TestHit(float,float) | ?TestHit@UISlider@@QAEHMM@Z
    0x4ECB50 | public: void __thiscall UISlider::SetReadWrite(int) | ?SetReadWrite@UISlider@@QAEXH@Z
    0x4ECB90 | public: int __thiscall UISlider::IsReadWrite(void) | ?IsReadWrite@UISlider@@QAEHXZ
    0x4ECBA0 | public: float __thiscall UISlider::GetValue(void) | ?GetValue@UISlider@@QAEMXZ
    0x4ECBB0 | public: float __thiscall UISlider::SetValue(float) | ?SetValue@UISlider@@QAEMM@Z
    0x4ECBE0 | public: void __thiscall UISlider::SetMouseParams(float) | ?SetMouseParams@UISlider@@QAEXM@Z
    0x4ECC30 | public: void __thiscall UISlider::EvalMouseXY(float,float) | ?EvalMouseXY@UISlider@@QAEXMM@Z
    0x4ECD40 | public: void __thiscall UISlider::SetData(float) | ?SetData@UISlider@@QAEXM@Z
    0x4ECD60 | public: float __thiscall UISlider::GetFudgeWidth(void) | ?GetFudgeWidth@UISlider@@QAEMXZ
    0x4ECD70 | public: virtual void * __thiscall UISlider::`scalar deleting destructor'(unsigned int) | ??_GUISlider@@UAEPAXI@Z
    public: virtual void * __thiscall UISlider::`vector deleting destructor'(unsigned int) | ??_EUISlider@@UAEPAXI@Z
    0x4ECDA0 | public: virtual float __thiscall UISlider::GetScreenHeight(void) | ?GetScreenHeight@UISlider@@UAEMXZ
    0x5B364C | const UISlider::`vftable' | ??_7UISlider@@6B@
*/

#include "hooking.h"
