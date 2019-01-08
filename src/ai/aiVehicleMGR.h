/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

#include "hooking.h"
