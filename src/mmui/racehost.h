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
    mmui:racehost

    0x5006A0 | public: __thiscall HostRaceMenu::HostRaceMenu(int) | ??0HostRaceMenu@@QAE@H@Z
    0x5007E0 | public: virtual __thiscall HostRaceMenu::~HostRaceMenu(void) | ??1HostRaceMenu@@UAE@XZ
    0x500870 | public: virtual void __thiscall HostRaceMenu::PreSetup(void) | ?PreSetup@HostRaceMenu@@UAEXXZ
    0x500890 | public: virtual void __thiscall HostRaceMenu::InitCRWidgets(void) | ?InitCRWidgets@HostRaceMenu@@UAEXXZ
    0x501230 | public: virtual void __thiscall HostRaceMenu::SetCRWidgets(int) | ?SetCRWidgets@HostRaceMenu@@UAEXH@Z
    0x501330 | public: void __thiscall HostRaceMenu::SetLimitControl(void) | ?SetLimitControl@HostRaceMenu@@QAEXXZ
    0x5014E0 | public: int __thiscall HostRaceMenu::EncodeCRData(void) | ?EncodeCRData@HostRaceMenu@@QAEHXZ
    0x501530 | public: void __thiscall HostRaceMenu::DecodeCRData(int) | ?DecodeCRData@HostRaceMenu@@QAEXH@Z
    0x5015A0 | public: void __thiscall HostRaceMenu::GetLimit(int &,int &) | ?GetLimit@HostRaceMenu@@QAEXAAH0@Z
    0x5015F0 | public: void __thiscall HostRaceMenu::SetLimit(int &,int &) | ?SetLimit@HostRaceMenu@@QAEXAAH0@Z
    0x501670 | public: void __thiscall HostRaceMenu::SetGoldMass(int) | ?SetGoldMass@HostRaceMenu@@QAEXH@Z
    0x5016A0 | public: int __thiscall HostRaceMenu::GetGoldMass(void) | ?GetGoldMass@HostRaceMenu@@QAEHXZ
    0x5016B0 | public: int __thiscall HostRaceMenu::GetLimitVal(int &) | ?GetLimitVal@HostRaceMenu@@QAEHAAH@Z
    0x501700 | public: int __thiscall HostRaceMenu::GetGoldMassVal(void) | ?GetGoldMassVal@HostRaceMenu@@QAEHXZ
    0x501710 | public: void __thiscall HostRaceMenu::SetGameClassCallback(void) | ?SetGameClassCallback@HostRaceMenu@@QAEXXZ
    0x501720 | public: void __thiscall HostRaceMenu::LimitInc(void) | ?LimitInc@HostRaceMenu@@QAEXXZ
    0x501770 | public: void __thiscall HostRaceMenu::LimitDec(void) | ?LimitDec@HostRaceMenu@@QAEXXZ
    0x5017C0 | public: void __thiscall HostRaceMenu::MassInc(void) | ?MassInc@HostRaceMenu@@QAEXXZ
    0x5017F0 | public: void __thiscall HostRaceMenu::MassDec(void) | ?MassDec@HostRaceMenu@@QAEXXZ
    0x501820 | public: virtual void * __thiscall HostRaceMenu::`scalar deleting destructor'(unsigned int) | ??_GHostRaceMenu@@UAEPAXI@Z
    public: virtual void * __thiscall HostRaceMenu::`vector deleting destructor'(unsigned int) | ??_EHostRaceMenu@@UAEPAXI@Z
    0x5B424C | const HostRaceMenu::`vftable' | ??_7HostRaceMenu@@6B@
    int * GameType_PenaltyTable | ?GameType_PenaltyTable@@3PAHA
    int * Limit_ValueTable | ?Limit_ValueTable@@3PAHA
*/

// #include "hooking.h"
