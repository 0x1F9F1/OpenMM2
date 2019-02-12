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
    vehicle:trailer

    0x4D6F40 | public: __thiscall vehTrailer::vehTrailer(void) | ??0vehTrailer@@QAE@XZ
    0x4D71A0 | public: virtual __thiscall vehTrailer::~vehTrailer(void) | ??1vehTrailer@@UAE@XZ
    0x4D72E0 | public: virtual char const * __thiscall vehTrailer::GetDirName(void) | ?GetDirName@vehTrailer@@UAEPBDXZ
    0x4D72F0 | public: void __thiscall vehTrailer::Init(char const *,class Vector3 const &,class vehCarSim *,int) | ?Init@vehTrailer@@QAEXPBDABVVector3@@PAVvehCarSim@@H@Z
    0x4D77D0 | public: virtual void __thiscall vehTrailerInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@vehTrailerInstance@@UAEXABVMatrix34@@@Z
    0x4D77F0 | public: virtual class Matrix34 const & __thiscall vehTrailerInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@vehTrailerInstance@@UAEABVMatrix34@@AAV2@@Z
    0x4D7810 | public: virtual class Vector3 const & __thiscall vehTrailerInstance::GetPosition(void) | ?GetPosition@vehTrailerInstance@@UAEABVVector3@@XZ
    0x4D7820 | public: virtual class dgPhysEntity * __thiscall vehTrailerInstance::GetEntity(void) | ?GetEntity@vehTrailerInstance@@UAEPAVdgPhysEntity@@XZ
    0x4D7830 | public: virtual class dgPhysEntity * __thiscall vehTrailerInstance::AttachEntity(void) | ?AttachEntity@vehTrailerInstance@@UAEPAVdgPhysEntity@@XZ
    0x4D7840 | public: virtual class Vector3 const & __thiscall vehTrailerInstance::GetVelocity(void) | ?GetVelocity@vehTrailerInstance@@UAEABVVector3@@XZ
    0x4D7850 | public: virtual unsigned int __thiscall vehTrailerInstance::SizeOf(void) | ?SizeOf@vehTrailerInstance@@UAEIXZ
    0x4D7860 | public: virtual class lvlInstance * __thiscall vehTrailer::GetInst(void) | ?GetInst@vehTrailer@@UAEPAVlvlInstance@@XZ
    0x4D7870 | public: virtual bool __thiscall vehTrailer::RequiresTerrainCollision(void) | ?RequiresTerrainCollision@vehTrailer@@UAE_NXZ
    0x4D7980 | public: int __thiscall vehTrailer::BottomedOut(void) | ?BottomedOut@vehTrailer@@QAEHXZ
    0x4D79C0 | public: virtual void __thiscall vehTrailer::Reset(void) | ?Reset@vehTrailer@@UAEXXZ
    0x4D7B00 | public: virtual void __thiscall vehTrailer::Update(void) | ?Update@vehTrailer@@UAEXXZ
    0x4D7C40 | public: virtual void __thiscall vehTrailer::PostUpdate(void) | ?PostUpdate@vehTrailer@@UAEXXZ
    0x4D7C50 | public: void __thiscall vehTrailer::SetCarHitchOffset(void) | ?SetCarHitchOffset@vehTrailer@@QAEXXZ
    0x4D7C80 | public: void __thiscall vehTrailer::SetTrailerHitchOffset(void) | ?SetTrailerHitchOffset@vehTrailer@@QAEXXZ
    public: void __thiscall vehTrailer::AddWidgets(class bkBank *) | ?AddWidgets@vehTrailer@@QAEXPAVbkBank@@@Z
    0x4D7CB0 | public: virtual void __thiscall vehTrailer::FileIO(class datParser &) | ?FileIO@vehTrailer@@UAEXAAVdatParser@@@Z
    0x4D7D90 | public: virtual bool __thiscall vehTrailer::Save(void) | ?Save@vehTrailer@@UAE_NXZ
    0x4D7DC0 | public: virtual bool __thiscall vehTrailer::Load(void) | ?Load@vehTrailer@@UAE_NXZ
    0x4D7DF0 | public: void __thiscall vehTrailerInstance::Init(char const *,class Vector3 const &,int) | ?Init@vehTrailerInstance@@QAEXPBDABVVector3@@H@Z
    0x4D7F20 | public: virtual void __thiscall vehTrailerInstance::Draw(int) | ?Draw@vehTrailerInstance@@UAEXH@Z
    0x4D81F0 | public: virtual void __thiscall vehTrailerInstance::DrawShadow(void) | ?DrawShadow@vehTrailerInstance@@UAEXXZ
    0x4D8320 | public: virtual void __thiscall vehTrailerInstance::DrawShadowMap(void) | ?DrawShadowMap@vehTrailerInstance@@UAEXXZ
    public: virtual void __thiscall vehTrailerInstance::DrawPhysics(class Vector3 const &) | ?DrawPhysics@vehTrailerInstance@@UAEXABVVector3@@@Z
    0x4D8420 | public: bool __thiscall vehTrailerInstance::GetTrailerHitch(class Vector3 *) | ?GetTrailerHitch@vehTrailerInstance@@QAE_NPAVVector3@@@Z
    0x4D84B0 | public: virtual void * __thiscall vehTrailer::`vector deleting destructor'(unsigned int) | ??_EvehTrailer@@UAEPAXI@Z
    public: virtual void * __thiscall vehTrailer::`scalar deleting destructor'(unsigned int) | ??_GvehTrailer@@UAEPAXI@Z
    public: __thiscall vehTrailerInstance::~vehTrailerInstance(void) | ??1vehTrailerInstance@@QAE@XZ
    0x4CCEC0 | public: virtual __thiscall vehDrivetrain::~vehDrivetrain(void) | ??1vehDrivetrain@@UAE@XZ
    0x4CCED0 | public: virtual __thiscall vehWheel::~vehWheel(void) | ??1vehWheel@@UAE@XZ
    0x4D84F0 | [thunk]:public: virtual void * __thiscall vehTrailer::`vector deleting destructor'`adjustor{180}' (unsigned int) | ??_EvehTrailer@@WLE@AEPAXI@Z
    0x4D8500 | [thunk]:public: virtual void __thiscall vehTrailer::Update`adjustor{180}' (void) | ?Update@vehTrailer@@WLE@AEXXZ
    0x4D8510 | public: virtual char * __thiscall vehTrailer::GetClassName(void) | ?GetClassName@vehTrailer@@UAEPADXZ
    0x4D8520 | public: virtual class phInertialCS * __thiscall vehTrailer::GetICS(void) | ?GetICS@vehTrailer@@UAEPAVphInertialCS@@XZ
    0x5B2F28 | const vehTrailer::`vftable'{for `asNode'} | ??_7vehTrailer@@6BasNode@@@
    0x5B2F5C | const vehTrailer::`vftable'{for `dgPhysEntity'} | ??_7vehTrailer@@6BdgPhysEntity@@@
    0x5B2F84 | const vehTrailerInstance::`vftable' | ??_7vehTrailerInstance@@6B@
    public: static float vehTrailer::sm_SampleStep | ?sm_SampleStep@vehTrailer@@2MA
    public: static int vehTrailer::sm_MaxSamples | ?sm_MaxSamples@vehTrailer@@2HA
*/

// #include "hooking.h"
