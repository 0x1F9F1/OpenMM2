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

#include "racebase.h"

/*
    mmui:race

    0x505110 | public: __thiscall RaceMenu::RaceMenu(int) | ??0RaceMenu@@QAE@H@Z
    0x5051E0 | public: virtual __thiscall RaceMenu::~RaceMenu(void) | ??1RaceMenu@@UAE@XZ
    0x5051F0 | public: int __thiscall RaceMenu::GetRaceID(void) | ?GetRaceID@RaceMenu@@QAEHXZ
    0x505280 | public: void __thiscall RaceMenu::SetProgressMask(int) | ?SetProgressMask@RaceMenu@@QAEXH@Z
    0x5052A0 | public: void __thiscall RaceMenu::SetBlitzMask(int) | ?SetBlitzMask@RaceMenu@@QAEXH@Z
    0x5052C0 | public: void __thiscall RaceMenu::SetCheckpointMask(int) | ?SetCheckpointMask@RaceMenu@@QAEXH@Z
    0x5052E0 | public: void __thiscall RaceMenu::SetCircuitMask(int) | ?SetCircuitMask@RaceMenu@@QAEXH@Z
    0x505300 | public: char * __thiscall RaceMenu::GetRaceName(enum dgGameMode,int) | ?GetRaceName@RaceMenu@@QAEPADW4dgGameMode@@H@Z
    public: virtual void * __thiscall RaceMenu::`vector deleting destructor'(unsigned int) | ??_ERaceMenu@@UAEPAXI@Z
    0x505420 | public: virtual void * __thiscall RaceMenu::`scalar deleting destructor'(unsigned int) | ??_GRaceMenu@@UAEPAXI@Z
    0x505450 | public: virtual void __thiscall RaceMenuBase::SetCRWidgets(int) | ?SetCRWidgets@RaceMenuBase@@UAEXH@Z
    0x505460 | public: virtual void __thiscall RaceMenuBase::InitCRWidgets(void) | ?InitCRWidgets@RaceMenuBase@@UAEXXZ
    0x5B44A4 | const RaceMenu::`vftable' | ??_7RaceMenu@@6B@
*/

class RaceMenu : public RaceMenuBase
{
    // const RaceMenu::`vftable' @ 0x5B44A4

public:
    // 0x505110 | ??0RaceMenu@@QAE@H@Z
    RaceMenu(i32 arg1);

    // 0x505420 | ??_GRaceMenu@@UAEPAXI@Z
    // 0x5051E0 | ??1RaceMenu@@UAE@XZ
    ~RaceMenu() override;

    // 0x5051F0 | ?GetRaceID@RaceMenu@@QAEHXZ
    i32 GetRaceID();

    // 0x505300 | ?GetRaceName@RaceMenu@@QAEPADW4dgGameMode@@H@Z
    char* GetRaceName(enum dgGameMode arg1, i32 arg2);

    // 0x5052A0 | ?SetBlitzMask@RaceMenu@@QAEXH@Z
    void SetBlitzMask(i32 arg1);

    // 0x5052C0 | ?SetCheckpointMask@RaceMenu@@QAEXH@Z
    void SetCheckpointMask(i32 arg1);

    // 0x5052E0 | ?SetCircuitMask@RaceMenu@@QAEXH@Z
    void SetCircuitMask(i32 arg1);

    // 0x505280 | ?SetProgressMask@RaceMenu@@QAEXH@Z
    void SetProgressMask(i32 arg1);
};

check_size(RaceMenu, 0x138);
