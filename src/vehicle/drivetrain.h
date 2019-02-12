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
    vehicle:drivetrain

    0x4D9D60 | public: __thiscall vehDrivetrain::vehDrivetrain(void) | ??0vehDrivetrain@@QAE@XZ
    0x4D9DD0 | public: void __thiscall vehDrivetrain::Init(class vehCarSim *) | ?Init@vehDrivetrain@@QAEXPAVvehCarSim@@@Z
    0x4D9DE0 | public: void __thiscall vehDrivetrain::CopyVars(class vehDrivetrain *) | ?CopyVars@vehDrivetrain@@QAEXPAV1@@Z
    0x4D9E00 | public: virtual void __thiscall vehDrivetrain::Reset(void) | ?Reset@vehDrivetrain@@UAEXXZ
    0x4D9E20 | public: void __thiscall vehDrivetrain::Attach(void) | ?Attach@vehDrivetrain@@QAEXXZ
    0x4D9E40 | public: void __thiscall vehDrivetrain::Detach(void) | ?Detach@vehDrivetrain@@QAEXXZ
    0x4D9E50 | public: int __thiscall vehDrivetrain::AddWheel(class vehWheel *) | ?AddWheel@vehDrivetrain@@QAEHPAVvehWheel@@@Z
    0x4D9E90 | public: virtual void __thiscall vehDrivetrain::Update(void) | ?Update@vehDrivetrain@@UAEXXZ
    public: virtual void __thiscall vehDrivetrain::AddWidgets(class bkBank &) | ?AddWidgets@vehDrivetrain@@UAEXAAVbkBank@@@Z
    0x4DA570 | public: virtual void __thiscall vehDrivetrain::FileIO(class datParser &) | ?FileIO@vehDrivetrain@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehDrivetrain::`vector deleting destructor'(unsigned int) | ??_EvehDrivetrain@@UAEPAXI@Z
    0x4DA5D0 | public: virtual void * __thiscall vehDrivetrain::`scalar deleting destructor'(unsigned int) | ??_GvehDrivetrain@@UAEPAXI@Z
    0x4DA600 | public: virtual char * __thiscall vehDrivetrain::GetClassName(void) | ?GetClassName@vehDrivetrain@@UAEPADXZ
    0x5B30D0 | const vehDrivetrain::`vftable' | ??_7vehDrivetrain@@6B@
    public: static float vehDrivetrain::diffRatioMax | ?diffRatioMax@vehDrivetrain@@2MA
    public: static float vehDrivetrain::diffRatioMaxHighSpeed | ?diffRatioMaxHighSpeed@vehDrivetrain@@2MA
    public: static float vehDrivetrain::diffRatioHighSpeedLevel | ?diffRatioHighSpeedLevel@vehDrivetrain@@2MA
*/

// #include "hooking.h"
