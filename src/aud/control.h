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
    aud:control

    0x59FF40 | public: void __thiscall audControl::Init(enum audManager::AUDTYPE,class audManager *) | ?Init@audControl@@QAEXW4AUDTYPE@audManager@@PAV3@@Z
    0x59FFA0 | public: class audControl * __thiscall audControl::Create(enum audManager::AUDTYPE,class audManager *) | ?Create@audControl@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@@Z
    0x59FFD0 | public: void __thiscall audControl::SetMaxConcurrent(int) | ?SetMaxConcurrent@audControl@@QAEXH@Z
    0x5A0010 | public: void __thiscall audControl::Update(int) | ?Update@audControl@@QAEXH@Z
    0x5A0060 | public: int __thiscall audControl::Add(class audObject *,int) | ?Add@audControl@@QAEHPAVaudObject@@H@Z
    0x5A00C0 | public: bool __thiscall audControl::Remove(class audObject *,int) | ?Remove@audControl@@QAE_NPAVaudObject@@H@Z
    0x5A0180 | public: class audManager * __thiscall audControl::GetManager(void) | ?GetManager@audControl@@QAEPAVaudManager@@XZ
    0x5A0190 | public: bool __thiscall audControl::MoveToActive(enum audManager::AUDTYPE,class audObject *) | ?MoveToActive@audControl@@QAE_NW4AUDTYPE@audManager@@PAVaudObject@@@Z
    0x5A0290 | public: bool __thiscall audControl::MoveFromActive(enum audManager::AUDTYPE,class audObject *) | ?MoveFromActive@audControl@@QAE_NW4AUDTYPE@audManager@@PAVaudObject@@@Z
    0x5A0300 | public: class audObject * __thiscall audControl::FindObjectByHandle(int) | ?FindObjectByHandle@audControl@@QAEPAVaudObject@@H@Z
    0x5A03B0 | public: int __thiscall audControl::GetObjectHandle(class audObject *) | ?GetObjectHandle@audControl@@QAEHPAVaudObject@@@Z
    0x5A03C0 | public: class audObject * __thiscall audControl::FindActiveObjectByHandle(int) | ?FindActiveObjectByHandle@audControl@@QAEPAVaudObject@@H@Z
    0x5A0420 | public: void __thiscall audControl::ResetAutoHandle(int) | ?ResetAutoHandle@audControl@@QAEXH@Z
    0x5A0430 | public: void __thiscall audControl::SetHandle(int) | ?SetHandle@audControl@@QAEXH@Z
    0x5A0440 | public: int __thiscall audControl::GetHandle(void) | ?GetHandle@audControl@@QAEHXZ
    0x5A0450 | public: int __thiscall audControl::Count(void) | ?Count@audControl@@QAEHXZ
    0x5A0490 | public: void __thiscall audControl::SetPath(char const *) | ?SetPath@audControl@@QAEXPBD@Z
    0x5A04E0 | public: char * __thiscall audControl::GetPath(void) | ?GetPath@audControl@@QAEPADXZ
    0x5A04F0 | public: void __thiscall audControl::SetAssetDbId(int) | ?SetAssetDbId@audControl@@QAEXH@Z
    0x5A0500 | public: int __thiscall audControl::GetAssetDbId(void) | ?GetAssetDbId@audControl@@QAEHXZ
    0x5A0510 | public: void __thiscall audControl::SetVolume(float,int) | ?SetVolume@audControl@@QAEXMH@Z
    0x5A05B0 | public: void __thiscall audControl::SetPan(float,int) | ?SetPan@audControl@@QAEXMH@Z
    0x5A0650 | public: void __thiscall audControl::SetPitch(float,int) | ?SetPitch@audControl@@QAEXMH@Z
    0x5A06F0 | public: float __thiscall audControl::GetVolume(int) | ?GetVolume@audControl@@QAEMH@Z
    0x5A0750 | public: float __thiscall audControl::GetPan(int) | ?GetPan@audControl@@QAEMH@Z
    0x5A07B0 | public: float __thiscall audControl::GetPitch(int) | ?GetPitch@audControl@@QAEMH@Z
    0x5A0810 | public: bool __thiscall audControl::Play(int) | ?Play@audControl@@QAE_NH@Z
    0x5A0870 | public: bool __thiscall audControl::PlayRandom(int) | ?PlayRandom@audControl@@QAE_NH@Z
    0x5A08D0 | public: bool __thiscall audControl::Stop(int) | ?Stop@audControl@@QAE_NH@Z
    0x5A0940 | public: bool __thiscall audControl::PauseResume(bool,int) | ?PauseResume@audControl@@QAE_N_NH@Z
    0x5A09B0 | public: void __thiscall audControl::SetPosition(struct _audvector3_ *,int) | ?SetPosition@audControl@@QAEXPAU_audvector3_@@H@Z
    0x5A09F0 | public: void __thiscall audControl::Enable3DMode(int) | ?Enable3DMode@audControl@@QAEXH@Z
    0x5A0A90 | public: void __thiscall audControl::Disable3DMode(int) | ?Disable3DMode@audControl@@QAEXH@Z
    0x5A0B30 | public: struct _audvector3_ * __thiscall audControl::GetPosition(int) | ?GetPosition@audControl@@QAEPAU_audvector3_@@H@Z
    0x5A0B60 | public: void __thiscall audControl::Destroy(void) | ?Destroy@audControl@@QAEXXZ
    0x5A0BF0 | public: void __thiscall audControl::FreeAndDestroy(void) | ?FreeAndDestroy@audControl@@QAEXXZ
    0x5A0C20 | public: void __thiscall audControl::SetControlFlags(enum audControl::AUDCONTROLFLAGS,enum audControl::AUDCONTROLFLAGS) | ?SetControlFlags@audControl@@QAEXW4AUDCONTROLFLAGS@1@0@Z
    0x5A0C40 | public: int __thiscall audControl::GetControlFlags(void) | ?GetControlFlags@audControl@@QAEHXZ
    0x5A0C50 | public: void __thiscall audControl::SetPriority(int) | ?SetPriority@audControl@@QAEXH@Z
    0x5A0C80 | public: int __thiscall audControl::GetPriority(void) | ?GetPriority@audControl@@QAEHXZ
    0x5A0C90 | public: void __thiscall audControl::StopPCEchoBuffers(void) | ?StopPCEchoBuffers@audControl@@QAEXXZ
    0x5A0CF0 | public: void __thiscall audControl::SetVolPCEchoBuffers(float) | ?SetVolPCEchoBuffers@audControl@@QAEXM@Z
*/

// #include "hooking.h"
