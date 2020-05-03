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

#include "vselect.h"

/*
    mmui:vehicle

    0x5056D0 | public: __thiscall Vehicle::Vehicle(int) | ??0Vehicle@@QAE@H@Z
    0x5057B0 | public: virtual __thiscall Vehicle::~Vehicle(void) | ??1Vehicle@@UAE@XZ
    0x5057C0 | public: void __thiscall Vehicle::SetSubMenu(int) | ?SetSubMenu@Vehicle@@QAEXH@Z
    0x5057E0 | public: void __thiscall Vehicle::SetSubMenuButtons(void) | ?SetSubMenuButtons@Vehicle@@QAEXXZ
    0x505800 | public: virtual void __thiscall Vehicle::PreSetup(void) | ?PreSetup@Vehicle@@UAEXXZ
    0x505810 | public: virtual void __thiscall Vehicle::PostSetup(void) | ?PostSetup@Vehicle@@UAEXXZ
    public: virtual void * __thiscall Vehicle::`vector deleting destructor'(unsigned int) | ??_EVehicle@@UAEPAXI@Z
    0x505820 | public: virtual void * __thiscall Vehicle::`scalar deleting destructor'(unsigned int) | ??_GVehicle@@UAEPAXI@Z
    0x5B453C | const Vehicle::`vftable' | ??_7Vehicle@@6B@
*/

class Vehicle : public VehicleSelectBase
{
    // const Vehicle::`vftable' @ 0x5B453C

public:
    // 0x5056D0 | ??0Vehicle@@QAE@H@Z
    Vehicle(i32 arg1);

    // 0x505820 | ??_GVehicle@@UAEPAXI@Z
    // 0x5057B0 | ??1Vehicle@@UAE@XZ
    ~Vehicle() override;

    // 0x505810 | ?PostSetup@Vehicle@@UAEXXZ
    void PostSetup() override;

    // 0x505800 | ?PreSetup@Vehicle@@UAEXXZ
    void PreSetup() override;

    // 0x5057C0 | ?SetSubMenu@Vehicle@@QAEXH@Z
    void SetSubMenu(i32 arg1);

    // 0x5057E0 | ?SetSubMenuButtons@Vehicle@@QAEXXZ
    void SetSubMenuButtons();
};

check_size(Vehicle, 0x178);
