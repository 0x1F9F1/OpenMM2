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
    mmgame:cd

    0x432F70 | public: __thiscall mmCDPlayer::mmCDPlayer(void) | ??0mmCDPlayer@@QAE@XZ
    0x433000 | public: void __thiscall mmCDPlayer::Init(class mmHUD *) | ?Init@mmCDPlayer@@QAEXPAVmmHUD@@@Z
    0x4330F0 | public: virtual void __thiscall mmCDPlayer::Reset(void) | ?Reset@mmCDPlayer@@UAEXXZ
    0x433100 | public: virtual void __thiscall mmCDPlayer::Update(void) | ?Update@mmCDPlayer@@UAEXXZ
    0x433170 | public: virtual void __thiscall mmCDPlayer::Cull(void) | ?Cull@mmCDPlayer@@UAEXXZ
    0x433370 | public: void __thiscall mmCDPlayer::PlayStop(void) | ?PlayStop@mmCDPlayer@@QAEXXZ
    0x4333F0 | public: void __thiscall mmCDPlayer::NextTrack(void) | ?NextTrack@mmCDPlayer@@QAEXXZ
    public: void __thiscall mmCDPlayer::AddWidgets(class bkBank *) | ?AddWidgets@mmCDPlayer@@QAEXPAVbkBank@@@Z
    0x433460 | public: void __thiscall mmCDPlayer::PrevTrack(void) | ?PrevTrack@mmCDPlayer@@QAEXXZ
    0x4334D0 | public: void __thiscall mmCDPlayer::Toggle(void) | ?Toggle@mmCDPlayer@@QAEXXZ
    0x433640 | public: virtual void * __thiscall mmCDPlayer::`scalar deleting destructor'(unsigned int) | ??_GmmCDPlayer@@UAEPAXI@Z
    public: virtual void * __thiscall mmCDPlayer::`vector deleting destructor'(unsigned int) | ??_EmmCDPlayer@@UAEPAXI@Z
    0x433670 | public: virtual __thiscall mmCDPlayer::~mmCDPlayer(void) | ??1mmCDPlayer@@UAE@XZ
    0x5B0E6C | const mmCDPlayer::`vftable' | ??_7mmCDPlayer@@6B@
*/

struct mmCDPlayer : asNode
{
public:
    // mmCDPlayer::`vftable' @ 0x5B0E6C

    // 0x432F70 | ??0mmCDPlayer@@QAE@XZ
    inline mmCDPlayer()
    {
        stub<member_func_t<void, mmCDPlayer>>(0x432F70, this);
    }

    // 0x433000 | ?Init@mmCDPlayer@@QAEXPAVmmHUD@@@Z
    inline void Init(class mmHUD* arg1)
    {
        return stub<member_func_t<void, mmCDPlayer, class mmHUD*>>(0x433000, this, arg1);
    }

    // 0x433370 | ?PlayStop@mmCDPlayer@@QAEXXZ
    inline void PlayStop()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x433370, this);
    }

    // 0x4333F0 | ?NextTrack@mmCDPlayer@@QAEXXZ
    inline void NextTrack()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x4333F0, this);
    }

    // 0x433460 | ?PrevTrack@mmCDPlayer@@QAEXXZ
    inline void PrevTrack()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x433460, this);
    }

    // 0x4334D0 | ?Toggle@mmCDPlayer@@QAEXXZ
    inline void Toggle()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x4334D0, this);
    }

    // 0x433670 | ??1mmCDPlayer@@UAE@XZ
    inline ~mmCDPlayer() override
    {
        stub<member_func_t<void, mmCDPlayer>>(0x433670, this);
    }

    // 0x433170 | ?Cull@mmCDPlayer@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x433170, this);
    }

    // 0x433100 | ?Update@mmCDPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x433100, this);
    }

    // 0x4330F0 | ?Reset@mmCDPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x4330F0, this);
    }
};
