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
    phcollide:contact

    0x46EEA0 | public: static void __cdecl phContact::DisableContacts(void) | ?DisableContacts@phContact@@SAXXZ
    0x46EEB0 | public: static void __cdecl phContact::SetContactPenetrationScale(float) | ?SetContactPenetrationScale@phContact@@SAXM@Z
    0x46EED0 | public: static void __cdecl phContact::SetContactPenetration(void) | ?SetContactPenetration@phContact@@SAXXZ
    0x46EF10 | public: void __thiscall phContact::Init(class phImpact const &) | ?Init@phContact@@QAEXABVphImpact@@@Z
    0x46F000 | public: void __thiscall phContact::Set(class phContact const &) | ?Set@phContact@@QAEXABV1@@Z
    0x46F110 | public: bool __thiscall phContact::IsEqual(class phImpact const &) | ?IsEqual@phContact@@QAE_NABVphImpact@@@Z
    0x46F1D0 | public: void __thiscall phContact::SetContactForceLimit(class phImpact const &,class Vector3 const &) | ?SetContactForceLimit@phContact@@QAEXABVphImpact@@ABVVector3@@@Z
    0x46F410 | public: bool __thiscall phContact::CalcContactForce(class phImpact const *,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,class Matrix34 *,float *,float,float) | ?CalcContactForce@phContact@@QAE_NPBVphImpact@@ABVVector3@@11PAV3@PAVMatrix34@@PAMMM@Z
    0x4700C0 | public: void __thiscall phContact::SwapAB(void) | ?SwapAB@phContact@@QAEXXZ
    public: float __thiscall Vector3::operator^(class Vector3 const &) const | ??TVector3@@QBEMABV0@@Z
    0x45CD00 | public: void __thiscall Vector3::operator-=(class Vector3 const &) | ??ZVector3@@QAEXABV0@@Z
    public: static float phContact::ContactPenetrationScale | ?ContactPenetrationScale@phContact@@2MA
    public: static bool phContact::ContactsEnabledFlag | ?ContactsEnabledFlag@phContact@@2_NA
    public: static float phContact::Penetration | ?Penetration@phContact@@2MA
    float NominalPeneRoot | ?NominalPeneRoot@@3MA
    float DampCoef | ?DampCoef@@3MA
    float newCompPerp | ?newCompPerp@@3MA
    class Matrix34 LastA | ?LastA@@3VMatrix34@@A
    class Matrix34 LastB | ?LastB@@3VMatrix34@@A
    class phColliderBase * lastCollA | ?lastCollA@@3PAVphColliderBase@@A
    class phContact * debugPtr | ?debugPtr@@3PAVphContact@@A
*/

// #include "hooking.h"
