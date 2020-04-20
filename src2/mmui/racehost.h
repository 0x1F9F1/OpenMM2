/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct HostRaceMenu : RaceMenuBase
{
public:
    // HostRaceMenu::`vftable' @ 0x5B424C

    // 0x5006A0 | ??0HostRaceMenu@@QAE@H@Z
    inline HostRaceMenu(int32_t arg1)
    {
        stub<member_func_t<void, HostRaceMenu, int32_t>>(0x5006A0, this, arg1);
    }

    // 0x501330 | ?SetLimitControl@HostRaceMenu@@QAEXXZ
    inline void SetLimitControl()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x501330, this);
    }

    // 0x5014E0 | ?EncodeCRData@HostRaceMenu@@QAEHXZ
    inline int32_t EncodeCRData()
    {
        return stub<member_func_t<int32_t, HostRaceMenu>>(0x5014E0, this);
    }

    // 0x501530 | ?DecodeCRData@HostRaceMenu@@QAEXH@Z
    inline void DecodeCRData(int32_t arg1)
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t>>(0x501530, this, arg1);
    }

    // 0x5015A0 | ?GetLimit@HostRaceMenu@@QAEXAAH0@Z
    inline void GetLimit(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t&, int32_t&>>(0x5015A0, this, arg1, arg2);
    }

    // 0x5015F0 | ?SetLimit@HostRaceMenu@@QAEXAAH0@Z
    inline void SetLimit(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t&, int32_t&>>(0x5015F0, this, arg1, arg2);
    }

    // 0x501670 | ?SetGoldMass@HostRaceMenu@@QAEXH@Z
    inline void SetGoldMass(int32_t arg1)
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t>>(0x501670, this, arg1);
    }

    // 0x5016A0 | ?GetGoldMass@HostRaceMenu@@QAEHXZ
    inline int32_t GetGoldMass()
    {
        return stub<member_func_t<int32_t, HostRaceMenu>>(0x5016A0, this);
    }

    // 0x5016B0 | ?GetLimitVal@HostRaceMenu@@QAEHAAH@Z
    inline int32_t GetLimitVal(int32_t& arg1)
    {
        return stub<member_func_t<int32_t, HostRaceMenu, int32_t&>>(0x5016B0, this, arg1);
    }

    // 0x501700 | ?GetGoldMassVal@HostRaceMenu@@QAEHXZ
    inline int32_t GetGoldMassVal()
    {
        return stub<member_func_t<int32_t, HostRaceMenu>>(0x501700, this);
    }

    // 0x501710 | ?SetGameClassCallback@HostRaceMenu@@QAEXXZ
    inline void SetGameClassCallback()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x501710, this);
    }

    // 0x501720 | ?LimitInc@HostRaceMenu@@QAEXXZ
    inline void LimitInc()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x501720, this);
    }

    // 0x501770 | ?LimitDec@HostRaceMenu@@QAEXXZ
    inline void LimitDec()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x501770, this);
    }

    // 0x5017C0 | ?MassInc@HostRaceMenu@@QAEXXZ
    inline void MassInc()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x5017C0, this);
    }

    // 0x5017F0 | ?MassDec@HostRaceMenu@@QAEXXZ
    inline void MassDec()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x5017F0, this);
    }

    // 0x5007E0 | ??1HostRaceMenu@@UAE@XZ
    inline ~HostRaceMenu() override
    {
        stub<member_func_t<void, HostRaceMenu>>(0x5007E0, this);
    }

    // 0x500870 | ?PreSetup@HostRaceMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x500870, this);
    }

    // 0x501230 | ?SetCRWidgets@HostRaceMenu@@UAEXH@Z
    inline void SetCRWidgets(int32_t arg1) override
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t>>(0x501230, this, arg1);
    }

    // 0x500890 | ?InitCRWidgets@HostRaceMenu@@UAEXXZ
    inline void InitCRWidgets() override
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x500890, this);
    }
};
