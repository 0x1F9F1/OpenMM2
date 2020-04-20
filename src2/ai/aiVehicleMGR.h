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
    ai:aiVehicleMGR

    0x551D90 | public: __thiscall aiVehicleInstance::aiVehicleInstance(class aiVehicleSpline *,char *) | ??0aiVehicleInstance@@QAE@PAVaiVehicleSpline@@PAD@Z
    0x552010 | private: bool __thiscall aiVehicleInstance::InitBreakable(char const *,char const *,int) | ?InitBreakable@aiVehicleInstance@@AAE_NPBD0H@Z
    0x552100 | public: virtual void __thiscall aiVehicleInstance::Reset(void) | ?Reset@aiVehicleInstance@@UAEXXZ
    0x552110 | public: void __thiscall aiVehicleInstance::SetColor(void) | ?SetColor@aiVehicleInstance@@QAEXXZ
    0x552160 | public: virtual void __thiscall aiVehicleInstance::Draw(int) | ?Draw@aiVehicleInstance@@UAEXH@Z
    0x552870 | public: void __thiscall aiVehicleInstance::DrawPart(class modStatic &,class Matrix34 const &,class modShader *,int) | ?DrawPart@aiVehicleInstance@@QAEXAAVmodStatic@@ABVMatrix34@@PAVmodShader@@H@Z
    0x552930 | public: virtual void __thiscall aiVehicleInstance::DrawGlow(void) | ?DrawGlow@aiVehicleInstance@@UAEXXZ
    0x552CB0 | public: virtual void __thiscall aiVehicleInstance::DrawReflected(float) | ?DrawReflected@aiVehicleInstance@@UAEXM@Z
    0x552CC0 | public: virtual void __thiscall aiVehicleInstance::DrawShadow(void) | ?DrawShadow@aiVehicleInstance@@UAEXXZ
    0x552F30 | public: virtual void __thiscall aiVehicleInstance::DrawShadowMap(void) | ?DrawShadowMap@aiVehicleInstance@@UAEXXZ
    0x552F40 | public: virtual class phBound const * __thiscall aiVehicleInstance::GetBound(int) | ?GetBound@aiVehicleInstance@@UAEPBVphBound@@H@Z
    0x552F50 | public: virtual class dgPhysEntity * __thiscall aiVehicleInstance::GetEntity(void) | ?GetEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    0x552F80 | public: virtual void __thiscall aiVehicleInstance::Detach(void) | ?Detach@aiVehicleInstance@@UAEXXZ
    0x552FB0 | public: virtual class dgPhysEntity * __thiscall aiVehicleInstance::AttachEntity(void) | ?AttachEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    0x553010 | public: virtual void __thiscall aiVehicleInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiVehicleInstance@@UAEXABVMatrix34@@@Z
    0x553020 | public: virtual class Matrix34 const & __thiscall aiVehicleInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiVehicleInstance@@UAEABVMatrix34@@AAV2@@Z
    0x553030 | public: virtual class Vector3 const & __thiscall aiVehicleInstance::GetPosition(void) | ?GetPosition@aiVehicleInstance@@UAEABVVector3@@XZ
    0x553060 | public: virtual unsigned int __thiscall aiVehicleInstance::SizeOf(void) | ?SizeOf@aiVehicleInstance@@UAEIXZ
    0x553070 | public: __thiscall aiVehicleActive::aiVehicleActive(void) | ??0aiVehicleActive@@QAE@XZ
    0x5531B0 | public: virtual __thiscall aiVehicleActive::~aiVehicleActive(void) | ??1aiVehicleActive@@UAE@XZ
    0x553290 | public: void __thiscall aiVehicleActive::Reset(void) | ?Reset@aiVehicleActive@@QAEXXZ
    0x5532A0 | public: static void __cdecl aiVehicleActive::Impact(class aiVehicleActive *,struct ImpactCBData *) | ?Impact@aiVehicleActive@@SAXPAV1@PAUImpactCBData@@@Z
    0x553430 | public: virtual class lvlInstance * __thiscall aiVehicleActive::GetInst(void) | ?GetInst@aiVehicleActive@@UAEPAVlvlInstance@@XZ
    0x553440 | public: void __thiscall aiVehicleActive::Attach(class aiVehicleInstance *) | ?Attach@aiVehicleActive@@QAEXPAVaiVehicleInstance@@@Z
    0x553690 | public: virtual void __thiscall aiVehicleActive::DetachMe(void) | ?DetachMe@aiVehicleActive@@UAEXXZ
    0x5536B0 | public: void __thiscall aiVehicleActive::Detach(void) | ?Detach@aiVehicleActive@@QAEXXZ
    0x553890 | public: virtual void __thiscall aiVehicleActive::Update(void) | ?Update@aiVehicleActive@@UAEXXZ
    0x553960 | public: virtual void __thiscall aiVehicleActive::PostUpdate(void) | ?PostUpdate@aiVehicleActive@@UAEXXZ
    0x5539E0 | public: int __thiscall aiVehicleActive::BottomedOut(void) | ?BottomedOut@aiVehicleActive@@QAEHXZ
    0x553A20 | public: virtual bool __thiscall aiVehicleActive::RequiresTerrainCollision(void) | ?RequiresTerrainCollision@aiVehicleActive@@UAE_NXZ
    0x553B20 | public: void __thiscall aiVehicleActive::UpdateDamage(void) | ?UpdateDamage@aiVehicleActive@@QAEXXZ
    0x553B30 | public: __thiscall aiVehicleManager::aiVehicleManager(void) | ??0aiVehicleManager@@QAE@XZ
    0x553C20 | public: virtual __thiscall aiVehicleManager::~aiVehicleManager(void) | ??1aiVehicleManager@@UAE@XZ
    0x553CE0 | public: void __thiscall aiVehicleManager::Init(char *) | ?Init@aiVehicleManager@@QAEXPAD@Z
    0x553D60 | public: virtual void __thiscall aiVehicleManager::Reset(void) | ?Reset@aiVehicleManager@@UAEXXZ
    0x553DC0 | public: class aiVehicleActive * __thiscall aiVehicleManager::Attach(class aiVehicleInstance *) | ?Attach@aiVehicleManager@@QAEPAVaiVehicleActive@@PAVaiVehicleInstance@@@Z
    0x553E30 | public: void __thiscall aiVehicleManager::Detach(class aiVehicleActive *) | ?Detach@aiVehicleManager@@QAEXPAVaiVehicleActive@@@Z
    0x553EA0 | public: virtual void __thiscall aiVehicleManager::Update(void) | ?Update@aiVehicleManager@@UAEXXZ
    0x553F80 | public: class aiVehicleData * __thiscall aiVehicleInstance::GetData(void) | ?GetData@aiVehicleInstance@@QAEPAVaiVehicleData@@XZ
    0x553FA0 | public: int __thiscall aiVehicleManager::AddVehicleDataEntry(char *) | ?AddVehicleDataEntry@aiVehicleManager@@QAEHPAD@Z
    0x5541E0 | public: void __thiscall aiVehicleManager::SaveEntry(void) | ?SaveEntry@aiVehicleManager@@QAEXXZ
    public: void __thiscall aiVehicleManager::AddWidgets(class bkBank *) | ?AddWidgets@aiVehicleManager@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall aiVehicleActive::`vector deleting destructor'(unsigned int) | ??_EaiVehicleActive@@UAEPAXI@Z
    0x554330 | public: virtual void * __thiscall aiVehicleActive::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleActive@@UAEPAXI@Z
    0x554360 | public: virtual __thiscall vehWheelCheap::~vehWheelCheap(void) | ??1vehWheelCheap@@UAE@XZ
    0x554370 | public: virtual void * __thiscall aiVehicleManager::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleManager@@UAEPAXI@Z
    public: virtual void * __thiscall aiVehicleManager::`vector deleting destructor'(unsigned int) | ??_EaiVehicleManager@@UAEPAXI@Z
    0x5543A0 | public: virtual __thiscall aiVehicleData::~aiVehicleData(void) | ??1aiVehicleData@@UAE@XZ
    public: virtual void __thiscall aiVehicleInstance::AddWidgets(class bkBank *) | ?AddWidgets@aiVehicleInstance@@UAEXPAVbkBank@@@Z
    0x5543B0 | public: virtual class phInertialCS * __thiscall aiVehicleActive::GetICS(void) | ?GetICS@aiVehicleActive@@UAEPAVphInertialCS@@XZ
    0x5B590C | const aiVehicleInstance::`vftable' | ??_7aiVehicleInstance@@6B@
    0x5B5974 | const aiVehicleActive::`vftable' | ??_7aiVehicleActive@@6B@
    0x5B599C | const aiVehicleManager::`vftable' | ??_7aiVehicleManager@@6B@
    0x6B31AC | public: static class aiVehicleManager * aiVehicleManager::Instance | ?Instance@aiVehicleManager@@2PAV1@A
    class HashTable VehicleDataHash | ?VehicleDataHash@@3VHashTable@@A
    class HashTable NoDataWhined | ?NoDataWhined@@3VHashTable@@A
    public: static float aiVehicleManager::FloatClock | ?FloatClock@aiVehicleManager@@2MA
    public: static int aiVehicleManager::SignalClock | ?SignalClock@aiVehicleManager@@2HA
*/

class aiVehicleManager : asNode
{
public:
    // aiVehicleManager::`vftable' @ 0x5B599C

    // 0x553B30 | ??0aiVehicleManager@@QAE@XZ
    inline aiVehicleManager()
    {
        stub<member_func_t<void, aiVehicleManager>>(0x553B30, this);
    }

    // 0x553CE0 | ?Init@aiVehicleManager@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, aiVehicleManager, char*>>(0x553CE0, this, arg1);
    }

    // 0x553DC0 | ?Attach@aiVehicleManager@@QAEPAVaiVehicleActive@@PAVaiVehicleInstance@@@Z
    inline class aiVehicleActive* Attach(class aiVehicleInstance* arg1)
    {
        return stub<member_func_t<class aiVehicleActive*, aiVehicleManager, class aiVehicleInstance*>>(
            0x553DC0, this, arg1);
    }

    // 0x553E30 | ?Detach@aiVehicleManager@@QAEXPAVaiVehicleActive@@@Z
    inline void Detach(class aiVehicleActive* arg1)
    {
        return stub<member_func_t<void, aiVehicleManager, class aiVehicleActive*>>(0x553E30, this, arg1);
    }

    // 0x553FA0 | ?AddVehicleDataEntry@aiVehicleManager@@QAEHPAD@Z
    inline int32_t AddVehicleDataEntry(char* arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleManager, char*>>(0x553FA0, this, arg1);
    }

    // 0x5541E0 | ?SaveEntry@aiVehicleManager@@QAEXXZ
    inline void SaveEntry()
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x5541E0, this);
    }

    // 0x6B31AC | ?Instance@aiVehicleManager@@2PAV1@A
    inline extern_var(0x6B31AC, class aiVehicleManager*, Instance);

    // 0x553C20 | ??1aiVehicleManager@@UAE@XZ
    inline ~aiVehicleManager() override
    {
        stub<member_func_t<void, aiVehicleManager>>(0x553C20, this);
    }

    // 0x553EA0 | ?Update@aiVehicleManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x553EA0, this);
    }

    // 0x553D60 | ?Reset@aiVehicleManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x553D60, this);
    }
};

class aiVehicleActive : dgPhysEntity
{
public:
    // aiVehicleActive::`vftable' @ 0x5B5974

    // 0x553070 | ??0aiVehicleActive@@QAE@XZ
    inline aiVehicleActive()
    {
        stub<member_func_t<void, aiVehicleActive>>(0x553070, this);
    }

    // 0x553290 | ?Reset@aiVehicleActive@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x553290, this);
    }

    // 0x5532A0 | ?Impact@aiVehicleActive@@SAXPAV1@PAUImpactCBData@@@Z
    static inline void Impact(class aiVehicleActive* arg1, struct ImpactCBData* arg2)
    {
        return stub<cdecl_t<void, class aiVehicleActive*, struct ImpactCBData*>>(0x5532A0, arg1, arg2);
    }

    // 0x553440 | ?Attach@aiVehicleActive@@QAEXPAVaiVehicleInstance@@@Z
    inline void Attach(class aiVehicleInstance* arg1)
    {
        return stub<member_func_t<void, aiVehicleActive, class aiVehicleInstance*>>(0x553440, this, arg1);
    }

    // 0x5536B0 | ?Detach@aiVehicleActive@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x5536B0, this);
    }

    // 0x5539E0 | ?BottomedOut@aiVehicleActive@@QAEHXZ
    inline int32_t BottomedOut()
    {
        return stub<member_func_t<int32_t, aiVehicleActive>>(0x5539E0, this);
    }

    // 0x553B20 | ?UpdateDamage@aiVehicleActive@@QAEXXZ
    inline void UpdateDamage()
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x553B20, this);
    }

    // 0x5531B0 | ??1aiVehicleActive@@UAE@XZ
    inline ~aiVehicleActive() override
    {
        stub<member_func_t<void, aiVehicleActive>>(0x5531B0, this);
    }

    // 0x553890 | ?Update@aiVehicleActive@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x553890, this);
    }

    // 0x553960 | ?PostUpdate@aiVehicleActive@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x553960, this);
    }

    // 0x5543B0 | ?GetICS@aiVehicleActive@@UAEPAVphInertialCS@@XZ
    inline class phInertialCS* GetICS() override
    {
        return stub<member_func_t<class phInertialCS*, aiVehicleActive>>(0x5543B0, this);
    }

    // 0x553430 | ?GetInst@aiVehicleActive@@UAEPAVlvlInstance@@XZ
    inline class lvlInstance* GetInst() override
    {
        return stub<member_func_t<class lvlInstance*, aiVehicleActive>>(0x553430, this);
    }

    // 0x553690 | ?DetachMe@aiVehicleActive@@UAEXXZ
    inline void DetachMe() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x553690, this);
    }

    // 0x553A20 | ?RequiresTerrainCollision@aiVehicleActive@@UAE_NXZ
    inline bool RequiresTerrainCollision() override
    {
        return stub<member_func_t<bool, aiVehicleActive>>(0x553A20, this);
    }
};

class aiVehicleInstance : lvlInstance
{
public:
    // aiVehicleInstance::`vftable' @ 0x5B590C

    // 0x551D90 | ??0aiVehicleInstance@@QAE@PAVaiVehicleSpline@@PAD@Z
    inline aiVehicleInstance(class aiVehicleSpline* arg1, char* arg2)
    {
        stub<member_func_t<void, aiVehicleInstance, class aiVehicleSpline*, char*>>(0x551D90, this, arg1, arg2);
    }

    // 0x552010 | ?InitBreakable@aiVehicleInstance@@AAE_NPBD0H@Z
    inline bool InitBreakable(char const* arg1, char const* arg2, int32_t arg3)
    {
        return stub<member_func_t<bool, aiVehicleInstance, char const*, char const*, int32_t>>(
            0x552010, this, arg1, arg2, arg3);
    }

    // 0x552110 | ?SetColor@aiVehicleInstance@@QAEXXZ
    inline void SetColor()
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552110, this);
    }

    // 0x552870 | ?DrawPart@aiVehicleInstance@@QAEXAAVmodStatic@@ABVMatrix34@@PAVmodShader@@H@Z
    inline void DrawPart(class modStatic& arg1, class Matrix34 const& arg2, class modShader* arg3, int32_t arg4)
    {
        return stub<
            member_func_t<void, aiVehicleInstance, class modStatic&, class Matrix34 const&, class modShader*, int32_t>>(
            0x552870, this, arg1, arg2, arg3, arg4);
    }

    // 0x553F80 | ?GetData@aiVehicleInstance@@QAEPAVaiVehicleData@@XZ
    inline class aiVehicleData* GetData()
    {
        return stub<member_func_t<class aiVehicleData*, aiVehicleInstance>>(0x553F80, this);
    }

    // 0x552100 | ?Reset@aiVehicleInstance@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552100, this);
    }

    // 0x553030 | ?GetPosition@aiVehicleInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, aiVehicleInstance>>(0x553030, this);
    }

    // 0x553020 | ?GetMatrix@aiVehicleInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, aiVehicleInstance, class Matrix34&>>(0x553020, this, arg1);
    }

    // 0x553010 | ?SetMatrix@aiVehicleInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiVehicleInstance, class Matrix34 const&>>(0x553010, this, arg1);
    }

    // 0x552F50 | ?GetEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, aiVehicleInstance>>(0x552F50, this);
    }

    // 0x552FB0 | ?AttachEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, aiVehicleInstance>>(0x552FB0, this);
    }

    // 0x552F80 | ?Detach@aiVehicleInstance@@UAEXXZ
    inline void Detach() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552F80, this);
    }

    // 0x552160 | ?Draw@aiVehicleInstance@@UAEXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiVehicleInstance, int32_t>>(0x552160, this, arg1);
    }

    // 0x552CC0 | ?DrawShadow@aiVehicleInstance@@UAEXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552CC0, this);
    }

    // 0x552F30 | ?DrawShadowMap@aiVehicleInstance@@UAEXXZ
    inline void DrawShadowMap() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552F30, this);
    }

    // 0x552930 | ?DrawGlow@aiVehicleInstance@@UAEXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x552930, this);
    }

    // 0x552CB0 | ?DrawReflected@aiVehicleInstance@@UAEXM@Z
    inline void DrawReflected(float arg1) override
    {
        return stub<member_func_t<void, aiVehicleInstance, float>>(0x552CB0, this, arg1);
    }

    // 0x553060 | ?SizeOf@aiVehicleInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, aiVehicleInstance>>(0x553060, this);
    }

    // 0x552F40 | ?GetBound@aiVehicleInstance@@UAEPBVphBound@@H@Z
    inline class phBound const* GetBound(int32_t arg1) override
    {
        return stub<member_func_t<class phBound const*, aiVehicleInstance, int32_t>>(0x552F40, this, arg1);
    }
};
