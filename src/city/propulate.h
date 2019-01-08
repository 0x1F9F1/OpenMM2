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
    city:propulate

    0x45D200 | public: __thiscall cityPropulator::cityPropulator(class lvlSDL const &) | ??0cityPropulator@@QAE@ABVlvlSDL@@@Z
    0x45D220 | public: bool __thiscall cityPropulator::Load(char const *,char const *,char const *) | ?Load@cityPropulator@@QAE_NPBD00@Z
    0x45D270 | public: __thiscall cityPropulator::~cityPropulator(void) | ??1cityPropulator@@QAE@XZ
    0x45D290 | public: int __thiscall cityPropulator::LookupRule(char const *) | ?LookupRule@cityPropulator@@QAEHPBD@Z
    0x45D2C0 | public: void __thiscall cityPropulator::Propulate(int,int,int,void (__cdecl*)(int,char const *,class Matrix34 const &)) | ?Propulate@cityPropulator@@QAEXHHHP6AXHPBDABVMatrix34@@@Z@Z
*/

#include "hooking.h"
