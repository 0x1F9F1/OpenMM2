/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "linear.h"

/*
    node:view

    0x596200 | public: __thiscall asViewCS::asViewCS(void) | ??0asViewCS@@QAE@XZ
    0x596330 | public: void __thiscall asViewCS::SetAzimuth(void) | ?SetAzimuth@asViewCS@@QAEXXZ
    0x596390 | public: virtual void __thiscall asViewCS::Reset(void) | ?Reset@asViewCS@@UAEXXZ
    0x596500 | public: virtual void __thiscall asViewCS::Update(void) | ?Update@asViewCS@@UAEXXZ
    0x596580 | public: void __thiscall asViewCS::UpdatePolar(void) | ?UpdatePolar@asViewCS@@QAEXXZ
    0x5966E0 | public: void __thiscall asViewCS::UpdateRoam(void) | ?UpdateRoam@asViewCS@@QAEXXZ
    0x5967E0 | public: void __thiscall asViewCS::UpdatePOV(void) | ?UpdatePOV@asViewCS@@QAEXXZ
    0x596880 | public: void __thiscall asViewCS::UpdateLookAt(void) | ?UpdateLookAt@asViewCS@@QAEXXZ
    0x5968E0 | public: void __thiscall asViewCS::UpdateTrack(void) | ?UpdateTrack@asViewCS@@QAEXXZ
    0x596C80 | public: void __thiscall asViewCS::UpdateStereo(void) | ?UpdateStereo@asViewCS@@QAEXXZ
    public: virtual void __thiscall asViewCS::AddWidgets(class bkBank &) | ?AddWidgets@asViewCS@@UAEXAAVbkBank@@@Z
    0x596DE0 | public: virtual void * __thiscall asViewCS::`scalar deleting destructor'(unsigned int) | ??_GasViewCS@@UAEPAXI@Z
    public: virtual void * __thiscall asViewCS::`vector deleting destructor'(unsigned int) | ??_EasViewCS@@UAEPAXI@Z
    0x596E10 | public: virtual __thiscall asViewCS::~asViewCS(void) | ??1asViewCS@@UAE@XZ
    public: virtual char * __thiscall asViewCS::GetClassName(void) | ?GetClassName@asViewCS@@UAEPADXZ
    0x5B86A8 | const asViewCS::`vftable' | ??_7asViewCS@@6B@
*/

class asViewCS : public asLinearCS
{
    // const asViewCS::`vftable' @ 0x5B86A8

public:
    // 0x596200 | ??0asViewCS@@QAE@XZ
    asViewCS();

    // 0x596DE0 | ??_GasViewCS@@UAEPAXI@Z
    // 0x596E10 | ??1asViewCS@@UAE@XZ
    ~asViewCS() override;

    // 0x596390 | ?Reset@asViewCS@@UAEXXZ
    void Reset() override;

    // 0x596330 | ?SetAzimuth@asViewCS@@QAEXXZ
    void SetAzimuth();

    // 0x596500 | ?Update@asViewCS@@UAEXXZ
    void Update() override;

    // 0x596880 | ?UpdateLookAt@asViewCS@@QAEXXZ
    void UpdateLookAt();

    // 0x5967E0 | ?UpdatePOV@asViewCS@@QAEXXZ
    void UpdatePOV();

    // 0x596580 | ?UpdatePolar@asViewCS@@QAEXXZ
    void UpdatePolar();

    // 0x5966E0 | ?UpdateRoam@asViewCS@@QAEXXZ
    void UpdateRoam();

    // 0x596C80 | ?UpdateStereo@asViewCS@@QAEXXZ
    void UpdateStereo();

    // 0x5968E0 | ?UpdateTrack@asViewCS@@QAEXXZ
    void UpdateTrack();
};

check_size(asViewCS, 0x11C);
