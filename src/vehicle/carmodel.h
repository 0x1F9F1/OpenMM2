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
    vehicle:carmodel

    0x4CCF20 | public: __thiscall vehCarModel::vehCarModel(void) | ??0vehCarModel@@QAE@XZ
    0x4CCF80 | public: __thiscall vehCarModel::~vehCarModel(void) | ??1vehCarModel@@QAE@XZ
    0x4CCFE0 | public: void __thiscall vehCarModel::Init(class vehCar *,char const *,int) | ?Init@vehCarModel@@QAEXPAVvehCar@@PBDH@Z
    0x4CDA20 | public: void __thiscall vehCarModel::InitBound(char const *,bool) | ?InitBound@vehCarModel@@QAEXPBD_N@Z
    0x4CDBF0 | public: bool __thiscall vehCarModel::GetTrailerHitch(class Vector3 *) | ?GetTrailerHitch@vehCarModel@@QAE_NPAVVector3@@@Z
    0x4CDC50 | protected: bool __thiscall vehCarModel::InitBreakable(class vehBreakableMgr *,char const *,char const *,int,int) | ?InitBreakable@vehCarModel@@IAE_NPAVvehBreakableMgr@@PBD1HH@Z
    0x4CDCA0 | public: void __thiscall vehCarModel::EjectOneshot(void) | ?EjectOneshot@vehCarModel@@QAEXXZ
    0x4CDF00 | protected: bool __thiscall vehCarModel::GetSurfaceColor(class modStatic *,class Vector3 &) | ?GetSurfaceColor@vehCarModel@@IAE_NPAVmodStatic@@AAVVector3@@@Z
    0x4CDF60 | protected: void __thiscall vehCarModel::InitSirenLight(char const *,char const *,int) | ?InitSirenLight@vehCarModel@@IAEXPBD0H@Z
    0x4CDFD0 | public: virtual void __thiscall vehCarModel::Reset(void) | ?Reset@vehCarModel@@UAEXXZ
    0x4CDFE0 | public: virtual unsigned int __thiscall vehCarModel::SizeOf(void) | ?SizeOf@vehCarModel@@UAEIXZ
    0x4CDFF0 | public: void __thiscall vehCarModel::ClearDamage(void) | ?ClearDamage@vehCarModel@@QAEXXZ
    0x4CE040 | public: virtual void __thiscall vehCarModel::Draw(int) | ?Draw@vehCarModel@@UAEXH@Z
    0x4CE840 | public: void __thiscall vehCarModel::DrawPart(int,int,class Matrix34 const &,class modShader *) | ?DrawPart@vehCarModel@@QAEXHHABVMatrix34@@PAVmodShader@@@Z
    0x4CE880 | public: void __thiscall vehCarModel::DrawPart(class modStatic *,class Matrix34 const &,class modShader *) | ?DrawPart@vehCarModel@@QAEXPAVmodStatic@@ABVMatrix34@@PAVmodShader@@@Z
    0x4CE940 | public: virtual void __thiscall vehCarModel::DrawShadow(void) | ?DrawShadow@vehCarModel@@UAEXXZ
    0x4CEA90 | public: virtual void __thiscall vehCarModel::DrawShadowMap(void) | ?DrawShadowMap@vehCarModel@@UAEXXZ
    0x4CEB90 | public: virtual void __thiscall vehCarModel::DrawGlow(void) | ?DrawGlow@vehCarModel@@UAEXXZ
    0x4CED50 | public: void __thiscall vehCarModel::DrawHeadlights(bool) | ?DrawHeadlights@vehCarModel@@QAEX_N@Z
    0x4CEF50 | public: virtual class Vector3 const & __thiscall vehCarModel::GetPosition(void) | ?GetPosition@vehCarModel@@UAEABVVector3@@XZ
    0x4CEF80 | public: virtual class Vector3 const & __thiscall vehCarModel::GetVelocity(void) | ?GetVelocity@vehCarModel@@UAEABVVector3@@XZ
    0x4CEF90 | public: virtual class Matrix34 const & __thiscall vehCarModel::GetMatrix(class Matrix34 &) | ?GetMatrix@vehCarModel@@UAEABVMatrix34@@AAV2@@Z
    0x4CEFA0 | public: virtual void __thiscall vehCarModel::SetMatrix(class Matrix34 const &) | ?SetMatrix@vehCarModel@@UAEXABVMatrix34@@@Z
    0x4CEFC0 | public: virtual class dgPhysEntity * __thiscall vehCarModel::GetEntity(void) | ?GetEntity@vehCarModel@@UAEPAVdgPhysEntity@@XZ
    0x4CEFD0 | public: virtual class dgPhysEntity * __thiscall vehCarModel::AttachEntity(void) | ?AttachEntity@vehCarModel@@UAEPAVdgPhysEntity@@XZ
    0x4CEFE0 | public: void __thiscall vehCarModel::BreakElectrics(class Vector3 const &) | ?BreakElectrics@vehCarModel@@QAEXABVVector3@@@Z
    0x4CF050 | public: void __thiscall vehCarModel::SetVisible(bool) | ?SetVisible@vehCarModel@@QAEX_N@Z
    0x4CF070 | public: bool __thiscall vehCarModel::GetVisible(void) | ?GetVisible@vehCarModel@@QAE_NXZ
    public: void __thiscall vehCarModel::AddWidgets(class bkBank &) | ?AddWidgets@vehCarModel@@QAEXAAVbkBank@@@Z
    0x4CF080 | public: virtual void __thiscall vehCarModel::DrawReflected(float) | ?DrawReflected@vehCarModel@@UAEXM@Z
    0x4CF090 | public: void * __thiscall ltLight::`vector deleting destructor'(unsigned int) | ??_EltLight@@QAEPAXI@Z
    0x5B2CB0 | const vehCarModel::`vftable' | ??_7vehCarModel@@6B@
    unsigned char NightBrakeAlpha | ?NightBrakeAlpha@@3EA
    protected: static int vehCarModel::sm_DecalColorVariation | ?sm_DecalColorVariation@vehCarModel@@1HA
*/

#include "hooking.h"
