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
    mmeffects:mmnumber

    0x5332B0 | public: __thiscall mmNumberFont::mmNumberFont(char *) | ??0mmNumberFont@@QAE@PAD@Z
    0x5332E0 | public: __thiscall mmNumberFont::~mmNumberFont(void) | ??1mmNumberFont@@QAE@XZ
    0x533340 | public: void __thiscall mmNumberFont::LoadFont(char *,int,unsigned int) | ?LoadFont@mmNumberFont@@QAEXPADHI@Z
    0x5333B0 | public: void __thiscall mmNumberFont::LoadLocFont(char *,struct LocString *,int,unsigned int) | ?LoadLocFont@mmNumberFont@@QAEXPADPAULocString@@HI@Z
    0x533420 | public: __thiscall mmNumber::mmNumber(void) | ??0mmNumber@@QAE@XZ
    0x533440 | public: virtual __thiscall mmNumber::~mmNumber(void) | ??1mmNumber@@UAE@XZ
    0x533450 | public: void __thiscall mmNumber::Init(class mmNumberFont *,float,float) | ?Init@mmNumber@@QAEXPAVmmNumberFont@@MM@Z
    0x533470 | public: void __thiscall mmNumber::SetString(char *) | ?SetString@mmNumber@@QAEXPAD@Z
    0x5334A0 | public: void __cdecl mmNumber::Printf(char const *,...) | ?Printf@mmNumber@@QAAXPBDZZ
    0x5334C0 | public: virtual void __thiscall mmNumber::Update(void) | ?Update@mmNumber@@UAEXXZ
    0x5334E0 | public: virtual void __thiscall mmNumber::Cull(void) | ?Cull@mmNumber@@UAEXXZ
    public: void __thiscall mmNumber::AddWidgets(class bkBank *) | ?AddWidgets@mmNumber@@QAEXPAVbkBank@@@Z
    0x5335D0 | public: virtual void * __thiscall mmNumber::`scalar deleting destructor'(unsigned int) | ??_GmmNumber@@UAEPAXI@Z
    0x5B5324 | const mmNumber::`vftable' | ??_7mmNumber@@6B@
*/

#include "hooking.h"
