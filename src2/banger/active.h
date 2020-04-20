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
    banger:active

    0x43FC70 | public: __thiscall dgBangerActive::dgBangerActive(void) | ??0dgBangerActive@@QAE@XZ
    0x43FD40 | public: virtual __thiscall dgBangerActive::~dgBangerActive(void) | ??1dgBangerActive@@UAE@XZ
    0x43FDB0 | public: virtual class lvlInstance * __thiscall dgBangerActive::GetInst(void) | ?GetInst@dgBangerActive@@UAEPAVlvlInstance@@XZ
    0x43FDC0 | public: void __thiscall dgBangerActive::Attach(class dgBangerInstance *) | ?Attach@dgBangerActive@@QAEXPAVdgBangerInstance@@@Z
    0x43FFF0 | public: void __thiscall dgBangerActive::Detach(void) | ?Detach@dgBangerActive@@QAEXXZ
    0x440030 | public: virtual void __thiscall dgBangerActive::DetachMe(void) | ?DetachMe@dgBangerActive@@UAEXXZ
    0x440050 | public: virtual void __thiscall dgBangerActive::Update(void) | ?Update@dgBangerActive@@UAEXXZ
    0x4400E0 | public: virtual void __thiscall dgBangerActive::PostUpdate(void) | ?PostUpdate@dgBangerActive@@UAEXXZ
    0x440170 | public: __thiscall dgBangerActiveManager::dgBangerActiveManager(void) | ??0dgBangerActiveManager@@QAE@XZ
    0x440220 | public: virtual __thiscall dgBangerActiveManager::~dgBangerActiveManager(void) | ??1dgBangerActiveManager@@UAE@XZ
    0x440290 | public: class dgBangerActive * __thiscall dgBangerActiveManager::GetActive(class dgBangerInstance *) | ?GetActive@dgBangerActiveManager@@QAEPAVdgBangerActive@@PAVdgBangerInstance@@@Z
    0x4402C0 | public: class dgBangerActive * __thiscall dgBangerActiveManager::Attach(class dgBangerInstance *) | ?Attach@dgBangerActiveManager@@QAEPAVdgBangerActive@@PAVdgBangerInstance@@@Z
    0x440350 | public: void __thiscall dgBangerActiveManager::Detach(class dgBangerActive *) | ?Detach@dgBangerActiveManager@@QAEXPAVdgBangerActive@@@Z
    0x4403A0 | public: virtual void __thiscall dgBangerActiveManager::Update(void) | ?Update@dgBangerActiveManager@@UAEXXZ
    0x440500 | public: virtual void __thiscall dgBangerActiveManager::Reset(void) | ?Reset@dgBangerActiveManager@@UAEXXZ
    public: virtual void * __thiscall dgBangerActive::`vector deleting destructor'(unsigned int) | ??_EdgBangerActive@@UAEPAXI@Z
    0x440560 | public: virtual void * __thiscall dgBangerActive::`scalar deleting destructor'(unsigned int) | ??_GdgBangerActive@@UAEPAXI@Z
    0x440590 | public: virtual void * __thiscall dgBangerActiveManager::`scalar deleting destructor'(unsigned int) | ??_GdgBangerActiveManager@@UAEPAXI@Z
    public: virtual void * __thiscall dgBangerActiveManager::`vector deleting destructor'(unsigned int) | ??_EdgBangerActiveManager@@UAEPAXI@Z
    0x4405C0 | public: virtual class phInertialCS * __thiscall dgBangerActive::GetICS(void) | ?GetICS@dgBangerActive@@UAEPAVphInertialCS@@XZ
    0x5B1398 | const dgBangerActive::`vftable' | ??_7dgBangerActive@@6B@
    0x5B13C4 | const dgBangerActiveManager::`vftable' | ??_7dgBangerActiveManager@@6B@
    private: static float dgBangerActive::ParticleMultiplier | ?ParticleMultiplier@dgBangerActive@@0MA
    0x627630 | protected: static class dgBangerActiveManager * dgBangerActiveManager::Instance | ?Instance@dgBangerActiveManager@@1PAV1@A
*/

class dgBangerActiveManager : asNode
{
public:
    // dgBangerActiveManager::`vftable' @ 0x5B13C4

    // 0x440170 | ??0dgBangerActiveManager@@QAE@XZ
    inline dgBangerActiveManager()
    {
        stub<member_func_t<void, dgBangerActiveManager>>(0x440170, this);
    }

    // 0x440290 | ?GetActive@dgBangerActiveManager@@QAEPAVdgBangerActive@@PAVdgBangerInstance@@@Z
    inline class dgBangerActive* GetActive(class dgBangerInstance* arg1)
    {
        return stub<member_func_t<class dgBangerActive*, dgBangerActiveManager, class dgBangerInstance*>>(
            0x440290, this, arg1);
    }

    // 0x4402C0 | ?Attach@dgBangerActiveManager@@QAEPAVdgBangerActive@@PAVdgBangerInstance@@@Z
    inline class dgBangerActive* Attach(class dgBangerInstance* arg1)
    {
        return stub<member_func_t<class dgBangerActive*, dgBangerActiveManager, class dgBangerInstance*>>(
            0x4402C0, this, arg1);
    }

    // 0x440350 | ?Detach@dgBangerActiveManager@@QAEXPAVdgBangerActive@@@Z
    inline void Detach(class dgBangerActive* arg1)
    {
        return stub<member_func_t<void, dgBangerActiveManager, class dgBangerActive*>>(0x440350, this, arg1);
    }

    // 0x627630 | ?Instance@dgBangerActiveManager@@1PAV1@A
    inline extern_var(0x627630, class dgBangerActiveManager*, Instance);

    // 0x440220 | ??1dgBangerActiveManager@@UAE@XZ
    inline ~dgBangerActiveManager() override
    {
        stub<member_func_t<void, dgBangerActiveManager>>(0x440220, this);
    }

    // 0x4403A0 | ?Update@dgBangerActiveManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, dgBangerActiveManager>>(0x4403A0, this);
    }

    // 0x440500 | ?Reset@dgBangerActiveManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, dgBangerActiveManager>>(0x440500, this);
    }
};

class dgBangerActive : dgPhysEntity
{
public:
    // dgBangerActive::`vftable' @ 0x5B1398

    // 0x43FC70 | ??0dgBangerActive@@QAE@XZ
    inline dgBangerActive()
    {
        stub<member_func_t<void, dgBangerActive>>(0x43FC70, this);
    }

    // 0x43FDC0 | ?Attach@dgBangerActive@@QAEXPAVdgBangerInstance@@@Z
    inline void Attach(class dgBangerInstance* arg1)
    {
        return stub<member_func_t<void, dgBangerActive, class dgBangerInstance*>>(0x43FDC0, this, arg1);
    }

    // 0x43FFF0 | ?Detach@dgBangerActive@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, dgBangerActive>>(0x43FFF0, this);
    }

    // 0x43FD40 | ??1dgBangerActive@@UAE@XZ
    inline ~dgBangerActive() override
    {
        stub<member_func_t<void, dgBangerActive>>(0x43FD40, this);
    }

    // 0x440050 | ?Update@dgBangerActive@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, dgBangerActive>>(0x440050, this);
    }

    // 0x4400E0 | ?PostUpdate@dgBangerActive@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, dgBangerActive>>(0x4400E0, this);
    }

    // 0x4405C0 | ?GetICS@dgBangerActive@@UAEPAVphInertialCS@@XZ
    inline class phInertialCS* GetICS() override
    {
        return stub<member_func_t<class phInertialCS*, dgBangerActive>>(0x4405C0, this);
    }

    // 0x43FDB0 | ?GetInst@dgBangerActive@@UAEPAVlvlInstance@@XZ
    inline class lvlInstance* GetInst() override
    {
        return stub<member_func_t<class lvlInstance*, dgBangerActive>>(0x43FDB0, this);
    }

    // 0x440030 | ?DetachMe@dgBangerActive@@UAEXXZ
    inline void DetachMe() override
    {
        return stub<member_func_t<void, dgBangerActive>>(0x440030, this);
    }
};
