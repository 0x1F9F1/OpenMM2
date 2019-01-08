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
    vehicle:suspension

    0x4D97A0 | public: __thiscall vehSuspension::vehSuspension(void) | ??0vehSuspension@@QAE@XZ
    0x4D9810 | public: void __thiscall vehSuspension::Init(class vehCarSim *,char const *,char const *,class vehWheel *) | ?Init@vehSuspension@@QAEXPAVvehCarSim@@PBD1PAVvehWheel@@@Z
    0x4D98B0 | public: virtual void __thiscall vehSuspension::Update(void) | ?Update@vehSuspension@@UAEXXZ
    public: virtual void __thiscall vehSuspension::AddWidgets(class bkBank &) | ?AddWidgets@vehSuspension@@UAEXAAVbkBank@@@Z
    0x4D9920 | public: void __thiscall vehSuspension::Copy(class vehSuspension const &) | ?Copy@vehSuspension@@QAEXABV1@@Z
    public: virtual void __thiscall vehSuspension::FileIO(class datParser &) | ?FileIO@vehSuspension@@UAEXAAVdatParser@@@Z
    0x4D9950 | public: virtual void * __thiscall vehSuspension::`scalar deleting destructor'(unsigned int) | ??_GvehSuspension@@UAEPAXI@Z
    public: virtual void * __thiscall vehSuspension::`vector deleting destructor'(unsigned int) | ??_EvehSuspension@@UAEPAXI@Z
    0x4D9980 | public: virtual char * __thiscall vehSuspension::GetClassName(void) | ?GetClassName@vehSuspension@@UAEPADXZ
    0x5B3068 | const vehSuspension::`vftable' | ??_7vehSuspension@@6B@
*/

#include "hooking.h"
