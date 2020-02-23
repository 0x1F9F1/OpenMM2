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

struct mmSingleRace : mmGameSingle
{
public:
    // mmSingleRace::`vftable' @ 0x5B074C

    // 0x41DF30 | ??0mmSingleRace@@QAE@XZ
    inline mmSingleRace()
    {
        stub<member_func_t<void, mmSingleRace>>(0x41DF30, this);
    }

    // 0x41EBA0 | ?UpdateOpponentStatus@mmSingleRace@@QAEXXZ
    inline void UpdateOpponentStatus()
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41EBA0, this);
    }

    // 0x41EDC0 | ?UpdateScore@mmSingleRace@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41EDC0, this);
    }

    // 0x41F100 | ?NextRaceAvailable@mmSingleRace@@AAEHXZ
    inline i32 NextRaceAvailable()
    {
        return stub<member_func_t<i32, mmSingleRace>>(0x41F100, this);
    }

    // 0x41F170 | ?FinishMessage@mmSingleRace@@AAEXHH@Z
    inline void FinishMessage(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmSingleRace, i32, i32>>(0x41F170, this, arg1, arg2);
    }

    // 0x41F310 | ?RegisterFinish@mmSingleRace@@AAEHXZ
    inline i32 RegisterFinish()
    {
        return stub<member_func_t<i32, mmSingleRace>>(0x41F310, this);
    }

    // 0x41F590 | ?ProgressCheck@mmSingleRace@@AAEHHH@Z
    inline i32 ProgressCheck(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmSingleRace, i32, i32>>(0x41F590, this, arg1, arg2);
    }

    // 0x41DF60 | ??1mmSingleRace@@UAE@XZ
    inline ~mmSingleRace() override
    {
        stub<member_func_t<void, mmSingleRace>>(0x41DF60, this);
    }

    // 0x41E5A0 | ?Update@mmSingleRace@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E5A0, this);
    }

    // 0x41E4F0 | ?Reset@mmSingleRace@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E4F0, this);
    }

    // 0x41E010 | ?Init@mmSingleRace@@UAEHXZ
    inline i32 Init() override
    {
        return stub<member_func_t<i32, mmSingleRace>>(0x41E010, this);
    }

    // 0x41E130 | ?InitMyPlayer@mmSingleRace@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E130, this);
    }

    // 0x41E4E0 | ?InitOtherPlayers@mmSingleRace@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E4E0, this);
    }

    // 0x41E200 | ?InitGameObjects@mmSingleRace@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E200, this);
    }

    // 0x41E1A0 | ?InitHUD@mmSingleRace@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E1A0, this);
    }

    // 0x41E5B0 | ?UpdateGameInput@mmSingleRace@@UAEXH@Z
    inline void UpdateGameInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleRace, i32>>(0x41E5B0, this, arg1);
    }

    // 0x41F970 | ?UpdateDebugKeyInput@mmSingleRace@@UAEXH@Z
    inline void UpdateDebugKeyInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleRace, i32>>(0x41F970, this, arg1);
    }

    // 0x41E5F0 | ?UpdateGame@mmSingleRace@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E5F0, this);
    }

    // 0x41F600 | ?NextRace@mmSingleRace@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41F600, this);
    }

    // 0x41E530 | ?HitWaterHandler@mmSingleRace@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleRace>>(0x41E530, this);
    }

    // 0x41EDB0 | ?SwitchState@mmSingleRace@@UAEXH@Z
    inline void SwitchState(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleRace, i32>>(0x41EDB0, this, arg1);
    }

    // 0x41F980 | ?GetWaypoints@mmSingleRace@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmSingleRace>>(0x41F980, this);
    }
};
