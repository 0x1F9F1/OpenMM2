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
    mmgame:singlerace

    0x41DF30 | public: __thiscall mmSingleRace::mmSingleRace(void) | ??0mmSingleRace@@QAE@XZ
    0x41DF60 | public: virtual __thiscall mmSingleRace::~mmSingleRace(void) | ??1mmSingleRace@@UAE@XZ
    0x41E010 | public: virtual int __thiscall mmSingleRace::Init(void) | ?Init@mmSingleRace@@UAEHXZ
    0x41E130 | public: virtual void __thiscall mmSingleRace::InitMyPlayer(void) | ?InitMyPlayer@mmSingleRace@@UAEXXZ
    0x41E1A0 | public: virtual void __thiscall mmSingleRace::InitHUD(void) | ?InitHUD@mmSingleRace@@UAEXXZ
    0x41E200 | public: virtual void __thiscall mmSingleRace::InitGameObjects(void) | ?InitGameObjects@mmSingleRace@@UAEXXZ
    0x41E4E0 | public: virtual void __thiscall mmSingleRace::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleRace@@UAEXXZ
    0x41E4F0 | public: virtual void __thiscall mmSingleRace::Reset(void) | ?Reset@mmSingleRace@@UAEXXZ
    0x41E530 | public: virtual void __thiscall mmSingleRace::HitWaterHandler(void) | ?HitWaterHandler@mmSingleRace@@UAEXXZ
    0x41E5A0 | public: virtual void __thiscall mmSingleRace::Update(void) | ?Update@mmSingleRace@@UAEXXZ
    0x41E5B0 | public: virtual void __thiscall mmSingleRace::UpdateGameInput(int) | ?UpdateGameInput@mmSingleRace@@UAEXH@Z
    0x41E5F0 | public: virtual void __thiscall mmSingleRace::UpdateGame(void) | ?UpdateGame@mmSingleRace@@UAEXXZ
    0x41EBA0 | public: void __thiscall mmSingleRace::UpdateOpponentStatus(void) | ?UpdateOpponentStatus@mmSingleRace@@QAEXXZ
    0x41EDB0 | public: virtual void __thiscall mmSingleRace::SwitchState(int) | ?SwitchState@mmSingleRace@@UAEXH@Z
    0x41EDC0 | public: void __thiscall mmSingleRace::UpdateScore(void) | ?UpdateScore@mmSingleRace@@QAEXXZ
    0x41F100 | private: int __thiscall mmSingleRace::NextRaceAvailable(void) | ?NextRaceAvailable@mmSingleRace@@AAEHXZ
    0x41F170 | private: void __thiscall mmSingleRace::FinishMessage(int,int) | ?FinishMessage@mmSingleRace@@AAEXHH@Z
    0x41F310 | private: int __thiscall mmSingleRace::RegisterFinish(void) | ?RegisterFinish@mmSingleRace@@AAEHXZ
    0x41F590 | private: int __thiscall mmSingleRace::ProgressCheck(int,int) | ?ProgressCheck@mmSingleRace@@AAEHHH@Z
    0x41F600 | public: virtual void __thiscall mmSingleRace::NextRace(void) | ?NextRace@mmSingleRace@@UAEXXZ
    public: void __thiscall mmSingleRace::AddWidgets(class bkBank *) | ?AddWidgets@mmSingleRace@@QAEXPAVbkBank@@@Z
    0x41F940 | public: virtual void * __thiscall mmSingleRace::`scalar deleting destructor'(unsigned int) | ??_GmmSingleRace@@UAEPAXI@Z
    public: virtual void * __thiscall mmSingleRace::`vector deleting destructor'(unsigned int) | ??_EmmSingleRace@@UAEPAXI@Z
    0x41F970 | public: virtual void __thiscall mmSingleRace::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleRace@@UAEXH@Z
    0x41F980 | public: virtual class mmWaypoints * __thiscall mmSingleRace::GetWaypoints(void) | ?GetWaypoints@mmSingleRace@@UAEPAVmmWaypoints@@XZ
    0x5B074C | const mmSingleRace::`vftable' | ??_7mmSingleRace@@6B@
*/

// #include "hooking.h"
