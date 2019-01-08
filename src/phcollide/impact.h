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

#include "hooking.h"
