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
    phbound:impact

    0x491920 | public: void __thiscall phImpactBase::StartMakingNewImpact(float,class Vector3 const &,class Vector3 const &,class phColliderBase *,class phColliderBase *,class Matrix34 const *,int,int,int) | ?StartMakingNewImpact@phImpactBase@@QAEXMABVVector3@@0PAVphColliderBase@@1PBVMatrix34@@HHH@Z
    0x491A30 | public: void __thiscall phImpactBase::FinishMakingNewImpact(int,int,class phColliderBase *,class phColliderBase *,class phBound const *,class phBound const *,int) | ?FinishMakingNewImpact@phImpactBase@@QAEXHHPAVphColliderBase@@0PBVphBound@@1H@Z
    0x491AB0 | public: void __thiscall phImpactBase::MakeNewImpact(class phColliderBase *,class phColliderBase *,class Vector3 const &,class Vector3 const &,float,class phBound const *,class phBound const *,int,int,int) | ?MakeNewImpact@phImpactBase@@QAEXPAVphColliderBase@@0ABVVector3@@1MPBVphBound@@2HHH@Z
    0x491B80 | public: static bool __cdecl phImpactBase::AddImpactSpherePlaneTest(class phImpactBase *,int *,class Vector3 const &,float) | ?AddImpactSpherePlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M@Z
    0x491E20 | public: static bool __cdecl phImpactBase::AddImpactShaftPlaneTest(class phImpactBase *,int *,class Vector3 const &,float,class Vector3 const &) | ?AddImpactShaftPlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M2@Z
    0x492270 | public: void __thiscall phImpactBase::SetColliders(class phColliderBase *,class phColliderBase *) | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0@Z
    0x492290 | public: void __thiscall phImpactBase::SetColliders(class phColliderBase *,class phColliderBase *,int,int) | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0HH@Z
    0x4922B0 | public: void __thiscall phImpactBase::SetComponentA(int) | ?SetComponentA@phImpactBase@@QAEXH@Z
    0x4922C0 | public: void __thiscall phImpactBase::SetComponentB(int) | ?SetComponentB@phImpactBase@@QAEXH@Z
    0x4922D0 | public: static void __cdecl phImpactBase::SetColliders(class phColliderBase *,class phColliderBase *,class phImpactBase *,int) | ?SetColliders@phImpactBase@@SAXPAVphColliderBase@@0PAV1@H@Z
    0x492310 | public: void __thiscall phImpactBase::SwapColliders(void) | ?SwapColliders@phImpactBase@@QAEXXZ
    0x492360 | public: static void __cdecl phImpactBase::CullImpactList(class phImpactBase *,int *,class Vector3 const &) | ?CullImpactList@phImpactBase@@SAXPAV1@PAHABVVector3@@@Z
    0x4924C0 | public: static bool __cdecl phImpactBase::ImpactIsInList(int,int,int,class phImpactBase *,int) | ?ImpactIsInList@phImpactBase@@SA_NHHHPAV1@H@Z
    0x4925A0 | public: void __thiscall phImpactBase::Reset(void) | ?Reset@phImpactBase@@QAEXXZ
    public: void __thiscall phImpactBase::DebugReplay(void) | ?DebugReplay@phImpactBase@@QAEXXZ
    public: static bool phImpactBase::TerrainContacts | ?TerrainContacts@phImpactBase@@2_NA
*/

class phImpactBase
{
public:
    // 0x491A30 | ?FinishMakingNewImpact@phImpactBase@@QAEXHHPAVphColliderBase@@0PBVphBound@@1H@Z
    void FinishMakingNewImpact(i32 arg1, i32 arg2, class phColliderBase* arg3, class phColliderBase* arg4,
        class phBound const* arg5, class phBound const* arg6, i32 arg7);

    // 0x491AB0 | ?MakeNewImpact@phImpactBase@@QAEXPAVphColliderBase@@0ABVVector3@@1MPBVphBound@@2HHH@Z
    void MakeNewImpact(class phColliderBase* arg1, class phColliderBase* arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, f32 arg5, class phBound const* arg6, class phBound const* arg7, i32 arg8, i32 arg9,
        i32 arg10);

    // 0x4925A0 | ?Reset@phImpactBase@@QAEXXZ
    void Reset();

    // 0x492270 | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0@Z
    void SetColliders(class phColliderBase* arg1, class phColliderBase* arg2);

    // 0x492290 | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0HH@Z
    void SetColliders(class phColliderBase* arg1, class phColliderBase* arg2, i32 arg3, i32 arg4);

    // 0x4922B0 | ?SetComponentA@phImpactBase@@QAEXH@Z
    void SetComponentA(i32 arg1);

    // 0x4922C0 | ?SetComponentB@phImpactBase@@QAEXH@Z
    void SetComponentB(i32 arg1);

    // 0x491920 | ?StartMakingNewImpact@phImpactBase@@QAEXMABVVector3@@0PAVphColliderBase@@1PBVMatrix34@@HHH@Z
    void StartMakingNewImpact(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class phColliderBase* arg4, class phColliderBase* arg5, class Matrix34 const* arg6, i32 arg7, i32 arg8,
        i32 arg9);

    // 0x492310 | ?SwapColliders@phImpactBase@@QAEXXZ
    void SwapColliders();

    // 0x491E20 | ?AddImpactShaftPlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M2@Z
    static bool AddImpactShaftPlaneTest(
        class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3, f32 arg4, class Vector3 const& arg5);

    // 0x491B80 | ?AddImpactSpherePlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M@Z
    static bool AddImpactSpherePlaneTest(class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3, f32 arg4);

    // 0x492360 | ?CullImpactList@phImpactBase@@SAXPAV1@PAHABVVector3@@@Z
    static void CullImpactList(class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3);

    // 0x4924C0 | ?ImpactIsInList@phImpactBase@@SA_NHHHPAV1@H@Z
    static bool ImpactIsInList(i32 arg1, i32 arg2, i32 arg3, class phImpactBase* arg4, i32 arg5);

    // 0x4922D0 | ?SetColliders@phImpactBase@@SAXPAVphColliderBase@@0PAV1@H@Z
    static void SetColliders(
        class phColliderBase* arg1, class phColliderBase* arg2, class phImpactBase* arg3, i32 arg4);
};

check_size(phImpactBase, 0x0);
