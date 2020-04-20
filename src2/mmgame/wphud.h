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
    mmgame:wphud

    0x4363D0 | public: __thiscall mmWPHUD::mmWPHUD(void) | ??0mmWPHUD@@QAE@XZ
    0x4364D0 | public: virtual __thiscall mmWPHUD::~mmWPHUD(void) | ??1mmWPHUD@@UAE@XZ
    0x436580 | public: void __thiscall mmWPHUD::SetWPCleared(void) | ?SetWPCleared@mmWPHUD@@QAEXXZ
    0x4365C0 | public: void __thiscall mmWPHUD::SetStandings(int,int) | ?SetStandings@mmWPHUD@@QAEXHH@Z
    0x436600 | public: void __thiscall mmWPHUD::Init(int,int *,int *,int) | ?Init@mmWPHUD@@QAEXHPAH0H@Z
    0x4368D0 | public: virtual void __thiscall mmWPHUD::Reset(void) | ?Reset@mmWPHUD@@UAEXXZ
    0x436920 | public: virtual void __thiscall mmWPHUD::Update(void) | ?Update@mmWPHUD@@UAEXXZ
    0x436950 | public: virtual void __thiscall mmWPHUD::Cull(void) | ?Cull@mmWPHUD@@UAEXXZ
    0x436960 | public: __thiscall mmCircuitHUD::mmCircuitHUD(void) | ??0mmCircuitHUD@@QAE@XZ
    0x436A60 | public: virtual __thiscall mmCircuitHUD::~mmCircuitHUD(void) | ??1mmCircuitHUD@@UAE@XZ
    0x436B50 | public: void __thiscall mmCircuitHUD::Init(void) | ?Init@mmCircuitHUD@@QAEXXZ
    0x4370D0 | public: virtual void __thiscall mmCircuitHUD::Update(void) | ?Update@mmCircuitHUD@@UAEXXZ
    0x4370E0 | public: void __thiscall mmCircuitHUD::SetStandings(int,int) | ?SetStandings@mmCircuitHUD@@QAEXHH@Z
    0x437120 | public: void __thiscall mmCircuitHUD::SetLapTime(int,float,char *,int) | ?SetLapTime@mmCircuitHUD@@QAEXHMPADH@Z
    0x4371C0 | public: void __thiscall mmCircuitHUD::SetWPCleared(int,int) | ?SetWPCleared@mmCircuitHUD@@QAEXHH@Z
    0x437200 | public: virtual void __thiscall mmCircuitHUD::Reset(void) | ?Reset@mmCircuitHUD@@UAEXXZ
    0x4372A0 | public: __thiscall mmCRHUD::mmCRHUD(void) | ??0mmCRHUD@@QAE@XZ
    0x437430 | public: virtual __thiscall mmCRHUD::~mmCRHUD(void) | ??1mmCRHUD@@UAE@XZ
    0x437560 | public: void __thiscall mmCRHUD::Init(class Matrix34 *,char *,enum mmCRGameClass) | ?Init@mmCRHUD@@QAEXPAVMatrix34@@PADW4mmCRGameClass@@@Z
    0x437D40 | public: void __thiscall mmCRHUD::ToggleScores(void) | ?ToggleScores@mmCRHUD@@QAEXXZ
    0x437D70 | public: void __thiscall mmCRHUD::AddPlayer(char const *,unsigned long,int,unsigned int) | ?AddPlayer@mmCRHUD@@QAEXPBDKHI@Z
    0x437EC0 | public: void __thiscall mmCRHUD::UnPackColor(unsigned int,class Vector4 &) | ?UnPackColor@mmCRHUD@@QAEXIAAVVector4@@@Z
    0x437F40 | public: void __thiscall mmCRHUD::SetScore(char *) | ?SetScore@mmCRHUD@@QAEXPAD@Z
    0x437F60 | public: void __thiscall mmCRHUD::SetName(char *,int) | ?SetName@mmCRHUD@@QAEXPADH@Z
    0x437FE0 | public: void __thiscall mmCRHUD::SetScore(unsigned long,int) | ?SetScore@mmCRHUD@@QAEXKH@Z
    0x438050 | public: void __thiscall mmCRHUD::RemovePlayer(unsigned long) | ?RemovePlayer@mmCRHUD@@QAEXK@Z
    0x4381E0 | public: void __thiscall mmCRHUD::ActivateGold(void) | ?ActivateGold@mmCRHUD@@QAEXXZ
    0x4381F0 | public: void __thiscall mmCRHUD::DeactivateGold(void) | ?DeactivateGold@mmCRHUD@@QAEXXZ
    0x438200 | public: void __thiscall mmCRHUD::ActivateRosterGold(unsigned long) | ?ActivateRosterGold@mmCRHUD@@QAEXK@Z
    0x438240 | public: void __thiscall mmCRHUD::DeactivateRosterGold(void) | ?DeactivateRosterGold@mmCRHUD@@QAEXXZ
    0x438270 | public: void __thiscall mmCRHUD::UpdateGold(void) | ?UpdateGold@mmCRHUD@@QAEXXZ
    0x4382E0 | public: virtual void __thiscall mmCRHUD::PostUpdate(void) | ?PostUpdate@mmCRHUD@@UAEXXZ
    0x438300 | public: virtual void __thiscall mmCRHUD::Update(void) | ?Update@mmCRHUD@@UAEXXZ
    0x438310 | public: virtual void __thiscall mmCRHUD::Reset(void) | ?Reset@mmCRHUD@@UAEXXZ
    0x438320 | public: void __thiscall mmCRHUD::SetBlueScore(int) | ?SetBlueScore@mmCRHUD@@QAEXH@Z
    0x438360 | public: void __thiscall mmCRHUD::SetRedScore(int) | ?SetRedScore@mmCRHUD@@QAEXH@Z
    0x4383A0 | public: __thiscall mmCollideHUD::mmCollideHUD(void) | ??0mmCollideHUD@@QAE@XZ
    0x4383D0 | public: virtual __thiscall mmCollideHUD::~mmCollideHUD(void) | ??1mmCollideHUD@@UAE@XZ
    0x438460 | public: void __thiscall mmCollideHUD::Init(int,int *,int *,int) | ?Init@mmCollideHUD@@QAEXHPAH0H@Z
    0x4386F0 | public: virtual void __thiscall mmCollideHUD::Update(void) | ?Update@mmCollideHUD@@UAEXXZ
    0x438700 | public: virtual void __thiscall mmCollideHUD::Reset(void) | ?Reset@mmCollideHUD@@UAEXXZ
    0x438720 | public: void __thiscall mmCollideHUD::SetBangerCount(int) | ?SetBangerCount@mmCollideHUD@@QAEXH@Z
    0x438760 | public: void __thiscall mmCollideHUD::SetVehicleCount(int) | ?SetVehicleCount@mmCollideHUD@@QAEXH@Z
    0x4387A0 | public: virtual void * __thiscall mmWPHUD::`scalar deleting destructor'(unsigned int) | ??_GmmWPHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmWPHUD::`vector deleting destructor'(unsigned int) | ??_EmmWPHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmCircuitHUD::`vector deleting destructor'(unsigned int) | ??_EmmCircuitHUD@@UAEPAXI@Z
    0x4387D0 | public: virtual void * __thiscall mmCircuitHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCircuitHUD@@UAEPAXI@Z
    0x438800 | public: virtual void * __thiscall mmNumber::`vector deleting destructor'(unsigned int) | ??_EmmNumber@@UAEPAXI@Z
    0x438860 | public: virtual void * __thiscall mmTextNode::`vector deleting destructor'(unsigned int) | ??_EmmTextNode@@UAEPAXI@Z
    public: virtual void * __thiscall mmCRHUD::`vector deleting destructor'(unsigned int) | ??_EmmCRHUD@@UAEPAXI@Z
    0x4388C0 | public: virtual void * __thiscall mmCRHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCRHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmCollideHUD::`vector deleting destructor'(unsigned int) | ??_EmmCollideHUD@@UAEPAXI@Z
    0x4388F0 | public: virtual void * __thiscall mmCollideHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCollideHUD@@UAEPAXI@Z
    0x438920 | public: virtual __thiscall mmGameHUD::~mmGameHUD(void) | ??1mmGameHUD@@UAE@XZ
    public: virtual void * __thiscall mmGameHUD::`vector deleting destructor'(unsigned int) | ??_EmmGameHUD@@UAEPAXI@Z
    0x438930 | public: virtual void * __thiscall mmGameHUD::`scalar deleting destructor'(unsigned int) | ??_GmmGameHUD@@UAEPAXI@Z
    0x438960 | public: virtual void __thiscall mmWPHUD::PostUpdate(void) | ?PostUpdate@mmWPHUD@@UAEXXZ
    0x438970 | public: virtual void __thiscall mmCircuitHUD::PostUpdate(void) | ?PostUpdate@mmCircuitHUD@@UAEXXZ
    0x5B0F74 | const mmWPHUD::`vftable' | ??_7mmWPHUD@@6B@
    0x5B0FAC | const mmGameHUD::`vftable' | ??_7mmGameHUD@@6B@
    0x5B0FE4 | const mmCircuitHUD::`vftable' | ??_7mmCircuitHUD@@6B@
    0x5B1020 | const mmCRHUD::`vftable' | ??_7mmCRHUD@@6B@
    0x5B1064 | const mmCollideHUD::`vftable' | ??_7mmCollideHUD@@6B@
*/

struct mmWPHUD : mmGameHUD
{
public:
    // mmWPHUD::`vftable' @ 0x5B0F74

    // 0x4363D0 | ??0mmWPHUD@@QAE@XZ
    inline mmWPHUD()
    {
        stub<member_func_t<void, mmWPHUD>>(0x4363D0, this);
    }

    // 0x436580 | ?SetWPCleared@mmWPHUD@@QAEXXZ
    inline void SetWPCleared()
    {
        return stub<member_func_t<void, mmWPHUD>>(0x436580, this);
    }

    // 0x4365C0 | ?SetStandings@mmWPHUD@@QAEXHH@Z
    inline void SetStandings(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmWPHUD, int32_t, int32_t>>(0x4365C0, this, arg1, arg2);
    }

    // 0x436600 | ?Init@mmWPHUD@@QAEXHPAH0H@Z
    inline void Init(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmWPHUD, int32_t, int32_t*, int32_t*, int32_t>>(
            0x436600, this, arg1, arg2, arg3, arg4);
    }

    // 0x4364D0 | ??1mmWPHUD@@UAE@XZ
    inline ~mmWPHUD() override
    {
        stub<member_func_t<void, mmWPHUD>>(0x4364D0, this);
    }

    // 0x436950 | ?Cull@mmWPHUD@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x436950, this);
    }

    // 0x436920 | ?Update@mmWPHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x436920, this);
    }

    // 0x4368D0 | ?Reset@mmWPHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x4368D0, this);
    }

    // 0x438960 | ?PostUpdate@mmWPHUD@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x438960, this);
    }
};

struct mmCircuitHUD : mmGameHUD
{
public:
    // mmCircuitHUD::`vftable' @ 0x5B0FE4

    // 0x436960 | ??0mmCircuitHUD@@QAE@XZ
    inline mmCircuitHUD()
    {
        stub<member_func_t<void, mmCircuitHUD>>(0x436960, this);
    }

    // 0x436B50 | ?Init@mmCircuitHUD@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x436B50, this);
    }

    // 0x4370E0 | ?SetStandings@mmCircuitHUD@@QAEXHH@Z
    inline void SetStandings(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, int32_t>>(0x4370E0, this, arg1, arg2);
    }

    // 0x437120 | ?SetLapTime@mmCircuitHUD@@QAEXHMPADH@Z
    inline void SetLapTime(int32_t arg1, float arg2, char* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, float, char*, int32_t>>(
            0x437120, this, arg1, arg2, arg3, arg4);
    }

    // 0x4371C0 | ?SetWPCleared@mmCircuitHUD@@QAEXHH@Z
    inline void SetWPCleared(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, int32_t>>(0x4371C0, this, arg1, arg2);
    }

    // 0x436A60 | ??1mmCircuitHUD@@UAE@XZ
    inline ~mmCircuitHUD() override
    {
        stub<member_func_t<void, mmCircuitHUD>>(0x436A60, this);
    }

    // 0x4370D0 | ?Update@mmCircuitHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x4370D0, this);
    }

    // 0x437200 | ?Reset@mmCircuitHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x437200, this);
    }

    // 0x438970 | ?PostUpdate@mmCircuitHUD@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x438970, this);
    }
};

struct mmCRHUD : mmGameHUD
{
public:
    // mmCRHUD::`vftable' @ 0x5B1020

    // 0x4372A0 | ??0mmCRHUD@@QAE@XZ
    inline mmCRHUD()
    {
        stub<member_func_t<void, mmCRHUD>>(0x4372A0, this);
    }

    // 0x437560 | ?Init@mmCRHUD@@QAEXPAVMatrix34@@PADW4mmCRGameClass@@@Z
    inline void Init(class Matrix34* arg1, char* arg2, enum mmCRGameClass arg3)
    {
        return stub<member_func_t<void, mmCRHUD, class Matrix34*, char*, enum mmCRGameClass>>(
            0x437560, this, arg1, arg2, arg3);
    }

    // 0x437D40 | ?ToggleScores@mmCRHUD@@QAEXXZ
    inline void ToggleScores()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x437D40, this);
    }

    // 0x437D70 | ?AddPlayer@mmCRHUD@@QAEXPBDKHI@Z
    inline void AddPlayer(char const* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, mmCRHUD, char const*, uint32_t, int32_t, uint32_t>>(
            0x437D70, this, arg1, arg2, arg3, arg4);
    }

    // 0x437EC0 | ?UnPackColor@mmCRHUD@@QAEXIAAVVector4@@@Z
    inline void UnPackColor(uint32_t arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t, class Vector4&>>(0x437EC0, this, arg1, arg2);
    }

    // 0x437F40 | ?SetScore@mmCRHUD@@QAEXPAD@Z
    inline void SetScore(char* arg1)
    {
        return stub<member_func_t<void, mmCRHUD, char*>>(0x437F40, this, arg1);
    }

    // 0x437F60 | ?SetName@mmCRHUD@@QAEXPADH@Z
    inline void SetName(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCRHUD, char*, int32_t>>(0x437F60, this, arg1, arg2);
    }

    // 0x437FE0 | ?SetScore@mmCRHUD@@QAEXKH@Z
    inline void SetScore(uint32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t, int32_t>>(0x437FE0, this, arg1, arg2);
    }

    // 0x438050 | ?RemovePlayer@mmCRHUD@@QAEXK@Z
    inline void RemovePlayer(uint32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t>>(0x438050, this, arg1);
    }

    // 0x4381E0 | ?ActivateGold@mmCRHUD@@QAEXXZ
    inline void ActivateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4381E0, this);
    }

    // 0x4381F0 | ?DeactivateGold@mmCRHUD@@QAEXXZ
    inline void DeactivateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4381F0, this);
    }

    // 0x438200 | ?ActivateRosterGold@mmCRHUD@@QAEXK@Z
    inline void ActivateRosterGold(uint32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t>>(0x438200, this, arg1);
    }

    // 0x438240 | ?DeactivateRosterGold@mmCRHUD@@QAEXXZ
    inline void DeactivateRosterGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x438240, this);
    }

    // 0x438270 | ?UpdateGold@mmCRHUD@@QAEXXZ
    inline void UpdateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x438270, this);
    }

    // 0x438320 | ?SetBlueScore@mmCRHUD@@QAEXH@Z
    inline void SetBlueScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, int32_t>>(0x438320, this, arg1);
    }

    // 0x438360 | ?SetRedScore@mmCRHUD@@QAEXH@Z
    inline void SetRedScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, int32_t>>(0x438360, this, arg1);
    }

    // 0x437430 | ??1mmCRHUD@@UAE@XZ
    inline ~mmCRHUD() override
    {
        stub<member_func_t<void, mmCRHUD>>(0x437430, this);
    }

    // 0x438300 | ?Update@mmCRHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCRHUD>>(0x438300, this);
    }

    // 0x438310 | ?Reset@mmCRHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCRHUD>>(0x438310, this);
    }

    // 0x4382E0 | ?PostUpdate@mmCRHUD@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4382E0, this);
    }
};

struct mmCollideHUD : mmWPHUD
{
public:
    // mmCollideHUD::`vftable' @ 0x5B1064

    // 0x4383A0 | ??0mmCollideHUD@@QAE@XZ
    inline mmCollideHUD()
    {
        stub<member_func_t<void, mmCollideHUD>>(0x4383A0, this);
    }

    // 0x438460 | ?Init@mmCollideHUD@@QAEXHPAH0H@Z
    inline void Init(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCollideHUD, int32_t, int32_t*, int32_t*, int32_t>>(
            0x438460, this, arg1, arg2, arg3, arg4);
    }

    // 0x438720 | ?SetBangerCount@mmCollideHUD@@QAEXH@Z
    inline void SetBangerCount(int32_t arg1)
    {
        return stub<member_func_t<void, mmCollideHUD, int32_t>>(0x438720, this, arg1);
    }

    // 0x438760 | ?SetVehicleCount@mmCollideHUD@@QAEXH@Z
    inline void SetVehicleCount(int32_t arg1)
    {
        return stub<member_func_t<void, mmCollideHUD, int32_t>>(0x438760, this, arg1);
    }

    // 0x4383D0 | ??1mmCollideHUD@@UAE@XZ
    inline ~mmCollideHUD() override
    {
        stub<member_func_t<void, mmCollideHUD>>(0x4383D0, this);
    }

    // 0x4386F0 | ?Update@mmCollideHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCollideHUD>>(0x4386F0, this);
    }

    // 0x438700 | ?Reset@mmCollideHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCollideHUD>>(0x438700, this);
    }
};

struct mmGameHUD : asNode
{
public:
    // mmGameHUD::`vftable' @ 0x5B0FAC

    // 0x438920 | ??1mmGameHUD@@UAE@XZ
    inline ~mmGameHUD() override
    {
        stub<member_func_t<void, mmGameHUD>>(0x438920, this);
    }

    // 0x582519 | __purecall
    virtual inline void PostUpdate()
    {
        return stub<member_func_t<void, mmGameHUD>>(0x582519, this);
    }
};
