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
    mmwidget:mexbutton

    0x4EE440 | public: __thiscall UIMexButton::UIMexButton(void) | ??0UIMexButton@@QAE@XZ
    0x4EE4C0 | public: virtual __thiscall UIMexButton::~UIMexButton(void) | ??1UIMexButton@@UAE@XZ
    0x4EE4D0 | public: void __thiscall UIMexButton::Init(struct LocString *,int *,int,float,float,float,float,int,int,class datCallback) | ?Init@UIMexButton@@QAEXPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    0x4EE590 | public: virtual void __thiscall UIMexButton::Update(void) | ?Update@UIMexButton@@UAEXXZ
    0x4EE5E0 | private: virtual void __thiscall UIMexButton::DrawOff(void) | ?DrawOff@UIMexButton@@EAEXXZ
    0x4EE5F0 | private: virtual void __thiscall UIMexButton::DrawOn(void) | ?DrawOn@UIMexButton@@EAEXXZ
    0x4EE620 | public: virtual void __thiscall UIMexButton::DoToggle(void) | ?DoToggle@UIMexButton@@UAEXXZ
    0x4EE640 | public: virtual void __thiscall UIMexButton::Action(union eqEvent) | ?Action@UIMexButton@@UAEXTeqEvent@@@Z
    public: virtual void * __thiscall UIMexButton::`vector deleting destructor'(unsigned int) | ??_EUIMexButton@@UAEPAXI@Z
    0x4EE6C0 | public: virtual void * __thiscall UIMexButton::`scalar deleting destructor'(unsigned int) | ??_GUIMexButton@@UAEPAXI@Z
    0x5B3988 | const UIMexButton::`vftable' | ??_7UIMexButton@@6B@
*/

#include "hooking.h"
