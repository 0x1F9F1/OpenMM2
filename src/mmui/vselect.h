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
    mmui:vselect

    0x4F5470 | public: __thiscall VehicleSelectBase::VehicleSelectBase(int) | ??0VehicleSelectBase@@QAE@H@Z
    0x4F55F0 | public: void __thiscall VehicleSelectBase::IncColor(void) | ?IncColor@VehicleSelectBase@@QAEXXZ
    0x4F56B0 | public: void __thiscall VehicleSelectBase::DecColor(void) | ?DecColor@VehicleSelectBase@@QAEXXZ
    0x4F5780 | public: void __thiscall VehicleSelectBase::IncTrans(void) | ?IncTrans@VehicleSelectBase@@QAEXXZ
    0x4F5790 | public: void __thiscall VehicleSelectBase::DecTrans(void) | ?DecTrans@VehicleSelectBase@@QAEXXZ
    0x4F57A0 | public: void __thiscall VehicleSelectBase::ColorCB(void) | ?ColorCB@VehicleSelectBase@@QAEXXZ
    0x4F57C0 | public: void __thiscall VehicleSelectBase::InitCarSelection(int,float,float,float,float) | ?InitCarSelection@VehicleSelectBase@@QAEXHMMMM@Z
    0x4F68F0 | public: virtual __thiscall VehicleSelectBase::~VehicleSelectBase(void) | ??1VehicleSelectBase@@UAE@XZ
    0x4F6A00 | public: virtual void __thiscall VehicleSelectBase::PreSetup(void) | ?PreSetup@VehicleSelectBase@@UAEXXZ
    0x4F6AD0 | public: virtual void __thiscall VehicleSelectBase::PostSetup(void) | ?PostSetup@VehicleSelectBase@@UAEXXZ
    0x4F6AF0 | public: void __thiscall VehicleSelectBase::AllSetCar(char *,int) | ?AllSetCar@VehicleSelectBase@@QAEXPADH@Z
    0x4F6B40 | public: void __thiscall VehicleSelectBase::TDPickCB(void) | ?TDPickCB@VehicleSelectBase@@QAEXXZ
    0x4F6B50 | public: virtual void __thiscall VehicleSelectBase::Reset(void) | ?Reset@VehicleSelectBase@@UAEXXZ
    0x4F6B60 | public: virtual void __thiscall VehicleSelectBase::Update(void) | ?Update@VehicleSelectBase@@UAEXXZ
    0x4F6C00 | public: char * __thiscall VehicleSelectBase::GetCarTitle(int,char *,short,class string *) | ?GetCarTitle@VehicleSelectBase@@QAEPADHPADFPAVstring@@@Z
    0x4F6D30 | public: int __thiscall VehicleSelectBase::CurrentVehicleIsLocked(void) | ?CurrentVehicleIsLocked@VehicleSelectBase@@QAEHXZ
    0x4F6D90 | public: void __thiscall VehicleSelectBase::SetLastUnlockedVehicle(void) | ?SetLastUnlockedVehicle@VehicleSelectBase@@QAEXXZ
    0x4F6DF0 | public: void __thiscall VehicleSelectBase::CarMod(int &) | ?CarMod@VehicleSelectBase@@QAEXAAH@Z
    0x4F6E20 | public: void __thiscall VehicleSelectBase::SetPick(int,short) | ?SetPick@VehicleSelectBase@@QAEXHF@Z
    0x4F7120 | public: void __thiscall VehicleSelectBase::ShowCarDesc(void) | ?ShowCarDesc@VehicleSelectBase@@QAEXXZ
    0x4F7340 | public: int __thiscall VehicleSelectBase::LoadStats(char *) | ?LoadStats@VehicleSelectBase@@QAEHPAD@Z
    0x4F73E0 | float __cdecl max(float,float) | ?max@@YAMMM@Z
    0x4F7400 | float __cdecl min(float,float) | ?min@@YAMMM@Z
    0x4F7420 | public: void __thiscall VehicleSelectBase::AssignVehicleStats(int,float,float,float,float) | ?AssignVehicleStats@VehicleSelectBase@@QAEXHMMMM@Z
    0x4F7590 | public: void __thiscall VehicleSelectBase::FillStats(void) | ?FillStats@VehicleSelectBase@@QAEXXZ
    0x4F75E0 | public: void __thiscall VehicleSelectBase::SetLockedLabel(void) | ?SetLockedLabel@VehicleSelectBase@@QAEXXZ
    0x4F7770 | public: void __thiscall VehicleSelectBase::LockColor(void) | ?LockColor@VehicleSelectBase@@QAEXXZ
    0x4F77F0 | public: void __thiscall VehicleSelectBase::FocusDescription(int,int) | ?FocusDescription@VehicleSelectBase@@QAEXHH@Z
    0x4F7960 | public: virtual void * __thiscall VehicleSelectBase::`scalar deleting destructor'(unsigned int) | ??_GVehicleSelectBase@@UAEPAXI@Z
    public: virtual void * __thiscall VehicleSelectBase::`vector deleting destructor'(unsigned int) | ??_EVehicleSelectBase@@UAEPAXI@Z
    0x4F7990 | public: virtual void * __thiscall asDofCS::`vector deleting destructor'(unsigned int) | ??_EasDofCS@@UAEPAXI@Z
    0x4F79F0 | public: virtual __thiscall asDofCS::~asDofCS(void) | ??1asDofCS@@UAE@XZ
    0x4F7A00 | public: virtual void * __thiscall mmVehicleForm::`vector deleting destructor'(unsigned int) | ??_EmmVehicleForm@@UAEPAXI@Z
    0x4F7A60 | public: void __thiscall VehicleSelectBase::DecCar(void) | ?DecCar@VehicleSelectBase@@QAEXXZ
    0x4F7A70 | public: void __thiscall VehicleSelectBase::IncCar(void) | ?IncCar@VehicleSelectBase@@QAEXXZ
    0x4F7A80 | public: void __thiscall VehicleSelectBase::SetShowcaseFlag(void) | ?SetShowcaseFlag@VehicleSelectBase@@QAEXXZ
    public: class mmDamage __thiscall mmVehicleForm::GetDamage(void) | ?GetDamage@mmVehicleForm@@QAE?AVmmDamage@@XZ
    0x4F7A90 | public: int __thiscall mmVehInfo::IsValid(void) | ?IsValid@mmVehInfo@@QAEHXZ
    0x5B3D38 | const VehicleSelectBase::`vftable' | ??_7VehicleSelectBase@@6B@
    public: static float VehicleSelectBase::PolarInclination | ?PolarInclination@VehicleSelectBase@@2MA
    public: static float VehicleSelectBase::CurrentUIDist | ?CurrentUIDist@VehicleSelectBase@@2MA
    public: static float VehicleSelectBase::PolarApproach | ?PolarApproach@VehicleSelectBase@@2MA
*/

#include "hooking.h"
