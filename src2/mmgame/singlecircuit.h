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

struct mmSingleCircuit : mmGameSingle
{
public:
    // mmSingleCircuit::`vftable' @ 0x5B06CC

    // 0x41C4A0 | ??0mmSingleCircuit@@QAE@XZ
    inline mmSingleCircuit()
    {
        stub<member_func_t<void, mmSingleCircuit>>(0x41C4A0, this);
    }

    // 0x41CBA0 | ?UpdateScore@mmSingleCircuit@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CBA0, this);
    }

    // 0x41D480 | ?UpdateOpponentStatus@mmSingleCircuit@@QAEXXZ
    inline void UpdateOpponentStatus()
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41D480, this);
    }

    // 0x41D6A0 | ?FinishMessage@mmSingleCircuit@@AAEXHH@Z
    inline void FinishMessage(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmSingleCircuit, i32, i32>>(0x41D6A0, this, arg1, arg2);
    }

    // 0x41D840 | ?RegisterLap@mmSingleCircuit@@AAEHXZ
    inline i32 RegisterLap()
    {
        return stub<member_func_t<i32, mmSingleCircuit>>(0x41D840, this);
    }

    // 0x41D8A0 | ?RegisterFinish@mmSingleCircuit@@AAEHXZ
    inline i32 RegisterFinish()
    {
        return stub<member_func_t<i32, mmSingleCircuit>>(0x41D8A0, this);
    }

    // 0x41DB80 | ?ProgressCheck@mmSingleCircuit@@AAEHHH@Z
    inline i32 ProgressCheck(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmSingleCircuit, i32, i32>>(0x41DB80, this, arg1, arg2);
    }

    // 0x41C4E0 | ??1mmSingleCircuit@@UAE@XZ
    inline ~mmSingleCircuit() override
    {
        stub<member_func_t<void, mmSingleCircuit>>(0x41C4E0, this);
    }

    // 0x41CB80 | ?Update@mmSingleCircuit@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CB80, this);
    }

    // 0x41CA50 | ?Reset@mmSingleCircuit@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CA50, this);
    }

    // 0x41C590 | ?Init@mmSingleCircuit@@UAEHXZ
    inline i32 Init() override
    {
        return stub<member_func_t<i32, mmSingleCircuit>>(0x41C590, this);
    }

    // 0x41C6B0 | ?InitMyPlayer@mmSingleCircuit@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41C6B0, this);
    }

    // 0x41CA40 | ?InitOtherPlayers@mmSingleCircuit@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CA40, this);
    }

    // 0x41C770 | ?InitGameObjects@mmSingleCircuit@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41C770, this);
    }

    // 0x41C720 | ?InitHUD@mmSingleCircuit@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41C720, this);
    }

    // 0x41CB90 | ?UpdateGameInput@mmSingleCircuit@@UAEXH@Z
    inline void UpdateGameInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleCircuit, i32>>(0x41CB90, this, arg1);
    }

    // 0x41DF10 | ?UpdateDebugKeyInput@mmSingleCircuit@@UAEXH@Z
    inline void UpdateDebugKeyInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleCircuit, i32>>(0x41DF10, this, arg1);
    }

    // 0x41CEE0 | ?UpdateGame@mmSingleCircuit@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CEE0, this);
    }

    // 0x41DBC0 | ?NextRace@mmSingleCircuit@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41DBC0, this);
    }

    // 0x41CAA0 | ?HitWaterHandler@mmSingleCircuit@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x41CAA0, this);
    }

    // 0x41D690 | ?SwitchState@mmSingleCircuit@@UAEXH@Z
    inline void SwitchState(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleCircuit, i32>>(0x41D690, this, arg1);
    }

    // 0x41DF20 | ?GetWaypoints@mmSingleCircuit@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmSingleCircuit>>(0x41DF20, this);
    }
};
