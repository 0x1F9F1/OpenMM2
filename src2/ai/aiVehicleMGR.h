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

#include "level/inst.h"
#include "mmgame/mirror.h"
#include "node/node.h"

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
    0x6B31B0 | class HashTable VehicleDataHash | ?VehicleDataHash@@3VHashTable@@A
    0x6B31D0 | class HashTable NoDataWhined | ?NoDataWhined@@3VHashTable@@A
    0x6B31EC | public: static float aiVehicleManager::FloatClock | ?FloatClock@aiVehicleManager@@2MA
    0x6B31F4 | public: static int aiVehicleManager::SignalClock | ?SignalClock@aiVehicleManager@@2HA
*/

class aiVehicleInstance : public lvlInstance
{
    // const aiVehicleInstance::`vftable' @ 0x5B590C

public:
    // 0x551D90 | ??0aiVehicleInstance@@QAE@PAVaiVehicleSpline@@PAD@Z
    aiVehicleInstance(class aiVehicleSpline* arg1, char* arg2);

    // 0x552FB0 | ?AttachEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* AttachEntity() override;

    // 0x552F80 | ?Detach@aiVehicleInstance@@UAEXXZ
    void Detach() override;

    // 0x552160 | ?Draw@aiVehicleInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x552930 | ?DrawGlow@aiVehicleInstance@@UAEXXZ
    void DrawGlow() override;

    // 0x552870 | ?DrawPart@aiVehicleInstance@@QAEXAAVmodStatic@@ABVMatrix34@@PAVmodShader@@H@Z
    void DrawPart(class modStatic& arg1, class Matrix34 const& arg2, class modShader* arg3, i32 arg4);

    // 0x552CB0 | ?DrawReflected@aiVehicleInstance@@UAEXM@Z
    void DrawReflected(f32 arg1) override;

    // 0x552CC0 | ?DrawShadow@aiVehicleInstance@@UAEXXZ
    void DrawShadow() override;

    // 0x552F30 | ?DrawShadowMap@aiVehicleInstance@@UAEXXZ
    void DrawShadowMap() override;

    // 0x552F40 | ?GetBound@aiVehicleInstance@@UAEPBVphBound@@H@Z
    class phBound const* GetBound(i32 arg1) override;

    // 0x553F80 | ?GetData@aiVehicleInstance@@QAEPAVaiVehicleData@@XZ
    class aiVehicleData* GetData();

    // 0x552F50 | ?GetEntity@aiVehicleInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* GetEntity() override;

    // 0x553020 | ?GetMatrix@aiVehicleInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x553030 | ?GetPosition@aiVehicleInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x552100 | ?Reset@aiVehicleInstance@@UAEXXZ
    void Reset() override;

    // 0x552110 | ?SetColor@aiVehicleInstance@@QAEXXZ
    void SetColor();

    // 0x553010 | ?SetMatrix@aiVehicleInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x553060 | ?SizeOf@aiVehicleInstance@@UAEIXZ
    u32 SizeOf() override;

private:
    // 0x552010 | ?InitBreakable@aiVehicleInstance@@AAE_NPBD0H@Z
    bool InitBreakable(char const* arg1, char const* arg2, i32 arg3);
};

check_size(aiVehicleInstance, 0x0);

class aiVehicleActive : public dgPhysEntity
{
    // const aiVehicleActive::`vftable' @ 0x5B5974

public:
    // 0x553070 | ??0aiVehicleActive@@QAE@XZ
    aiVehicleActive();

    // 0x554330 | ??_GaiVehicleActive@@UAEPAXI@Z
    // 0x5531B0 | ??1aiVehicleActive@@UAE@XZ
    ~aiVehicleActive() override;

    // 0x553440 | ?Attach@aiVehicleActive@@QAEXPAVaiVehicleInstance@@@Z
    void Attach(class aiVehicleInstance* arg1);

    // 0x5539E0 | ?BottomedOut@aiVehicleActive@@QAEHXZ
    i32 BottomedOut();

    // 0x5536B0 | ?Detach@aiVehicleActive@@QAEXXZ
    void Detach();

    // 0x553690 | ?DetachMe@aiVehicleActive@@UAEXXZ
    void DetachMe() override;

    // 0x5543B0 | ?GetICS@aiVehicleActive@@UAEPAVphInertialCS@@XZ
    class phInertialCS* GetICS() override;

    // 0x553430 | ?GetInst@aiVehicleActive@@UAEPAVlvlInstance@@XZ
    class lvlInstance* GetInst() override;

    // 0x553960 | ?PostUpdate@aiVehicleActive@@UAEXXZ
    void PostUpdate() override;

    // 0x553A20 | ?RequiresTerrainCollision@aiVehicleActive@@UAE_NXZ
    bool RequiresTerrainCollision() override;

    // 0x553290 | ?Reset@aiVehicleActive@@QAEXXZ
    void Reset();

    // 0x553890 | ?Update@aiVehicleActive@@UAEXXZ
    void Update() override;

    // 0x553B20 | ?UpdateDamage@aiVehicleActive@@QAEXXZ
    void UpdateDamage();

    // 0x5532A0 | ?Impact@aiVehicleActive@@SAXPAV1@PAUImpactCBData@@@Z
    static void Impact(class aiVehicleActive* arg1, struct ImpactCBData* arg2);
};

check_size(aiVehicleActive, 0xAFC);

class aiVehicleManager : public asNode
{
    // const aiVehicleManager::`vftable' @ 0x5B599C

public:
    // 0x553B30 | ??0aiVehicleManager@@QAE@XZ
    aiVehicleManager();

    // 0x554370 | ??_GaiVehicleManager@@UAEPAXI@Z
    // 0x553C20 | ??1aiVehicleManager@@UAE@XZ
    ~aiVehicleManager() override;

    // 0x553FA0 | ?AddVehicleDataEntry@aiVehicleManager@@QAEHPAD@Z
    i32 AddVehicleDataEntry(char* arg1);

    // 0x553DC0 | ?Attach@aiVehicleManager@@QAEPAVaiVehicleActive@@PAVaiVehicleInstance@@@Z
    class aiVehicleActive* Attach(class aiVehicleInstance* arg1);

    // 0x553E30 | ?Detach@aiVehicleManager@@QAEXPAVaiVehicleActive@@@Z
    void Detach(class aiVehicleActive* arg1);

    // 0x553CE0 | ?Init@aiVehicleManager@@QAEXPAD@Z
    void Init(char* arg1);

    // 0x553D60 | ?Reset@aiVehicleManager@@UAEXXZ
    void Reset() override;

    // 0x5541E0 | ?SaveEntry@aiVehicleManager@@QAEXXZ
    void SaveEntry();

    // 0x553EA0 | ?Update@aiVehicleManager@@UAEXXZ
    void Update() override;

    // 0x6B31EC | ?FloatClock@aiVehicleManager@@2MA
    static inline extern_var(0x6B31EC, f32, FloatClock);

    // 0x6B31AC | ?Instance@aiVehicleManager@@2PAV1@A
    static inline extern_var(0x6B31AC, class aiVehicleManager*, Instance);

    // 0x6B31F4 | ?SignalClock@aiVehicleManager@@2HA
    static inline extern_var(0x6B31F4, i32, SignalClock);
};

check_size(aiVehicleManager, 0x0);

// 0x6B31D0 | ?NoDataWhined@@3VHashTable@@A
inline extern_var(0x6B31D0, class HashTable, NoDataWhined);

// 0x6B31B0 | ?VehicleDataHash@@3VHashTable@@A
inline extern_var(0x6B31B0, class HashTable, VehicleDataHash);
