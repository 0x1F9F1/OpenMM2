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
    mmgame:multiblitz

    0x41FF30 | public: __thiscall mmMultiBlitz::mmMultiBlitz(void) | ??0mmMultiBlitz@@QAE@XZ
    0x41FF60 | public: virtual __thiscall mmMultiBlitz::~mmMultiBlitz(void) | ??1mmMultiBlitz@@UAE@XZ
    0x420000 | public: virtual int __thiscall mmMultiBlitz::Init(void) | ?Init@mmMultiBlitz@@UAEHXZ
    0x420130 | public: virtual void __thiscall mmMultiBlitz::InitMyPlayer(void) | ?InitMyPlayer@mmMultiBlitz@@UAEXXZ
    0x4201A0 | public: virtual void __thiscall mmMultiBlitz::InitHUD(void) | ?InitHUD@mmMultiBlitz@@UAEXXZ
    0x420220 | public: virtual void __thiscall mmMultiBlitz::InitGameObjects(void) | ?InitGameObjects@mmMultiBlitz@@UAEXXZ
    0x4204B0 | public: virtual void __thiscall mmMultiBlitz::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiBlitz@@UAEXXZ
    0x420880 | public: virtual void __thiscall mmMultiBlitz::Reset(void) | ?Reset@mmMultiBlitz@@UAEXXZ
    0x420940 | public: virtual void __thiscall mmMultiBlitz::UpdateGameInput(int) | ?UpdateGameInput@mmMultiBlitz@@UAEXH@Z
    0x420980 | public: virtual void __thiscall mmMultiBlitz::UpdateGame(void) | ?UpdateGame@mmMultiBlitz@@UAEXXZ
    0x421250 | public: virtual void __thiscall mmMultiBlitz::SwitchState(int) | ?SwitchState@mmMultiBlitz@@UAEXH@Z
    0x421260 | public: virtual void __thiscall mmMultiBlitz::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiBlitz@@UAEXPAUNETSYS_MSG@@@Z
    0x421370 | public: virtual void __thiscall mmMultiBlitz::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiBlitz@@UAEXPAUNET_RCXHEAD@@@Z
    0x421930 | public: void __thiscall mmMultiBlitz::PlayTimerWarning(float) | ?PlayTimerWarning@mmMultiBlitz@@QAEXM@Z
    public: virtual void * __thiscall mmMultiBlitz::`vector deleting destructor'(unsigned int) | ??_EmmMultiBlitz@@UAEPAXI@Z
    0x421B40 | public: virtual void * __thiscall mmMultiBlitz::`scalar deleting destructor'(unsigned int) | ??_GmmMultiBlitz@@UAEPAXI@Z
    0x421B70 | public: virtual void __thiscall mmGameMulti::NextRace(void) | ?NextRace@mmGameMulti@@UAEXXZ
    0x421B80 | public: virtual class mmWaypoints * __thiscall mmMultiBlitz::GetWaypoints(void) | ?GetWaypoints@mmMultiBlitz@@UAEPAVmmWaypoints@@XZ
    0x5B0850 | const mmMultiBlitz::`vftable' | ??_7mmMultiBlitz@@6B@
*/

struct mmMultiBlitz : mmGameMulti
{
public:
    // mmMultiBlitz::`vftable' @ 0x5B0850

    // 0x41FF30 | ??0mmMultiBlitz@@QAE@XZ
    inline mmMultiBlitz()
    {
        stub<member_func_t<void, mmMultiBlitz>>(0x41FF30, this);
    }

    // 0x421930 | ?PlayTimerWarning@mmMultiBlitz@@QAEXM@Z
    inline void PlayTimerWarning(float arg1)
    {
        return stub<member_func_t<void, mmMultiBlitz, float>>(0x421930, this, arg1);
    }

    // 0x41FF60 | ??1mmMultiBlitz@@UAE@XZ
    inline ~mmMultiBlitz() override
    {
        stub<member_func_t<void, mmMultiBlitz>>(0x41FF60, this);
    }

    // 0x420880 | ?Reset@mmMultiBlitz@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x420880, this);
    }

    // 0x420000 | ?Init@mmMultiBlitz@@UAEHXZ
    inline int32_t Init() override
    {
        return stub<member_func_t<int32_t, mmMultiBlitz>>(0x420000, this);
    }

    // 0x420130 | ?InitMyPlayer@mmMultiBlitz@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x420130, this);
    }

    // 0x420220 | ?InitGameObjects@mmMultiBlitz@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x420220, this);
    }

    // 0x4201A0 | ?InitHUD@mmMultiBlitz@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x4201A0, this);
    }

    // 0x420940 | ?UpdateGameInput@mmMultiBlitz@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, int32_t>>(0x420940, this, arg1);
    }

    // 0x420980 | ?UpdateGame@mmMultiBlitz@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x420980, this);
    }

    // 0x421250 | ?SwitchState@mmMultiBlitz@@UAEXH@Z
    inline void SwitchState(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, int32_t>>(0x421250, this, arg1);
    }

    // 0x421B80 | ?GetWaypoints@mmMultiBlitz@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiBlitz>>(0x421B80, this);
    }

    // 0x4204B0 | ?InitNetworkPlayers@mmMultiBlitz@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x4204B0, this);
    }

    // 0x421260 | ?SystemMessage@mmMultiBlitz@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, struct NETSYS_MSG*>>(0x421260, this, arg1);
    }

    // 0x421370 | ?GameMessage@mmMultiBlitz@@UAEXPAUNET_RCXHEAD@@@Z
    inline void GameMessage(struct NET_RCXHEAD* arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, struct NET_RCXHEAD*>>(0x421370, this, arg1);
    }
};
