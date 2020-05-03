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
    phcollide:collision

    0x474030 | public: static bool __cdecl phCollision::SphereApplyCenterForceToPoly(class phForceSphere const *,class phColliderBase &,class phBoundPolygonal const *,class phColliderBase &) | ?SphereApplyCenterForceToPoly@phCollision@@SA_NPBVphForceSphere@@AAVphColliderBase@@PBVphBoundPolygonal@@1@Z
    0x4746F0 | public: static void __cdecl phCollision::SphereApplyCenterForceToSphere(class phForceSphere const *,class phColliderBase &,class phBoundSphere const *,class phColliderBase &) | ?SphereApplyCenterForceToSphere@phCollision@@SAXPBVphForceSphere@@AAVphColliderBase@@PBVphBoundSphere@@1@Z
    0x474860 | public: static void __cdecl phCollision::SphereApplyCenterForceToHotdog(class phForceSphere const *,class phColliderBase &,class phBoundHotdog const *,class phColliderBase &) | ?SphereApplyCenterForceToHotdog@phCollision@@SAXPBVphForceSphere@@AAVphColliderBase@@PBVphBoundHotdog@@1@Z
    0x474A70 | public: static int __cdecl phCollision::TestBoundGeneric(class phBound const *,class phColliderBase &,class phBound const *,class phColliderBase &,class phIntersection *,class phIntersection *,class phImpact *,int,int,class Vector3 const &) | ?TestBoundGeneric@phCollision@@SAHPBVphBound@@AAVphColliderBase@@01PAVphIntersection@@2PAVphImpact@@HHABVVector3@@@Z
    0x475380 | public: static int __cdecl phCollision::TestBoundGeneric(class phBound const *,class phBound const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,class phIntersection *,class phImpact *,int,int,class Vector3 const &,bool) | ?TestBoundGeneric@phCollision@@SAHPBVphBound@@0PBVMatrix34@@111PAVphIntersection@@2PAVphImpact@@HHABVVector3@@_N@Z
    0x475B00 | public: static void __cdecl phCollision::TestBoundForce(class phBound const *,class phColliderBase &,class phBound const *,class phColliderBase &,class phImpact *,int,class Vector3 const &) | ?TestBoundForce@phCollision@@SAXPBVphBound@@AAVphColliderBase@@01PAVphImpact@@HABVVector3@@@Z
    0x475B80 | public: static void __cdecl phCollision::GetRelDisp(class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Vector3 const &,class Vector3 *) | ?GetRelDisp@phCollision@@SAXPBVMatrix34@@00ABVVector3@@PAV3@@Z
    0x475C50 | public: void __thiscall phColliderBase::CopyLastMatrix(class Matrix34 *,long) const | ?CopyLastMatrix@phColliderBase@@QBEXPAVMatrix34@@J@Z
*/

struct phCollision
{
public:
    // 0x475B80 | ?GetRelDisp@phCollision@@SAXPBVMatrix34@@00ABVVector3@@PAV3@@Z
    static void GetRelDisp(class Matrix34 const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Vector3 const& arg4, class Vector3* arg5);

    // 0x474860 | ?SphereApplyCenterForceToHotdog@phCollision@@SAXPBVphForceSphere@@AAVphColliderBase@@PBVphBoundHotdog@@1@Z
    static void SphereApplyCenterForceToHotdog(class phForceSphere const* arg1, class phColliderBase& arg2,
        class phBoundHotdog const* arg3, class phColliderBase& arg4);

    // 0x474030 | ?SphereApplyCenterForceToPoly@phCollision@@SA_NPBVphForceSphere@@AAVphColliderBase@@PBVphBoundPolygonal@@1@Z
    static bool SphereApplyCenterForceToPoly(class phForceSphere const* arg1, class phColliderBase& arg2,
        class phBoundPolygonal const* arg3, class phColliderBase& arg4);

    // 0x4746F0 | ?SphereApplyCenterForceToSphere@phCollision@@SAXPBVphForceSphere@@AAVphColliderBase@@PBVphBoundSphere@@1@Z
    static void SphereApplyCenterForceToSphere(class phForceSphere const* arg1, class phColliderBase& arg2,
        class phBoundSphere const* arg3, class phColliderBase& arg4);

    // 0x475B00 | ?TestBoundForce@phCollision@@SAXPBVphBound@@AAVphColliderBase@@01PAVphImpact@@HABVVector3@@@Z
    static void TestBoundForce(class phBound const* arg1, class phColliderBase& arg2, class phBound const* arg3,
        class phColliderBase& arg4, class phImpact* arg5, i32 arg6, class Vector3 const& arg7);

    // 0x474A70 | ?TestBoundGeneric@phCollision@@SAHPBVphBound@@AAVphColliderBase@@01PAVphIntersection@@2PAVphImpact@@HHABVVector3@@@Z
    static i32 TestBoundGeneric(class phBound const* arg1, class phColliderBase& arg2, class phBound const* arg3,
        class phColliderBase& arg4, class phIntersection* arg5, class phIntersection* arg6, class phImpact* arg7,
        i32 arg8, i32 arg9, class Vector3 const& arg10);

    // 0x475380 | ?TestBoundGeneric@phCollision@@SAHPBVphBound@@0PBVMatrix34@@111PAVphIntersection@@2PAVphImpact@@HHABVVector3@@_N@Z
    static i32 TestBoundGeneric(class phBound const* arg1, class phBound const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6, class phIntersection* arg7,
        class phIntersection* arg8, class phImpact* arg9, i32 arg10, i32 arg11, class Vector3 const& arg12, bool arg13);
};
