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
    aud:object

    0x5A2130 | public: void __thiscall audObject::Init(void) | ?Init@audObject@@QAEXXZ
    0x5A21C0 | public: void __thiscall audObject::Destroy(void) | ?Destroy@audObject@@QAEXXZ
    0x5A2230 | public: void __thiscall audObject::SetControl(class audControl *) | ?SetControl@audObject@@QAEXPAVaudControl@@@Z
    0x5A2240 | public: class audControl * __thiscall audObject::GetControl(void) | ?GetControl@audObject@@QAEPAVaudControl@@XZ
    0x5A2250 | public: class audSoundBuffer * __thiscall audObject::GetBuffer(void) | ?GetBuffer@audObject@@QAEPAVaudSoundBuffer@@XZ
    0x5A2260 | public: void __thiscall audObject::SetBuffer(class audSoundBuffer *) | ?SetBuffer@audObject@@QAEXPAVaudSoundBuffer@@@Z
    0x5A2270 | public: class audObject * __thiscall audObject::CreateEmptyObject(enum audManager::AUDTYPE,class audManager *) | ?CreateEmptyObject@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@@Z
    0x5A2470 | public: class audObject * __thiscall audObject::CreateFromSoundBank(enum audManager::AUDTYPE,class audSoundBankHdr *,int,int,int,class audManager *) | ?CreateFromSoundBank@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAVaudSoundBankHdr@@HHHPAV3@@Z
    0x5A24E0 | public: class audObject * __thiscall audObject::CreateVoiceOverFromFile(enum audManager::AUDTYPE,class audManager *,char *,char *,unsigned long) | ?CreateVoiceOverFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@PAD2K@Z
    0x5A2500 | public: class audObject * __thiscall audObject::CreateFromFile(enum audManager::AUDTYPE,class audManager *,char *,char *,unsigned long) | ?CreateFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@PAD2K@Z
    0x5A2610 | public: class audObject * __thiscall audObject::CreateStreamFromFile(enum audManager::AUDTYPE,class audManager *,int,char *,char *) | ?CreateStreamFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@HPAD2@Z
    0x5A26B0 | public: class audObject * __thiscall audObject::CreateDuplicate(class audObject *) | ?CreateDuplicate@audObject@@QAEPAV1@PAV1@@Z
    0x5A2700 | public: void __thiscall audObject::SetType(enum audManager::AUDTYPE) | ?SetType@audObject@@QAEXW4AUDTYPE@audManager@@@Z
    0x5A2710 | public: enum audManager::AUDTYPE __thiscall audObject::GetType(void) | ?GetType@audObject@@QAE?AW4AUDTYPE@audManager@@XZ
    0x5A2720 | public: void __thiscall audObject::SetHandle(int) | ?SetHandle@audObject@@QAEXH@Z
    0x5A2730 | public: int __thiscall audObject::GetHandle(void) | ?GetHandle@audObject@@QAEHXZ
    0x5A2740 | public: class audStream * __thiscall audObject::CreateStreamControl(int) | ?CreateStreamControl@audObject@@QAEPAVaudStream@@H@Z
    0x5A2770 | public: class audStream * __thiscall audObject::GetStreamControl(void) | ?GetStreamControl@audObject@@QAEPAVaudStream@@XZ
    0x5A2780 | public: class audFX * __thiscall audObject::CreateFXControl(void) | ?CreateFXControl@audObject@@QAEPAVaudFX@@XZ
    0x5A27A0 | public: class audFX * __thiscall audObject::GetFXControl(void) | ?GetFXControl@audObject@@QAEPAVaudFX@@XZ
    0x5A27B0 | public: void __thiscall audObject::StopPCEchoBuffer(void) | ?StopPCEchoBuffer@audObject@@QAEXXZ
    0x5A27D0 | public: void __thiscall audObject::SetVolPCEchoBuffer(float) | ?SetVolPCEchoBuffer@audObject@@QAEXM@Z
    0x5A27F0 | public: class audFileSystem * __thiscall audObject::GetFile(void) | ?GetFile@audObject@@QAEPAVaudFileSystem@@XZ
    0x5A2800 | public: class audManager * __thiscall audObject::GetManager(void) | ?GetManager@audObject@@QAEPAVaudManager@@XZ
    0x5A2810 | public: bool __thiscall audObject::Update(int) | ?Update@audObject@@QAE_NH@Z
    0x5A2990 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audObject::GetStatus(void) | ?GetStatus@audObject@@QAE?AW4AUD_OBJECTSTATUS@1@XZ
    0x5A29C0 | public: bool __thiscall audObject::PauseResume(bool) | ?PauseResume@audObject@@QAE_N_N@Z
    0x5A29D0 | public: bool __thiscall audObject::Play(void) | ?Play@audObject@@QAE_NXZ
    0x5A2A30 | public: bool __thiscall audObject::Stop(void) | ?Stop@audObject@@QAE_NXZ
    0x5A2A60 | public: bool __thiscall audObject::SetVolume(float) | ?SetVolume@audObject@@QAE_NM@Z
    0x5A2B60 | public: bool __thiscall audObject::SetPitch(float) | ?SetPitch@audObject@@QAE_NM@Z
    0x5A2BC0 | public: bool __thiscall audObject::SetPan(float) | ?SetPan@audObject@@QAE_NM@Z
    0x5A2C20 | public: void __thiscall audObject::SetPriority(int) | ?SetPriority@audObject@@QAEXH@Z
    0x5A2C50 | public: int __thiscall audObject::GetPriority(void) | ?GetPriority@audObject@@QAEHXZ
    0x5A2C60 | public: void __thiscall audObject::SetCreatedBufferFlag(bool) | ?SetCreatedBufferFlag@audObject@@QAEX_N@Z
    0x5A2C70 | public: bool __thiscall audObject::GetCreatedBufferFlag(void) | ?GetCreatedBufferFlag@audObject@@QAE_NXZ
    0x5A2C80 | public: void __thiscall audObject::SetNbrChannels(int) | ?SetNbrChannels@audObject@@QAEXH@Z
    0x5A2C90 | public: void __thiscall audObject::SetNbrSamplesPerSec(int) | ?SetNbrSamplesPerSec@audObject@@QAEXH@Z
    0x5A2CA0 | public: void __thiscall audObject::SetBitsPerSample(int) | ?SetBitsPerSample@audObject@@QAEXH@Z
    0x5A2CB0 | public: void __thiscall audObject::SetTotalSize(int) | ?SetTotalSize@audObject@@QAEXH@Z
    0x5A2CC0 | public: void __thiscall audObject::SetFlags(enum audObject::AUD_OBJECTFLAGS,enum audObject::AUD_OBJECTFLAGS) | ?SetFlags@audObject@@QAEXW4AUD_OBJECTFLAGS@1@0@Z
    0x5A2CE0 | public: enum audObject::AUD_OBJECTFLAGS __thiscall audObject::GetFlags(void) | ?GetFlags@audObject@@QAE?AW4AUD_OBJECTFLAGS@1@XZ
    0x5A2CF0 | public: void __thiscall audObject::SetDefaults(struct _soundattribs_ *) | ?SetDefaults@audObject@@QAEXPAU_soundattribs_@@@Z
    0x5A2D40 | public: void __thiscall audObject::SetDefaultVolume(float) | ?SetDefaultVolume@audObject@@QAEXM@Z
    0x5A2E00 | public: void __thiscall audObject::SetDefaultPitch(float) | ?SetDefaultPitch@audObject@@QAEXM@Z
    0x5A2E20 | public: void __thiscall audObject::SetDefaultPan(float) | ?SetDefaultPan@audObject@@QAEXM@Z
    0x5A2E40 | public: void __thiscall audObject::Set3DPosition(struct _audvector3_ *) | ?Set3DPosition@audObject@@QAEXPAU_audvector3_@@@Z
    0x5A2E70 | public: void __thiscall audObject::Set3DVelocity(struct _audvector3_ *) | ?Set3DVelocity@audObject@@QAEXPAU_audvector3_@@@Z
    0x5A2EA0 | public: float __thiscall audObject::GetVolume(void) | ?GetVolume@audObject@@QAEMXZ
    0x5A2EB0 | public: float __thiscall audObject::GetPitch(void) | ?GetPitch@audObject@@QAEMXZ
    0x5A2EC0 | public: float __thiscall audObject::GetPan(void) | ?GetPan@audObject@@QAEMXZ
    0x5A2ED0 | public: struct _audvector3_ * __thiscall audObject::Get3D(void) | ?Get3D@audObject@@QAEPAU_audvector3_@@XZ
    0x5A2EE0 | public: float __thiscall audObject::GetDefaultVolume(void) | ?GetDefaultVolume@audObject@@QAEMXZ
    0x5A2EF0 | public: float __thiscall audObject::GetDefaultPitch(void) | ?GetDefaultPitch@audObject@@QAEMXZ
    0x5A2F00 | public: float __thiscall audObject::GetDefaultPan(void) | ?GetDefaultPan@audObject@@QAEMXZ
    0x5A2F10 | public: struct _audvector3_ * __thiscall audObject::Get3DPosition(void) | ?Get3DPosition@audObject@@QAEPAU_audvector3_@@XZ
    0x5A2F20 | public: struct _audvector3_ * __thiscall audObject::Get3DVelocity(void) | ?Get3DVelocity@audObject@@QAEPAU_audvector3_@@XZ
    0x5A2F30 | public: class audSoundBankHdr * __thiscall audObject::GetSoundBank(void) | ?GetSoundBank@audObject@@QAEPAVaudSoundBankHdr@@XZ
    0x5A2F40 | public: int __thiscall audObject::GetBankHandle(void) | ?GetBankHandle@audObject@@QAEHXZ
    0x5A2F50 | public: int __thiscall audObject::GetNChannels(void) | ?GetNChannels@audObject@@QAEHXZ
    0x5A2F60 | public: int __thiscall audObject::GetSamplesPerSec(void) | ?GetSamplesPerSec@audObject@@QAEHXZ
    0x5A2F70 | public: int __thiscall audObject::GetBitsPerSample(void) | ?GetBitsPerSample@audObject@@QAEHXZ
    0x5A2F80 | public: int __thiscall audObject::GetTotalSize(void) | ?GetTotalSize@audObject@@QAEHXZ
    0x5A2F90 | public: void __thiscall audObject::RewindFile(void) | ?RewindFile@audObject@@QAEXXZ
*/

// #include "hooking.h"
