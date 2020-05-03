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

/*
    phbound:bound

    0x4871B0 | public: __thiscall phBound::phBound(int) | ??0phBound@@QAE@H@Z
    0x487200 | public: void __thiscall phBound::CalculateSphereFromBoundingBox(void) | ?CalculateSphereFromBoundingBox@phBound@@QAEXXZ
    0x4872A0 | public: virtual void __thiscall phBound::CenterBound(void) | ?CenterBound@phBound@@UAEXXZ
    0x4872B0 | public: bool const __thiscall phBound::IsOffset(void) const | ?IsOffset@phBound@@QBE?B_NXZ
    0x4872C0 | public: void __thiscall phBound::SetOffset(class Vector3 const &) | ?SetOffset@phBound@@QAEXABVVector3@@@Z
    0x487320 | public: void __thiscall phBound::GetCenter(class Matrix34 const *,class Vector3 *) const | ?GetCenter@phBound@@QBEXPBVMatrix34@@PAVVector3@@@Z
    0x4873A0 | public: class Vector3 __thiscall phBound::GetCenter(class Matrix34 const *) const | ?GetCenter@phBound@@QBE?AVVector3@@PBVMatrix34@@@Z
    0x487450 | public: void __thiscall phBound::SetPenetration(void) | ?SetPenetration@phBound@@QAEXXZ
    0x4874D0 | public: void __thiscall phBound::SetFlexibility(float) | ?SetFlexibility@phBound@@QAEXM@Z
    0x487500 | public: static void __cdecl phBound::GetFricElas(class phBound const *,class phIntersection const *,class phBound const *,class phIntersection const *,float *,float *) | ?GetFricElas@phBound@@SAXPBV1@PBVphIntersection@@01PAM2@Z
    0x487540 | public: void __thiscall phBound::GetFricElas(class phIntersection const *,float *,float *) const | ?GetFricElas@phBound@@QBEXPBVphIntersection@@PAM1@Z
    0x4875B0 | public: int __thiscall phBound::TestSegment(class phSegment &,class phIntersection *,int) const | ?TestSegment@phBound@@QBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x487630 | public: int __thiscall phBound::TestSegmentPoint(class phSegment &,class phIntersectionPoint *,int) const | ?TestSegmentPoint@phBound@@QBEHAAVphSegment@@PAVphIntersectionPoint@@H@Z
    0x4876B0 | public: virtual bool __thiscall phBound::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBound@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x4876C0 | public: virtual bool __thiscall phBound::TestSphere(class Vector3 const &,float,class phImpactBase &) const | ?TestSphere@phBound@@UBE_NABVVector3@@MAAVphImpactBase@@@Z
    0x487730 | public: virtual class Vector3 const & __thiscall phBound::GetVertex(int) const | ?GetVertex@phBound@@UBEABVVector3@@H@Z
    public: virtual void __thiscall phBound::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBound@@UBEXABVVector3@@@Z
    0x5B22F0 | const phBound::`vftable' | ??_7phBound@@6B@
    private: static float phBound::PhysicsTime | ?PhysicsTime@phBound@@0MA
*/

class phBound
{
    // const phBound::`vftable' @ 0x5B22F0

public:
    // 0x4871B0 | ??0phBound@@QAE@H@Z
    phBound(i32 arg1);

    // 0x487200 | ?CalculateSphereFromBoundingBox@phBound@@QAEXXZ
    void CalculateSphereFromBoundingBox();

    // 0x4873A0 | ?GetCenter@phBound@@QBE?AVVector3@@PBVMatrix34@@@Z
    class Vector3 GetCenter(class Matrix34 const* arg1);

    // 0x487320 | ?GetCenter@phBound@@QBEXPBVMatrix34@@PAVVector3@@@Z
    void GetCenter(class Matrix34 const* arg1, class Vector3* arg2);

    // 0x487540 | ?GetFricElas@phBound@@QBEXPBVphIntersection@@PAM1@Z
    void GetFricElas(class phIntersection const* arg1, f32* arg2, f32* arg3);

    // 0x4872B0 | ?IsOffset@phBound@@QBE?B_NXZ
    bool const IsOffset();

    // 0x4874D0 | ?SetFlexibility@phBound@@QAEXM@Z
    void SetFlexibility(f32 arg1);

    // 0x4872C0 | ?SetOffset@phBound@@QAEXABVVector3@@@Z
    void SetOffset(class Vector3 const& arg1);

    // 0x487450 | ?SetPenetration@phBound@@QAEXXZ
    void SetPenetration();

    // 0x4875B0 | ?TestSegment@phBound@@QBEHAAVphSegment@@PAVphIntersection@@H@Z
    i32 TestSegment(class phSegment& arg1, class phIntersection* arg2, i32 arg3);

    // 0x487630 | ?TestSegmentPoint@phBound@@QBEHAAVphSegment@@PAVphIntersectionPoint@@H@Z
    i32 TestSegmentPoint(class phSegment& arg1, class phIntersectionPoint* arg2, i32 arg3);

    // 0x4872A0 | ?CenterBound@phBound@@UAEXXZ
    virtual void CenterBound();

    virtual class phMaterial const* GetMaterial(i32 arg1) = 0;

    // 0x45CF30 | ?GetNumMaterials@phBound@@UBEHXZ
    virtual i32 GetNumMaterials();

    // 0x45CF60 | ?SetFriction@phBound@@UAEMXZ
    virtual f32 SetFriction();

    // 0x45CF40 | ?SetFriction@phBound@@UAEXM@Z
    virtual void SetFriction(f32 arg1);

    // 0x45CF70 | ?SetElasticity@phBound@@UAEMXZ
    virtual f32 SetElasticity();

    // 0x45CF50 | ?SetElasticity@phBound@@UAEXM@Z
    virtual void SetElasticity(f32 arg1);

    virtual bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) = 0;

    virtual bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) = 0;

    virtual i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) = 0;

    virtual bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) = 0;

    // 0x4876C0 | ?TestSphere@phBound@@UBE_NABVVector3@@MAAVphImpactBase@@@Z
    virtual bool TestSphere(class Vector3 const& arg1, f32 arg2, class phImpactBase& arg3);

    // 0x4876B0 | ?TestSphere@phBound@@UBE_NABVVector3@@MAAV2@1AAM@Z
    virtual bool TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5);

    // 0x45CF90 | ?ModifyInvMassMatrix@phBound@@UBEXPAVMatrix34@@HABVVector3@@1@Z
    virtual void ModifyInvMassMatrix(
        class Matrix34* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4);

    // 0x45CF80 | ?ModifyInvMassMatrix@phBound@@UBEXPAVMatrix34@@HABVVector3@@@Z
    virtual void ModifyInvMassMatrix(class Matrix34* arg1, i32 arg2, class Vector3 const& arg3);

    // 0x45CFA0 | ?EffectiveMass@phBound@@UBEMABVVector3@@0HM@Z
    virtual f32 EffectiveMass(class Vector3 const& arg1, class Vector3 const& arg2, i32 arg3, f32 arg4);

    // 0x487730 | ?GetVertex@phBound@@UBEABVVector3@@H@Z
    virtual class Vector3 const& GetVertex(i32 arg1);

    // 0x487500 | ?GetFricElas@phBound@@SAXPBV1@PBVphIntersection@@01PAM2@Z
    static void GetFricElas(class phBound const* arg1, class phIntersection const* arg2, class phBound const* arg3,
        class phIntersection const* arg4, f32* arg5, f32* arg6);
};

check_size(phBound, 0x0);
