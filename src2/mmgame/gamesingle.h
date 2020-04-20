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
    mmgame:gamesingle

    0x433A60 | public: __thiscall mmGameSingle::mmGameSingle(void) | ??0mmGameSingle@@QAE@XZ
    0x433A90 | public: virtual __thiscall mmGameSingle::~mmGameSingle(void) | ??1mmGameSingle@@UAE@XZ
    0x433AA0 | public: virtual int __thiscall mmGameSingle::Init(void) | ?Init@mmGameSingle@@UAEHXZ
    0x433AB0 | public: virtual void __thiscall mmGameSingle::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    0x433AC0 | public: virtual void __thiscall mmGameSingle::Reset(void) | ?Reset@mmGameSingle@@UAEXXZ
    0x433B50 | protected: void __thiscall mmGameSingle::EnableRacers(void) | ?EnableRacers@mmGameSingle@@IAEXXZ
    0x433C00 | protected: void __thiscall mmGameSingle::DisableRacers(void) | ?DisableRacers@mmGameSingle@@IAEXXZ
    0x433C70 | public: virtual void __thiscall mmGameSingle::HitWaterHandler(void) | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    0x433C80 | public: virtual void __thiscall mmGameSingle::Update(void) | ?Update@mmGameSingle@@UAEXXZ
    0x433C90 | public: virtual void __thiscall mmGameSingle::UpdateGameInput(int) | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    0x433CA0 | public: virtual void __thiscall mmGameSingle::UpdateGame(void) | ?UpdateGame@mmGameSingle@@UAEXXZ
    0x433CB0 | protected: bool __thiscall mmGameSingle::UpdateRewards(void) | ?UpdateRewards@mmGameSingle@@IAE_NXZ
    public: void __thiscall mmGameSingle::AddWidgets(class bkBank *) | ?AddWidgets@mmGameSingle@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmGameSingle::`vector deleting destructor'(unsigned int) | ??_EmmGameSingle@@UAEPAXI@Z
    0x433EF0 | public: virtual void * __thiscall mmGameSingle::`scalar deleting destructor'(unsigned int) | ??_GmmGameSingle@@UAEPAXI@Z
    0x433F20 | public: virtual void __thiscall mmGameSingle::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    0x433F30 | public: __thiscall mmRewardRecord::~mmRewardRecord(void) | ??1mmRewardRecord@@QAE@XZ
    0x5B0EB0 | const mmGameSingle::`vftable' | ??_7mmGameSingle@@6B@
*/

struct mmGameSingle : mmGame
{
public:
    // mmGameSingle::`vftable' @ 0x5B0EB0

    // 0x433A60 | ??0mmGameSingle@@QAE@XZ
    inline mmGameSingle()
    {
        stub<member_func_t<void, mmGameSingle>>(0x433A60, this);
    }

    // 0x433B50 | ?EnableRacers@mmGameSingle@@IAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433B50, this);
    }

    // 0x433C00 | ?DisableRacers@mmGameSingle@@IAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433C00, this);
    }

    // 0x433CB0 | ?UpdateRewards@mmGameSingle@@IAE_NXZ
    inline bool UpdateRewards()
    {
        return stub<member_func_t<bool, mmGameSingle>>(0x433CB0, this);
    }

    // 0x433A90 | ??1mmGameSingle@@UAE@XZ
    inline ~mmGameSingle() override
    {
        stub<member_func_t<void, mmGameSingle>>(0x433A90, this);
    }

    // 0x433C80 | ?Update@mmGameSingle@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433C80, this);
    }

    // 0x433AC0 | ?Reset@mmGameSingle@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433AC0, this);
    }

    // 0x433AA0 | ?Init@mmGameSingle@@UAEHXZ
    inline int32_t Init() override
    {
        return stub<member_func_t<int32_t, mmGameSingle>>(0x433AA0, this);
    }

    // 0x433AB0 | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433AB0, this);
    }

    // 0x433C90 | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameSingle, int32_t>>(0x433C90, this, arg1);
    }

    // 0x433F20 | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameSingle, int32_t>>(0x433F20, this, arg1);
    }

    // 0x433CA0 | ?UpdateGame@mmGameSingle@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433CA0, this);
    }

    // 0x433C70 | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x433C70, this);
    }

    // 0x41ABA0 | ?GetWaypoints@mmGameSingle@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmGameSingle>>(0x41ABA0, this);
    }
};
