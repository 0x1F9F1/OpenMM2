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
    mmwidget:tdwidget

    0x4F1810 | public: __thiscall TextDropWidget::TextDropWidget(void) | ??0TextDropWidget@@QAE@XZ
    0x4F18D0 | public: virtual __thiscall TextDropWidget::~TextDropWidget(void) | ??1TextDropWidget@@UAE@XZ
    0x4F1940 | public: void __thiscall TextDropWidget::Init(void *,float,float,float,float,float,class string,int) | ?Init@TextDropWidget@@QAEXPAXMMMMMVstring@@H@Z
    0x4F1A50 | public: int __thiscall TextDropWidget::GetCount(void) | ?GetCount@TextDropWidget@@QAEHXZ
    0x4F1A60 | public: void __thiscall TextDropWidget::SetString(class string) | ?SetString@TextDropWidget@@QAEXVstring@@@Z
    0x4F1B20 | public: int __thiscall TextDropWidget::SetValue(int) | ?SetValue@TextDropWidget@@QAEHH@Z
    0x4F1BC0 | public: int __thiscall TextDropWidget::SetHighlight(int) | ?SetHighlight@TextDropWidget@@QAEHH@Z
    0x4F1C30 | public: int __thiscall TextDropWidget::Inc(void) | ?Inc@TextDropWidget@@QAEHXZ
    0x4F1C40 | public: int __thiscall TextDropWidget::Dec(void) | ?Dec@TextDropWidget@@QAEHXZ
    0x4F1C50 | public: int __thiscall TextDropWidget::IncDrop(void) | ?IncDrop@TextDropWidget@@QAEHXZ
    0x4F1C80 | public: int __thiscall TextDropWidget::DecDrop(void) | ?DecDrop@TextDropWidget@@QAEHXZ
    0x4F1CB0 | public: int __thiscall TextDropWidget::Capture(float,float) | ?Capture@TextDropWidget@@QAEHMM@Z
    0x4F1CF0 | public: void __thiscall TextDropWidget::Switch(int,class Vector4 &) | ?Switch@TextDropWidget@@QAEXHAAVVector4@@@Z
    0x4F1D10 | public: virtual void __thiscall TextDropWidget::Update(void) | ?Update@TextDropWidget@@UAEXXZ
    0x4F1D20 | public: int __thiscall TextDropWidget::IsActive(void) | ?IsActive@TextDropWidget@@QAEHXZ
    0x4F1D30 | public: void __thiscall TextDropWidget::SetActive(int) | ?SetActive@TextDropWidget@@QAEXH@Z
    0x4F1D40 | public: void __thiscall TextDropWidget::SetDisabledMask(long) | ?SetDisabledMask@TextDropWidget@@QAEXJ@Z
    0x4F1D60 | public: long __thiscall TextDropWidget::GetDisabledMask(void) | ?GetDisabledMask@TextDropWidget@@QAEJXZ
    public: virtual void * __thiscall TextDropWidget::`vector deleting destructor'(unsigned int) | ??_ETextDropWidget@@UAEPAXI@Z
    0x4F1D70 | public: virtual void * __thiscall TextDropWidget::`scalar deleting destructor'(unsigned int) | ??_GTextDropWidget@@UAEPAXI@Z
    0x5B3B98 | const TextDropWidget::`vftable' | ??_7TextDropWidget@@6B@
*/

// #include "hooking.h"
