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
#include "node/node.h"

/*
    banger:banger

    0x4415C0 | public: virtual int __thiscall dgBangerInstance::ComputeLod(float,float) | ?ComputeLod@dgBangerInstance@@UAEHMM@Z
    0x4415E0 | public: virtual void __thiscall dgBangerInstance::Draw(int) | ?Draw@dgBangerInstance@@UAEXH@Z
    0x4417B0 | public: virtual void __thiscall dgBangerInstance::DrawReflected(float) | ?DrawReflected@dgBangerInstance@@UAEXM@Z
    0x4417C0 | public: void __thiscall dgBangerInstance::DrawTree(int) | ?DrawTree@dgBangerInstance@@QAEXH@Z
    0x441840 | public: virtual void __thiscall dgBangerInstance::DrawGlow(void) | ?DrawGlow@dgBangerInstance@@UAEXXZ
    0x441990 | public: virtual void __thiscall dgBangerInstance::DrawShadow(void) | ?DrawShadow@dgBangerInstance@@UAEXXZ
    0x4419A0 | public: virtual void __thiscall dgBangerInstance::DrawShadowMap(void) | ?DrawShadowMap@dgBangerInstance@@UAEXXZ
    0x441AB0 | public: class dgBangerData * __thiscall dgBangerInstance::GetData(void) | ?GetData@dgBangerInstance@@QAEPAVdgBangerData@@XZ
    0x441AD0 | public: virtual class dgPhysEntity * __thiscall dgBangerInstance::GetEntity(void) | ?GetEntity@dgBangerInstance@@UAEPAVdgPhysEntity@@XZ
    0x441AE0 | public: virtual class dgPhysEntity * __thiscall dgBangerInstance::AttachEntity(void) | ?AttachEntity@dgBangerInstance@@UAEPAVdgPhysEntity@@XZ
    0x441B20 | public: virtual class Vector3 const & __thiscall dgBangerInstance::GetVelocity(void) | ?GetVelocity@dgBangerInstance@@UAEABVVector3@@XZ
    0x441B40 | public: virtual void __thiscall dgHitBangerInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@dgHitBangerInstance@@UAEXABVMatrix34@@@Z
    0x441B60 | public: virtual class Matrix34 const & __thiscall dgHitBangerInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@dgHitBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    0x441B70 | public: virtual class Vector3 const & __thiscall dgHitBangerInstance::GetPosition(void) | ?GetPosition@dgHitBangerInstance@@UAEABVVector3@@XZ
    0x441B80 | public: void __thiscall dgUnhitBangerInstance::InitBreakables(char const *,class dgBangerData *) | ?InitBreakables@dgUnhitBangerInstance@@QAEXPBDPAVdgBangerData@@@Z
    0x441C30 | public: virtual int __thiscall dgUnhitBangerInstance::Init(char const *,class Matrix34 const &,int) | ?Init@dgUnhitBangerInstance@@UAEHPBDABVMatrix34@@H@Z
    0x441D80 | public: static class dgUnhitBangerInstance * __cdecl dgUnhitBangerInstance::RequestBanger(char const *,int) | ?RequestBanger@dgUnhitBangerInstance@@SAPAV1@PBDH@Z
    0x441EE0 | public: virtual void __thiscall dgUnhitBangerInstance::Reset(void) | ?Reset@dgUnhitBangerInstance@@UAEXXZ
    0x441F40 | public: virtual void __thiscall dgUnhitYBangerInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@dgUnhitYBangerInstance@@UAEXABVMatrix34@@@Z
    0x441F70 | public: virtual class Matrix34 const & __thiscall dgUnhitYBangerInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@dgUnhitYBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    0x441FC0 | public: virtual class Vector3 const & __thiscall dgUnhitYBangerInstance::GetPosition(void) | ?GetPosition@dgUnhitYBangerInstance@@UAEABVVector3@@XZ
    0x441FD0 | public: virtual void __thiscall dgUnhitMtxBangerInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@dgUnhitMtxBangerInstance@@UAEXABVMatrix34@@@Z
    0x441FF0 | public: virtual class Matrix34 const & __thiscall dgUnhitMtxBangerInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@dgUnhitMtxBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    0x442000 | public: virtual class Vector3 const & __thiscall dgUnhitMtxBangerInstance::GetPosition(void) | ?GetPosition@dgUnhitMtxBangerInstance@@UAEABVVector3@@XZ
    0x442010 | public: virtual void __thiscall dgUnhitBangerInstance::Impact(class lvlInstance *,class Vector3 *) | ?Impact@dgUnhitBangerInstance@@UAEXPAVlvlInstance@@PAVVector3@@@Z
    0x442570 | public: bool __thiscall dgUnhitBangerInstance::InitBound(char const *,char const *,class dgBangerData *,int) | ?InitBound@dgUnhitBangerInstance@@QAE_NPBD0PAVdgBangerData@@H@Z
    0x442580 | public: virtual class phBound const * __thiscall dgBangerInstance::GetBound(int) | ?GetBound@dgBangerInstance@@UAEPBVphBound@@H@Z
    0x442680 | public: virtual void __thiscall dgHitBangerInstance::Detach(void) | ?Detach@dgHitBangerInstance@@UAEXXZ
    0x4426B0 | public: __thiscall dgBangerManager::dgBangerManager(void) | ??0dgBangerManager@@QAE@XZ
    0x4426E0 | public: virtual __thiscall dgBangerManager::~dgBangerManager(void) | ??1dgBangerManager@@UAE@XZ
    0x442780 | public: class dgHitBangerInstance * __thiscall dgBangerManager::GetBanger(void) | ?GetBanger@dgBangerManager@@QAEPAVdgHitBangerInstance@@XZ
    0x4427E0 | public: void __thiscall dgBangerManager::Init(int) | ?Init@dgBangerManager@@QAEXH@Z
    0x442870 | public: void __thiscall dgBangerManager::InitGlow(char const *) | ?InitGlow@dgBangerManager@@QAEXPBD@Z
    0x4428A0 | public: virtual void __thiscall dgBangerManager::Reset(void) | ?Reset@dgBangerManager@@UAEXXZ
    0x442910 | public: virtual int __thiscall dgBangerInstance::SetupGfxLights(class Matrix34 const &) const | ?SetupGfxLights@dgBangerInstance@@UBEHABVMatrix34@@@Z
    public: virtual void * __thiscall dgBangerManager::`vector deleting destructor'(unsigned int) | ??_EdgBangerManager@@UAEPAXI@Z
    0x442920 | public: virtual void * __thiscall dgBangerManager::`scalar deleting destructor'(unsigned int) | ??_GdgBangerManager@@UAEPAXI@Z
    0x442950 | public: void * __thiscall dgHitBangerInstance::`vector deleting destructor'(unsigned int) | ??_EdgHitBangerInstance@@QAEPAXI@Z
    0x4429B0 | public: __thiscall dgHitBangerInstance::~dgHitBangerInstance(void) | ??1dgHitBangerInstance@@QAE@XZ
    0x45CE00 | public: void __thiscall Vector3::Add(class Vector3 const &) | ?Add@Vector3@@QAEXABV1@@Z
    0x4429C0 | public: void __thiscall Vector3::Cross(class Vector3 const &,class Vector3 const &) | ?Cross@Vector3@@QAEXABV1@0@Z
    0x442A10 | public: virtual void __thiscall dgBangerInstance::SetVariant(int) | ?SetVariant@dgBangerInstance@@UAEXH@Z
    0x442A60 | public: __thiscall dgHitBangerInstance::dgHitBangerInstance(void) | ??0dgHitBangerInstance@@QAE@XZ
    0x442AB0 | public: virtual unsigned int __thiscall dgHitBangerInstance::SizeOf(void) | ?SizeOf@dgHitBangerInstance@@UAEIXZ
    public: __thiscall dgBangerInstance::~dgBangerInstance(void) | ??1dgBangerInstance@@QAE@XZ
    0x442AD0 | public: virtual void __thiscall dgUnhitBangerInstance::ImpactCB(class dgHitBangerInstance *) | ?ImpactCB@dgUnhitBangerInstance@@UAEXPAVdgHitBangerInstance@@@Z
    0x442AE0 | public: virtual unsigned int __thiscall dgUnhitYBangerInstance::SizeOf(void) | ?SizeOf@dgUnhitYBangerInstance@@UAEIXZ
    0x442AF0 | public: virtual unsigned int __thiscall dgUnhitMtxBangerInstance::SizeOf(void) | ?SizeOf@dgUnhitMtxBangerInstance@@UAEIXZ
    0x5B1494 | const dgUnhitMtxBangerInstance::`vftable' | ??_7dgUnhitMtxBangerInstance@@6B@
    0x5B150C | const dgUnhitYBangerInstance::`vftable' | ??_7dgUnhitYBangerInstance@@6B@
    0x5B1584 | const dgBangerManager::`vftable' | ??_7dgBangerManager@@6B@
    0x5B15B8 | const dgHitBangerInstance::`vftable' | ??_7dgHitBangerInstance@@6B@
    0x627674 | int ExpensiveShadows | ?ExpensiveShadows@@3HA
    0x627678 | protected: static class dgBangerManager * dgBangerManager::Instance | ?Instance@dgBangerManager@@1PAV1@A
    0x62767C | public: static class gfxTexture * dgBangerInstance::DefaultGlowTexture | ?DefaultGlowTexture@dgBangerInstance@@2PAVgfxTexture@@A
    0x5B56D4 | const dgBangerInstance::`vftable' | ??_7dgBangerInstance@@6B@
    0x541880 | public: __thiscall dgBangerInstance::dgBangerInstance(void) | ??0dgBangerInstance@@QAE@XZ
*/

class dgBangerInstance : public lvlInstance
{
    // const dgBangerInstance::`vftable' @ 0x5B56D4

public:
    // 0x541880 | ??0dgBangerInstance@@QAE@XZ
    dgBangerInstance();

    // 0x441AE0 | ?AttachEntity@dgBangerInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* AttachEntity() override;

    // 0x4415E0 | ?Draw@dgBangerInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x441840 | ?DrawGlow@dgBangerInstance@@UAEXXZ
    void DrawGlow() override;

    // 0x4417B0 | ?DrawReflected@dgBangerInstance@@UAEXM@Z
    void DrawReflected(f32 arg1) override;

    // 0x441990 | ?DrawShadow@dgBangerInstance@@UAEXXZ
    void DrawShadow() override;

    // 0x4419A0 | ?DrawShadowMap@dgBangerInstance@@UAEXXZ
    void DrawShadowMap() override;

    // 0x4417C0 | ?DrawTree@dgBangerInstance@@QAEXH@Z
    void DrawTree(i32 arg1);

    // 0x442580 | ?GetBound@dgBangerInstance@@UAEPBVphBound@@H@Z
    class phBound const* GetBound(i32 arg1) override;

    // 0x441AB0 | ?GetData@dgBangerInstance@@QAEPAVdgBangerData@@XZ
    class dgBangerData* GetData();

    // 0x441AD0 | ?GetEntity@dgBangerInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* GetEntity() override;

    // 0x441B20 | ?GetVelocity@dgBangerInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetVelocity() override;

    // 0x442A10 | ?SetVariant@dgBangerInstance@@UAEXH@Z
    void SetVariant(i32 arg1) override;

    // 0x4415C0 | ?ComputeLod@dgBangerInstance@@UAEHMM@Z
    virtual i32 ComputeLod(f32 arg1, f32 arg2);

    // 0x442910 | ?SetupGfxLights@dgBangerInstance@@UBEHABVMatrix34@@@Z
    virtual i32 SetupGfxLights(class Matrix34 const& arg1);

    // 0x62767C | ?DefaultGlowTexture@dgBangerInstance@@2PAVgfxTexture@@A
    static inline extern_var(0x62767C, class gfxTexture*, DefaultGlowTexture);
};

check_size(dgBangerInstance, 0x0);

class dgHitBangerInstance : public dgBangerInstance
{
    // const dgHitBangerInstance::`vftable' @ 0x5B15B8

public:
    // 0x442A60 | ??0dgHitBangerInstance@@QAE@XZ
    dgHitBangerInstance();

    // 0x4429B0 | ??1dgHitBangerInstance@@QAE@XZ
    // 0x442950 | ??_EdgHitBangerInstance@@QAEPAXI@Z
    ~dgHitBangerInstance();

    // 0x442680 | ?Detach@dgHitBangerInstance@@UAEXXZ
    void Detach() override;

    // 0x441B60 | ?GetMatrix@dgHitBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x441B70 | ?GetPosition@dgHitBangerInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x441B40 | ?SetMatrix@dgHitBangerInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x442AB0 | ?SizeOf@dgHitBangerInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(dgHitBangerInstance, 0x58);

class dgUnhitBangerInstance : public dgBangerInstance
{
public:
    // 0x441C30 | ?Init@dgUnhitBangerInstance@@UAEHPBDABVMatrix34@@H@Z
    i32 Init(char const* arg1, class Matrix34 const& arg2, i32 arg3) override;

    // 0x442570 | ?InitBound@dgUnhitBangerInstance@@QAE_NPBD0PAVdgBangerData@@H@Z
    bool InitBound(char const* arg1, char const* arg2, class dgBangerData* arg3, i32 arg4);

    // 0x441B80 | ?InitBreakables@dgUnhitBangerInstance@@QAEXPBDPAVdgBangerData@@@Z
    void InitBreakables(char const* arg1, class dgBangerData* arg2);

    // 0x441EE0 | ?Reset@dgUnhitBangerInstance@@UAEXXZ
    void Reset() override;

    virtual i32 ComputeLod(f32 arg1, f32 arg2) = 0;

    virtual i32 SetupGfxLights(class Matrix34 const& arg1) = 0;

    // 0x442010 | ?Impact@dgUnhitBangerInstance@@UAEXPAVlvlInstance@@PAVVector3@@@Z
    virtual void Impact(class lvlInstance* arg1, class Vector3* arg2);

    // 0x442AD0 | ?ImpactCB@dgUnhitBangerInstance@@UAEXPAVdgHitBangerInstance@@@Z
    virtual void ImpactCB(class dgHitBangerInstance* arg1);

    // 0x441D80 | ?RequestBanger@dgUnhitBangerInstance@@SAPAV1@PBDH@Z
    static class dgUnhitBangerInstance* RequestBanger(char const* arg1, i32 arg2);
};

check_size(dgUnhitBangerInstance, 0x0);

class dgUnhitYBangerInstance : public dgUnhitBangerInstance
{
    // const dgUnhitYBangerInstance::`vftable' @ 0x5B150C

public:
    // 0x5418A0 | ??1dgUnhitYBangerInstance@@QAE@XZ
    ~dgUnhitYBangerInstance();

    // 0x441F70 | ?GetMatrix@dgUnhitYBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x441FC0 | ?GetPosition@dgUnhitYBangerInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x441F40 | ?SetMatrix@dgUnhitYBangerInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x442AE0 | ?SizeOf@dgUnhitYBangerInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(dgUnhitYBangerInstance, 0x0);

class dgUnhitMtxBangerInstance : public dgUnhitBangerInstance
{
    // const dgUnhitMtxBangerInstance::`vftable' @ 0x5B1494

public:
    // 0x441FF0 | ?GetMatrix@dgUnhitMtxBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x442000 | ?GetPosition@dgUnhitMtxBangerInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x441FD0 | ?SetMatrix@dgUnhitMtxBangerInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x442AF0 | ?SizeOf@dgUnhitMtxBangerInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(dgUnhitMtxBangerInstance, 0x0);

class dgBangerManager : public asNode
{
    // const dgBangerManager::`vftable' @ 0x5B1584

public:
    // 0x4426B0 | ??0dgBangerManager@@QAE@XZ
    dgBangerManager();

    // 0x442920 | ??_GdgBangerManager@@UAEPAXI@Z
    // 0x4426E0 | ??1dgBangerManager@@UAE@XZ
    ~dgBangerManager() override;

    // 0x442780 | ?GetBanger@dgBangerManager@@QAEPAVdgHitBangerInstance@@XZ
    class dgHitBangerInstance* GetBanger();

    // 0x4427E0 | ?Init@dgBangerManager@@QAEXH@Z
    void Init(i32 arg1);

    // 0x442870 | ?InitGlow@dgBangerManager@@QAEXPBD@Z
    void InitGlow(char const* arg1);

    // 0x4428A0 | ?Reset@dgBangerManager@@UAEXXZ
    void Reset() override;

protected:
    // 0x627678 | ?Instance@dgBangerManager@@1PAV1@A
    static inline extern_var(0x627678, class dgBangerManager*, Instance);
};

check_size(dgBangerManager, 0x24);

// 0x627674 | ?ExpensiveShadows@@3HA
inline extern_var(0x627674, i32, ExpensiveShadows);
