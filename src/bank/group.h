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
    bank:group

    public: __thiscall bkGroup::bkGroup(class bkBank &,char const *,bool) | ??0bkGroup@@QAE@AAVbkBank@@PBD_N@Z
    public: virtual __thiscall bkGroup::~bkGroup(void) | ??1bkGroup@@UAE@XZ
    public: virtual void * __thiscall bkGroup::`scalar deleting destructor'(unsigned int) | ??_GbkGroup@@UAEPAXI@Z
    public: virtual void * __thiscall bkGroup::`vector deleting destructor'(unsigned int) | ??_EbkGroup@@UAEPAXI@Z
    public: virtual void __thiscall bkGroup::SetText(char const *) | ?SetText@bkGroup@@UAEXPBD@Z
    const bkGroup::`vftable'{for `bkWidget'} | ??_7bkGroup@@6BbkWidget@@@
    const bkGroup::`vftable'{for `bkGroup'} | ??_7bkGroup@@6B0@@
    const bkGroup::`vbtable' | ??_8bkGroup@@7B@
*/

#include "hooking.h"
