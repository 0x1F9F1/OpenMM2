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
    node:dof

    0x596E20 | public: __thiscall asDofCS::asDofCS(void) | ??0asDofCS@@QAE@XZ
    0x596F10 | public: void __thiscall asDofCS::operator=(class asDofCS const &) | ??4asDofCS@@QAEXABV0@@Z
    0x597050 | public: virtual void __thiscall asDofCS::Reset(void) | ?Reset@asDofCS@@UAEXXZ
    0x597080 | public: void __thiscall asDofCS::SetTime(float,float,int) | ?SetTime@asDofCS@@QAEXMMH@Z
    0x5970F0 | public: virtual void __thiscall asDofCS::Update(void) | ?Update@asDofCS@@UAEXXZ
    0x597750 | public: void __thiscall asDofCS::AddWidgets(class Bank *) | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    0x597760 | public: virtual void * __thiscall asDofCS::`scalar deleting destructor'(unsigned int) | ??_GasDofCS@@UAEPAXI@Z
    public: virtual char * __thiscall asDofCS::GetClassName(void) | ?GetClassName@asDofCS@@UAEPADXZ
    0x5B86E8 | const asDofCS::`vftable' | ??_7asDofCS@@6B@
*/

#include "hooking.h"
