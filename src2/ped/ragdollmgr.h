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
    ped:ragdollmgr

    0x57B8B0 | public: __thiscall pedRagdollMgr::pedRagdollMgr(void) | ??0pedRagdollMgr@@QAE@XZ
    0x57B910 | public: virtual __thiscall pedRagdollMgr::~pedRagdollMgr(void) | ??1pedRagdollMgr@@UAE@XZ
    0x57B9B0 | public: void __thiscall pedRagdollMgr::Init(int,char * *) | ?Init@pedRagdollMgr@@QAEXHPAPAD@Z
    0x57BAF0 | public: class pedActive * __thiscall pedRagdollMgr::Attach(class aiPedestrianInstance *) | ?Attach@pedRagdollMgr@@QAEPAVpedActive@@PAVaiPedestrianInstance@@@Z
    0x57BB80 | public: void __thiscall pedRagdollMgr::Detach(class aiPedestrianInstance *) | ?Detach@pedRagdollMgr@@QAEXPAVaiPedestrianInstance@@@Z
    0x57BBB0 | public: bool __thiscall pedRagdollMgr::UnusedActive(void) | ?UnusedActive@pedRagdollMgr@@QAE_NXZ
    0x57BBD0 | public: virtual void __thiscall pedRagdollMgr::Reset(void) | ?Reset@pedRagdollMgr@@UAEXXZ
    0x57BC10 | public: virtual void __thiscall pedRagdollMgr::Update(void) | ?Update@pedRagdollMgr@@UAEXXZ
    public: virtual void * __thiscall pedRagdollMgr::`scalar deleting destructor'(unsigned int) | ??_GpedRagdollMgr@@UAEPAXI@Z
    0x57BC80 | public: virtual void * __thiscall pedRagdollMgr::`vector deleting destructor'(unsigned int) | ??_EpedRagdollMgr@@UAEPAXI@Z
    0x57BCB0 | public: void * __thiscall pedActiveData::`vector deleting destructor'(unsigned int) | ??_EpedActiveData@@QAEPAXI@Z
    0x57BD10 | public: virtual void * __thiscall pedActive::`vector deleting destructor'(unsigned int) | ??_EpedActive@@UAEPAXI@Z
    0x5B635C | const pedRagdollMgr::`vftable' | ??_7pedRagdollMgr@@6B@
    0x6B4740 | public: static class pedRagdollMgr * pedRagdollMgr::Instance | ?Instance@pedRagdollMgr@@2PAV1@A
*/

class pedRagdollMgr : asNode
{
public:
    // pedRagdollMgr::`vftable' @ 0x5B635C

    // 0x57B8B0 | ??0pedRagdollMgr@@QAE@XZ
    inline pedRagdollMgr()
    {
        stub<member_func_t<void, pedRagdollMgr>>(0x57B8B0, this);
    }

    // 0x57B9B0 | ?Init@pedRagdollMgr@@QAEXHPAPAD@Z
    inline void Init(int32_t arg1, char** arg2)
    {
        return stub<member_func_t<void, pedRagdollMgr, int32_t, char**>>(0x57B9B0, this, arg1, arg2);
    }

    // 0x57BAF0 | ?Attach@pedRagdollMgr@@QAEPAVpedActive@@PAVaiPedestrianInstance@@@Z
    inline class pedActive* Attach(class aiPedestrianInstance* arg1)
    {
        return stub<member_func_t<class pedActive*, pedRagdollMgr, class aiPedestrianInstance*>>(0x57BAF0, this, arg1);
    }

    // 0x57BB80 | ?Detach@pedRagdollMgr@@QAEXPAVaiPedestrianInstance@@@Z
    inline void Detach(class aiPedestrianInstance* arg1)
    {
        return stub<member_func_t<void, pedRagdollMgr, class aiPedestrianInstance*>>(0x57BB80, this, arg1);
    }

    // 0x57BBB0 | ?UnusedActive@pedRagdollMgr@@QAE_NXZ
    inline bool UnusedActive()
    {
        return stub<member_func_t<bool, pedRagdollMgr>>(0x57BBB0, this);
    }

    // 0x6B4740 | ?Instance@pedRagdollMgr@@2PAV1@A
    static inline extern_var(0x6B4740, class pedRagdollMgr*, Instance);

    // 0x57B910 | ??1pedRagdollMgr@@UAE@XZ
    inline ~pedRagdollMgr() override
    {
        stub<member_func_t<void, pedRagdollMgr>>(0x57B910, this);
    }

    // 0x57BC10 | ?Update@pedRagdollMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, pedRagdollMgr>>(0x57BC10, this);
    }

    // 0x57BBD0 | ?Reset@pedRagdollMgr@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, pedRagdollMgr>>(0x57BBD0, this);
    }
};
