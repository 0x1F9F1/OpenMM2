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
    ageaudio:aud3dobjectmanager

    0x50F360 | public: __thiscall Aud3DObjectManager::Aud3DObjectManager(int) | ??0Aud3DObjectManager@@QAE@H@Z
    0x50F440 | public: virtual __thiscall Aud3DObjectManager::~Aud3DObjectManager(void) | ??1Aud3DObjectManager@@UAE@XZ
    0x50F650 | public: void __thiscall Aud3DObjectManager::InitAmbObjContainer(char *) | ?InitAmbObjContainer@Aud3DObjectManager@@QAEXPAD@Z
    0x50F6E0 | public: int __thiscall Aud3DObjectManager::Add(class Aud3DObject *) | ?Add@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    0x50F760 | public: void __thiscall Aud3DObjectManager::Remove(class Aud3DObject *,int) | ?Remove@Aud3DObjectManager@@QAEXPAVAud3DObject@@H@Z
    0x50F790 | public: int __thiscall Aud3DObjectManager::FindGreatestDistance(class Aud3DObject *) | ?FindGreatestDistance@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    0x50F8A0 | public: int __thiscall Aud3DObjectManager::FindUnusedSlot(void) | ?FindUnusedSlot@Aud3DObjectManager@@QAEHXZ
    0x50F8D0 | public: void __thiscall Aud3DObjectManager::Process3D(bool) | ?Process3D@Aud3DObjectManager@@QAEX_N@Z
    0x50F910 | public: void __thiscall Aud3DObjectManager::Update(float) | ?Update@Aud3DObjectManager@@QAEXM@Z
    0x50F9C0 | public: void __thiscall Aud3DObjectManager::EchoOn(float) | ?EchoOn@Aud3DObjectManager@@QAEXM@Z
    0x50F9E0 | public: void __thiscall Aud3DObjectManager::EchoOff(void) | ?EchoOff@Aud3DObjectManager@@QAEXXZ
    0x50F9F0 | public: class AudSoundBase * __thiscall Aud3DObjectManager::GetSample(int,int) | ?GetSample@Aud3DObjectManager@@QAEPAVAudSoundBase@@HH@Z
    0x50FA20 | public: void __thiscall Aud3DObjectManager::SetNumScreenSplits(int) | ?SetNumScreenSplits@Aud3DObjectManager@@QAEXH@Z
    0x50FAB0 | private: char * __thiscall Aud3DObjectManager::CatName(char *,int,int) | ?CatName@Aud3DObjectManager@@AAEPADPADHH@Z
    0x50FCB0 | public: int __thiscall Aud3DObjectManager::AllocateSample(char *,unsigned long) | ?AllocateSample@Aud3DObjectManager@@QAEHPADK@Z
    0x50FE20 | public: int __thiscall Aud3DObjectManager::AllocateSample(char *,int,unsigned long) | ?AllocateSample@Aud3DObjectManager@@QAEHPADHK@Z
    public: virtual void __thiscall Aud3DObjectManager::AddWidgets(class bkBank &) | ?AddWidgets@Aud3DObjectManager@@UAEXAAVbkBank@@@Z
    public: void __thiscall Aud3DObjectManager::ToggleEcho(void) | ?ToggleEcho@Aud3DObjectManager@@QAEXXZ
    0x50FF90 | public: class Aud3DSampleWrapper * __thiscall Aud3DObjectManager::GetSampleWrapper(int) | ?GetSampleWrapper@Aud3DObjectManager@@QAEPAVAud3DSampleWrapper@@H@Z
    0x50FFB0 | public: int __thiscall Aud3DObjectManager::QueueInCopVoice(float) | ?QueueInCopVoice@Aud3DObjectManager@@QAEHM@Z
    0x50FFC0 | public: int __thiscall Aud3DObjectManager::PlayCopVoice(void) | ?PlayCopVoice@Aud3DObjectManager@@QAEHXZ
    0x50FFD0 | public: int __thiscall Aud3DObjectManager::GetClosestCop(void) | ?GetClosestCop@Aud3DObjectManager@@QAEHXZ
    0x50FFE0 | public: class Matrix34 * * __thiscall Aud3DObjectManager::GetLeftHeadPtrPtr(void) | ?GetLeftHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    0x510000 | public: class Matrix34 * * __thiscall Aud3DObjectManager::GetRightHeadPtrPtr(void) | ?GetRightHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    0x510020 | public: void __thiscall Aud3DObjectManager::SetLeftHeadPtr(class Matrix34 *,int) | ?SetLeftHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    0x510040 | public: void __thiscall Aud3DObjectManager::SetRightHeadPtr(class Matrix34 *,int) | ?SetRightHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    public: void __thiscall Aud3DObjectManager::DebugReset(void) | ?DebugReset@Aud3DObjectManager@@QAEXXZ
    public: virtual void * __thiscall Aud3DObjectManager::`vector deleting destructor'(unsigned int) | ??_EAud3DObjectManager@@UAEPAXI@Z
    0x510060 | public: virtual void * __thiscall Aud3DObjectManager::`scalar deleting destructor'(unsigned int) | ??_GAud3DObjectManager@@UAEPAXI@Z
    0x5B4C58 | const Aud3DObjectManager::`vftable' | ??_7Aud3DObjectManager@@6B@
    0x6B1494 | class Aud3DObjectManager * AUD3DOBJMGRPTR | ?AUD3DOBJMGRPTR@@3PAVAud3DObjectManager@@A
*/

// 0x6B1494 | ?AUD3DOBJMGRPTR@@3PAVAud3DObjectManager@@A
inline extern_var(0x6B1494, class Aud3DObjectManager*, AUD3DOBJMGRPTR);

class Aud3DObjectManager : asNode
{
public:
    // Aud3DObjectManager::`vftable' @ 0x5B4C58

    // 0x50F360 | ??0Aud3DObjectManager@@QAE@H@Z
    inline Aud3DObjectManager(i32 arg1)
    {
        stub<member_func_t<void, Aud3DObjectManager, i32>>(0x50F360, this, arg1);
    }

    // 0x50F650 | ?InitAmbObjContainer@Aud3DObjectManager@@QAEXPAD@Z
    inline void InitAmbObjContainer(char* arg1)
    {
        return stub<member_func_t<void, Aud3DObjectManager, char*>>(0x50F650, this, arg1);
    }

    // 0x50F6E0 | ?Add@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    inline i32 Add(class Aud3DObject* arg1)
    {
        return stub<member_func_t<i32, Aud3DObjectManager, class Aud3DObject*>>(0x50F6E0, this, arg1);
    }

    // 0x50F760 | ?Remove@Aud3DObjectManager@@QAEXPAVAud3DObject@@H@Z
    inline void Remove(class Aud3DObject* arg1, i32 arg2)
    {
        return stub<member_func_t<void, Aud3DObjectManager, class Aud3DObject*, i32>>(0x50F760, this, arg1, arg2);
    }

    // 0x50F790 | ?FindGreatestDistance@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    inline i32 FindGreatestDistance(class Aud3DObject* arg1)
    {
        return stub<member_func_t<i32, Aud3DObjectManager, class Aud3DObject*>>(0x50F790, this, arg1);
    }

    // 0x50F8A0 | ?FindUnusedSlot@Aud3DObjectManager@@QAEHXZ
    inline i32 FindUnusedSlot()
    {
        return stub<member_func_t<i32, Aud3DObjectManager>>(0x50F8A0, this);
    }

    // 0x50F8D0 | ?Process3D@Aud3DObjectManager@@QAEX_N@Z
    inline void Process3D(bool arg1)
    {
        return stub<member_func_t<void, Aud3DObjectManager, bool>>(0x50F8D0, this, arg1);
    }

    // 0x50F910 | ?Update@Aud3DObjectManager@@QAEXM@Z
    inline void Update(f32 arg1)
    {
        return stub<member_func_t<void, Aud3DObjectManager, f32>>(0x50F910, this, arg1);
    }

    // 0x50F9C0 | ?EchoOn@Aud3DObjectManager@@QAEXM@Z
    inline void EchoOn(f32 arg1)
    {
        return stub<member_func_t<void, Aud3DObjectManager, f32>>(0x50F9C0, this, arg1);
    }

    // 0x50F9E0 | ?EchoOff@Aud3DObjectManager@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, Aud3DObjectManager>>(0x50F9E0, this);
    }

    // 0x50F9F0 | ?GetSample@Aud3DObjectManager@@QAEPAVAudSoundBase@@HH@Z
    inline class AudSoundBase* GetSample(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<class AudSoundBase*, Aud3DObjectManager, i32, i32>>(0x50F9F0, this, arg1, arg2);
    }

    // 0x50FA20 | ?SetNumScreenSplits@Aud3DObjectManager@@QAEXH@Z
    inline void SetNumScreenSplits(i32 arg1)
    {
        return stub<member_func_t<void, Aud3DObjectManager, i32>>(0x50FA20, this, arg1);
    }

    // 0x50FAB0 | ?CatName@Aud3DObjectManager@@AAEPADPADHH@Z
    inline char* CatName(char* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<char*, Aud3DObjectManager, char*, i32, i32>>(0x50FAB0, this, arg1, arg2, arg3);
    }

    // 0x50FCB0 | ?AllocateSample@Aud3DObjectManager@@QAEHPADK@Z
    inline i32 AllocateSample(char* arg1, u32 arg2)
    {
        return stub<member_func_t<i32, Aud3DObjectManager, char*, u32>>(0x50FCB0, this, arg1, arg2);
    }

    // 0x50FE20 | ?AllocateSample@Aud3DObjectManager@@QAEHPADHK@Z
    inline i32 AllocateSample(char* arg1, i32 arg2, u32 arg3)
    {
        return stub<member_func_t<i32, Aud3DObjectManager, char*, i32, u32>>(0x50FE20, this, arg1, arg2, arg3);
    }

    // 0x50FF90 | ?GetSampleWrapper@Aud3DObjectManager@@QAEPAVAud3DSampleWrapper@@H@Z
    inline class Aud3DSampleWrapper* GetSampleWrapper(i32 arg1)
    {
        return stub<member_func_t<class Aud3DSampleWrapper*, Aud3DObjectManager, i32>>(0x50FF90, this, arg1);
    }

    // 0x50FFB0 | ?QueueInCopVoice@Aud3DObjectManager@@QAEHM@Z
    inline i32 QueueInCopVoice(f32 arg1)
    {
        return stub<member_func_t<i32, Aud3DObjectManager, f32>>(0x50FFB0, this, arg1);
    }

    // 0x50FFC0 | ?PlayCopVoice@Aud3DObjectManager@@QAEHXZ
    inline i32 PlayCopVoice()
    {
        return stub<member_func_t<i32, Aud3DObjectManager>>(0x50FFC0, this);
    }

    // 0x50FFD0 | ?GetClosestCop@Aud3DObjectManager@@QAEHXZ
    inline i32 GetClosestCop()
    {
        return stub<member_func_t<i32, Aud3DObjectManager>>(0x50FFD0, this);
    }

    // 0x50FFE0 | ?GetLeftHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    inline class Matrix34** GetLeftHeadPtrPtr()
    {
        return stub<member_func_t<class Matrix34**, Aud3DObjectManager>>(0x50FFE0, this);
    }

    // 0x510000 | ?GetRightHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    inline class Matrix34** GetRightHeadPtrPtr()
    {
        return stub<member_func_t<class Matrix34**, Aud3DObjectManager>>(0x510000, this);
    }

    // 0x510020 | ?SetLeftHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    inline void SetLeftHeadPtr(class Matrix34* arg1, i32 arg2)
    {
        return stub<member_func_t<void, Aud3DObjectManager, class Matrix34*, i32>>(0x510020, this, arg1, arg2);
    }

    // 0x510040 | ?SetRightHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    inline void SetRightHeadPtr(class Matrix34* arg1, i32 arg2)
    {
        return stub<member_func_t<void, Aud3DObjectManager, class Matrix34*, i32>>(0x510040, this, arg1, arg2);
    }

    // 0x50F440 | ??1Aud3DObjectManager@@UAE@XZ
    inline ~Aud3DObjectManager() override
    {
        stub<member_func_t<void, Aud3DObjectManager>>(0x50F440, this);
    }
};
