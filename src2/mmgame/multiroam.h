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

#include "gamemulti.h"

/*
    mmgame:multiroam

    0x427530 | public: __thiscall mmMultiRoam::mmMultiRoam(void) | ??0mmMultiRoam@@QAE@XZ
    0x427560 | public: virtual __thiscall mmMultiRoam::~mmMultiRoam(void) | ??1mmMultiRoam@@UAE@XZ
    0x427600 | public: virtual int __thiscall mmMultiRoam::Init(void) | ?Init@mmMultiRoam@@UAEHXZ
    0x427700 | public: virtual void __thiscall mmMultiRoam::InitMyPlayer(void) | ?InitMyPlayer@mmMultiRoam@@UAEXXZ
    0x427770 | public: virtual void __thiscall mmMultiRoam::InitHUD(void) | ?InitHUD@mmMultiRoam@@UAEXXZ
    0x4277A0 | public: virtual void __thiscall mmMultiRoam::InitGameObjects(void) | ?InitGameObjects@mmMultiRoam@@UAEXXZ
    0x427880 | public: virtual void __thiscall mmMultiRoam::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiRoam@@UAEXXZ
    0x427C50 | public: virtual void __thiscall mmMultiRoam::Reset(void) | ?Reset@mmMultiRoam@@UAEXXZ
    0x427CC0 | public: virtual void __thiscall mmMultiRoam::UpdateGameInput(int) | ?UpdateGameInput@mmMultiRoam@@UAEXH@Z
    0x427CD0 | public: virtual void __thiscall mmMultiRoam::UpdateGame(void) | ?UpdateGame@mmMultiRoam@@UAEXXZ
    0x427EB0 | public: virtual void __thiscall mmMultiRoam::SwitchState(int) | ?SwitchState@mmMultiRoam@@UAEXH@Z
    0x427EC0 | public: virtual void __thiscall mmMultiRoam::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiRoam@@UAEXPAUNETSYS_MSG@@@Z
    0x428050 | public: virtual void __thiscall mmMultiRoam::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiRoam@@UAEXPAUNET_RCXHEAD@@@Z
    public: virtual void * __thiscall mmMultiRoam::`vector deleting destructor'(unsigned int) | ??_EmmMultiRoam@@UAEPAXI@Z
    0x428220 | public: virtual void * __thiscall mmMultiRoam::`scalar deleting destructor'(unsigned int) | ??_GmmMultiRoam@@UAEPAXI@Z
    0x428250 | public: virtual class mmWaypoints * __thiscall mmMultiRoam::GetWaypoints(void) | ?GetWaypoints@mmMultiRoam@@UAEPAVmmWaypoints@@XZ
    0x5B0A20 | const mmMultiRoam::`vftable' | ??_7mmMultiRoam@@6B@
*/

class mmMultiRoam : public mmGameMulti
{
    // const mmMultiRoam::`vftable' @ 0x5B0A20

public:
    // 0x427530 | ??0mmMultiRoam@@QAE@XZ
    mmMultiRoam();

    // 0x428220 | ??_GmmMultiRoam@@UAEPAXI@Z
    // 0x427560 | ??1mmMultiRoam@@UAE@XZ
    ~mmMultiRoam() override;

    // 0x428050 | ?GameMessage@mmMultiRoam@@UAEXPAUNET_RCXHEAD@@@Z
    void GameMessage(struct NET_RCXHEAD* arg1) override;

    // 0x428250 | ?GetWaypoints@mmMultiRoam@@UAEPAVmmWaypoints@@XZ
    class mmWaypoints* GetWaypoints() override;

    // 0x427600 | ?Init@mmMultiRoam@@UAEHXZ
    i32 Init() override;

    // 0x4277A0 | ?InitGameObjects@mmMultiRoam@@UAEXXZ
    void InitGameObjects() override;

    // 0x427770 | ?InitHUD@mmMultiRoam@@UAEXXZ
    void InitHUD() override;

    // 0x427700 | ?InitMyPlayer@mmMultiRoam@@UAEXXZ
    void InitMyPlayer() override;

    // 0x427880 | ?InitNetworkPlayers@mmMultiRoam@@UAEXXZ
    void InitNetworkPlayers() override;

    // 0x427C50 | ?Reset@mmMultiRoam@@UAEXXZ
    void Reset() override;

    // 0x427EB0 | ?SwitchState@mmMultiRoam@@UAEXH@Z
    void SwitchState(i32 arg1) override;

    // 0x427EC0 | ?SystemMessage@mmMultiRoam@@UAEXPAUNETSYS_MSG@@@Z
    void SystemMessage(struct NETSYS_MSG* arg1) override;

    // 0x427CD0 | ?UpdateGame@mmMultiRoam@@UAEXXZ
    void UpdateGame() override;

    // 0x427CC0 | ?UpdateGameInput@mmMultiRoam@@UAEXH@Z
    void UpdateGameInput(i32 arg1) override;
};

check_size(mmMultiRoam, 0x0);
