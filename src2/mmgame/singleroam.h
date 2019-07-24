/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

struct mmSingleRoam : mmGameSingle
{
public:
    // mmSingleRoam::`vftable' @ 0x5B07CC

    // 0x41F990 | ??0mmSingleRoam@@QAE@XZ
    inline mmSingleRoam()
    {
        stub<member_func_t<void, mmSingleRoam>>(0x41F990, this);
    }

    // 0x41F9C0 | ??1mmSingleRoam@@UAE@XZ
    inline ~mmSingleRoam() override
    {
        stub<member_func_t<void, mmSingleRoam>>(0x41F9C0, this);
    }

    // 0x41FCE0 | ?Update@mmSingleRoam@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FCE0, this);
    }

    // 0x41FC90 | ?Reset@mmSingleRoam@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FC90, this);
    }

    // 0x41FA30 | ?Init@mmSingleRoam@@UAEHXZ
    inline int32_t Init() override
    {
        return stub<member_func_t<int32_t, mmSingleRoam>>(0x41FA30, this);
    }

    // 0x41FAA0 | ?InitMyPlayer@mmSingleRoam@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FAA0, this);
    }

    // 0x41FC40 | ?InitOtherPlayers@mmSingleRoam@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FC40, this);
    }

    // 0x41FB40 | ?InitGameObjects@mmSingleRoam@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FB40, this);
    }

    // 0x41FB10 | ?InitHUD@mmSingleRoam@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FB10, this);
    }

    // 0x41FCF0 | ?UpdateGameInput@mmSingleRoam@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleRoam, int32_t>>(0x41FCF0, this, arg1);
    }

    // 0x41FF20 | ?UpdateDebugKeyInput@mmSingleRoam@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleRoam, int32_t>>(0x41FF20, this, arg1);
    }

    // 0x41FD00 | ?UpdateGame@mmSingleRoam@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FD00, this);
    }

    // 0x41FDA0 | ?NextRace@mmSingleRoam@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FDA0, this);
    }

    // 0x41FCD0 | ?HitWaterHandler@mmSingleRoam@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleRoam>>(0x41FCD0, this);
    }

    // 0x41FD90 | ?SwitchState@mmSingleRoam@@UAEXH@Z
    inline void SwitchState(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleRoam, int32_t>>(0x41FD90, this, arg1);
    }
};
