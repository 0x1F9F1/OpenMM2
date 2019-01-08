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
    mmgame:icons

    0x432140 | public: __thiscall mmIcons::mmIcons(void) | ??0mmIcons@@QAE@XZ
    0x432210 | public: virtual __thiscall mmIcons::~mmIcons(void) | ??1mmIcons@@UAE@XZ
    0x432290 | public: void __thiscall mmIcons::Init(class Matrix34 *,float,float,int) | ?Init@mmIcons@@QAEXPAVMatrix34@@MMH@Z
    0x4322F0 | public: void __thiscall mmIcons::RegisterOpponents(struct OppIconInfo *,int,void *) | ?RegisterOpponents@mmIcons@@QAEXPAUOppIconInfo@@HPAX@Z
    0x432390 | public: virtual void __thiscall mmIcons::Update(void) | ?Update@mmIcons@@UAEXXZ
    0x4323D0 | public: virtual void __thiscall mmIcons::Cull(void) | ?Cull@mmIcons@@UAEXXZ
    public: virtual void * __thiscall mmIcons::`vector deleting destructor'(unsigned int) | ??_EmmIcons@@UAEPAXI@Z
    0x432C10 | public: virtual void * __thiscall mmIcons::`scalar deleting destructor'(unsigned int) | ??_GmmIcons@@UAEPAXI@Z
    0x5B0E1C | const mmIcons::`vftable' | ??_7mmIcons@@6B@
*/

#include "hooking.h"
