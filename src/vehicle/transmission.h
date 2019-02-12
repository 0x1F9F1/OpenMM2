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
    vehicle:transmission

    0x4CF0F0 | public: __thiscall vehTransmission::vehTransmission(void) | ??0vehTransmission@@QAE@XZ
    0x4CF200 | public: virtual void __thiscall vehTransmission::Reset(void) | ?Reset@vehTransmission@@UAEXXZ
    0x4CF220 | public: void __thiscall vehTransmission::ComputeConstants(void) | ?ComputeConstants@vehTransmission@@QAEXXZ
    0x4CF530 | private: float __thiscall vehTransmission::GearRatioFromMPH(float) | ?GearRatioFromMPH@vehTransmission@@AAEMM@Z
    0x4CF560 | public: void __thiscall vehTransmission::Init(class vehCarSim *) | ?Init@vehTransmission@@QAEXPAVvehCarSim@@@Z
    0x4CF570 | public: int __thiscall vehTransmission::Upshift(void) | ?Upshift@vehTransmission@@QAEHXZ
    0x4CF5B0 | public: int __thiscall vehTransmission::Downshift(void) | ?Downshift@vehTransmission@@QAEHXZ
    0x4CF600 | public: virtual void __thiscall vehTransmission::Update(void) | ?Update@vehTransmission@@UAEXXZ
    0x4CF6B0 | public: void __thiscall vehTransmission::Automatic(int) | ?Automatic@vehTransmission@@QAEXH@Z
    0x4CF6C0 | public: void __thiscall vehTransmission::SetReverse(void) | ?SetReverse@vehTransmission@@QAEXXZ
    0x4CF6D0 | public: void __thiscall vehTransmission::SetNeutral(void) | ?SetNeutral@vehTransmission@@QAEXXZ
    0x4CF6E0 | public: void __thiscall vehTransmission::SetForward(void) | ?SetForward@vehTransmission@@QAEXXZ
    0x4CF700 | public: int __thiscall vehTransmission::SetCurrentGear(int) | ?SetCurrentGear@vehTransmission@@QAEHH@Z
    public: virtual void __thiscall vehTransmission::AddWidgets(class bkBank &) | ?AddWidgets@vehTransmission@@UAEXAAVbkBank@@@Z
    0x4CF740 | public: virtual void __thiscall vehTransmission::FileIO(class datParser &) | ?FileIO@vehTransmission@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehTransmission::`vector deleting destructor'(unsigned int) | ??_EvehTransmission@@UAEPAXI@Z
    0x4CF850 | public: virtual void * __thiscall vehTransmission::`scalar deleting destructor'(unsigned int) | ??_GvehTransmission@@UAEPAXI@Z
    0x4CF880 | public: virtual char * __thiscall vehTransmission::GetClassName(void) | ?GetClassName@vehTransmission@@UAEPADXZ
    0x5B2D2C | const vehTransmission::`vftable' | ??_7vehTransmission@@6B@
*/

// #include "hooking.h"
