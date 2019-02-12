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
    ageaudio:aud3dobject

    0x511AB0 | public: __thiscall Aud3DObject::Aud3DObject(void) | ??0Aud3DObject@@QAE@XZ
    0x511B20 | public: virtual __thiscall Aud3DObject::~Aud3DObject(void) | ??1Aud3DObject@@UAE@XZ
    0x511B80 | public: void __thiscall Aud3DObject::SetPositionPtr(class Vector3 *) | ?SetPositionPtr@Aud3DObject@@QAEXPAVVector3@@@Z
    0x511BB0 | public: void __thiscall Aud3DObject::Reset(void) | ?Reset@Aud3DObject@@QAEXXZ
    0x511C10 | public: void __thiscall Aud3DObject::CalcDistToClosestHeads2(void) | ?CalcDistToClosestHeads2@Aud3DObject@@QAEXXZ
    0x511E10 | private: float __thiscall Aud3DObject::CalcDistToClosestHead2(class Matrix34 * *,class Vector3 *,int) | ?CalcDistToClosestHead2@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    0x511E90 | private: float __thiscall Aud3DObject::CalcDistToHead2(class Matrix34 *,class Vector3 *) | ?CalcDistToHead2@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    0x511ED0 | private: float __thiscall Aud3DObject::CalcPercentToMaxDist2(float) | ?CalcPercentToMaxDist2@Aud3DObject@@AAEMM@Z
    0x511F30 | public: void __thiscall Aud3DObject::CalcMultiPlayerPan(void) | ?CalcMultiPlayerPan@Aud3DObject@@QAEXXZ
    0x511F40 | public: void __thiscall Aud3DObject::CalcSinglePlayerPan(void) | ?CalcSinglePlayerPan@Aud3DObject@@QAEXXZ
    0x512000 | public: float __thiscall Aud3DObject::CalculateDoppler(float) | ?CalculateDoppler@Aud3DObject@@QAEMM@Z
    0x512040 | public: class Vector3 * __thiscall Aud3DObject::GetLeftPositionPtr(void) | ?GetLeftPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    0x512050 | public: class Vector3 * __thiscall Aud3DObject::GetRightPositionPtr(void) | ?GetRightPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    0x512060 | public: void __thiscall Aud3DObject::SetDropOffs(float,float) | ?SetDropOffs@Aud3DObject@@QAEXMM@Z
    0x512090 | public: bool __thiscall Aud3DObject::PastMaxDistance(void) | ?PastMaxDistance@Aud3DObject@@QAE_NXZ
    0x512130 | public: bool __thiscall Aud3DObject::WithinMaxDistance(void) | ?WithinMaxDistance@Aud3DObject@@QAE_NXZ
    0x5121C0 | public: bool __thiscall Aud3DObject::WithinMaxDistance(float) | ?WithinMaxDistance@Aud3DObject@@QAE_NM@Z
    0x512200 | public: float __thiscall Aud3DObject::GetDistToClosestHead2(void) | ?GetDistToClosestHead2@Aud3DObject@@QAEMXZ
    0x512230 | public: void __thiscall Aud3DObject::AddTo3DMgr(void) | ?AddTo3DMgr@Aud3DObject@@QAEXXZ
    0x512250 | public: void __thiscall Aud3DObject::RemoveFrom3DMgr(void) | ?RemoveFrom3DMgr@Aud3DObject@@QAEXXZ
    0x512280 | public: float __thiscall Aud3DObject::CalculateAttenuation(void) | ?CalculateAttenuation@Aud3DObject@@QAEMXZ
    0x5122C0 | public: float __thiscall Aud3DObject::CalculatePan(void) | ?CalculatePan@Aud3DObject@@QAEMXZ
    0x5122F0 | public: virtual void __thiscall Aud3DObject::AssignSounds(void) | ?AssignSounds@Aud3DObject@@UAEXXZ
    0x512300 | public: virtual void __thiscall Aud3DObject::UnAssignSounds(int) | ?UnAssignSounds@Aud3DObject@@UAEXH@Z
    0x512310 | public: virtual void __thiscall Aud3DObject::UpdateAudio(void) | ?UpdateAudio@Aud3DObject@@UAEXXZ
    0x512320 | public: void __thiscall Aud3DObject::Set3D(bool) | ?Set3D@Aud3DObject@@QAEX_N@Z
    0x512360 | public: virtual void __thiscall Aud3DObject::SetNon3DParams(void) | ?SetNon3DParams@Aud3DObject@@UAEXXZ
    0x512370 | public: virtual void __thiscall Aud3DObject::Set3DParams(void) | ?Set3DParams@Aud3DObject@@UAEXXZ
    0x512380 | public: int __thiscall Aud3DObject::GetPriority(void) | ?GetPriority@Aud3DObject@@QAEHXZ
    0x512390 | public: virtual void __thiscall Aud3DObject::Update(void) | ?Update@Aud3DObject@@UAEXXZ
    0x5123D0 | public: void __thiscall Aud3DObject::UpdateNonVirtual(void) | ?UpdateNonVirtual@Aud3DObject@@QAEXXZ
    0x512400 | public: bool __thiscall Aud3DObject::ReadVectorPoints(class Stream *) | ?ReadVectorPoints@Aud3DObject@@QAE_NPAVStream@@@Z
    0x512550 | private: void __thiscall Aud3DObject::SetClosestPositionPtr(void) | ?SetClosestPositionPtr@Aud3DObject@@AAEXXZ
    0x5125A0 | private: class Vector3 * __thiscall Aud3DObject::GetClosestPositionPtr(class Matrix34 * *,int) | ?GetClosestPositionPtr@Aud3DObject@@AAEPAVVector3@@PAPAVMatrix34@@H@Z
    0x512620 | private: float __thiscall Aud3DObject::CalcPseudoDistToClosestHead(class Matrix34 * *,class Vector3 *,int) | ?CalcPseudoDistToClosestHead@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    0x5126A0 | private: float __thiscall Aud3DObject::CalcPseudoDistToHead(class Matrix34 *,class Vector3 *) | ?CalcPseudoDistToHead@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    public: virtual void * __thiscall Aud3DObject::`vector deleting destructor'(unsigned int) | ??_EAud3DObject@@UAEPAXI@Z
    public: virtual void * __thiscall Aud3DObject::`scalar deleting destructor'(unsigned int) | ??_GAud3DObject@@UAEPAXI@Z
    0x5B4CCC | const Aud3DObject::`vftable' | ??_7Aud3DObject@@6B@
*/

// #include "hooking.h"
