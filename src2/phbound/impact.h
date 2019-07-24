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
    // 0x491920 | ?StartMakingNewImpact@phImpactBase@@QAEXMABVVector3@@0PAVphColliderBase@@1PBVMatrix34@@HHH@Z
    inline void StartMakingNewImpact(float arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class phColliderBase* arg4, class phColliderBase* arg5, class Matrix34 const* arg6, int32_t arg7, int32_t arg8,
        int32_t arg9)
    {
        return stub<member_func_t<void, phImpactBase, float, class Vector3 const&, class Vector3 const&,
            class phColliderBase*, class phColliderBase*, class Matrix34 const*, int32_t, int32_t, int32_t>>(
            0x491920, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x491A30 | ?FinishMakingNewImpact@phImpactBase@@QAEXHHPAVphColliderBase@@0PBVphBound@@1H@Z
    inline void FinishMakingNewImpact(int32_t arg1, int32_t arg2, class phColliderBase* arg3,
        class phColliderBase* arg4, class phBound const* arg5, class phBound const* arg6, int32_t arg7)
    {
        return stub<member_func_t<void, phImpactBase, int32_t, int32_t, class phColliderBase*, class phColliderBase*,
            class phBound const*, class phBound const*, int32_t>>(
            0x491A30, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x491AB0 | ?MakeNewImpact@phImpactBase@@QAEXPAVphColliderBase@@0ABVVector3@@1MPBVphBound@@2HHH@Z
    inline void MakeNewImpact(class phColliderBase* arg1, class phColliderBase* arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, float arg5, class phBound const* arg6, class phBound const* arg7, int32_t arg8,
        int32_t arg9, int32_t arg10)
    {
        return stub<
            member_func_t<void, phImpactBase, class phColliderBase*, class phColliderBase*, class Vector3 const&,
                class Vector3 const&, float, class phBound const*, class phBound const*, int32_t, int32_t, int32_t>>(
            0x491AB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x491B80 | ?AddImpactSpherePlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M@Z
    static inline bool AddImpactSpherePlaneTest(
        class phImpactBase* arg1, int32_t* arg2, class Vector3 const& arg3, float arg4)
    {
        return stub<cdecl_t<bool, class phImpactBase*, int32_t*, class Vector3 const&, float>>(
            0x491B80, arg1, arg2, arg3, arg4);
    }

    // 0x491E20 | ?AddImpactShaftPlaneTest@phImpactBase@@SA_NPAV1@PAHABVVector3@@M2@Z
    static inline bool AddImpactShaftPlaneTest(
        class phImpactBase* arg1, int32_t* arg2, class Vector3 const& arg3, float arg4, class Vector3 const& arg5)
    {
        return stub<cdecl_t<bool, class phImpactBase*, int32_t*, class Vector3 const&, float, class Vector3 const&>>(
            0x491E20, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x492270 | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0@Z
    inline void SetColliders(class phColliderBase* arg1, class phColliderBase* arg2)
    {
        return stub<member_func_t<void, phImpactBase, class phColliderBase*, class phColliderBase*>>(
            0x492270, this, arg1, arg2);
    }

    // 0x492290 | ?SetColliders@phImpactBase@@QAEXPAVphColliderBase@@0HH@Z
    inline void SetColliders(class phColliderBase* arg1, class phColliderBase* arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, phImpactBase, class phColliderBase*, class phColliderBase*, int32_t, int32_t>>(
            0x492290, this, arg1, arg2, arg3, arg4);
    }

    // 0x4922B0 | ?SetComponentA@phImpactBase@@QAEXH@Z
    inline void SetComponentA(int32_t arg1)
    {
        return stub<member_func_t<void, phImpactBase, int32_t>>(0x4922B0, this, arg1);
    }

    // 0x4922C0 | ?SetComponentB@phImpactBase@@QAEXH@Z
    inline void SetComponentB(int32_t arg1)
    {
        return stub<member_func_t<void, phImpactBase, int32_t>>(0x4922C0, this, arg1);
    }

    // 0x4922D0 | ?SetColliders@phImpactBase@@SAXPAVphColliderBase@@0PAV1@H@Z
    static inline void SetColliders(
        class phColliderBase* arg1, class phColliderBase* arg2, class phImpactBase* arg3, int32_t arg4)
    {
        return stub<cdecl_t<void, class phColliderBase*, class phColliderBase*, class phImpactBase*, int32_t>>(
            0x4922D0, arg1, arg2, arg3, arg4);
    }

    // 0x492310 | ?SwapColliders@phImpactBase@@QAEXXZ
    inline void SwapColliders()
    {
        return stub<member_func_t<void, phImpactBase>>(0x492310, this);
    }

    // 0x492360 | ?CullImpactList@phImpactBase@@SAXPAV1@PAHABVVector3@@@Z
    static inline void CullImpactList(class phImpactBase* arg1, int32_t* arg2, class Vector3 const& arg3)
    {
        return stub<cdecl_t<void, class phImpactBase*, int32_t*, class Vector3 const&>>(0x492360, arg1, arg2, arg3);
    }

    // 0x4924C0 | ?ImpactIsInList@phImpactBase@@SA_NHHHPAV1@H@Z
    static inline bool ImpactIsInList(int32_t arg1, int32_t arg2, int32_t arg3, class phImpactBase* arg4, int32_t arg5)
    {
        return stub<cdecl_t<bool, int32_t, int32_t, int32_t, class phImpactBase*, int32_t>>(
            0x4924C0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4925A0 | ?Reset@phImpactBase@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, phImpactBase>>(0x4925A0, this);
    }
};
