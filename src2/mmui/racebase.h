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

#include "mmwidget/menu.h"

/*
    mmui:racebase

    0x506BD0 | public: __thiscall RaceMenuBase::RaceMenuBase(int) | ??0RaceMenuBase@@QAE@H@Z
    0x506CC0 | public: void __thiscall RaceMenuBase::Init(int) | ?Init@RaceMenuBase@@QAEXH@Z
    0x507D30 | public: virtual __thiscall RaceMenuBase::~RaceMenuBase(void) | ??1RaceMenuBase@@UAE@XZ
    0x507DC0 | public: virtual void __thiscall RaceMenuBase::PreSetup(void) | ?PreSetup@RaceMenuBase@@UAEXXZ
    0x507DF0 | public: void __thiscall RaceMenuBase::FocusDescription(int,int) | ?FocusDescription@RaceMenuBase@@QAEXHH@Z
    0x507E40 | public: void __thiscall RaceMenuBase::WidgetOnOff(int,class uiWidget *) | ?WidgetOnOff@RaceMenuBase@@QAEXHPAVuiWidget@@@Z
    0x507EB0 | public: void __thiscall RaceMenuBase::SetRW(void) | ?SetRW@RaceMenuBase@@QAEXXZ
    0x5082C0 | public: void __thiscall RaceMenuBase::CheatCallback(void) | ?CheatCallback@RaceMenuBase@@QAEXXZ
    0x5082D0 | public: void __thiscall RaceMenuBase::SyncRaceState(void) | ?SyncRaceState@RaceMenuBase@@QAEXXZ
    0x508350 | public: void __thiscall RaceMenuBase::CityChange(void) | ?CityChange@RaceMenuBase@@QAEXXZ
    0x5084C0 | public: void __thiscall RaceMenuBase::AnotherCityChangeCB(void) | ?AnotherCityChangeCB@RaceMenuBase@@QAEXXZ
    0x508540 | public: void __thiscall RaceMenuBase::GameCallback(void) | ?GameCallback@RaceMenuBase@@QAEXXZ
    0x5085C0 | public: void __thiscall RaceMenuBase::LapsCallback(void) | ?LapsCallback@RaceMenuBase@@QAEXXZ
    0x5085D0 | public: void __thiscall RaceMenuBase::AICallback(void) | ?AICallback@RaceMenuBase@@QAEXXZ
    0x508620 | public: void __thiscall RaceMenuBase::ChangeLocalVals(void) | ?ChangeLocalVals@RaceMenuBase@@QAEXXZ
    0x5088C0 | public: void __thiscall RaceMenuBase::SetStateRace(void) | ?SetStateRace@RaceMenuBase@@QAEXXZ
    0x508C90 | public: void __thiscall RaceMenuBase::LoadRaceMap(void) | ?LoadRaceMap@RaceMenuBase@@QAEXXZ
    0x508D20 | public: void __thiscall RaceMenuBase::DecRaceName(void) | ?DecRaceName@RaceMenuBase@@QAEXXZ
    0x508DD0 | public: void __thiscall RaceMenuBase::IncRaceName(void) | ?IncRaceName@RaceMenuBase@@QAEXXZ
    0x508E80 | public: void __thiscall RaceMenuBase::IncLocale(void) | ?IncLocale@RaceMenuBase@@QAEXXZ
    0x508EB0 | public: void __thiscall RaceMenuBase::DecLocale(void) | ?DecLocale@RaceMenuBase@@QAEXXZ
    0x508ED0 | public: void __thiscall RaceMenuBase::IncTime(void) | ?IncTime@RaceMenuBase@@QAEXXZ
    0x508F00 | public: void __thiscall RaceMenuBase::DecTime(void) | ?DecTime@RaceMenuBase@@QAEXXZ
    0x508F30 | public: void __thiscall RaceMenuBase::IncWeather(void) | ?IncWeather@RaceMenuBase@@QAEXXZ
    0x508F60 | public: void __thiscall RaceMenuBase::DecWeather(void) | ?DecWeather@RaceMenuBase@@QAEXXZ
    public: virtual void * __thiscall RaceMenuBase::`vector deleting destructor'(unsigned int) | ??_ERaceMenuBase@@UAEPAXI@Z
    0x508F90 | public: virtual void * __thiscall RaceMenuBase::`scalar deleting destructor'(unsigned int) | ??_GRaceMenuBase@@UAEPAXI@Z
    0x5B4630 | const RaceMenuBase::`vftable' | ??_7RaceMenuBase@@6B@
    0x6B05C0 | public: static class mmRaceData RaceMenuBase::CircuitData | ?CircuitData@RaceMenuBase@@2VmmRaceData@@A
    0x6B0A78 | public: static class mmRaceData RaceMenuBase::RaceData | ?RaceData@RaceMenuBase@@2VmmRaceData@@A
    0x6B0F30 | public: static class mmRaceData RaceMenuBase::BlitzData | ?BlitzData@RaceMenuBase@@2VmmRaceData@@A
*/

class RaceMenuBase : public UIMenu
{
    // const RaceMenuBase::`vftable' @ 0x5B4630

public:
    // 0x506BD0 | ??0RaceMenuBase@@QAE@H@Z
    RaceMenuBase(i32 arg1);

    // 0x508F90 | ??_GRaceMenuBase@@UAEPAXI@Z
    // 0x507D30 | ??1RaceMenuBase@@UAE@XZ
    ~RaceMenuBase() override;

    // 0x5085D0 | ?AICallback@RaceMenuBase@@QAEXXZ
    void AICallback();

    // 0x5084C0 | ?AnotherCityChangeCB@RaceMenuBase@@QAEXXZ
    void AnotherCityChangeCB();

    // 0x508620 | ?ChangeLocalVals@RaceMenuBase@@QAEXXZ
    void ChangeLocalVals();

    // 0x5082C0 | ?CheatCallback@RaceMenuBase@@QAEXXZ
    void CheatCallback();

    // 0x508350 | ?CityChange@RaceMenuBase@@QAEXXZ
    void CityChange();

    // 0x508EB0 | ?DecLocale@RaceMenuBase@@QAEXXZ
    void DecLocale();

    // 0x508D20 | ?DecRaceName@RaceMenuBase@@QAEXXZ
    void DecRaceName();

    // 0x508F00 | ?DecTime@RaceMenuBase@@QAEXXZ
    void DecTime();

    // 0x508F60 | ?DecWeather@RaceMenuBase@@QAEXXZ
    void DecWeather();

    // 0x507DF0 | ?FocusDescription@RaceMenuBase@@QAEXHH@Z
    void FocusDescription(i32 arg1, i32 arg2);

    // 0x508540 | ?GameCallback@RaceMenuBase@@QAEXXZ
    void GameCallback();

    // 0x508E80 | ?IncLocale@RaceMenuBase@@QAEXXZ
    void IncLocale();

    // 0x508DD0 | ?IncRaceName@RaceMenuBase@@QAEXXZ
    void IncRaceName();

    // 0x508ED0 | ?IncTime@RaceMenuBase@@QAEXXZ
    void IncTime();

    // 0x508F30 | ?IncWeather@RaceMenuBase@@QAEXXZ
    void IncWeather();

    // 0x506CC0 | ?Init@RaceMenuBase@@QAEXH@Z
    void Init(i32 arg1);

    // 0x5085C0 | ?LapsCallback@RaceMenuBase@@QAEXXZ
    void LapsCallback();

    // 0x508C90 | ?LoadRaceMap@RaceMenuBase@@QAEXXZ
    void LoadRaceMap();

    // 0x507DC0 | ?PreSetup@RaceMenuBase@@UAEXXZ
    void PreSetup() override;

    // 0x507EB0 | ?SetRW@RaceMenuBase@@QAEXXZ
    void SetRW();

    // 0x5088C0 | ?SetStateRace@RaceMenuBase@@QAEXXZ
    void SetStateRace();

    // 0x5082D0 | ?SyncRaceState@RaceMenuBase@@QAEXXZ
    void SyncRaceState();

    // 0x507E40 | ?WidgetOnOff@RaceMenuBase@@QAEXHPAVuiWidget@@@Z
    void WidgetOnOff(i32 arg1, class uiWidget* arg2);

    // 0x505450 | ?SetCRWidgets@RaceMenuBase@@UAEXH@Z
    virtual void SetCRWidgets(i32 arg1);

    // 0x505460 | ?InitCRWidgets@RaceMenuBase@@UAEXXZ
    virtual void InitCRWidgets();

    // 0x6B0F30 | ?BlitzData@RaceMenuBase@@2VmmRaceData@@A
    static inline extern_var(0x6B0F30, class mmRaceData, BlitzData);

    // 0x6B05C0 | ?CircuitData@RaceMenuBase@@2VmmRaceData@@A
    static inline extern_var(0x6B05C0, class mmRaceData, CircuitData);

    // 0x6B0A78 | ?RaceData@RaceMenuBase@@2VmmRaceData@@A
    static inline extern_var(0x6B0A78, class mmRaceData, RaceData);
};

check_size(RaceMenuBase, 0x0);
