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

#include "gamesingle.h"
#include "mmgamemusicdata.h"

/*
    mmgame:singleroam

    0x41F990 | public: __thiscall mmSingleRoam::mmSingleRoam(void) | ??0mmSingleRoam@@QAE@XZ
    0x41F9C0 | public: virtual __thiscall mmSingleRoam::~mmSingleRoam(void) | ??1mmSingleRoam@@UAE@XZ
    0x41FA30 | public: virtual int __thiscall mmSingleRoam::Init(void) | ?Init@mmSingleRoam@@UAEHXZ
    0x41FAA0 | public: virtual void __thiscall mmSingleRoam::InitMyPlayer(void) | ?InitMyPlayer@mmSingleRoam@@UAEXXZ
    0x41FB10 | public: virtual void __thiscall mmSingleRoam::InitHUD(void) | ?InitHUD@mmSingleRoam@@UAEXXZ
    0x41FB40 | public: virtual void __thiscall mmSingleRoam::InitGameObjects(void) | ?InitGameObjects@mmSingleRoam@@UAEXXZ
    0x41FC40 | public: virtual void __thiscall mmSingleRoam::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleRoam@@UAEXXZ
    0x41FC90 | public: virtual void __thiscall mmSingleRoam::Reset(void) | ?Reset@mmSingleRoam@@UAEXXZ
    0x41FCD0 | public: virtual void __thiscall mmSingleRoam::HitWaterHandler(void) | ?HitWaterHandler@mmSingleRoam@@UAEXXZ
    0x41FCE0 | public: virtual void __thiscall mmSingleRoam::Update(void) | ?Update@mmSingleRoam@@UAEXXZ
    0x41FCF0 | public: virtual void __thiscall mmSingleRoam::UpdateGameInput(int) | ?UpdateGameInput@mmSingleRoam@@UAEXH@Z
    0x41FD00 | public: virtual void __thiscall mmSingleRoam::UpdateGame(void) | ?UpdateGame@mmSingleRoam@@UAEXXZ
    0x41FD90 | public: virtual void __thiscall mmSingleRoam::SwitchState(int) | ?SwitchState@mmSingleRoam@@UAEXH@Z
    0x41FDA0 | public: virtual void __thiscall mmSingleRoam::NextRace(void) | ?NextRace@mmSingleRoam@@UAEXXZ
    public: void __thiscall mmSingleRoam::AddWidgets(class bkBank *) | ?AddWidgets@mmSingleRoam@@QAEXPAVbkBank@@@Z
    0x41FEE0 | public: virtual void * __thiscall mmSingleRoam::`scalar deleting destructor'(unsigned int) | ??_GmmSingleRoam@@UAEPAXI@Z
    public: virtual void * __thiscall mmSingleRoam::`vector deleting destructor'(unsigned int) | ??_EmmSingleRoam@@UAEPAXI@Z
    public: __thiscall mmSingleRoamMusicData::~mmSingleRoamMusicData(void) | ??1mmSingleRoamMusicData@@QAE@XZ
    0x41FF20 | public: virtual void __thiscall mmSingleRoam::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleRoam@@UAEXH@Z
    0x5B07CC | const mmSingleRoam::`vftable' | ??_7mmSingleRoam@@6B@
    0x5B0840 | const mmSingleRoamMusicData::`vftable' | ??_7mmSingleRoamMusicData@@6B@
*/

class mmSingleRoam : public mmGameSingle
{
    // const mmSingleRoam::`vftable' @ 0x5B07CC

public:
    // 0x41F990 | ??0mmSingleRoam@@QAE@XZ
    mmSingleRoam();

    // 0x41FEE0 | ??_GmmSingleRoam@@UAEPAXI@Z
    // 0x41F9C0 | ??1mmSingleRoam@@UAE@XZ
    ~mmSingleRoam() override;

    // 0x41FCD0 | ?HitWaterHandler@mmSingleRoam@@UAEXXZ
    void HitWaterHandler() override;

    // 0x41FA30 | ?Init@mmSingleRoam@@UAEHXZ
    i32 Init() override;

    // 0x41FB40 | ?InitGameObjects@mmSingleRoam@@UAEXXZ
    void InitGameObjects() override;

    // 0x41FB10 | ?InitHUD@mmSingleRoam@@UAEXXZ
    void InitHUD() override;

    // 0x41FAA0 | ?InitMyPlayer@mmSingleRoam@@UAEXXZ
    void InitMyPlayer() override;

    // 0x41FC40 | ?InitOtherPlayers@mmSingleRoam@@UAEXXZ
    void InitOtherPlayers() override;

    // 0x41FDA0 | ?NextRace@mmSingleRoam@@UAEXXZ
    void NextRace() override;

    // 0x41FC90 | ?Reset@mmSingleRoam@@UAEXXZ
    void Reset() override;

    // 0x41FD90 | ?SwitchState@mmSingleRoam@@UAEXH@Z
    void SwitchState(i32 arg1) override;

    // 0x41FCE0 | ?Update@mmSingleRoam@@UAEXXZ
    void Update() override;

    // 0x41FF20 | ?UpdateDebugKeyInput@mmSingleRoam@@UAEXH@Z
    void UpdateDebugKeyInput(i32 arg1) override;

    // 0x41FD00 | ?UpdateGame@mmSingleRoam@@UAEXXZ
    void UpdateGame() override;

    // 0x41FCF0 | ?UpdateGameInput@mmSingleRoam@@UAEXH@Z
    void UpdateGameInput(i32 arg1) override;
};

check_size(mmSingleRoam, 0x76F0);

struct mmSingleRoamMusicData : mmGameMusicData
{
    // const mmSingleRoamMusicData::`vftable' @ 0x5B0840

public:
    // 0x438980 | ?LoadMusic@mmSingleRoamMusicData@@UAE_NPAD@Z
    bool LoadMusic(char* arg1) override;

private:
    // 0x438B00 | ?LoadMusicSegments@mmSingleRoamMusicData@@AAE_NPAVStream@@F@Z
    bool LoadMusicSegments(class Stream* arg1, i16 arg2);
};

check_size(mmSingleRoamMusicData, 0x0);
