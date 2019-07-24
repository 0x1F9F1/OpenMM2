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
    phcollide:colliderbase

    0x46D980 | public: static void __cdecl phColliderBase::SetColliderPenetration(float) | ?SetColliderPenetration@phColliderBase@@SAXM@Z
    0x46D9A0 | public: void __thiscall phColliderBase::Reset(void) | ?Reset@phColliderBase@@QAEXXZ
    0x46D9E0 | public: void __thiscall phColliderBase::UpdateMtx(void) | ?UpdateMtx@phColliderBase@@QAEXXZ
    0x46DA20 | public: void __thiscall phColliderBase::Update(void) | ?Update@phColliderBase@@QAEXXZ
    0x46DA70 | public: void __thiscall phColliderBase::CalcMaxMoved(void) | ?CalcMaxMoved@phColliderBase@@QAEXXZ
    0x46DB70 | public: void __thiscall phColliderBase::ToWorldCoords(class phIntersection *,int) const | ?ToWorldCoords@phColliderBase@@QBEXPAVphIntersection@@H@Z
    0x46DD10 | public: bool __thiscall phColliderBase::ColliderIsActive(void) const | ?ColliderIsActive@phColliderBase@@QBE_NXZ
    0x46DD20 | public: void __thiscall phColliderBase::GetDisp(class Vector3 const &,class Vector3 *) const | ?GetDisp@phColliderBase@@QBEXABVVector3@@PAV2@@Z
    0x46DD60 | public: void __thiscall phColliderBase::GetDisp(class Vector3 const &,class Vector3 *,long) const | ?GetDisp@phColliderBase@@QBEXABVVector3@@PAV2@J@Z
    0x46DDB0 | public: void __thiscall phColliderBase::GetDisp(class Vector3 const &,int,int,int,class Vector3 *) const | ?GetDisp@phColliderBase@@QBEXABVVector3@@HHHPAV2@@Z
    0x46E040 | public: void __thiscall phColliderBase::GetLocalVelocity(class Vector3 const &,int,int,int,class Vector3 &) const | ?GetLocalVelocity@phColliderBase@@QBEXABVVector3@@HHHAAV2@@Z
    0x46E070 | public: virtual void __thiscall phColliderBase::Impact(class phImpactBase const *,class Vector3 const &,class Vector3 const &) | ?Impact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@1@Z
    0x46E1B0 | public: virtual void __thiscall phColliderBase::Impact(class phImpactBase const *,class Vector3 const &) | ?Impact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@@Z
    0x46E2B0 | public: virtual void __thiscall phColliderBase::Contact(class phImpactBase const *,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Matrix34 const &) | ?Contact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@11ABVMatrix34@@@Z
    0x46E350 | public: virtual void __thiscall phColliderBase::Contact(class Vector3 const &,class phContact const *,class Matrix34 const &) | ?Contact@phColliderBase@@UAEXABVVector3@@PBVphContact@@ABVMatrix34@@@Z
    0x46E3C0 | public: virtual void __thiscall phColliderBase::Contact(class Vector3 const &,class phContact const *) | ?Contact@phColliderBase@@UAEXABVVector3@@PBVphContact@@@Z
    0x46E4B0 | public: void __thiscall phColliderBase::SetImpactCB(class datCallback *) | ?SetImpactCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    0x46E4C0 | public: void __thiscall phColliderBase::SetBoundCB(class datCallback *) | ?SetBoundCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    0x46E4D0 | public: void __thiscall phColliderBase::SetHitCB(class datCallback *) | ?SetHitCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    0x46E4E0 | public: void __thiscall phColliderBase::CallBoundCallback(class phImpactBase const *,class phContact const *,class Vector3 const &,class Vector3 const &,bool,class Matrix34 const *) | ?CallBoundCallback@phColliderBase@@QAEXPBVphImpactBase@@PBVphContact@@ABVVector3@@2_NPBVMatrix34@@@Z
    0x46E6F0 | public: void __thiscall phColliderBase::GetBoundCBImpactInfo(class phImpactBase const *,class phContact const *,struct phImpactBase::BoundCallbackData *,class Vector3 *) const | ?GetBoundCBImpactInfo@phColliderBase@@QBEXPBVphImpactBase@@PBVphContact@@PAUBoundCallbackData@2@PAVVector3@@@Z
    0x46E7D0 | public: int __thiscall phColliderBase::TestSegment(class phSegment const &,class phIntersection *,int) const | ?TestSegment@phColliderBase@@QBEHABVphSegment@@PAVphIntersection@@H@Z
    0x46E920 | public: int __thiscall phColliderBase::TestSegmentPoint(class phSegment const &,class phIntersectionPoint *,int) const | ?TestSegmentPoint@phColliderBase@@QBEHABVphSegment@@PAVphIntersectionPoint@@H@Z
    0x46EA60 | public: virtual void __thiscall phColliderBase::GetInvMassMatrix(class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderBase@@UBEXABVVector3@@AAVMatrix34@@H@Z
    0x46EA90 | public: virtual void __thiscall phColliderBase::GetInvMassMatrix(class Vector3 const &,class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderBase@@UBEXABVVector3@@0AAVMatrix34@@H@Z
    0x46EAC0 | public: void __thiscall phColliderBase::ApplyGravity(void) | ?ApplyGravity@phColliderBase@@QAEXXZ
    0x46EB00 | public: void __thiscall phColliderBase::ApplyAirResistance(float,class Vector3 const &,class phBound const *) | ?ApplyAirResistance@phColliderBase@@QAEXMABVVector3@@PBVphBound@@@Z
    public: void __thiscall phColliderBase::DebugReplay(void) | ?DebugReplay@phColliderBase@@QAEXXZ
    0x46EDA0 | public: void __thiscall Matrix34::Transform(class Vector3 const &,class Vector3 &) const | ?Transform@Matrix34@@QBEXABVVector3@@AAV2@@Z
    public: void __thiscall phColliderBase::RecordPusher(class Vector3 const &,long) | ?RecordPusher@phColliderBase@@QAEXABVVector3@@J@Z
    protected: static class Matrix34 const phColliderBase::IdentityMtx | ?IdentityMtx@phColliderBase@@1VMatrix34@@B
*/

class phColliderBase
{
public:
    // phColliderBase::`vftable' @ 0x5B1CCC

    // 0x46D980 | ?SetColliderPenetration@phColliderBase@@SAXM@Z
    static inline void SetColliderPenetration(float arg1)
    {
        return stub<cdecl_t<void, float>>(0x46D980, arg1);
    }

    // 0x46D9A0 | ?Reset@phColliderBase@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, phColliderBase>>(0x46D9A0, this);
    }

    // 0x46D9E0 | ?UpdateMtx@phColliderBase@@QAEXXZ
    inline void UpdateMtx()
    {
        return stub<member_func_t<void, phColliderBase>>(0x46D9E0, this);
    }

    // 0x46DA20 | ?Update@phColliderBase@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, phColliderBase>>(0x46DA20, this);
    }

    // 0x46DA70 | ?CalcMaxMoved@phColliderBase@@QAEXXZ
    inline void CalcMaxMoved()
    {
        return stub<member_func_t<void, phColliderBase>>(0x46DA70, this);
    }

    // 0x46DB70 | ?ToWorldCoords@phColliderBase@@QBEXPAVphIntersection@@H@Z
    inline void ToWorldCoords(class phIntersection* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, phColliderBase, class phIntersection*, int32_t>>(0x46DB70, this, arg1, arg2);
    }

    // 0x46DD10 | ?ColliderIsActive@phColliderBase@@QBE_NXZ
    inline bool ColliderIsActive()
    {
        return stub<member_func_t<bool, phColliderBase>>(0x46DD10, this);
    }

    // 0x46DD20 | ?GetDisp@phColliderBase@@QBEXABVVector3@@PAV2@@Z
    inline void GetDisp(class Vector3 const& arg1, class Vector3* arg2)
    {
        return stub<member_func_t<void, phColliderBase, class Vector3 const&, class Vector3*>>(
            0x46DD20, this, arg1, arg2);
    }

    // 0x46DD60 | ?GetDisp@phColliderBase@@QBEXABVVector3@@PAV2@J@Z
    inline void GetDisp(class Vector3 const& arg1, class Vector3* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, phColliderBase, class Vector3 const&, class Vector3*, int32_t>>(
            0x46DD60, this, arg1, arg2, arg3);
    }

    // 0x46DDB0 | ?GetDisp@phColliderBase@@QBEXABVVector3@@HHHPAV2@@Z
    inline void GetDisp(class Vector3 const& arg1, int32_t arg2, int32_t arg3, int32_t arg4, class Vector3* arg5)
    {
        return stub<
            member_func_t<void, phColliderBase, class Vector3 const&, int32_t, int32_t, int32_t, class Vector3*>>(
            0x46DDB0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x46E040 | ?GetLocalVelocity@phColliderBase@@QBEXABVVector3@@HHHAAV2@@Z
    inline void GetLocalVelocity(
        class Vector3 const& arg1, int32_t arg2, int32_t arg3, int32_t arg4, class Vector3& arg5)
    {
        return stub<
            member_func_t<void, phColliderBase, class Vector3 const&, int32_t, int32_t, int32_t, class Vector3&>>(
            0x46E040, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x46E4B0 | ?SetImpactCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    inline void SetImpactCB(class datCallback* arg1)
    {
        return stub<member_func_t<void, phColliderBase, class datCallback*>>(0x46E4B0, this, arg1);
    }

    // 0x46E4C0 | ?SetBoundCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    inline void SetBoundCB(class datCallback* arg1)
    {
        return stub<member_func_t<void, phColliderBase, class datCallback*>>(0x46E4C0, this, arg1);
    }

    // 0x46E4D0 | ?SetHitCB@phColliderBase@@QAEXPAVdatCallback@@@Z
    inline void SetHitCB(class datCallback* arg1)
    {
        return stub<member_func_t<void, phColliderBase, class datCallback*>>(0x46E4D0, this, arg1);
    }

    // 0x46E4E0 | ?CallBoundCallback@phColliderBase@@QAEXPBVphImpactBase@@PBVphContact@@ABVVector3@@2_NPBVMatrix34@@@Z
    inline void CallBoundCallback(class phImpactBase const* arg1, class phContact const* arg2,
        class Vector3 const& arg3, class Vector3 const& arg4, bool arg5, class Matrix34 const* arg6)
    {
        return stub<member_func_t<void, phColliderBase, class phImpactBase const*, class phContact const*,
            class Vector3 const&, class Vector3 const&, bool, class Matrix34 const*>>(
            0x46E4E0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x46E6F0 | ?GetBoundCBImpactInfo@phColliderBase@@QBEXPBVphImpactBase@@PBVphContact@@PAUBoundCallbackData@2@PAVVector3@@@Z
    inline void GetBoundCBImpactInfo(class phImpactBase const* arg1, class phContact const* arg2,
        struct phImpactBase::BoundCallbackData* arg3, class Vector3* arg4)
    {
        return stub<member_func_t<void, phColliderBase, class phImpactBase const*, class phContact const*,
            struct phImpactBase::BoundCallbackData*, class Vector3*>>(0x46E6F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46E7D0 | ?TestSegment@phColliderBase@@QBEHABVphSegment@@PAVphIntersection@@H@Z
    inline int32_t TestSegment(class phSegment const& arg1, class phIntersection* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, phColliderBase, class phSegment const&, class phIntersection*, int32_t>>(
            0x46E7D0, this, arg1, arg2, arg3);
    }

    // 0x46E920 | ?TestSegmentPoint@phColliderBase@@QBEHABVphSegment@@PAVphIntersectionPoint@@H@Z
    inline int32_t TestSegmentPoint(class phSegment const& arg1, class phIntersectionPoint* arg2, int32_t arg3)
    {
        return stub<
            member_func_t<int32_t, phColliderBase, class phSegment const&, class phIntersectionPoint*, int32_t>>(
            0x46E920, this, arg1, arg2, arg3);
    }

    // 0x46EAC0 | ?ApplyGravity@phColliderBase@@QAEXXZ
    inline void ApplyGravity()
    {
        return stub<member_func_t<void, phColliderBase>>(0x46EAC0, this);
    }

    // 0x46EB00 | ?ApplyAirResistance@phColliderBase@@QAEXMABVVector3@@PBVphBound@@@Z
    inline void ApplyAirResistance(float arg1, class Vector3 const& arg2, class phBound const* arg3)
    {
        return stub<member_func_t<void, phColliderBase, float, class Vector3 const&, class phBound const*>>(
            0x46EB00, this, arg1, arg2, arg3);
    }

    // 0x475C50 | ?CopyLastMatrix@phColliderBase@@QBEXPAVMatrix34@@J@Z
    inline void CopyLastMatrix(class Matrix34* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, phColliderBase, class Matrix34*, int32_t>>(0x475C50, this, arg1, arg2);
    }

    // 0x46EA90 | ?GetInvMassMatrix@phColliderBase@@UBEXABVVector3@@0AAVMatrix34@@H@Z
    virtual inline void GetInvMassMatrix(
        class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3, int32_t arg4)
    {
        return stub<
            member_func_t<void, phColliderBase, class Vector3 const&, class Vector3 const&, class Matrix34&, int32_t>>(
            0x46EA90, this, arg1, arg2, arg3, arg4);
    }

    // 0x46EA60 | ?GetInvMassMatrix@phColliderBase@@UBEXABVVector3@@AAVMatrix34@@H@Z
    virtual inline void GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2, int32_t arg3)
    {
        return stub<member_func_t<void, phColliderBase, class Vector3 const&, class Matrix34&, int32_t>>(
            0x46EA60, this, arg1, arg2, arg3);
    }

    // 0x46E1B0 | ?Impact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@@Z
    virtual inline void Impact(class phImpactBase const* arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, phColliderBase, class phImpactBase const*, class Vector3 const&>>(
            0x46E1B0, this, arg1, arg2);
    }

    // 0x46E070 | ?Impact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@1@Z
    virtual inline void Impact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<
            member_func_t<void, phColliderBase, class phImpactBase const*, class Vector3 const&, class Vector3 const&>>(
            0x46E070, this, arg1, arg2, arg3);
    }

    // 0x46E3C0 | ?Contact@phColliderBase@@UAEXABVVector3@@PBVphContact@@@Z
    virtual inline void Contact(class Vector3 const& arg1, class phContact const* arg2)
    {
        return stub<member_func_t<void, phColliderBase, class Vector3 const&, class phContact const*>>(
            0x46E3C0, this, arg1, arg2);
    }

    // 0x46E350 | ?Contact@phColliderBase@@UAEXABVVector3@@PBVphContact@@ABVMatrix34@@@Z
    virtual inline void Contact(class Vector3 const& arg1, class phContact const* arg2, class Matrix34 const& arg3)
    {
        return stub<
            member_func_t<void, phColliderBase, class Vector3 const&, class phContact const*, class Matrix34 const&>>(
            0x46E350, this, arg1, arg2, arg3);
    }

    // 0x46E2B0 | ?Contact@phColliderBase@@UAEXPBVphImpactBase@@ABVVector3@@11ABVMatrix34@@@Z
    virtual inline void Contact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, class Matrix34 const& arg5)
    {
        return stub<member_func_t<void, phColliderBase, class phImpactBase const*, class Vector3 const&,
            class Vector3 const&, class Vector3 const&, class Matrix34 const&>>(
            0x46E2B0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
