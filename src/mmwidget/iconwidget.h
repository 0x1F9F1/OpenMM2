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
    mmwidget:iconwidget

    0x4EDA70 | public: __thiscall UIIconW::UIIconW(void) | ??0UIIconW@@QAE@XZ
    0x4EDB30 | public: virtual __thiscall UIIconW::~UIIconW(void) | ??1UIIconW@@UAE@XZ
    0x4EDBA0 | public: void __thiscall UIIconW::Init(struct LocString *,char *,float,float,float,float,class datCallback) | ?Init@UIIconW@@QAEXPAULocString@@PADMMMMVdatCallback@@@Z
    0x4EDC90 | public: virtual void __thiscall UIIconW::Action(union eqEvent) | ?Action@UIIconW@@UAEXTeqEvent@@@Z
    0x4EDCF0 | public: virtual void __thiscall UIIconW::Update(void) | ?Update@UIIconW@@UAEXXZ
    0x4EDD70 | public: virtual void __thiscall UIIconW::Switch(int) | ?Switch@UIIconW@@UAEXH@Z
    public: virtual void * __thiscall UIIconW::`vector deleting destructor'(unsigned int) | ??_EUIIconW@@UAEPAXI@Z
    0x4EDDE0 | public: virtual void * __thiscall UIIconW::`scalar deleting destructor'(unsigned int) | ??_GUIIconW@@UAEPAXI@Z
    0x5B3840 | const UIIconW::`vftable' | ??_7UIIconW@@6B@
*/

#include "hooking.h"
