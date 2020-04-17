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
    phbound:boundsphere

    0x484460 | public: __thiscall phBoundSphere::phBoundSphere(void) | ??0phBoundSphere@@QAE@XZ
    0x484490 | public: __thiscall phBoundSphere::phBoundSphere(float) | ??0phBoundSphere@@QAE@M@Z
    0x484500 | public: __thiscall phBoundSphere::~phBoundSphere(void) | ??1phBoundSphere@@QAE@XZ
    0x484510 | public: void __thiscall phBoundSphere::SetRadius(float) | ?SetRadius@phBoundSphere@@QAEXM@Z
    0x484550 | public: void __thiscall phBoundSphere::ScaleRadius(float) | ?ScaleRadius@phBoundSphere@@QAEXM@Z
    0x484590 | public: void __thiscall phBoundSphere::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundSphere@@QAEXABVVector3@@@Z
    0x4845C0 | public: void __thiscall phBoundSphere::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundSphere@@QAEXABVVector3@@@Z
    0x484660 | public: bool __thiscall phBoundSphere::Load(char const *) | ?Load@phBoundSphere@@QAE_NPBD@Z
    0x4849E0 | public: bool __thiscall phBoundSphere::FindImpactSphereToSphere(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &) const | ?FindImpactSphereToSphere@phBoundSphere@@QBE_NPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    0x484BC0 | public: virtual bool __thiscall phBoundSphere::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x484D70 | public: virtual bool __thiscall phBoundSphere::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x484F10 | public: virtual int __thiscall phBoundSphere::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundSphere@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x485210 | public: virtual bool __thiscall phBoundSphere::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x4853E0 | public: virtual bool __thiscall phBoundSphere::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x4854B0 | public: virtual bool __thiscall phBoundSphere::TestSphere(class Vector3 const &,float,class phImpactBase &) const | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAVphImpactBase@@@Z
    public: virtual void __thiscall phBoundSphere::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundSphere@@UBEXABVVector3@@@Z
    0x4855D0 | public: virtual class phMaterial const * __thiscall phBoundSphere::GetMaterial(int) const | ?GetMaterial@phBoundSphere@@UBEPBVphMaterial@@H@Z
    0x5B2204 | const phBoundSphere::`vftable' | ??_7phBoundSphere@@6B@
*/

class phBoundSphere : phBound
{
public:
    // phBoundSphere::`vftable' @ 0x5B2204

    // 0x484460 | ??0phBoundSphere@@QAE@XZ
    phBoundSphere()
    {
        stub<member_func_t<void, phBoundSphere>>(0x484460, this);
    }

    // 0x484490 | ??0phBoundSphere@@QAE@M@Z
    phBoundSphere(f32 arg1)
    {
        stub<member_func_t<void, phBoundSphere, f32>>(0x484490, this, arg1);
    }

    // 0x484500 | ??1phBoundSphere@@QAE@XZ
    ~phBoundSphere()
    {
        stub<member_func_t<void, phBoundSphere>>(0x484500, this);
    }

    // 0x484510 | ?SetRadius@phBoundSphere@@QAEXM@Z
    void SetRadius(f32 arg1)
    {
        return stub<member_func_t<void, phBoundSphere, f32>>(0x484510, this, arg1);
    }

    // 0x484550 | ?ScaleRadius@phBoundSphere@@QAEXM@Z
    void ScaleRadius(f32 arg1)
    {
        return stub<member_func_t<void, phBoundSphere, f32>>(0x484550, this, arg1);
    }

    // 0x484590 | ?CreateOffset@phBoundSphere@@QAEXABVVector3@@@Z
    void CreateOffset(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundSphere, class Vector3 const&>>(0x484590, this, arg1);
    }

    // 0x4845C0 | ?ShiftCentroid@phBoundSphere@@QAEXABVVector3@@@Z
    void ShiftCentroid(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundSphere, class Vector3 const&>>(0x4845C0, this, arg1);
    }

    // 0x484660 | ?Load@phBoundSphere@@QAE_NPBD@Z
    bool Load(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundSphere, char const*>>(0x484660, this, arg1);
    }

    // 0x4849E0 | ?FindImpactSphereToSphere@phBoundSphere@@QBE_NPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    bool FindImpactSphereToSphere(class phBoundSphere const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        class Vector3 const& arg7)
    {
        return stub<
            member_func_t<bool, phBoundSphere, class phBoundSphere const*, class Matrix34 const*, class Matrix34 const*,
                class phColliderBase*, class phColliderBase*, class phImpactBase*, class Vector3 const&>>(
            0x4849E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4855D0 | ?GetMaterial@phBoundSphere@@UBEPBVphMaterial@@H@Z
    class phMaterial const* GetMaterial(i32 arg1) override
    {
        return stub<member_func_t<class phMaterial const*, phBoundSphere, i32>>(0x4855D0, this, arg1);
    }

    // 0x484BC0 | ?TestProbePoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundSphere, class phSegment&, class phIntersectionPoint*, f32>>(
            0x484BC0, this, arg1, arg2, arg3);
    }

    // 0x484D70 | ?TestAIPoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override
    {
        return stub<member_func_t<bool, phBoundSphere, class phSegment&, class phIntersectionPoint*>>(
            0x484D70, this, arg1, arg2);
    }

    // 0x484F10 | ?TestEdge@phBoundSphere@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, phBoundSphere, class phSegment&, class phIntersection*, i32>>(
            0x484F10, this, arg1, arg2, arg3);
    }

    // 0x485210 | ?TestProbe@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundSphere, class phSegment&, class phIntersection*, f32>>(
            0x485210, this, arg1, arg2, arg3);
    }

    // 0x4854B0 | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAVphImpactBase@@@Z
    bool TestSphere(class Vector3 const& arg1, f32 arg2, class phImpactBase& arg3) override
    {
        return stub<member_func_t<bool, phBoundSphere, class Vector3 const&, f32, class phImpactBase&>>(
            0x4854B0, this, arg1, arg2, arg3);
    }

    // 0x4853E0 | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAV2@1AAM@Z
    bool TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5) override
    {
        return stub<
            member_func_t<bool, phBoundSphere, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
            0x4853E0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
