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
    mmgame:multirace

    0x428260 | public: __thiscall mmMultiRace::mmMultiRace(void) | ??0mmMultiRace@@QAE@XZ
    0x4282A0 | public: virtual __thiscall mmMultiRace::~mmMultiRace(void) | ??1mmMultiRace@@UAE@XZ
    0x428340 | public: virtual int __thiscall mmMultiRace::Init(void) | ?Init@mmMultiRace@@UAEHXZ
    0x428430 | public: virtual void __thiscall mmMultiRace::InitMyPlayer(void) | ?InitMyPlayer@mmMultiRace@@UAEXXZ
    0x4284A0 | public: virtual void __thiscall mmMultiRace::InitHUD(void) | ?InitHUD@mmMultiRace@@UAEXXZ
    0x4284F0 | public: virtual void __thiscall mmMultiRace::InitGameObjects(void) | ?InitGameObjects@mmMultiRace@@UAEXXZ
    0x428700 | public: virtual void __thiscall mmMultiRace::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiRace@@UAEXXZ
    0x428AD0 | public: virtual void __thiscall mmMultiRace::Reset(void) | ?Reset@mmMultiRace@@UAEXXZ
    0x428BA0 | public: virtual void __thiscall mmMultiRace::UpdateGameInput(int) | ?UpdateGameInput@mmMultiRace@@UAEXH@Z
    0x428BE0 | public: virtual void __thiscall mmMultiRace::UpdateGame(void) | ?UpdateGame@mmMultiRace@@UAEXXZ
    0x429440 | public: virtual void __thiscall mmMultiRace::SwitchState(int) | ?SwitchState@mmMultiRace@@UAEXH@Z
    0x429450 | public: virtual void __thiscall mmMultiRace::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiRace@@UAEXPAUNETSYS_MSG@@@Z
    0x429560 | public: virtual void __thiscall mmMultiRace::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiRace@@UAEXPAUNET_RCXHEAD@@@Z
    0x429BE0 | public: void __thiscall mmMultiRace::SetTimeoutOn(void) | ?SetTimeoutOn@mmMultiRace@@QAEXXZ
    0x429C10 | public: void __thiscall mmMultiRace::SetTimeoutOff(void) | ?SetTimeoutOff@mmMultiRace@@QAEXXZ
    public: virtual void * __thiscall mmMultiRace::`vector deleting destructor'(unsigned int) | ??_EmmMultiRace@@UAEPAXI@Z
    0x429D50 | public: virtual void * __thiscall mmMultiRace::`scalar deleting destructor'(unsigned int) | ??_GmmMultiRace@@UAEPAXI@Z
    0x429D80 | public: virtual class mmWaypoints * __thiscall mmMultiRace::GetWaypoints(void) | ?GetWaypoints@mmMultiRace@@UAEPAVmmWaypoints@@XZ
    0x5B0AB0 | const mmMultiRace::`vftable' | ??_7mmMultiRace@@6B@
*/

// #include "hooking.h"
