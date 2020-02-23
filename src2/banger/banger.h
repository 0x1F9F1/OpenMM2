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
    int ExpensiveShadows | ?ExpensiveShadows@@3HA
    0x627678 | protected: static class dgBangerManager * dgBangerManager::Instance | ?Instance@dgBangerManager@@1PAV1@A
    public: static class gfxTexture * dgBangerInstance::DefaultGlowTexture | ?DefaultGlowTexture@dgBangerInstance@@2PAVgfxTexture@@A
*/

class dgHitBangerInstance
    : lvlInstance
    , dgBangerInstance
{
public:
    // dgHitBangerInstance::`vftable' @ 0x5B15B8

    // 0x442950 | ??_EdgHitBangerInstance@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4429B0 | ??1dgHitBangerInstance@@QAE@XZ
    inline ~dgHitBangerInstance()
    {
        stub<member_func_t<void, dgHitBangerInstance>>(0x4429B0, this);
    }

    // 0x442A60 | ??0dgHitBangerInstance@@QAE@XZ
    inline dgHitBangerInstance()
    {
        stub<member_func_t<void, dgHitBangerInstance>>(0x442A60, this);
    }

    // 0x441B70 | ?GetPosition@dgHitBangerInstance@@UAEABVVector3@@XZ
    virtual inline class Vector3 const& GetPosition()
    {
        return stub<member_func_t<class Vector3 const&, dgHitBangerInstance>>(0x441B70, this);
    }

    // 0x441B60 | ?GetMatrix@dgHitBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    virtual inline class Matrix34 const& GetMatrix(class Matrix34& arg1)
    {
        return stub<member_func_t<class Matrix34 const&, dgHitBangerInstance, class Matrix34&>>(0x441B60, this, arg1);
    }

    // 0x441B40 | ?SetMatrix@dgHitBangerInstance@@UAEXABVMatrix34@@@Z
    virtual inline void SetMatrix(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, dgHitBangerInstance, class Matrix34 const&>>(0x441B40, this, arg1);
    }

    // 0x442680 | ?Detach@dgHitBangerInstance@@UAEXXZ
    virtual inline void Detach()
    {
        return stub<member_func_t<void, dgHitBangerInstance>>(0x442680, this);
    }

    // 0x442AB0 | ?SizeOf@dgHitBangerInstance@@UAEIXZ
    virtual inline u32 SizeOf()
    {
        return stub<member_func_t<u32, dgHitBangerInstance>>(0x442AB0, this);
    }
};

class dgBangerInstance : asNode
{
public:
    // 0x4417C0 | ?DrawTree@dgBangerInstance@@QAEXH@Z
    inline void DrawTree(i32 arg1)
    {
        return stub<member_func_t<void, dgBangerInstance, i32>>(0x4417C0, this, arg1);
    }

    // 0x441AB0 | ?GetData@dgBangerInstance@@QAEPAVdgBangerData@@XZ
    inline class dgBangerData* GetData()
    {
        return stub<member_func_t<class dgBangerData*, dgBangerInstance>>(0x441AB0, this);
    }
};

class dgBangerManager : asNode
{
public:
    // dgBangerManager::`vftable' @ 0x5B1584

    // 0x4426B0 | ??0dgBangerManager@@QAE@XZ
    inline dgBangerManager()
    {
        stub<member_func_t<void, dgBangerManager>>(0x4426B0, this);
    }

    // 0x442780 | ?GetBanger@dgBangerManager@@QAEPAVdgHitBangerInstance@@XZ
    inline class dgHitBangerInstance* GetBanger()
    {
        return stub<member_func_t<class dgHitBangerInstance*, dgBangerManager>>(0x442780, this);
    }

    // 0x4427E0 | ?Init@dgBangerManager@@QAEXH@Z
    inline void Init(i32 arg1)
    {
        return stub<member_func_t<void, dgBangerManager, i32>>(0x4427E0, this, arg1);
    }

    // 0x442870 | ?InitGlow@dgBangerManager@@QAEXPBD@Z
    inline void InitGlow(char const* arg1)
    {
        return stub<member_func_t<void, dgBangerManager, char const*>>(0x442870, this, arg1);
    }

    // 0x627678 | ?Instance@dgBangerManager@@1PAV1@A
    inline extern_var(0x627678, class dgBangerManager*, Instance);

    // 0x4426E0 | ??1dgBangerManager@@UAE@XZ
    inline ~dgBangerManager() override
    {
        stub<member_func_t<void, dgBangerManager>>(0x4426E0, this);
    }

    // 0x4428A0 | ?Reset@dgBangerManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, dgBangerManager>>(0x4428A0, this);
    }
};

class dgUnhitBangerInstance
    : lvlInstance
    , dgBangerInstance
{
public:
    // dgUnhitBangerInstance::`vftable' @ 0x5B56D4

    // 0x441B80 | ?InitBreakables@dgUnhitBangerInstance@@QAEXPBDPAVdgBangerData@@@Z
    inline void InitBreakables(char const* arg1, class dgBangerData* arg2)
    {
        return stub<member_func_t<void, dgUnhitBangerInstance, char const*, class dgBangerData*>>(
            0x441B80, this, arg1, arg2);
    }

    // 0x441D80 | ?RequestBanger@dgUnhitBangerInstance@@SAPAV1@PBDH@Z
    static inline class dgUnhitBangerInstance* RequestBanger(char const* arg1, i32 arg2)
    {
        return stub<cdecl_t<class dgUnhitBangerInstance*, char const*, i32>>(0x441D80, arg1, arg2);
    }

    // 0x442570 | ?InitBound@dgUnhitBangerInstance@@QAE_NPBD0PAVdgBangerData@@H@Z
    inline bool InitBound(char const* arg1, char const* arg2, class dgBangerData* arg3, i32 arg4)
    {
        return stub<member_func_t<bool, dgUnhitBangerInstance, char const*, char const*, class dgBangerData*, i32>>(
            0x442570, this, arg1, arg2, arg3, arg4);
    }

    // 0x541880 | ??0dgUnhitBangerInstance@@QAE@XZ
    inline dgUnhitBangerInstance()
    {
        stub<member_func_t<void, dgUnhitBangerInstance>>(0x541880, this);
    }

    // 0x582519 | __purecall
    virtual inline class Vector3 const& GetPosition()
    {
        return stub<member_func_t<class Vector3 const&, dgUnhitBangerInstance>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline class Matrix34 const& GetMatrix(class Matrix34& arg1)
    {
        return stub<member_func_t<class Matrix34 const&, dgUnhitBangerInstance, class Matrix34&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void SetMatrix(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, dgUnhitBangerInstance, class Matrix34 const&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline u32 SizeOf()
    {
        return stub<member_func_t<u32, dgUnhitBangerInstance>>(0x582519, this);
    }
};

struct dgUnhitYBangerInstance : dgUnhitBangerInstance
{
public:
    // dgUnhitYBangerInstance::`vftable' @ 0x5B150C

    // 0x5418A0 | ??1dgUnhitYBangerInstance@@QAE@XZ
    inline ~dgUnhitYBangerInstance()
    {
        stub<member_func_t<void, dgUnhitYBangerInstance>>(0x5418A0, this);
    }

    // 0x441FC0 | ?GetPosition@dgUnhitYBangerInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, dgUnhitYBangerInstance>>(0x441FC0, this);
    }

    // 0x441F70 | ?GetMatrix@dgUnhitYBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, dgUnhitYBangerInstance, class Matrix34&>>(
            0x441F70, this, arg1);
    }

    // 0x441F40 | ?SetMatrix@dgUnhitYBangerInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, dgUnhitYBangerInstance, class Matrix34 const&>>(0x441F40, this, arg1);
    }

    // 0x442AE0 | ?SizeOf@dgUnhitYBangerInstance@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, dgUnhitYBangerInstance>>(0x442AE0, this);
    }
};

struct dgUnhitMtxBangerInstance : dgUnhitBangerInstance
{
public:
    // dgUnhitMtxBangerInstance::`vftable' @ 0x5B1494

    // 0x442000 | ?GetPosition@dgUnhitMtxBangerInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, dgUnhitMtxBangerInstance>>(0x442000, this);
    }

    // 0x441FF0 | ?GetMatrix@dgUnhitMtxBangerInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, dgUnhitMtxBangerInstance, class Matrix34&>>(
            0x441FF0, this, arg1);
    }

    // 0x441FD0 | ?SetMatrix@dgUnhitMtxBangerInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, dgUnhitMtxBangerInstance, class Matrix34 const&>>(0x441FD0, this, arg1);
    }

    // 0x442AF0 | ?SizeOf@dgUnhitMtxBangerInstance@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, dgUnhitMtxBangerInstance>>(0x442AF0, this);
    }
};
