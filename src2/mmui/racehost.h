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

class HostRaceMenu : public RaceMenuBase
{
    // const HostRaceMenu::`vftable' @ 0x5B424C

public:
    // 0x5006A0 | ??0HostRaceMenu@@QAE@H@Z
    HostRaceMenu(i32 arg1);

    // 0x501820 | ??_GHostRaceMenu@@UAEPAXI@Z
    // 0x5007E0 | ??1HostRaceMenu@@UAE@XZ
    ~HostRaceMenu() override;

    // 0x501530 | ?DecodeCRData@HostRaceMenu@@QAEXH@Z
    void DecodeCRData(i32 arg1);

    // 0x5014E0 | ?EncodeCRData@HostRaceMenu@@QAEHXZ
    i32 EncodeCRData();

    // 0x5016A0 | ?GetGoldMass@HostRaceMenu@@QAEHXZ
    i32 GetGoldMass();

    // 0x501700 | ?GetGoldMassVal@HostRaceMenu@@QAEHXZ
    i32 GetGoldMassVal();

    // 0x5015A0 | ?GetLimit@HostRaceMenu@@QAEXAAH0@Z
    void GetLimit(i32& arg1, i32& arg2);

    // 0x5016B0 | ?GetLimitVal@HostRaceMenu@@QAEHAAH@Z
    i32 GetLimitVal(i32& arg1);

    // 0x500890 | ?InitCRWidgets@HostRaceMenu@@UAEXXZ
    void InitCRWidgets() override;

    // 0x501770 | ?LimitDec@HostRaceMenu@@QAEXXZ
    void LimitDec();

    // 0x501720 | ?LimitInc@HostRaceMenu@@QAEXXZ
    void LimitInc();

    // 0x5017F0 | ?MassDec@HostRaceMenu@@QAEXXZ
    void MassDec();

    // 0x5017C0 | ?MassInc@HostRaceMenu@@QAEXXZ
    void MassInc();

    // 0x500870 | ?PreSetup@HostRaceMenu@@UAEXXZ
    void PreSetup() override;

    // 0x501230 | ?SetCRWidgets@HostRaceMenu@@UAEXH@Z
    void SetCRWidgets(i32 arg1) override;

    // 0x501710 | ?SetGameClassCallback@HostRaceMenu@@QAEXXZ
    void SetGameClassCallback();

    // 0x501670 | ?SetGoldMass@HostRaceMenu@@QAEXH@Z
    void SetGoldMass(i32 arg1);

    // 0x5015F0 | ?SetLimit@HostRaceMenu@@QAEXAAH0@Z
    void SetLimit(i32& arg1, i32& arg2);

    // 0x501330 | ?SetLimitControl@HostRaceMenu@@QAEXXZ
    void SetLimitControl();
};

check_size(HostRaceMenu, 0x0);
