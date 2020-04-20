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
    vehicle:cardamage

    0x4CA380 | public: __thiscall vehCarDamage::vehCarDamage(void) | ??0vehCarDamage@@QAE@XZ
    0x4CA530 | public: virtual __thiscall vehCarDamage::~vehCarDamage(void) | ??1vehCarDamage@@UAE@XZ
    0x4CA5F0 | public: virtual char const * __thiscall vehCarDamage::GetDirName(void) | ?GetDirName@vehCarDamage@@UAEPBDXZ
    0x4CA600 | public: void __thiscall vehCarDamage::Init(class vehCar *,char const *) | ?Init@vehCarDamage@@QAEXPAVvehCar@@PBD@Z
    0x4CA8D0 | private: void __thiscall vehCarDamage::SpewSmoke(class asParticles *,float *,class Vector3 &,float) | ?SpewSmoke@vehCarDamage@@AAEXPAVasParticles@@PAMAAVVector3@@M@Z
    0x4CAA40 | public: virtual void __thiscall vehCarDamage::Update(void) | ?Update@vehCarDamage@@UAEXXZ
    0x4CAE60 | public: virtual void __thiscall vehCarDamage::Reset(void) | ?Reset@vehCarDamage@@UAEXXZ
    0x4CAE80 | public: void __thiscall vehCarDamage::ClearDamage(void) | ?ClearDamage@vehCarDamage@@QAEXXZ
    0x4CAEC0 | public: void __thiscall vehCarDamage::AddDamage(float) | ?AddDamage@vehCarDamage@@QAEXM@Z
    0x4CAEF0 | private: void __thiscall vehCarDamage::InsertImpact(struct ImpactCBData *,class phCollider *) | ?InsertImpact@vehCarDamage@@AAEXPAUImpactCBData@@PAVphCollider@@@Z
    0x4CB140 | private: void __thiscall vehCarDamage::ApplyImpact(struct vehDamageImpactInfo *) | ?ApplyImpact@vehCarDamage@@AAEXPAUvehDamageImpactInfo@@@Z
    0x4CB350 | public: static void __cdecl vehCarDamage::Impact(class vehCarDamage *,struct ImpactCBData *) | ?Impact@vehCarDamage@@SAXPAV1@PAUImpactCBData@@@Z
    0x4CB3E0 | public: void __thiscall vehCarDamage::SetGameCallback(class datCallback) | ?SetGameCallback@vehCarDamage@@QAEXVdatCallback@@@Z
    0x4CB400 | public: virtual void __thiscall vehCarDamage::FileIO(class datParser &) | ?FileIO@vehCarDamage@@UAEXAAVdatParser@@@Z
    public: virtual void __thiscall vehCarDamage::AddWidgets(class bkBank &) | ?AddWidgets@vehCarDamage@@UAEXAAVbkBank@@@Z
    0x4CB610 | public: virtual void * __thiscall vehCarDamage::`scalar deleting destructor'(unsigned int) | ??_GvehCarDamage@@UAEPAXI@Z
    public: virtual void * __thiscall vehCarDamage::`vector deleting destructor'(unsigned int) | ??_EvehCarDamage@@UAEPAXI@Z
    0x4CB640 | public: virtual char * __thiscall vehCarDamage::GetClassName(void) | ?GetClassName@vehCarDamage@@UAEPADXZ
    0x4CB650 | public: virtual float __thiscall vehCarDamage::GetDamageModifier(class phCollider *) | ?GetDamageModifier@vehCarDamage@@UAEMPAVphCollider@@@Z
    0x5B2C28 | const vehCarDamage::`vftable' | ??_7vehCarDamage@@6B@
    private: static float vehCarDamage::RelaxTime | ?RelaxTime@vehCarDamage@@0MA
    private: static float vehCarDamage::ParticleMultiplier | ?ParticleMultiplier@vehCarDamage@@0MA
    private: static bool vehCarDamage::bWobble | ?bWobble@vehCarDamage@@0_NA
    0x6AFED4 | private: static class asBirthRule * vehCarDamage::EngineSmokeRule | ?EngineSmokeRule@vehCarDamage@@0PAVasBirthRule@@A
    0x6AFED8 | private: static int vehCarDamage::EngineSmokeRuleRef | ?EngineSmokeRuleRef@vehCarDamage@@0HA
*/

class vehCarDamage : asNode
{
public:
    // vehCarDamage::`vftable' @ 0x5B2C28

    // 0x4CA380 | ??0vehCarDamage@@QAE@XZ
    inline vehCarDamage()
    {
        stub<member_func_t<void, vehCarDamage>>(0x4CA380, this);
    }

    // 0x4CA600 | ?Init@vehCarDamage@@QAEXPAVvehCar@@PBD@Z
    inline void Init(class vehCar* arg1, char const* arg2)
    {
        return stub<member_func_t<void, vehCarDamage, class vehCar*, char const*>>(0x4CA600, this, arg1, arg2);
    }

    // 0x4CA8D0 | ?SpewSmoke@vehCarDamage@@AAEXPAVasParticles@@PAMAAVVector3@@M@Z
    inline void SpewSmoke(class asParticles* arg1, float* arg2, class Vector3& arg3, float arg4)
    {
        return stub<member_func_t<void, vehCarDamage, class asParticles*, float*, class Vector3&, float>>(
            0x4CA8D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CAE80 | ?ClearDamage@vehCarDamage@@QAEXXZ
    inline void ClearDamage()
    {
        return stub<member_func_t<void, vehCarDamage>>(0x4CAE80, this);
    }

    // 0x4CAEC0 | ?AddDamage@vehCarDamage@@QAEXM@Z
    inline void AddDamage(float arg1)
    {
        return stub<member_func_t<void, vehCarDamage, float>>(0x4CAEC0, this, arg1);
    }

    // 0x4CAEF0 | ?InsertImpact@vehCarDamage@@AAEXPAUImpactCBData@@PAVphCollider@@@Z
    inline void InsertImpact(struct ImpactCBData* arg1, class phCollider* arg2)
    {
        return stub<member_func_t<void, vehCarDamage, struct ImpactCBData*, class phCollider*>>(
            0x4CAEF0, this, arg1, arg2);
    }

    // 0x4CB140 | ?ApplyImpact@vehCarDamage@@AAEXPAUvehDamageImpactInfo@@@Z
    inline void ApplyImpact(struct vehDamageImpactInfo* arg1)
    {
        return stub<member_func_t<void, vehCarDamage, struct vehDamageImpactInfo*>>(0x4CB140, this, arg1);
    }

    // 0x4CB350 | ?Impact@vehCarDamage@@SAXPAV1@PAUImpactCBData@@@Z
    static inline void Impact(class vehCarDamage* arg1, struct ImpactCBData* arg2)
    {
        return stub<cdecl_t<void, class vehCarDamage*, struct ImpactCBData*>>(0x4CB350, arg1, arg2);
    }

    // 0x4CB3E0 | ?SetGameCallback@vehCarDamage@@QAEXVdatCallback@@@Z
    inline void SetGameCallback(class datCallback arg1)
    {
        return stub<member_func_t<void, vehCarDamage, class datCallback>>(0x4CB3E0, this, arg1);
    }

    // 0x6AFED4 | ?EngineSmokeRule@vehCarDamage@@0PAVasBirthRule@@A
    inline extern_var(0x6AFED4, class asBirthRule*, EngineSmokeRule);

    // 0x6AFED8 | ?EngineSmokeRuleRef@vehCarDamage@@0HA
    inline extern_var(0x6AFED8, int32_t, EngineSmokeRuleRef);

    // 0x4CA530 | ??1vehCarDamage@@UAE@XZ
    inline ~vehCarDamage() override
    {
        stub<member_func_t<void, vehCarDamage>>(0x4CA530, this);
    }

    // 0x4CAA40 | ?Update@vehCarDamage@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehCarDamage>>(0x4CAA40, this);
    }

    // 0x4CAE60 | ?Reset@vehCarDamage@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehCarDamage>>(0x4CAE60, this);
    }

    // 0x4CB400 | ?FileIO@vehCarDamage@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehCarDamage, class datParser&>>(0x4CB400, this, arg1);
    }

    // 0x4CB640 | ?GetClassName@vehCarDamage@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehCarDamage>>(0x4CB640, this);
    }

    // 0x4CA5F0 | ?GetDirName@vehCarDamage@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, vehCarDamage>>(0x4CA5F0, this);
    }

    // 0x4CB650 | ?GetDamageModifier@vehCarDamage@@UAEMPAVphCollider@@@Z
    virtual inline float GetDamageModifier(class phCollider* arg1)
    {
        return stub<member_func_t<float, vehCarDamage, class phCollider*>>(0x4CB650, this, arg1);
    }
};
