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
    mmgame:multicircuit

    0x421B90 | public: __thiscall mmMultiCircuit::mmMultiCircuit(void) | ??0mmMultiCircuit@@QAE@XZ
    0x421BC0 | public: virtual __thiscall mmMultiCircuit::~mmMultiCircuit(void) | ??1mmMultiCircuit@@UAE@XZ
    0x421C60 | public: virtual int __thiscall mmMultiCircuit::Init(void) | ?Init@mmMultiCircuit@@UAEHXZ
    0x421DD0 | public: virtual void __thiscall mmMultiCircuit::InitMyPlayer(void) | ?InitMyPlayer@mmMultiCircuit@@UAEXXZ
    0x421E40 | public: virtual void __thiscall mmMultiCircuit::InitHUD(void) | ?InitHUD@mmMultiCircuit@@UAEXXZ
    0x421E90 | public: virtual void __thiscall mmMultiCircuit::InitGameObjects(void) | ?InitGameObjects@mmMultiCircuit@@UAEXXZ
    0x4220A0 | public: virtual void __thiscall mmMultiCircuit::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiCircuit@@UAEXXZ
    0x422470 | public: virtual void __thiscall mmMultiCircuit::Reset(void) | ?Reset@mmMultiCircuit@@UAEXXZ
    0x422530 | public: virtual void __thiscall mmMultiCircuit::UpdateGameInput(int) | ?UpdateGameInput@mmMultiCircuit@@UAEXH@Z
    0x422570 | public: virtual void __thiscall mmMultiCircuit::UpdateGame(void) | ?UpdateGame@mmMultiCircuit@@UAEXXZ
    0x422D90 | public: virtual void __thiscall mmMultiCircuit::SwitchState(int) | ?SwitchState@mmMultiCircuit@@UAEXH@Z
    0x422DA0 | public: virtual void __thiscall mmMultiCircuit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmMultiCircuit@@UAEXH@Z
    0x422DB0 | public: virtual void __thiscall mmMultiCircuit::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiCircuit@@UAEXPAUNETSYS_MSG@@@Z
    0x422EC0 | public: virtual void __thiscall mmMultiCircuit::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiCircuit@@UAEXPAUNET_RCXHEAD@@@Z
    public: void __thiscall mmMultiCircuit::SetTimeoutOn(void) | ?SetTimeoutOn@mmMultiCircuit@@QAEXXZ
    public: void __thiscall mmMultiCircuit::SetTimeoutOff(void) | ?SetTimeoutOff@mmMultiCircuit@@QAEXXZ
    public: virtual void * __thiscall mmMultiCircuit::`scalar deleting destructor'(unsigned int) | ??_GmmMultiCircuit@@UAEPAXI@Z
    public: virtual void * __thiscall mmMultiCircuit::`vector deleting destructor'(unsigned int) | ??_EmmMultiCircuit@@UAEPAXI@Z
    0x4236A0 | public: virtual class mmWaypoints * __thiscall mmMultiCircuit::GetWaypoints(void) | ?GetWaypoints@mmMultiCircuit@@UAEPAVmmWaypoints@@XZ
    0x5B08EC | const mmMultiCircuit::`vftable' | ??_7mmMultiCircuit@@6B@
*/

// #include "hooking.h"
