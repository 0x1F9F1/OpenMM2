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

#include "mmgame/mirror.h"

/*
    ped:pedactive

    0x57BD70 | public: __thiscall pedActive::pedActive(void) | ??0pedActive@@QAE@XZ
    0x57BE90 | public: __thiscall pedActiveData::pedActiveData(void) | ??0pedActiveData@@QAE@XZ
    0x57BEA0 | public: void __thiscall pedActiveData::Init(char const *) | ?Init@pedActiveData@@QAEXPBD@Z
    0x57BF80 | public: virtual __thiscall pedActive::~pedActive(void) | ??1pedActive@@UAE@XZ
    0x57C040 | public: __thiscall pedActiveData::~pedActiveData(void) | ??1pedActiveData@@QAE@XZ
    0x57C090 | public: int __thiscall pedActive::IsAsleep(void) | ?IsAsleep@pedActive@@QAEHXZ
    public: void __thiscall pedActiveData::AddWidgets(class bkBank &) | ?AddWidgets@pedActiveData@@QAEXAAVbkBank@@@Z
    0x57C0C0 | public: virtual void __thiscall pedActive::Reset(void) | ?Reset@pedActive@@UAEXXZ
    0x57C0F0 | public: virtual void __thiscall pedActive::Update(void) | ?Update@pedActive@@UAEXXZ
    0x57C170 | public: virtual void __thiscall pedActive::Activate(class aiPedestrianInstance *,class pedActiveData *) | ?Activate@pedActive@@UAEXPAVaiPedestrianInstance@@PAVpedActiveData@@@Z
    0x57C260 | public: virtual void __thiscall pedActive::Deactivate(void) | ?Deactivate@pedActive@@UAEXXZ
    0x57C290 | public: virtual class phInertialCS * __thiscall pedActive::GetICS(void) | ?GetICS@pedActive@@UAEPAVphInertialCS@@XZ
    0x57C2A0 | public: virtual class lvlInstance * __thiscall pedActive::GetInst(void) | ?GetInst@pedActive@@UAEPAVlvlInstance@@XZ
    0x57C2B0 | public: void __thiscall pedActive::SetRagdollBlend(float) | ?SetRagdollBlend@pedActive@@QAEXM@Z
    0x57C2C0 | public: void __thiscall pedActive::StartRagdoll(void) | ?StartRagdoll@pedActive@@QAEXXZ
    0x57C2D0 | public: void __thiscall pedActive::StopRagdoll(void) | ?StopRagdoll@pedActive@@QAEXXZ
    0x57C2E0 | public: virtual void __thiscall pedActive::FirstImpactCallback(void) | ?FirstImpactCallback@pedActive@@UAEXXZ
    0x57C4D0 | public: virtual void * __thiscall pedActive::`scalar deleting destructor'(unsigned int) | ??_GpedActive@@UAEPAXI@Z
    0x57C500 | public: virtual void __thiscall pedActive::PostUpdate(void) | ?PostUpdate@pedActive@@UAEXXZ
    0x5B639C | const pedActive::`vftable' | ??_7pedActive@@6B@
*/

class pedActiveData
{
public:
    // 0x57BE90 | ??0pedActiveData@@QAE@XZ
    pedActiveData();

    // 0x57C040 | ??1pedActiveData@@QAE@XZ
    // 0x57BCB0 | ??_EpedActiveData@@QAEPAXI@Z
    ~pedActiveData();

    // 0x57BEA0 | ?Init@pedActiveData@@QAEXPBD@Z
    void Init(char const* arg1);
};

check_size(pedActiveData, 0xC);

class pedActive : public dgPhysEntity
{
    // const pedActive::`vftable' @ 0x5B639C

public:
    // 0x57BD70 | ??0pedActive@@QAE@XZ
    pedActive();

    // 0x57BD10 | ??_EpedActive@@UAEPAXI@Z
    // 0x57BF80 | ??1pedActive@@UAE@XZ
    // 0x57C4D0 | ??_GpedActive@@UAEPAXI@Z
    ~pedActive() override;

    // 0x57C2E0 | ?FirstImpactCallback@pedActive@@UAEXXZ
    void FirstImpactCallback() override;

    // 0x57C290 | ?GetICS@pedActive@@UAEPAVphInertialCS@@XZ
    class phInertialCS* GetICS() override;

    // 0x57C2A0 | ?GetInst@pedActive@@UAEPAVlvlInstance@@XZ
    class lvlInstance* GetInst() override;

    // 0x57C090 | ?IsAsleep@pedActive@@QAEHXZ
    i32 IsAsleep();

    // 0x57C500 | ?PostUpdate@pedActive@@UAEXXZ
    void PostUpdate() override;

    // 0x57C2B0 | ?SetRagdollBlend@pedActive@@QAEXM@Z
    void SetRagdollBlend(f32 arg1);

    // 0x57C2C0 | ?StartRagdoll@pedActive@@QAEXXZ
    void StartRagdoll();

    // 0x57C2D0 | ?StopRagdoll@pedActive@@QAEXXZ
    void StopRagdoll();

    // 0x57C0F0 | ?Update@pedActive@@UAEXXZ
    void Update() override;

    // 0x57C0C0 | ?Reset@pedActive@@UAEXXZ
    virtual void Reset();

    // 0x57C170 | ?Activate@pedActive@@UAEXPAVaiPedestrianInstance@@PAVpedActiveData@@@Z
    virtual void Activate(class aiPedestrianInstance* arg1, class pedActiveData* arg2);

    // 0x57C260 | ?Deactivate@pedActive@@UAEXXZ
    virtual void Deactivate();
};

check_size(pedActive, 0x114);
