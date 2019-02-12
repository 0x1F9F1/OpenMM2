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
    mmgame:singleblitz

    0x41AC00 | public: __thiscall mmSingleBlitz::mmSingleBlitz(void) | ??0mmSingleBlitz@@QAE@XZ
    0x41AC70 | public: virtual __thiscall mmSingleBlitz::~mmSingleBlitz(void) | ??1mmSingleBlitz@@UAE@XZ
    0x41AD30 | public: virtual int __thiscall mmSingleBlitz::Init(void) | ?Init@mmSingleBlitz@@UAEHXZ
    0x41AE50 | public: virtual void __thiscall mmSingleBlitz::InitMyPlayer(void) | ?InitMyPlayer@mmSingleBlitz@@UAEXXZ
    0x41AEC0 | public: virtual void __thiscall mmSingleBlitz::InitHUD(void) | ?InitHUD@mmSingleBlitz@@UAEXXZ
    0x41B0D0 | public: virtual void __thiscall mmSingleBlitz::InitGameObjects(void) | ?InitGameObjects@mmSingleBlitz@@UAEXXZ
    0x41B360 | public: virtual void __thiscall mmSingleBlitz::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleBlitz@@UAEXXZ
    0x41B370 | public: virtual void __thiscall mmSingleBlitz::Reset(void) | ?Reset@mmSingleBlitz@@UAEXXZ
    0x41B400 | public: virtual void __thiscall mmSingleBlitz::HitWaterHandler(void) | ?HitWaterHandler@mmSingleBlitz@@UAEXXZ
    0x41B460 | public: virtual void __thiscall mmSingleBlitz::Update(void) | ?Update@mmSingleBlitz@@UAEXXZ
    0x41B590 | public: virtual void __thiscall mmSingleBlitz::UpdateGameInput(int) | ?UpdateGameInput@mmSingleBlitz@@UAEXH@Z
    0x41B5D0 | public: virtual void __thiscall mmSingleBlitz::UpdateGame(void) | ?UpdateGame@mmSingleBlitz@@UAEXXZ
    0x41BDB0 | public: virtual void __thiscall mmSingleBlitz::SwitchState(int) | ?SwitchState@mmSingleBlitz@@UAEXH@Z
    0x41BDC0 | private: int __thiscall mmSingleBlitz::RegisterFinish(void) | ?RegisterFinish@mmSingleBlitz@@AAEHXZ
    0x41BFA0 | private: void __thiscall mmSingleBlitz::FinishMessage(int) | ?FinishMessage@mmSingleBlitz@@AAEXH@Z
    0x41BFD0 | private: int __thiscall mmSingleBlitz::ProgressCheck(int,int) | ?ProgressCheck@mmSingleBlitz@@AAEHHH@Z
    0x41C080 | public: virtual void __thiscall mmSingleBlitz::NextRace(void) | ?NextRace@mmSingleBlitz@@UAEXXZ
    0x41C260 | public: void __thiscall mmSingleBlitz::PlayTimerWarning(float) | ?PlayTimerWarning@mmSingleBlitz@@QAEXM@Z
    public: void __thiscall mmSingleBlitz::AddWidgets(class bkBank *) | ?AddWidgets@mmSingleBlitz@@QAEXPAVbkBank@@@Z
    0x41C450 | public: virtual void * __thiscall mmSingleBlitz::`scalar deleting destructor'(unsigned int) | ??_GmmSingleBlitz@@UAEPAXI@Z
    public: virtual void * __thiscall mmSingleBlitz::`vector deleting destructor'(unsigned int) | ??_EmmSingleBlitz@@UAEPAXI@Z
    0x41C480 | public: virtual void __thiscall mmSingleBlitz::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleBlitz@@UAEXH@Z
    0x41C490 | public: virtual class mmWaypoints * __thiscall mmSingleBlitz::GetWaypoints(void) | ?GetWaypoints@mmSingleBlitz@@UAEPAVmmWaypoints@@XZ
    0x5B064C | const mmSingleBlitz::`vftable' | ??_7mmSingleBlitz@@6B@
    int bScaleIcon | ?bScaleIcon@@3HA
    float gMaxIconDist | ?gMaxIconDist@@3MA
    float gNearIconScale | ?gNearIconScale@@3MA
    float gFarIconScale | ?gFarIconScale@@3MA
    unsigned int * IconColors | ?IconColors@@3PAIA
    float g_icon_timer | ?g_icon_timer@@3MA
    int g_icon_counter | ?g_icon_counter@@3HA
    bool RaceFailed | ?RaceFailed@@3_NA
    struct OppIconInfo * WpIcons | ?WpIcons@@3PAUOppIconInfo@@A
*/

// #include "hooking.h"
