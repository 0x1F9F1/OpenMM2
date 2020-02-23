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
    phys:physmgr

    0x4681A0 | public: __thiscall dgPhysManager::dgPhysManager(void) | ??0dgPhysManager@@QAE@XZ
    0x468250 | public: virtual __thiscall dgPhysManager::~dgPhysManager(void) | ??1dgPhysManager@@UAE@XZ
    0x4682D0 | public: void __thiscall dgPhysManager::Reset(void) | ?Reset@dgPhysManager@@QAEXXZ
    0x468370 | public: void __thiscall dgPhysManager::DeclareMover(class lvlInstance *,int,int) | ?DeclareMover@dgPhysManager@@QAEXPAVlvlInstance@@HH@Z
    0x468550 | public: void __thiscall dgPhysManager::NewMover(class lvlInstance *,class lvlInstance *) | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@0@Z
    0x468670 | public: void __thiscall dgPhysManager::NewMover(class lvlInstance *) | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@@Z
    0x468720 | public: void __thiscall dgPhysManager::NewMover(class lvlInstance *,class lvlInstance *,class lvlInstance *) | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@00@Z
    0x468860 | public: void __thiscall dgPhysManager::IgnoreMover(class lvlInstance *) | ?IgnoreMover@dgPhysManager@@QAEXPAVlvlInstance@@@Z
    0x4688B0 | public: void __thiscall dgPhysManager::Update(void) | ?Update@dgPhysManager@@QAEXXZ
    0x468E10 | public: void __thiscall dgPhysManager::ResetTable(void) | ?ResetTable@dgPhysManager@@QAEXXZ
    0x468E40 | public: bool __thiscall dgPhysManager::Collide(class lvlSegment &,class lvlIntersection *,int,class lvlInstance *,int,int) | ?Collide@dgPhysManager@@QAE_NAAVlvlSegment@@PAVlvlIntersection@@HPAVlvlInstance@@HH@Z
    0x469110 | public: bool __thiscall dgPhysManager::CollideProbe(class lvlSegment &,class lvlIntersection *,class lvlInstance *) | ?CollideProbe@dgPhysManager@@QAE_NAAVlvlSegment@@PAVlvlIntersection@@PAVlvlInstance@@@Z
    0x4692E0 | public: bool __thiscall dgPhysManager::TrivialCollideInstances(class lvlInstance *,class lvlInstance *) | ?TrivialCollideInstances@dgPhysManager@@QAE_NPAVlvlInstance@@0@Z
    0x4694E0 | public: void __thiscall dgPhysManager::GatherCollidables(struct dgPhysManager::CollisionTableEntry *) | ?GatherCollidables@dgPhysManager@@QAEXPAUCollisionTableEntry@1@@Z
    0x469620 | public: bool __thiscall dgPhysManager::CollideInstances(class lvlInstance *,class lvlInstance *) | ?CollideInstances@dgPhysManager@@QAE_NPAVlvlInstance@@0@Z
    0x469A60 | public: bool __thiscall dgPhysManager::CollideTerrain(struct dgPhysManager::CollisionTableEntry *) | ?CollideTerrain@dgPhysManager@@QAE_NPAUCollisionTableEntry@1@@Z
    0x469EC0 | public: void __thiscall dgPhysManager::Draw(void) | ?Draw@dgPhysManager@@QAEXXZ
    public: void __thiscall dgPhysManager::AddWidgets(class bkBank &) | ?AddWidgets@dgPhysManager@@QAEXAAVbkBank@@@Z
    public: virtual void __thiscall dgPhysManager::Stats(void) | ?Stats@dgPhysManager@@UAEXXZ
    public: virtual void * __thiscall dgPhysManager::`vector deleting destructor'(unsigned int) | ??_EdgPhysManager@@UAEPAXI@Z
    0x469ED0 | public: virtual void * __thiscall dgPhysManager::`scalar deleting destructor'(unsigned int) | ??_GdgPhysManager@@UAEPAXI@Z
    0x469F00 | public: virtual bool __thiscall dgPhysManager::TestProbe(class phSegment const &,class phIntersection *,unsigned int,int) const | ?TestProbe@dgPhysManager@@UBE_NABVphSegment@@PAVphIntersection@@IH@Z
    0x469F10 | public: virtual bool __thiscall dgPhysManager::TestSphere(class Vector3 const &,float,class phImpact *,unsigned int,int) const | ?TestSphere@dgPhysManager@@UBE_NABVVector3@@MPAVphImpact@@IH@Z
    0x469F20 | public: virtual class phColliderBase * __thiscall dgPhysManager::PromoteInstance(class phInstance *) | ?PromoteInstance@dgPhysManager@@UAEPAVphColliderBase@@PAVphInstance@@@Z
    0x469F30 | public: virtual void __thiscall dgPhysManager::DemoteInstance(class phInstance *) | ?DemoteInstance@dgPhysManager@@UAEXPAVphInstance@@@Z
    0x469F40 | public: virtual void __thiscall dgPhysManager::KillInstance(class phInstance *) | ?KillInstance@dgPhysManager@@UAEXPAVphInstance@@@Z
    0x469F50 | public: virtual void __thiscall dgPhysManager::DisableInstance(class phInstance *) | ?DisableInstance@dgPhysManager@@UAEXPAVphInstance@@@Z
    0x469F60 | public: virtual void __thiscall dgPhysManager::EnableInstance(class phInstance *,int) | ?EnableInstance@dgPhysManager@@UAEXPAVphInstance@@H@Z
    0x469F70 | public: virtual class phColliderBase * __thiscall dgPhysManager::GetCollider(class phInstance const *) const | ?GetCollider@dgPhysManager@@UBEPAVphColliderBase@@PBVphInstance@@@Z
    0x469F80 | public: virtual class phInstance * __thiscall dgPhysManager::CreateInstance(void) | ?CreateInstance@dgPhysManager@@UAEPAVphInstance@@XZ
    public: void __thiscall Matrix34::UnTransform(class Vector3 const &,class Vector3 &) const | ?UnTransform@Matrix34@@QBEXABVVector3@@AAV2@@Z
    0x5B1CB0 | const phCollider::`vftable' | ??_7phCollider@@6B@
    0x5B1CCC | const phColliderBase::`vftable' | ??_7phColliderBase@@6B@
    0x5B1CE8 | const dgPhysManager::`vftable'{for `phPhysicsManager'} | ??_7dgPhysManager@@6BphPhysicsManager@@@
    0x5B1D0C | const dgPhysManager::`vftable'{for `asCullable'} | ??_7dgPhysManager@@6BasCullable@@@
    0x5B1D14 | const phPhysicsManager::`vftable' | ??_7phPhysicsManager@@6B@
    public: static float dgPhysManager::Gravity | ?Gravity@dgPhysManager@@2MA
    public: static int dgPhysManager::sm_BoundLOD | ?sm_BoundLOD@dgPhysManager@@2HA
    public: static class Vector3 * dgPhysManager::sm_collidable_loc1 | ?sm_collidable_loc1@dgPhysManager@@2PAVVector3@@A
    public: static class Vector3 * dgPhysManager::sm_collidable_loc2 | ?sm_collidable_loc2@dgPhysManager@@2PAVVector3@@A
    public: static int dgPhysManager::sm_PhysCollides | ?sm_PhysCollides@dgPhysManager@@2HA
    0x65D9DC | public: static class dgPhysManager * dgPhysManager::m_pInst | ?m_pInst@dgPhysManager@@2PAV1@A
    0x65D9E0 | public: static class lvlInstance * dgPhysManager::PlayerInst | ?PlayerInst@dgPhysManager@@2PAVlvlInstance@@A
    public: static int dgPhysManager::sm_BoxTrivialReject | ?sm_BoxTrivialReject@dgPhysManager@@2HA
    public: static int dgPhysManager::sm_PhysEntityTrivialReject | ?sm_PhysEntityTrivialReject@dgPhysManager@@2HA
    public: static int dgPhysManager::sm_CylinderTrivialReject | ?sm_CylinderTrivialReject@dgPhysManager@@2HA
    public: static int dgPhysManager::sm_OpponentOptimization | ?sm_OpponentOptimization@dgPhysManager@@2HA
    public: static int dgPhysManager::sm_ncollidable_locs1 | ?sm_ncollidable_locs1@dgPhysManager@@2HA
    public: static int dgPhysManager::sm_ncollidable_locs2 | ?sm_ncollidable_locs2@dgPhysManager@@2HA
*/

class dgPhysManager : Base
{
public:
    // 0x4681A0 | ??0dgPhysManager@@QAE@XZ
    inline dgPhysManager()
    {
        stub<member_func_t<void, dgPhysManager>>(0x4681A0, this);
    }

    // 0x4682D0 | ?Reset@dgPhysManager@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, dgPhysManager>>(0x4682D0, this);
    }

    // 0x468370 | ?DeclareMover@dgPhysManager@@QAEXPAVlvlInstance@@HH@Z
    inline void DeclareMover(class lvlInstance* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, dgPhysManager, class lvlInstance*, i32, i32>>(0x468370, this, arg1, arg2, arg3);
    }

    // 0x468550 | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@0@Z
    inline void NewMover(class lvlInstance* arg1, class lvlInstance* arg2)
    {
        return stub<member_func_t<void, dgPhysManager, class lvlInstance*, class lvlInstance*>>(
            0x468550, this, arg1, arg2);
    }

    // 0x468670 | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@@Z
    inline void NewMover(class lvlInstance* arg1)
    {
        return stub<member_func_t<void, dgPhysManager, class lvlInstance*>>(0x468670, this, arg1);
    }

    // 0x468720 | ?NewMover@dgPhysManager@@QAEXPAVlvlInstance@@00@Z
    inline void NewMover(class lvlInstance* arg1, class lvlInstance* arg2, class lvlInstance* arg3)
    {
        return stub<member_func_t<void, dgPhysManager, class lvlInstance*, class lvlInstance*, class lvlInstance*>>(
            0x468720, this, arg1, arg2, arg3);
    }

    // 0x468860 | ?IgnoreMover@dgPhysManager@@QAEXPAVlvlInstance@@@Z
    inline void IgnoreMover(class lvlInstance* arg1)
    {
        return stub<member_func_t<void, dgPhysManager, class lvlInstance*>>(0x468860, this, arg1);
    }

    // 0x4688B0 | ?Update@dgPhysManager@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, dgPhysManager>>(0x4688B0, this);
    }

    // 0x468E10 | ?ResetTable@dgPhysManager@@QAEXXZ
    inline void ResetTable()
    {
        return stub<member_func_t<void, dgPhysManager>>(0x468E10, this);
    }

    // 0x468E40 | ?Collide@dgPhysManager@@QAE_NAAVlvlSegment@@PAVlvlIntersection@@HPAVlvlInstance@@HH@Z
    inline bool Collide(
        class lvlSegment& arg1, class lvlIntersection* arg2, i32 arg3, class lvlInstance* arg4, i32 arg5, i32 arg6)
    {
        return stub<member_func_t<bool, dgPhysManager, class lvlSegment&, class lvlIntersection*, i32,
            class lvlInstance*, i32, i32>>(0x468E40, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x469110 | ?CollideProbe@dgPhysManager@@QAE_NAAVlvlSegment@@PAVlvlIntersection@@PAVlvlInstance@@@Z
    inline bool CollideProbe(class lvlSegment& arg1, class lvlIntersection* arg2, class lvlInstance* arg3)
    {
        return stub<member_func_t<bool, dgPhysManager, class lvlSegment&, class lvlIntersection*, class lvlInstance*>>(
            0x469110, this, arg1, arg2, arg3);
    }

    // 0x4692E0 | ?TrivialCollideInstances@dgPhysManager@@QAE_NPAVlvlInstance@@0@Z
    inline bool TrivialCollideInstances(class lvlInstance* arg1, class lvlInstance* arg2)
    {
        return stub<member_func_t<bool, dgPhysManager, class lvlInstance*, class lvlInstance*>>(
            0x4692E0, this, arg1, arg2);
    }

    // 0x4694E0 | ?GatherCollidables@dgPhysManager@@QAEXPAUCollisionTableEntry@1@@Z
    inline void GatherCollidables(struct dgPhysManager::CollisionTableEntry* arg1)
    {
        return stub<member_func_t<void, dgPhysManager, struct dgPhysManager::CollisionTableEntry*>>(
            0x4694E0, this, arg1);
    }

    // 0x469620 | ?CollideInstances@dgPhysManager@@QAE_NPAVlvlInstance@@0@Z
    inline bool CollideInstances(class lvlInstance* arg1, class lvlInstance* arg2)
    {
        return stub<member_func_t<bool, dgPhysManager, class lvlInstance*, class lvlInstance*>>(
            0x469620, this, arg1, arg2);
    }

    // 0x469A60 | ?CollideTerrain@dgPhysManager@@QAE_NPAUCollisionTableEntry@1@@Z
    inline bool CollideTerrain(struct dgPhysManager::CollisionTableEntry* arg1)
    {
        return stub<member_func_t<bool, dgPhysManager, struct dgPhysManager::CollisionTableEntry*>>(
            0x469A60, this, arg1);
    }

    // 0x469EC0 | ?Draw@dgPhysManager@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, dgPhysManager>>(0x469EC0, this);
    }

    // 0x65D9DC | ?m_pInst@dgPhysManager@@2PAV1@A
    inline extern_var(0x65D9DC, class dgPhysManager*, m_pInst);

    // 0x65D9E0 | ?PlayerInst@dgPhysManager@@2PAVlvlInstance@@A
    inline extern_var(0x65D9E0, class lvlInstance*, PlayerInst);
};
