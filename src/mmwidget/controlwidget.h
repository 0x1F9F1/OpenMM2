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
    mmwidget:controlwidget

    0x4EBF20 | public: __thiscall UIControlWidget::UIControlWidget(void) | ??0UIControlWidget@@QAE@XZ
    0x4EC030 | public: virtual __thiscall UIControlWidget::~UIControlWidget(void) | ??1UIControlWidget@@UAE@XZ
    0x4EC0D0 | public: void __thiscall UIControlWidget::Init(float,float,float,float,float,class mmIO *,class datCallback) | ?Init@UIControlWidget@@QAEXMMMMMPAVmmIO@@VdatCallback@@@Z
    0x4EC250 | public: void __thiscall UIControlWidget::SetPosition(float,float,float,float) | ?SetPosition@UIControlWidget@@QAEXMMMM@Z
    0x4EC310 | public: virtual void __thiscall UIControlWidget::Update(void) | ?Update@UIControlWidget@@UAEXXZ
    0x4EC330 | public: void __thiscall UIControlWidget::UpdateField(void) | ?UpdateField@UIControlWidget@@QAEXXZ
    0x4EC360 | public: virtual void __thiscall UIControlWidget::Action(union eqEvent) | ?Action@UIControlWidget@@UAEXTeqEvent@@@Z
    0x4EC3B0 | public: virtual void __thiscall UIControlWidget::Switch(int) | ?Switch@UIControlWidget@@UAEXH@Z
    0x4EC420 | public: void __thiscall UIControlWidget::EnableField(void) | ?EnableField@UIControlWidget@@QAEXXZ
    0x4EC480 | public: void __thiscall UIControlWidget::DisableField(void) | ?DisableField@UIControlWidget@@QAEXXZ
    0x4EC4D0 | public: virtual void * __thiscall UIControlWidget::`scalar deleting destructor'(unsigned int) | ??_GUIControlWidget@@UAEPAXI@Z
    0x4EC500 | public: virtual void __thiscall UIControlWidget::TurnOn(void) | ?TurnOn@UIControlWidget@@UAEXXZ
    0x4EC510 | public: virtual void __thiscall UIControlWidget::TurnOff(void) | ?TurnOff@UIControlWidget@@UAEXXZ
    0x5B35E8 | const UIControlWidget::`vftable' | ??_7UIControlWidget@@6B@
*/

#include "hooking.h"
