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
    mmgame:singlecircuit

    0x41C4A0 | public: __thiscall mmSingleCircuit::mmSingleCircuit(void) | ??0mmSingleCircuit@@QAE@XZ
    0x41C4E0 | public: virtual __thiscall mmSingleCircuit::~mmSingleCircuit(void) | ??1mmSingleCircuit@@UAE@XZ
    0x41C590 | public: virtual int __thiscall mmSingleCircuit::Init(void) | ?Init@mmSingleCircuit@@UAEHXZ
    0x41C6B0 | public: virtual void __thiscall mmSingleCircuit::InitMyPlayer(void) | ?InitMyPlayer@mmSingleCircuit@@UAEXXZ
    0x41C720 | public: virtual void __thiscall mmSingleCircuit::InitHUD(void) | ?InitHUD@mmSingleCircuit@@UAEXXZ
    0x41C770 | public: virtual void __thiscall mmSingleCircuit::InitGameObjects(void) | ?InitGameObjects@mmSingleCircuit@@UAEXXZ
    0x41CA40 | public: virtual void __thiscall mmSingleCircuit::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleCircuit@@UAEXXZ
    0x41CA50 | public: virtual void __thiscall mmSingleCircuit::Reset(void) | ?Reset@mmSingleCircuit@@UAEXXZ
    0x41CAA0 | public: virtual void __thiscall mmSingleCircuit::HitWaterHandler(void) | ?HitWaterHandler@mmSingleCircuit@@UAEXXZ
    0x41CB80 | public: virtual void __thiscall mmSingleCircuit::Update(void) | ?Update@mmSingleCircuit@@UAEXXZ
    0x41CB90 | public: virtual void __thiscall mmSingleCircuit::UpdateGameInput(int) | ?UpdateGameInput@mmSingleCircuit@@UAEXH@Z
    0x41CBA0 | public: void __thiscall mmSingleCircuit::UpdateScore(void) | ?UpdateScore@mmSingleCircuit@@QAEXXZ
    0x41CEE0 | public: virtual void __thiscall mmSingleCircuit::UpdateGame(void) | ?UpdateGame@mmSingleCircuit@@UAEXXZ
    0x41D480 | public: void __thiscall mmSingleCircuit::UpdateOpponentStatus(void) | ?UpdateOpponentStatus@mmSingleCircuit@@QAEXXZ
    0x41D690 | public: virtual void __thiscall mmSingleCircuit::SwitchState(int) | ?SwitchState@mmSingleCircuit@@UAEXH@Z
    0x41D6A0 | private: void __thiscall mmSingleCircuit::FinishMessage(int,int) | ?FinishMessage@mmSingleCircuit@@AAEXHH@Z
    0x41D840 | private: int __thiscall mmSingleCircuit::RegisterLap(void) | ?RegisterLap@mmSingleCircuit@@AAEHXZ
    0x41D8A0 | private: int __thiscall mmSingleCircuit::RegisterFinish(void) | ?RegisterFinish@mmSingleCircuit@@AAEHXZ
    0x41DB80 | private: int __thiscall mmSingleCircuit::ProgressCheck(int,int) | ?ProgressCheck@mmSingleCircuit@@AAEHHH@Z
    0x41DBC0 | public: virtual void __thiscall mmSingleCircuit::NextRace(void) | ?NextRace@mmSingleCircuit@@UAEXXZ
    public: void __thiscall mmSingleCircuit::AddWidgets(class bkBank *) | ?AddWidgets@mmSingleCircuit@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmSingleCircuit::`scalar deleting destructor'(unsigned int) | ??_GmmSingleCircuit@@UAEPAXI@Z
    0x41DEE0 | public: virtual void * __thiscall mmSingleCircuit::`vector deleting destructor'(unsigned int) | ??_EmmSingleCircuit@@UAEPAXI@Z
    0x41DF10 | public: virtual void __thiscall mmSingleCircuit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleCircuit@@UAEXH@Z
    0x41DF20 | public: virtual class mmWaypoints * __thiscall mmSingleCircuit::GetWaypoints(void) | ?GetWaypoints@mmSingleCircuit@@UAEPAVmmWaypoints@@XZ
    0x5B06CC | const mmSingleCircuit::`vftable' | ??_7mmSingleCircuit@@6B@
*/

// #include "hooking.h"
