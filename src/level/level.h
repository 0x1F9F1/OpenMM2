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
    level:level

    0x4653A0 | public: __thiscall lvlLevel::lvlLevel(void) | ??0lvlLevel@@QAE@XZ
    0x465400 | public: virtual __thiscall lvlLevel::~lvlLevel(void) | ??1lvlLevel@@UAE@XZ
    0x465460 | public: virtual void __thiscall lvlLevel::Update(void) | ?Update@lvlLevel@@UAEXXZ
    0x465470 | public: virtual void __thiscall lvlLevel::SetObjectDetail(int) | ?SetObjectDetail@lvlLevel@@UAEXH@Z
    0x465480 | public: void __thiscall lvlLevel::MoveToRoom(class lvlInstance *,int) | ?MoveToRoom@lvlLevel@@QAEXPAVlvlInstance@@H@Z
    0x4655B0 | public: virtual bool __thiscall lvlLevel::Collide(int,class lvlSegment &,class lvlIntersection *) | ?Collide@lvlLevel@@UAE_NHAAVlvlSegment@@PAVlvlIntersection@@@Z
    0x4655C0 | public: virtual bool __thiscall lvlLevel::GetBoundSphere(class Vector4 &,int) | ?GetBoundSphere@lvlLevel@@UAE_NAAVVector4@@H@Z
    0x4655D0 | public: virtual int __thiscall lvlLevel::GetVisitList(int *,int,class Vector3 const &,class Vector3 const &,int,int) | ?GetVisitList@lvlLevel@@UAEHPAHHABVVector3@@1HH@Z
    0x4655E0 | public: void __thiscall lvlLevel::RegisterDrawable(int,class datCallback) | ?RegisterDrawable@lvlLevel@@QAEXHVdatCallback@@@Z
    0x465630 | protected: void __thiscall lvlLevel::CallCallbacks(int) | ?CallCallbacks@lvlLevel@@IAEXH@Z
    0x465680 | public: void __thiscall lvlLevel::ResetCallbacks(void) | ?ResetCallbacks@lvlLevel@@QAEXXZ
    0x465690 | public: virtual class gfxTexture * __thiscall lvlLevel::GetEnvMap(int,class Vector3 const &,float &) | ?GetEnvMap@lvlLevel@@UAEPAVgfxTexture@@HABVVector3@@AAM@Z
    public: void __thiscall lvlLevel::LabelInstances(int) | ?LabelInstances@lvlLevel@@QAEXH@Z
    public: virtual void __thiscall lvlLevel::AddLabels(class bkBank &) | ?AddLabels@lvlLevel@@UAEXAAVbkBank@@@Z
    0x4656A0 | public: virtual void * __thiscall lvlLevel::`scalar deleting destructor'(unsigned int) | ??_GlvlLevel@@UAEPAXI@Z
    public: virtual void * __thiscall lvlLevel::`vector deleting destructor'(unsigned int) | ??_ElvlLevel@@UAEPAXI@Z
    0x5B1A1C | const lvlLevel::`vftable' | ??_7lvlLevel@@6B@
    0x655790 | protected: static class datCallback (* lvlLevel::m_Callbacks)[64] | ?m_Callbacks@lvlLevel@@1PAY0EA@VdatCallback@@A
    protected: static int * lvlLevel::m_DrawableCounts | ?m_DrawableCounts@lvlLevel@@1PAHA
    0x655DA0 | protected: static bool lvlLevel::sm_PhysicsMode | ?sm_PhysicsMode@lvlLevel@@1_NA
    0x655D9C | protected: static class lvlLevel * lvlLevel::sm_Singleton | ?sm_Singleton@lvlLevel@@1PAV1@A
*/

#include "hooking.h"
