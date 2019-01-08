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
    mmgame:viewmgr

    0x431C40 | public: __thiscall mmViewMgr::mmViewMgr(void) | ??0mmViewMgr@@QAE@XZ
    0x431C60 | public: virtual __thiscall mmViewMgr::~mmViewMgr(void) | ??1mmViewMgr@@UAE@XZ
    0x431C80 | public: void __thiscall mmViewMgr::Init(class mmHUD *,class mmHudMap *,class mmPlayer *) | ?Init@mmViewMgr@@QAEXPAVmmHUD@@PAVmmHudMap@@PAVmmPlayer@@@Z
    0x431D10 | public: void __thiscall mmViewMgr::SetViewSetting(int) | ?SetViewSetting@mmViewMgr@@QAEXH@Z
    0x432100 | public: virtual void __thiscall mmViewMgr::Update(void) | ?Update@mmViewMgr@@UAEXXZ
    public: virtual void * __thiscall mmViewMgr::`vector deleting destructor'(unsigned int) | ??_EmmViewMgr@@UAEPAXI@Z
    0x432110 | public: virtual void * __thiscall mmViewMgr::`scalar deleting destructor'(unsigned int) | ??_GmmViewMgr@@UAEPAXI@Z
    0x5B0DE8 | const mmViewMgr::`vftable' | ??_7mmViewMgr@@6B@
*/

#include "hooking.h"
