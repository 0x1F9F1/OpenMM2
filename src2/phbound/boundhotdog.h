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
    phbound:boundhotdog

    0x480AE0 | public: __thiscall phBoundHotdog::phBoundHotdog(void) | ??0phBoundHotdog@@QAE@XZ
    0x480B20 | public: __thiscall phBoundHotdog::phBoundHotdog(float,float) | ??0phBoundHotdog@@QAE@MM@Z
    0x480B60 | public: void __thiscall phBoundHotdog::SetSize(float,float) | ?SetSize@phBoundHotdog@@QAEXMM@Z
    0x480BD0 | public: __thiscall phBoundHotdog::~phBoundHotdog(void) | ??1phBoundHotdog@@QAE@XZ
    0x480BE0 | public: void __thiscall phBoundHotdog::SetBoundingBox(float,float) | ?SetBoundingBox@phBoundHotdog@@QAEXMM@Z
    0x480C20 | public: void __thiscall phBoundHotdog::ScaleBoundingBox(float,float) | ?ScaleBoundingBox@phBoundHotdog@@QAEXMM@Z
    0x480C60 | public: void __thiscall phBoundHotdog::CalculateBoundingBox(void) | ?CalculateBoundingBox@phBoundHotdog@@QAEXXZ
    0x480CE0 | public: void __thiscall phBoundHotdog::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundHotdog@@QAEXABVVector3@@@Z
    0x480D10 | public: void __thiscall phBoundHotdog::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundHotdog@@QAEXABVVector3@@@Z
    0x480D50 | public: virtual bool __thiscall phBoundHotdog::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x480F10 | public: virtual bool __thiscall phBoundHotdog::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x4810A0 | public: virtual int __thiscall phBoundHotdog::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundHotdog@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x4813A0 | public: virtual bool __thiscall phBoundHotdog::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x481570 | public: virtual bool __thiscall phBoundHotdog::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundHotdog@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x481810 | public: bool __thiscall phBoundHotdog::IsInsideHotdog(class Vector3 const &) const | ?IsInsideHotdog@phBoundHotdog@@QBE_NABVVector3@@@Z
    0x481900 | public: int __thiscall phBoundHotdog::SegmentToHotdogIntersections(class Vector3 const &,class Vector3 const &,float *,float *,float *,float *,int *,int *) const | ?SegmentToHotdogIntersections@phBoundHotdog@@QBEHABVVector3@@0PAM111PAH2@Z
    0x481E70 | public: class Vector3 __thiscall phBoundHotdog::FindHotdogIsectNormal(class Vector3 const &,int) const | ?FindHotdogIsectNormal@phBoundHotdog@@QBE?AVVector3@@ABV2@H@Z
    0x481F40 | public: bool __thiscall phBoundHotdog::FindImpactSphereToHotdog(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &) const | ?FindImpactSphereToHotdog@phBoundHotdog@@QBE_NPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    0x482440 | public: int __thiscall phBoundHotdog::FindImpactsHotdogToPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToPoly@phBoundHotdog@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x483880 | public: int __thiscall phBoundHotdog::FindImpactsHotdogToHotdog(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int) const | ?FindImpactsHotdogToHotdog@phBoundHotdog@@QBEHPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@H@Z
    public: virtual void __thiscall phBoundHotdog::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundHotdog@@UBEXABVVector3@@@Z
    0x484080 | public: bool __thiscall phBoundHotdog::Load(char const *) | ?Load@phBoundHotdog@@QAE_NPBD@Z
    0x484420 | public: void __thiscall Vector3::AddScaled(class Vector3 const &,class Vector3 const &,float) | ?AddScaled@Vector3@@QAEXABV1@0M@Z
    0x484450 | public: virtual class phMaterial const * __thiscall phBoundHotdog::GetMaterial(int) const | ?GetMaterial@phBoundHotdog@@UBEPBVphMaterial@@H@Z
    0x5B21B8 | const phBoundHotdog::`vftable' | ??_7phBoundHotdog@@6B@
*/

class phBoundHotdog : phBound
{
public:
    // phBoundHotdog::`vftable' @ 0x5B21B8

    // 0x480AE0 | ??0phBoundHotdog@@QAE@XZ
    phBoundHotdog()
    {
        stub<member_func_t<void, phBoundHotdog>>(0x480AE0, this);
    }

    // 0x480B20 | ??0phBoundHotdog@@QAE@MM@Z
    phBoundHotdog(f32 arg1, f32 arg2)
    {
        stub<member_func_t<void, phBoundHotdog, f32, f32>>(0x480B20, this, arg1, arg2);
    }

    // 0x480B60 | ?SetSize@phBoundHotdog@@QAEXMM@Z
    void SetSize(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, phBoundHotdog, f32, f32>>(0x480B60, this, arg1, arg2);
    }

    // 0x480BD0 | ??1phBoundHotdog@@QAE@XZ
    ~phBoundHotdog()
    {
        stub<member_func_t<void, phBoundHotdog>>(0x480BD0, this);
    }

    // 0x480BE0 | ?SetBoundingBox@phBoundHotdog@@QAEXMM@Z
    void SetBoundingBox(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, phBoundHotdog, f32, f32>>(0x480BE0, this, arg1, arg2);
    }

    // 0x480C20 | ?ScaleBoundingBox@phBoundHotdog@@QAEXMM@Z
    void ScaleBoundingBox(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, phBoundHotdog, f32, f32>>(0x480C20, this, arg1, arg2);
    }

    // 0x480C60 | ?CalculateBoundingBox@phBoundHotdog@@QAEXXZ
    void CalculateBoundingBox()
    {
        return stub<member_func_t<void, phBoundHotdog>>(0x480C60, this);
    }

    // 0x480CE0 | ?CreateOffset@phBoundHotdog@@QAEXABVVector3@@@Z
    void CreateOffset(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundHotdog, class Vector3 const&>>(0x480CE0, this, arg1);
    }

    // 0x480D10 | ?ShiftCentroid@phBoundHotdog@@QAEXABVVector3@@@Z
    void ShiftCentroid(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundHotdog, class Vector3 const&>>(0x480D10, this, arg1);
    }

    // 0x481810 | ?IsInsideHotdog@phBoundHotdog@@QBE_NABVVector3@@@Z
    bool IsInsideHotdog(class Vector3 const& arg1)
    {
        return stub<member_func_t<bool, phBoundHotdog, class Vector3 const&>>(0x481810, this, arg1);
    }

    // 0x481900 | ?SegmentToHotdogIntersections@phBoundHotdog@@QBEHABVVector3@@0PAM111PAH2@Z
    i32 SegmentToHotdogIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32* arg3, f32* arg4,
        f32* arg5, f32* arg6, i32* arg7, i32* arg8)
    {
        return stub<member_func_t<i32, phBoundHotdog, class Vector3 const&, class Vector3 const&, f32*, f32*, f32*,
            f32*, i32*, i32*>>(0x481900, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x481E70 | ?FindHotdogIsectNormal@phBoundHotdog@@QBE?AVVector3@@ABV2@H@Z
    class Vector3 FindHotdogIsectNormal(class Vector3 const& arg1, i32 arg2)
    {
        return stub<member_func_t<class Vector3, phBoundHotdog, class Vector3 const&, i32>>(0x481E70, this, arg1, arg2);
    }

    // 0x481F40 | ?FindImpactSphereToHotdog@phBoundHotdog@@QBE_NPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    bool FindImpactSphereToHotdog(class phBoundSphere const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        class Vector3 const& arg7)
    {
        return stub<
            member_func_t<bool, phBoundHotdog, class phBoundSphere const*, class Matrix34 const*, class Matrix34 const*,
                class phColliderBase*, class phColliderBase*, class phImpactBase*, class Vector3 const&>>(
            0x481F40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x482440 | ?FindImpactsHotdogToPoly@phBoundHotdog@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    i32 FindImpactsHotdogToPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<i32, phBoundHotdog, class phBoundPolygonal const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
            class Vector3 const&, class Vector3 const&>>(
            0x482440, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x483880 | ?FindImpactsHotdogToHotdog@phBoundHotdog@@QBEHPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@H@Z
    i32 FindImpactsHotdogToHotdog(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        i32 arg7)
    {
        return stub<member_func_t<i32, phBoundHotdog, class phBoundHotdog const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32>>(
            0x483880, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x484080 | ?Load@phBoundHotdog@@QAE_NPBD@Z
    bool Load(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundHotdog, char const*>>(0x484080, this, arg1);
    }

    // 0x484450 | ?GetMaterial@phBoundHotdog@@UBEPBVphMaterial@@H@Z
    class phMaterial const* GetMaterial(i32 arg1) override
    {
        return stub<member_func_t<class phMaterial const*, phBoundHotdog, i32>>(0x484450, this, arg1);
    }

    // 0x480D50 | ?TestProbePoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundHotdog, class phSegment&, class phIntersectionPoint*, f32>>(
            0x480D50, this, arg1, arg2, arg3);
    }

    // 0x480F10 | ?TestAIPoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override
    {
        return stub<member_func_t<bool, phBoundHotdog, class phSegment&, class phIntersectionPoint*>>(
            0x480F10, this, arg1, arg2);
    }

    // 0x4810A0 | ?TestEdge@phBoundHotdog@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, phBoundHotdog, class phSegment&, class phIntersection*, i32>>(
            0x4810A0, this, arg1, arg2, arg3);
    }

    // 0x4813A0 | ?TestProbe@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundHotdog, class phSegment&, class phIntersection*, f32>>(
            0x4813A0, this, arg1, arg2, arg3);
    }

    // 0x481570 | ?TestSphere@phBoundHotdog@@UBE_NABVVector3@@MAAV2@1AAM@Z
    bool TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5) override
    {
        return stub<
            member_func_t<bool, phBoundHotdog, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
            0x481570, this, arg1, arg2, arg3, arg4, arg5);
    }
};
