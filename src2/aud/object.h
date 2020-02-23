/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

class audObject
{
public:
    // 0x5A2130 | ?Init@audObject@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audObject>>(0x5A2130, this);
    }

    // 0x5A21C0 | ?Destroy@audObject@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audObject>>(0x5A21C0, this);
    }

    // 0x5A2230 | ?SetControl@audObject@@QAEXPAVaudControl@@@Z
    inline void SetControl(class audControl* arg1)
    {
        return stub<member_func_t<void, audObject, class audControl*>>(0x5A2230, this, arg1);
    }

    // 0x5A2240 | ?GetControl@audObject@@QAEPAVaudControl@@XZ
    inline class audControl* GetControl()
    {
        return stub<member_func_t<class audControl*, audObject>>(0x5A2240, this);
    }

    // 0x5A2250 | ?GetBuffer@audObject@@QAEPAVaudSoundBuffer@@XZ
    inline class audSoundBuffer* GetBuffer()
    {
        return stub<member_func_t<class audSoundBuffer*, audObject>>(0x5A2250, this);
    }

    // 0x5A2260 | ?SetBuffer@audObject@@QAEXPAVaudSoundBuffer@@@Z
    inline void SetBuffer(class audSoundBuffer* arg1)
    {
        return stub<member_func_t<void, audObject, class audSoundBuffer*>>(0x5A2260, this, arg1);
    }

    // 0x5A2270 | ?CreateEmptyObject@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@@Z
    inline class audObject* CreateEmptyObject(enum audManager::AUDTYPE arg1, class audManager* arg2)
    {
        return stub<member_func_t<class audObject*, audObject, enum audManager::AUDTYPE, class audManager*>>(
            0x5A2270, this, arg1, arg2);
    }

    // 0x5A2470 | ?CreateFromSoundBank@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAVaudSoundBankHdr@@HHHPAV3@@Z
    inline class audObject* CreateFromSoundBank(enum audManager::AUDTYPE arg1, class audSoundBankHdr* arg2, i32 arg3,
        i32 arg4, i32 arg5, class audManager* arg6)
    {
        return stub<member_func_t<class audObject*, audObject, enum audManager::AUDTYPE, class audSoundBankHdr*, i32,
            i32, i32, class audManager*>>(0x5A2470, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x5A24E0 | ?CreateVoiceOverFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@PAD2K@Z
    inline class audObject* CreateVoiceOverFromFile(
        enum audManager::AUDTYPE arg1, class audManager* arg2, char* arg3, char* arg4, u32 arg5)
    {
        return stub<
            member_func_t<class audObject*, audObject, enum audManager::AUDTYPE, class audManager*, char*, char*, u32>>(
            0x5A24E0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5A2500 | ?CreateFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@PAD2K@Z
    inline class audObject* CreateFromFile(
        enum audManager::AUDTYPE arg1, class audManager* arg2, char* arg3, char* arg4, u32 arg5)
    {
        return stub<
            member_func_t<class audObject*, audObject, enum audManager::AUDTYPE, class audManager*, char*, char*, u32>>(
            0x5A2500, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5A2610 | ?CreateStreamFromFile@audObject@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@HPAD2@Z
    inline class audObject* CreateStreamFromFile(
        enum audManager::AUDTYPE arg1, class audManager* arg2, i32 arg3, char* arg4, char* arg5)
    {
        return stub<
            member_func_t<class audObject*, audObject, enum audManager::AUDTYPE, class audManager*, i32, char*, char*>>(
            0x5A2610, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5A26B0 | ?CreateDuplicate@audObject@@QAEPAV1@PAV1@@Z
    inline class audObject* CreateDuplicate(class audObject* arg1)
    {
        return stub<member_func_t<class audObject*, audObject, class audObject*>>(0x5A26B0, this, arg1);
    }

    // 0x5A2700 | ?SetType@audObject@@QAEXW4AUDTYPE@audManager@@@Z
    inline void SetType(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<void, audObject, enum audManager::AUDTYPE>>(0x5A2700, this, arg1);
    }

    // 0x5A2710 | ?GetType@audObject@@QAE?AW4AUDTYPE@audManager@@XZ
    inline enum audManager::AUDTYPE GetType()
    {
        return stub<member_func_t<enum audManager::AUDTYPE, audObject>>(0x5A2710, this);
    }

    // 0x5A2720 | ?SetHandle@audObject@@QAEXH@Z
    inline void SetHandle(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2720, this, arg1);
    }

    // 0x5A2730 | ?GetHandle@audObject@@QAEHXZ
    inline i32 GetHandle()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2730, this);
    }

    // 0x5A2740 | ?CreateStreamControl@audObject@@QAEPAVaudStream@@H@Z
    inline class audStream* CreateStreamControl(i32 arg1)
    {
        return stub<member_func_t<class audStream*, audObject, i32>>(0x5A2740, this, arg1);
    }

    // 0x5A2770 | ?GetStreamControl@audObject@@QAEPAVaudStream@@XZ
    inline class audStream* GetStreamControl()
    {
        return stub<member_func_t<class audStream*, audObject>>(0x5A2770, this);
    }

    // 0x5A2780 | ?CreateFXControl@audObject@@QAEPAVaudFX@@XZ
    inline class audFX* CreateFXControl()
    {
        return stub<member_func_t<class audFX*, audObject>>(0x5A2780, this);
    }

    // 0x5A27A0 | ?GetFXControl@audObject@@QAEPAVaudFX@@XZ
    inline class audFX* GetFXControl()
    {
        return stub<member_func_t<class audFX*, audObject>>(0x5A27A0, this);
    }

    // 0x5A27B0 | ?StopPCEchoBuffer@audObject@@QAEXXZ
    inline void StopPCEchoBuffer()
    {
        return stub<member_func_t<void, audObject>>(0x5A27B0, this);
    }

    // 0x5A27D0 | ?SetVolPCEchoBuffer@audObject@@QAEXM@Z
    inline void SetVolPCEchoBuffer(f32 arg1)
    {
        return stub<member_func_t<void, audObject, f32>>(0x5A27D0, this, arg1);
    }

    // 0x5A27F0 | ?GetFile@audObject@@QAEPAVaudFileSystem@@XZ
    inline class audFileSystem* GetFile()
    {
        return stub<member_func_t<class audFileSystem*, audObject>>(0x5A27F0, this);
    }

    // 0x5A2800 | ?GetManager@audObject@@QAEPAVaudManager@@XZ
    inline class audManager* GetManager()
    {
        return stub<member_func_t<class audManager*, audObject>>(0x5A2800, this);
    }

    // 0x5A2810 | ?Update@audObject@@QAE_NH@Z
    inline bool Update(i32 arg1)
    {
        return stub<member_func_t<bool, audObject, i32>>(0x5A2810, this, arg1);
    }

    // 0x5A2990 | ?GetStatus@audObject@@QAE?AW4AUD_OBJECTSTATUS@1@XZ
    inline enum audObject::AUD_OBJECTSTATUS GetStatus()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTSTATUS, audObject>>(0x5A2990, this);
    }

    // 0x5A29C0 | ?PauseResume@audObject@@QAE_N_N@Z
    inline bool PauseResume(bool arg1)
    {
        return stub<member_func_t<bool, audObject, bool>>(0x5A29C0, this, arg1);
    }

    // 0x5A29D0 | ?Play@audObject@@QAE_NXZ
    inline bool Play()
    {
        return stub<member_func_t<bool, audObject>>(0x5A29D0, this);
    }

    // 0x5A2A30 | ?Stop@audObject@@QAE_NXZ
    inline bool Stop()
    {
        return stub<member_func_t<bool, audObject>>(0x5A2A30, this);
    }

    // 0x5A2A60 | ?SetVolume@audObject@@QAE_NM@Z
    inline bool SetVolume(f32 arg1)
    {
        return stub<member_func_t<bool, audObject, f32>>(0x5A2A60, this, arg1);
    }

    // 0x5A2B60 | ?SetPitch@audObject@@QAE_NM@Z
    inline bool SetPitch(f32 arg1)
    {
        return stub<member_func_t<bool, audObject, f32>>(0x5A2B60, this, arg1);
    }

    // 0x5A2BC0 | ?SetPan@audObject@@QAE_NM@Z
    inline bool SetPan(f32 arg1)
    {
        return stub<member_func_t<bool, audObject, f32>>(0x5A2BC0, this, arg1);
    }

    // 0x5A2C20 | ?SetPriority@audObject@@QAEXH@Z
    inline void SetPriority(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2C20, this, arg1);
    }

    // 0x5A2C50 | ?GetPriority@audObject@@QAEHXZ
    inline i32 GetPriority()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2C50, this);
    }

    // 0x5A2C60 | ?SetCreatedBufferFlag@audObject@@QAEX_N@Z
    inline void SetCreatedBufferFlag(bool arg1)
    {
        return stub<member_func_t<void, audObject, bool>>(0x5A2C60, this, arg1);
    }

    // 0x5A2C70 | ?GetCreatedBufferFlag@audObject@@QAE_NXZ
    inline bool GetCreatedBufferFlag()
    {
        return stub<member_func_t<bool, audObject>>(0x5A2C70, this);
    }

    // 0x5A2C80 | ?SetNbrChannels@audObject@@QAEXH@Z
    inline void SetNbrChannels(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2C80, this, arg1);
    }

    // 0x5A2C90 | ?SetNbrSamplesPerSec@audObject@@QAEXH@Z
    inline void SetNbrSamplesPerSec(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2C90, this, arg1);
    }

    // 0x5A2CA0 | ?SetBitsPerSample@audObject@@QAEXH@Z
    inline void SetBitsPerSample(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2CA0, this, arg1);
    }

    // 0x5A2CB0 | ?SetTotalSize@audObject@@QAEXH@Z
    inline void SetTotalSize(i32 arg1)
    {
        return stub<member_func_t<void, audObject, i32>>(0x5A2CB0, this, arg1);
    }

    // 0x5A2CC0 | ?SetFlags@audObject@@QAEXW4AUD_OBJECTFLAGS@1@0@Z
    inline void SetFlags(enum audObject::AUD_OBJECTFLAGS arg1, enum audObject::AUD_OBJECTFLAGS arg2)
    {
        return stub<member_func_t<void, audObject, enum audObject::AUD_OBJECTFLAGS, enum audObject::AUD_OBJECTFLAGS>>(
            0x5A2CC0, this, arg1, arg2);
    }

    // 0x5A2CE0 | ?GetFlags@audObject@@QAE?AW4AUD_OBJECTFLAGS@1@XZ
    inline enum audObject::AUD_OBJECTFLAGS GetFlags()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTFLAGS, audObject>>(0x5A2CE0, this);
    }

    // 0x5A2CF0 | ?SetDefaults@audObject@@QAEXPAU_soundattribs_@@@Z
    inline void SetDefaults(struct _soundattribs_* arg1)
    {
        return stub<member_func_t<void, audObject, struct _soundattribs_*>>(0x5A2CF0, this, arg1);
    }

    // 0x5A2D40 | ?SetDefaultVolume@audObject@@QAEXM@Z
    inline void SetDefaultVolume(f32 arg1)
    {
        return stub<member_func_t<void, audObject, f32>>(0x5A2D40, this, arg1);
    }

    // 0x5A2E00 | ?SetDefaultPitch@audObject@@QAEXM@Z
    inline void SetDefaultPitch(f32 arg1)
    {
        return stub<member_func_t<void, audObject, f32>>(0x5A2E00, this, arg1);
    }

    // 0x5A2E20 | ?SetDefaultPan@audObject@@QAEXM@Z
    inline void SetDefaultPan(f32 arg1)
    {
        return stub<member_func_t<void, audObject, f32>>(0x5A2E20, this, arg1);
    }

    // 0x5A2E40 | ?Set3DPosition@audObject@@QAEXPAU_audvector3_@@@Z
    inline void Set3DPosition(struct _audvector3_* arg1)
    {
        return stub<member_func_t<void, audObject, struct _audvector3_*>>(0x5A2E40, this, arg1);
    }

    // 0x5A2E70 | ?Set3DVelocity@audObject@@QAEXPAU_audvector3_@@@Z
    inline void Set3DVelocity(struct _audvector3_* arg1)
    {
        return stub<member_func_t<void, audObject, struct _audvector3_*>>(0x5A2E70, this, arg1);
    }

    // 0x5A2EA0 | ?GetVolume@audObject@@QAEMXZ
    inline f32 GetVolume()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2EA0, this);
    }

    // 0x5A2EB0 | ?GetPitch@audObject@@QAEMXZ
    inline f32 GetPitch()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2EB0, this);
    }

    // 0x5A2EC0 | ?GetPan@audObject@@QAEMXZ
    inline f32 GetPan()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2EC0, this);
    }

    // 0x5A2ED0 | ?Get3D@audObject@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* Get3D()
    {
        return stub<member_func_t<struct _audvector3_*, audObject>>(0x5A2ED0, this);
    }

    // 0x5A2EE0 | ?GetDefaultVolume@audObject@@QAEMXZ
    inline f32 GetDefaultVolume()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2EE0, this);
    }

    // 0x5A2EF0 | ?GetDefaultPitch@audObject@@QAEMXZ
    inline f32 GetDefaultPitch()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2EF0, this);
    }

    // 0x5A2F00 | ?GetDefaultPan@audObject@@QAEMXZ
    inline f32 GetDefaultPan()
    {
        return stub<member_func_t<f32, audObject>>(0x5A2F00, this);
    }

    // 0x5A2F10 | ?Get3DPosition@audObject@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* Get3DPosition()
    {
        return stub<member_func_t<struct _audvector3_*, audObject>>(0x5A2F10, this);
    }

    // 0x5A2F20 | ?Get3DVelocity@audObject@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* Get3DVelocity()
    {
        return stub<member_func_t<struct _audvector3_*, audObject>>(0x5A2F20, this);
    }

    // 0x5A2F30 | ?GetSoundBank@audObject@@QAEPAVaudSoundBankHdr@@XZ
    inline class audSoundBankHdr* GetSoundBank()
    {
        return stub<member_func_t<class audSoundBankHdr*, audObject>>(0x5A2F30, this);
    }

    // 0x5A2F40 | ?GetBankHandle@audObject@@QAEHXZ
    inline i32 GetBankHandle()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2F40, this);
    }

    // 0x5A2F50 | ?GetNChannels@audObject@@QAEHXZ
    inline i32 GetNChannels()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2F50, this);
    }

    // 0x5A2F60 | ?GetSamplesPerSec@audObject@@QAEHXZ
    inline i32 GetSamplesPerSec()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2F60, this);
    }

    // 0x5A2F70 | ?GetBitsPerSample@audObject@@QAEHXZ
    inline i32 GetBitsPerSample()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2F70, this);
    }

    // 0x5A2F80 | ?GetTotalSize@audObject@@QAEHXZ
    inline i32 GetTotalSize()
    {
        return stub<member_func_t<i32, audObject>>(0x5A2F80, this);
    }

    // 0x5A2F90 | ?RewindFile@audObject@@QAEXXZ
    inline void RewindFile()
    {
        return stub<member_func_t<void, audObject>>(0x5A2F90, this);
    }
};
