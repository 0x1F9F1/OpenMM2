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

#include "hooking.h"
