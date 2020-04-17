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
    phcollide:impact

    0x46C9B0 | public: float __thiscall phImpact::EffectiveMass(void) const | ?EffectiveMass@phImpact@@QBEMXZ
    0x46CB70 | public: void __thiscall phImpact::GetLocalVelocities(class Vector3 &,class Vector3 &) const | ?GetLocalVelocities@phImpact@@QBEXAAVVector3@@0@Z
    0x46CC30 | public: void __thiscall phImpact::GetRelDisplacement(class Vector3 *) const | ?GetRelDisplacement@phImpact@@QBEXPAVVector3@@@Z
    0x46CCF0 | public: void __thiscall phImpact::CalcCollision(class Vector3 const &,float,class Vector3 *,class Vector3 *,class Vector3 *) | ?CalcCollision@phImpact@@QAEXABVVector3@@MPAV2@11@Z
    0x46D1F0 | public: void __thiscall phImpact::Contact(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Matrix34 const &) | ?Contact@phImpact@@QAEXABVVector3@@00ABVMatrix34@@@Z
    0x46D250 | public: void __thiscall phImpact::Impact(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?Impact@phImpact@@QAEXABVVector3@@00@Z
    0x46D2A0 | public: static float __cdecl phImpact::CalcCollisionNoFriction(class phInertialCS const &,class Vector3 const &,float,class Vector3 const &) | ?CalcCollisionNoFriction@phImpact@@SAMABVphInertialCS@@ABVVector3@@M1@Z
    0x46D340 | public: void __thiscall phImpact::FindFrictionAndElasticity(void) | ?FindFrictionAndElasticity@phImpact@@QAEXXZ
    0x46D3A0 | public: class phMaterial const * __thiscall phImpact::GetMaterial(class phColliderBase *,int) | ?GetMaterial@phImpact@@QAEPBVphMaterial@@PAVphColliderBase@@H@Z
    0x5C6F5C | float phImpactMaxElasticity | ?phImpactMaxElasticity@@3MA
*/

// 0x5C6F5C | ?phImpactMaxElasticity@@3MA
inline extern_var(0x5C6F5C, float, phImpactMaxElasticity);

class phImpact
{
public:
    // 0x46C9B0 | ?EffectiveMass@phImpact@@QBEMXZ
    f32 EffectiveMass()
    {
        return stub<member_func_t<f32, phImpact>>(0x46C9B0, this);
    }

    // 0x46CB70 | ?GetLocalVelocities@phImpact@@QBEXAAVVector3@@0@Z
    void GetLocalVelocities(class Vector3& arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, phImpact, class Vector3&, class Vector3&>>(0x46CB70, this, arg1, arg2);
    }

    // 0x46CC30 | ?GetRelDisplacement@phImpact@@QBEXPAVVector3@@@Z
    void GetRelDisplacement(class Vector3* arg1)
    {
        return stub<member_func_t<void, phImpact, class Vector3*>>(0x46CC30, this, arg1);
    }

    // 0x46CCF0 | ?CalcCollision@phImpact@@QAEXABVVector3@@MPAV2@11@Z
    void CalcCollision(
        class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4, class Vector3* arg5)
    {
        return stub<
            member_func_t<void, phImpact, class Vector3 const&, f32, class Vector3*, class Vector3*, class Vector3*>>(
            0x46CCF0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x46D1F0 | ?Contact@phImpact@@QAEXABVVector3@@00ABVMatrix34@@@Z
    void Contact(
        class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Matrix34 const& arg4)
    {
        return stub<member_func_t<void, phImpact, class Vector3 const&, class Vector3 const&, class Vector3 const&,
            class Matrix34 const&>>(0x46D1F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46D250 | ?Impact@phImpact@@QAEXABVVector3@@00@Z
    void Impact(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, phImpact, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
            0x46D250, this, arg1, arg2, arg3);
    }

    // 0x46D2A0 | ?CalcCollisionNoFriction@phImpact@@SAMABVphInertialCS@@ABVVector3@@M1@Z
    static inline f32 CalcCollisionNoFriction(
        class phInertialCS const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3 const& arg4)
    {
        return stub<cdecl_t<f32, class phInertialCS const&, class Vector3 const&, f32, class Vector3 const&>>(
            0x46D2A0, arg1, arg2, arg3, arg4);
    }

    // 0x46D340 | ?FindFrictionAndElasticity@phImpact@@QAEXXZ
    void FindFrictionAndElasticity()
    {
        return stub<member_func_t<void, phImpact>>(0x46D340, this);
    }

    // 0x46D3A0 | ?GetMaterial@phImpact@@QAEPBVphMaterial@@PAVphColliderBase@@H@Z
    class phMaterial const* GetMaterial(class phColliderBase* arg1, i32 arg2)
    {
        return stub<member_func_t<class phMaterial const*, phImpact, class phColliderBase*, i32>>(
            0x46D3A0, this, arg1, arg2);
    }
};
