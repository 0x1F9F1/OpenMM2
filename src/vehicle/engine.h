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
    vehicle:engine

    0x4D8C10 | public: __thiscall vehEngine::vehEngine(void) | ??0vehEngine@@QAE@XZ
    0x4D8CD0 | public: virtual __thiscall vehEngine::~vehEngine(void) | ??1vehEngine@@UAE@XZ
    0x4D8CE0 | public: virtual void __thiscall vehEngine::Reset(void) | ?Reset@vehEngine@@UAEXXZ
    0x4D8D20 | public: void __thiscall vehEngine::Init(class vehCarSim *,char const *,char const *) | ?Init@vehEngine@@QAEXPAVvehCarSim@@PBD1@Z
    0x4D8DC0 | public: void __thiscall vehEngine::ComputeConstants(void) | ?ComputeConstants@vehEngine@@QAEXXZ
    0x4D8E20 | public: float __thiscall vehEngine::CalcTorqueAtFullThrottle(float) | ?CalcTorqueAtFullThrottle@vehEngine@@QAEMM@Z
    0x4D8EA0 | public: float __thiscall vehEngine::CalcTorqueAtZeroThrottle(void) | ?CalcTorqueAtZeroThrottle@vehEngine@@QAEMXZ
    0x4D8ED0 | public: float __thiscall vehEngine::CalcTorque(float) | ?CalcTorque@vehEngine@@QAEMM@Z
    0x4D8F10 | public: float __thiscall vehEngine::CalcHPAtFullThrottle(float) | ?CalcHPAtFullThrottle@vehEngine@@QAEMM@Z
    0x4D8F30 | public: virtual void __thiscall vehEngine::Update(void) | ?Update@vehEngine@@UAEXXZ
    public: virtual void __thiscall vehEngine::AddWidgets(class bkBank &) | ?AddWidgets@vehEngine@@UAEXAAVbkBank@@@Z
    0x4D9240 | public: virtual void __thiscall vehEngine::FileIO(class datParser &) | ?FileIO@vehEngine@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehEngine::`vector deleting destructor'(unsigned int) | ??_EvehEngine@@UAEPAXI@Z
    0x4D92E0 | public: virtual void * __thiscall vehEngine::`scalar deleting destructor'(unsigned int) | ??_GvehEngine@@UAEPAXI@Z
    0x4D9310 | public: virtual char * __thiscall vehEngine::GetClassName(void) | ?GetClassName@vehEngine@@UAEPADXZ
    0x5B2FEC | const vehEngine::`vftable' | ??_7vehEngine@@6B@
*/

#include "hooking.h"
