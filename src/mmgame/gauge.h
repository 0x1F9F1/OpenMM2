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
    mmgame:gauge

    0x43E710 | public: __thiscall RadialGauge::RadialGauge(void) | ??0RadialGauge@@QAE@XZ
    0x43E7A0 | public: void __thiscall RadialGauge::Init(class modStatic *,class modShader * *,class Vector3,float const *,float const *,float) | ?Init@RadialGauge@@QAEXPAVmodStatic@@PAPAVmodShader@@VVector3@@PBM3M@Z
    public: void __thiscall RadialGauge::AddWidgets(class bkBank *) | ?AddWidgets@RadialGauge@@QAEXPAVbkBank@@@Z
    0x43E820 | public: virtual void __thiscall RadialGauge::Update(void) | ?Update@RadialGauge@@UAEXXZ
    0x43E940 | public: virtual void __thiscall RadialGauge::Cull(void) | ?Cull@RadialGauge@@UAEXXZ
    0x43E9F0 | public: void __thiscall RadialGauge::Cull(class Matrix34 const *) | ?Cull@RadialGauge@@QAEXPBVMatrix34@@@Z
    0x43ED50 | private: float __thiscall RadialGauge::GetArrowAngle(void) | ?GetArrowAngle@RadialGauge@@AAEMXZ
    0x43EE40 | public: __thiscall mmLinearGauge::mmLinearGauge(void) | ??0mmLinearGauge@@QAE@XZ
    0x43EE60 | public: __thiscall mmLinearGauge::~mmLinearGauge(void) | ??1mmLinearGauge@@QAE@XZ
    0x43EE70 | public: void __thiscall mmLinearGauge::Init(char *,float *,float *,int,class mmExternalView *) | ?Init@mmLinearGauge@@QAEXPADPAM1HPAVmmExternalView@@@Z
    0x43EED0 | public: void __thiscall mmLinearGauge::InitOverlay(char *) | ?InitOverlay@mmLinearGauge@@QAEXPAD@Z
    0x43EEF0 | public: void __thiscall mmLinearGauge::Draw(void) | ?Draw@mmLinearGauge@@QAEXXZ
    0x43EFB0 | public: void __thiscall mmSlidingGauge::Init(char *,float *,float *,int,class mmExternalView *,int) | ?Init@mmSlidingGauge@@QAEXPADPAM1HPAVmmExternalView@@H@Z
    0x43EFE0 | public: void __thiscall mmSlidingGauge::Draw(void) | ?Draw@mmSlidingGauge@@QAEXXZ
    0x43F0A0 | public: __thiscall mmGearIndicator::mmGearIndicator(void) | ??0mmGearIndicator@@QAE@XZ
    0x43F0C0 | public: void __thiscall mmGearIndicator::Init(class mmExternalView *,class mmPlayer *) | ?Init@mmGearIndicator@@QAEXPAVmmExternalView@@PAVmmPlayer@@@Z
    0x43F1F0 | public: void __thiscall mmGearIndicator::Draw(void) | ?Draw@mmGearIndicator@@QAEXXZ
    0x43F260 | public: __thiscall mmSpeedIndicator::mmSpeedIndicator(void) | ??0mmSpeedIndicator@@QAE@XZ
    0x43F280 | public: void __thiscall mmSpeedIndicator::Init(class mmExternalView *,class vehCarSim *) | ?Init@mmSpeedIndicator@@QAEXPAVmmExternalView@@PAVvehCarSim@@@Z
    0x43F330 | public: void __thiscall mmSpeedIndicator::Draw(void) | ?Draw@mmSpeedIndicator@@QAEXXZ
    0x43F450 | public: virtual void * __thiscall RadialGauge::`scalar deleting destructor'(unsigned int) | ??_GRadialGauge@@UAEPAXI@Z
    public: virtual void * __thiscall RadialGauge::`vector deleting destructor'(unsigned int) | ??_ERadialGauge@@UAEPAXI@Z
    public: __thiscall Vector3::Vector3(float,float,float) | ??0Vector3@@QAE@MMM@Z
    0x480AA0 | public: void __thiscall Vector3::Set(class Vector3 const &) | ?Set@Vector3@@QAEXABV1@@Z
    public: void __thiscall gfxRenderState::SetLighting(bool) | ?SetLighting@gfxRenderState@@QAEX_N@Z
    0x43F480 | private: void __thiscall gfxRenderState::CheckSet(unsigned char &,unsigned char) | ?CheckSet@gfxRenderState@@AAEXAAEE@Z
    0x5B11B4 | const RadialGauge::`vftable' | ??_7RadialGauge@@6B@
    0x62762C | private: static bool RadialGauge::bDebugPivot | ?bDebugPivot@RadialGauge@@0_NA
*/

#include "hooking.h"
