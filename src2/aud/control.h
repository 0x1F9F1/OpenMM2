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

class audControl
{
public:
    // 0x59FF40 | ?Init@audControl@@QAEXW4AUDTYPE@audManager@@PAV3@@Z
    inline void Init(enum audManager::AUDTYPE arg1, class audManager* arg2)
    {
        return stub<member_func_t<void, audControl, enum audManager::AUDTYPE, class audManager*>>(
            0x59FF40, this, arg1, arg2);
    }

    // 0x59FFA0 | ?Create@audControl@@QAEPAV1@W4AUDTYPE@audManager@@PAV3@@Z
    inline class audControl* Create(enum audManager::AUDTYPE arg1, class audManager* arg2)
    {
        return stub<member_func_t<class audControl*, audControl, enum audManager::AUDTYPE, class audManager*>>(
            0x59FFA0, this, arg1, arg2);
    }

    // 0x59FFD0 | ?SetMaxConcurrent@audControl@@QAEXH@Z
    inline void SetMaxConcurrent(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x59FFD0, this, arg1);
    }

    // 0x5A0010 | ?Update@audControl@@QAEXH@Z
    inline void Update(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A0010, this, arg1);
    }

    // 0x5A0060 | ?Add@audControl@@QAEHPAVaudObject@@H@Z
    inline i32 Add(class audObject* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, audControl, class audObject*, i32>>(0x5A0060, this, arg1, arg2);
    }

    // 0x5A00C0 | ?Remove@audControl@@QAE_NPAVaudObject@@H@Z
    inline bool Remove(class audObject* arg1, i32 arg2)
    {
        return stub<member_func_t<bool, audControl, class audObject*, i32>>(0x5A00C0, this, arg1, arg2);
    }

    // 0x5A0180 | ?GetManager@audControl@@QAEPAVaudManager@@XZ
    inline class audManager* GetManager()
    {
        return stub<member_func_t<class audManager*, audControl>>(0x5A0180, this);
    }

    // 0x5A0190 | ?MoveToActive@audControl@@QAE_NW4AUDTYPE@audManager@@PAVaudObject@@@Z
    inline bool MoveToActive(enum audManager::AUDTYPE arg1, class audObject* arg2)
    {
        return stub<member_func_t<bool, audControl, enum audManager::AUDTYPE, class audObject*>>(
            0x5A0190, this, arg1, arg2);
    }

    // 0x5A0290 | ?MoveFromActive@audControl@@QAE_NW4AUDTYPE@audManager@@PAVaudObject@@@Z
    inline bool MoveFromActive(enum audManager::AUDTYPE arg1, class audObject* arg2)
    {
        return stub<member_func_t<bool, audControl, enum audManager::AUDTYPE, class audObject*>>(
            0x5A0290, this, arg1, arg2);
    }

    // 0x5A0300 | ?FindObjectByHandle@audControl@@QAEPAVaudObject@@H@Z
    inline class audObject* FindObjectByHandle(i32 arg1)
    {
        return stub<member_func_t<class audObject*, audControl, i32>>(0x5A0300, this, arg1);
    }

    // 0x5A03B0 | ?GetObjectHandle@audControl@@QAEHPAVaudObject@@@Z
    inline i32 GetObjectHandle(class audObject* arg1)
    {
        return stub<member_func_t<i32, audControl, class audObject*>>(0x5A03B0, this, arg1);
    }

    // 0x5A03C0 | ?FindActiveObjectByHandle@audControl@@QAEPAVaudObject@@H@Z
    inline class audObject* FindActiveObjectByHandle(i32 arg1)
    {
        return stub<member_func_t<class audObject*, audControl, i32>>(0x5A03C0, this, arg1);
    }

    // 0x5A0420 | ?ResetAutoHandle@audControl@@QAEXH@Z
    inline void ResetAutoHandle(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A0420, this, arg1);
    }

    // 0x5A0430 | ?SetHandle@audControl@@QAEXH@Z
    inline void SetHandle(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A0430, this, arg1);
    }

    // 0x5A0440 | ?GetHandle@audControl@@QAEHXZ
    inline i32 GetHandle()
    {
        return stub<member_func_t<i32, audControl>>(0x5A0440, this);
    }

    // 0x5A0450 | ?Count@audControl@@QAEHXZ
    inline i32 Count()
    {
        return stub<member_func_t<i32, audControl>>(0x5A0450, this);
    }

    // 0x5A0490 | ?SetPath@audControl@@QAEXPBD@Z
    inline void SetPath(char const* arg1)
    {
        return stub<member_func_t<void, audControl, char const*>>(0x5A0490, this, arg1);
    }

    // 0x5A04E0 | ?GetPath@audControl@@QAEPADXZ
    inline char* GetPath()
    {
        return stub<member_func_t<char*, audControl>>(0x5A04E0, this);
    }

    // 0x5A04F0 | ?SetAssetDbId@audControl@@QAEXH@Z
    inline void SetAssetDbId(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A04F0, this, arg1);
    }

    // 0x5A0500 | ?GetAssetDbId@audControl@@QAEHXZ
    inline i32 GetAssetDbId()
    {
        return stub<member_func_t<i32, audControl>>(0x5A0500, this);
    }

    // 0x5A0510 | ?SetVolume@audControl@@QAEXMH@Z
    inline void SetVolume(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, audControl, f32, i32>>(0x5A0510, this, arg1, arg2);
    }

    // 0x5A05B0 | ?SetPan@audControl@@QAEXMH@Z
    inline void SetPan(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, audControl, f32, i32>>(0x5A05B0, this, arg1, arg2);
    }

    // 0x5A0650 | ?SetPitch@audControl@@QAEXMH@Z
    inline void SetPitch(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, audControl, f32, i32>>(0x5A0650, this, arg1, arg2);
    }

    // 0x5A06F0 | ?GetVolume@audControl@@QAEMH@Z
    inline f32 GetVolume(i32 arg1)
    {
        return stub<member_func_t<f32, audControl, i32>>(0x5A06F0, this, arg1);
    }

    // 0x5A0750 | ?GetPan@audControl@@QAEMH@Z
    inline f32 GetPan(i32 arg1)
    {
        return stub<member_func_t<f32, audControl, i32>>(0x5A0750, this, arg1);
    }

    // 0x5A07B0 | ?GetPitch@audControl@@QAEMH@Z
    inline f32 GetPitch(i32 arg1)
    {
        return stub<member_func_t<f32, audControl, i32>>(0x5A07B0, this, arg1);
    }

    // 0x5A0810 | ?Play@audControl@@QAE_NH@Z
    inline bool Play(i32 arg1)
    {
        return stub<member_func_t<bool, audControl, i32>>(0x5A0810, this, arg1);
    }

    // 0x5A0870 | ?PlayRandom@audControl@@QAE_NH@Z
    inline bool PlayRandom(i32 arg1)
    {
        return stub<member_func_t<bool, audControl, i32>>(0x5A0870, this, arg1);
    }

    // 0x5A08D0 | ?Stop@audControl@@QAE_NH@Z
    inline bool Stop(i32 arg1)
    {
        return stub<member_func_t<bool, audControl, i32>>(0x5A08D0, this, arg1);
    }

    // 0x5A0940 | ?PauseResume@audControl@@QAE_N_NH@Z
    inline bool PauseResume(bool arg1, i32 arg2)
    {
        return stub<member_func_t<bool, audControl, bool, i32>>(0x5A0940, this, arg1, arg2);
    }

    // 0x5A09B0 | ?SetPosition@audControl@@QAEXPAU_audvector3_@@H@Z
    inline void SetPosition(struct _audvector3_* arg1, i32 arg2)
    {
        return stub<member_func_t<void, audControl, struct _audvector3_*, i32>>(0x5A09B0, this, arg1, arg2);
    }

    // 0x5A09F0 | ?Enable3DMode@audControl@@QAEXH@Z
    inline void Enable3DMode(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A09F0, this, arg1);
    }

    // 0x5A0A90 | ?Disable3DMode@audControl@@QAEXH@Z
    inline void Disable3DMode(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A0A90, this, arg1);
    }

    // 0x5A0B30 | ?GetPosition@audControl@@QAEPAU_audvector3_@@H@Z
    inline struct _audvector3_* GetPosition(i32 arg1)
    {
        return stub<member_func_t<struct _audvector3_*, audControl, i32>>(0x5A0B30, this, arg1);
    }

    // 0x5A0B60 | ?Destroy@audControl@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audControl>>(0x5A0B60, this);
    }

    // 0x5A0BF0 | ?FreeAndDestroy@audControl@@QAEXXZ
    inline void FreeAndDestroy()
    {
        return stub<member_func_t<void, audControl>>(0x5A0BF0, this);
    }

    // 0x5A0C20 | ?SetControlFlags@audControl@@QAEXW4AUDCONTROLFLAGS@1@0@Z
    inline void SetControlFlags(enum audControl::AUDCONTROLFLAGS arg1, enum audControl::AUDCONTROLFLAGS arg2)
    {
        return stub<
            member_func_t<void, audControl, enum audControl::AUDCONTROLFLAGS, enum audControl::AUDCONTROLFLAGS>>(
            0x5A0C20, this, arg1, arg2);
    }

    // 0x5A0C40 | ?GetControlFlags@audControl@@QAEHXZ
    inline i32 GetControlFlags()
    {
        return stub<member_func_t<i32, audControl>>(0x5A0C40, this);
    }

    // 0x5A0C50 | ?SetPriority@audControl@@QAEXH@Z
    inline void SetPriority(i32 arg1)
    {
        return stub<member_func_t<void, audControl, i32>>(0x5A0C50, this, arg1);
    }

    // 0x5A0C80 | ?GetPriority@audControl@@QAEHXZ
    inline i32 GetPriority()
    {
        return stub<member_func_t<i32, audControl>>(0x5A0C80, this);
    }

    // 0x5A0C90 | ?StopPCEchoBuffers@audControl@@QAEXXZ
    inline void StopPCEchoBuffers()
    {
        return stub<member_func_t<void, audControl>>(0x5A0C90, this);
    }

    // 0x5A0CF0 | ?SetVolPCEchoBuffers@audControl@@QAEXM@Z
    inline void SetVolPCEchoBuffers(f32 arg1)
    {
        return stub<member_func_t<void, audControl, f32>>(0x5A0CF0, this, arg1);
    }
};
