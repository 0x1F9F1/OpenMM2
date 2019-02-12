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
    vehicle:wheel

    0x4D2190 | public: __thiscall vehWheel::vehWheel(void) | ??0vehWheel@@QAE@XZ
    0x4D22E0 | public: virtual void __thiscall vehWheel::Reset(void) | ?Reset@vehWheel@@UAEXXZ
    0x4D23F0 | public: void __thiscall vehWheel::ComputeConstants(void) | ?ComputeConstants@vehWheel@@QAEXXZ
    0x4D2490 | public: void __thiscall vehWheel::AddNormalLoad(float) | ?AddNormalLoad@vehWheel@@QAEXM@Z
    0x4D24C0 | public: void __thiscall vehWheel::SetNormalLoad(float) | ?SetNormalLoad@vehWheel@@QAEXM@Z
    0x4D25D0 | private: float __thiscall vehWheel::ComputeFriction(float,float *) | ?ComputeFriction@vehWheel@@AAEMMPAM@Z
    0x4D2690 | public: void __thiscall vehWheel::Init(class vehCarSim *,char const *,char *,class Vector3,class phInertialCS *,int,int) | ?Init@vehWheel@@QAEXPAVvehCarSim@@PBDPADVVector3@@PAVphInertialCS@@HH@Z
    0x4D2720 | private: void __thiscall vehWheel::CalcSuspensionForce(float,bool,float) | ?CalcSuspensionForce@vehWheel@@AAEXM_NM@Z
    0x4D2A00 | public: void __thiscall vehWheel::ComputeDwtdw(float,float *,float *,float *) | ?ComputeDwtdw@vehWheel@@QAEXMPAM00@Z
    0x4D3440 | private: float __thiscall vehWheel::GetBumpDisplacement(float) | ?GetBumpDisplacement@vehWheel@@AAEMM@Z
    0x4D34E0 | public: virtual void __thiscall vehWheel::Update(void) | ?Update@vehWheel@@UAEXXZ
    0x4D3F60 | public: int __thiscall vehWheel::GetSurfaceSound(void) | ?GetSurfaceSound@vehWheel@@QAEHXZ
    0x4D3F80 | public: void __thiscall vehWheel::SetInputs(float,float,float) | ?SetInputs@vehWheel@@QAEXMMM@Z
    0x4D4030 | public: float __thiscall vehWheel::GetVisualDispVert(void) | ?GetVisualDispVert@vehWheel@@QAEMXZ
    0x4D4090 | public: float __thiscall vehWheel::GetVisualDispLat(void) | ?GetVisualDispLat@vehWheel@@QAEMXZ
    0x4D40D0 | public: float __thiscall vehWheel::GetVisualDispLong(void) | ?GetVisualDispLong@vehWheel@@QAEMXZ
    0x4D4110 | public: void __thiscall vehWheel::CopyVars(class vehWheel *) | ?CopyVars@vehWheel@@QAEXPAV1@@Z
    public: virtual void __thiscall vehWheel::AddWidgets(class bkBank &) | ?AddWidgets@vehWheel@@UAEXAAVbkBank@@@Z
    0x4D41C0 | public: virtual void __thiscall vehWheel::FileIO(class datParser &) | ?FileIO@vehWheel@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehWheel::`vector deleting destructor'(unsigned int) | ??_EvehWheel@@UAEPAXI@Z
    0x4D4390 | public: virtual void * __thiscall vehWheel::`scalar deleting destructor'(unsigned int) | ??_GvehWheel@@UAEPAXI@Z
    0x4D43C0 | public: virtual char * __thiscall vehWheel::GetClassName(void) | ?GetClassName@vehWheel@@UAEPADXZ
    0x5B2DCC | const vehWheel::`vftable' | ??_7vehWheel@@6B@
    public: static float vehWheel::WeatherFriction | ?WeatherFriction@vehWheel@@2MA
*/

// #include "hooking.h"
