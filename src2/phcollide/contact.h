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
    0x5C6F60 | public: static float phContact::ContactPenetrationScale | ?ContactPenetrationScale@phContact@@2MA
    0x5C6F64 | public: static bool phContact::ContactsEnabledFlag | ?ContactsEnabledFlag@phContact@@2_NA
    0x660F58 | public: static float phContact::Penetration | ?Penetration@phContact@@2MA
    float NominalPeneRoot | ?NominalPeneRoot@@3MA
    float DampCoef | ?DampCoef@@3MA
    float newCompPerp | ?newCompPerp@@3MA
    0x660F68 | class Matrix34 LastA | ?LastA@@3VMatrix34@@A
    0x660F98 | class Matrix34 LastB | ?LastB@@3VMatrix34@@A
    class phColliderBase * lastCollA | ?lastCollA@@3PAVphColliderBase@@A
    0x660FD0 | class phContact * debugPtr | ?debugPtr@@3PAVphContact@@A
*/

class phContact
{
public:
    // 0x46F410 | ?CalcContactForce@phContact@@QAE_NPBVphImpact@@ABVVector3@@11PAV3@PAVMatrix34@@PAMMM@Z
    bool CalcContactForce(class phImpact const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, class Vector3* arg5, class Matrix34* arg6, f32* arg7, f32 arg8, f32 arg9);

    // 0x46EF10 | ?Init@phContact@@QAEXABVphImpact@@@Z
    void Init(class phImpact const& arg1);

    // 0x46F110 | ?IsEqual@phContact@@QAE_NABVphImpact@@@Z
    bool IsEqual(class phImpact const& arg1);

    // 0x46F000 | ?Set@phContact@@QAEXABV1@@Z
    void Set(class phContact const& arg1);

    // 0x46F1D0 | ?SetContactForceLimit@phContact@@QAEXABVphImpact@@ABVVector3@@@Z
    void SetContactForceLimit(class phImpact const& arg1, class Vector3 const& arg2);

    // 0x4700C0 | ?SwapAB@phContact@@QAEXXZ
    void SwapAB();

    // 0x46EEA0 | ?DisableContacts@phContact@@SAXXZ
    static void DisableContacts();

    // 0x46EED0 | ?SetContactPenetration@phContact@@SAXXZ
    static void SetContactPenetration();

    // 0x46EEB0 | ?SetContactPenetrationScale@phContact@@SAXM@Z
    static void SetContactPenetrationScale(f32 arg1);

    // 0x5C6F60 | ?ContactPenetrationScale@phContact@@2MA
    static inline extern_var(0x5C6F60, f32, ContactPenetrationScale);

    // 0x5C6F64 | ?ContactsEnabledFlag@phContact@@2_NA
    static inline extern_var(0x5C6F64, bool, ContactsEnabledFlag);

    // 0x660F58 | ?Penetration@phContact@@2MA
    static inline extern_var(0x660F58, f32, Penetration);
};

check_size(phContact, 0x0);

// 0x660F68 | ?LastA@@3VMatrix34@@A
inline extern_var(0x660F68, class Matrix34, LastA);

// 0x660F98 | ?LastB@@3VMatrix34@@A
inline extern_var(0x660F98, class Matrix34, LastB);

// 0x660FD0 | ?debugPtr@@3PAVphContact@@A
inline extern_var(0x660FD0, class phContact*, debugPtr);
