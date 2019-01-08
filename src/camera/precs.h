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
    camera:precs

    0x520430 | public: __thiscall camPreCS::camPreCS(void) | ??0camPreCS@@QAE@XZ
    0x520480 | public: void __thiscall camPreCS::Init(class vehCar *) | ?Init@camPreCS@@QAEXPAVvehCar@@@Z
    0x5204C0 | public: virtual void __thiscall camPreCS::Reset(void) | ?Reset@camPreCS@@UAEXXZ
    0x5204D0 | public: virtual void __thiscall camPreCS::MakeActive(void) | ?MakeActive@camPreCS@@UAEXXZ
    0x5204F0 | public: virtual void __thiscall camPreCS::Update(void) | ?Update@camPreCS@@UAEXXZ
    public: virtual void __thiscall camPreCS::AddWidgets(class bkBank &) | ?AddWidgets@camPreCS@@UAEXAAVbkBank@@@Z
    0x520550 | public: virtual void __thiscall camPreCS::FileIO(class datParser &) | ?FileIO@camPreCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camPreCS::`vector deleting destructor'(unsigned int) | ??_EcamPreCS@@UAEPAXI@Z
    0x5205D0 | public: virtual void * __thiscall camPreCS::`scalar deleting destructor'(unsigned int) | ??_GcamPreCS@@UAEPAXI@Z
    0x520600 | public: virtual char * __thiscall camPreCS::GetClassName(void) | ?GetClassName@camPreCS@@UAEPADXZ
    0x5B4F94 | const camPreCS::`vftable' | ??_7camPreCS@@6B@
*/

#include "hooking.h"
