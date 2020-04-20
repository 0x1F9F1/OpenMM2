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
    ageaudio:ageaudio

    0x50ED50 | class Stream * __cdecl Aud_Stream_Open(char *) | ?Aud_Stream_Open@@YAPAVStream@@PAD@Z
    0x50ED70 | void __cdecl Aud_Stream_Close(class Stream *) | ?Aud_Stream_Close@@YAXPAVStream@@@Z
    0x50ED90 | int __cdecl Aud_Stream_Tell(class Stream *) | ?Aud_Stream_Tell@@YAHPAVStream@@@Z
    0x50EDA0 | int __cdecl Aud_Stream_Seek(class Stream *,int) | ?Aud_Stream_Seek@@YAHPAVStream@@H@Z
    0x50EDC0 | int __cdecl Aud_Stream_Size(class Stream *) | ?Aud_Stream_Size@@YAHPAVStream@@@Z
    0x50EDF0 | int __cdecl Aud_Stream_Read(class Stream *,void *,int) | ?Aud_Stream_Read@@YAHPAVStream@@PAXH@Z
    0x50EE10 | public: __thiscall AudManagerBase::AudManagerBase(void) | ??0AudManagerBase@@QAE@XZ
    0x50EE40 | public: virtual __thiscall AudManagerBase::~AudManagerBase(void) | ??1AudManagerBase@@UAE@XZ
    0x50EED0 | public: void __thiscall AudManagerBase::Init(int,short,short,int) | ?Init@AudManagerBase@@QAEXHFFH@Z
    0x50EF80 | public: void __thiscall AudManagerBase::RestartAudio(int,int,int) | ?RestartAudio@AudManagerBase@@QAEXHHH@Z
    0x50F000 | public: void __thiscall AudManagerBase::ShutDownAudio(void) | ?ShutDownAudio@AudManagerBase@@QAEXXZ
    0x50F060 | public: class audSoundBankHdr * __thiscall AudManagerBase::LoadSoundBank(char *) | ?LoadSoundBank@AudManagerBase@@QAEPAVaudSoundBankHdr@@PAD@Z
    0x50F070 | public: bool __thiscall AudManagerBase::SoundFXOn(void) | ?SoundFXOn@AudManagerBase@@QAE_NXZ
    0x50F090 | public: void __thiscall AudManagerBase::SetStereoFlag(int) | ?SetStereoFlag@AudManagerBase@@QAEXH@Z
    0x50F0C0 | public: void __thiscall AudManagerBase::SetReverbFlags(int,int) | ?SetReverbFlags@AudManagerBase@@QAEXHH@Z
    0x50F0D0 | public: int __thiscall AudManagerBase::IsStereo(void) | ?IsStereo@AudManagerBase@@QAEHXZ
    0x50F0F0 | public: void __thiscall AudManagerBase::Enable(void) | ?Enable@AudManagerBase@@QAEXXZ
    0x50F100 | public: bool __thiscall AudManagerBase::IsEnabled(void) | ?IsEnabled@AudManagerBase@@QAE_NXZ
    0x50F120 | public: void __thiscall AudManagerBase::Disable(void) | ?Disable@AudManagerBase@@QAEXXZ
    0x50F130 | public: virtual void __thiscall AudManagerBase::Update(void) | ?Update@AudManagerBase@@UAEXXZ
    0x50F1A0 | public: virtual void __thiscall AudManagerBase::UpdatePaused(void) | ?UpdatePaused@AudManagerBase@@UAEXXZ
    0x50F1C0 | public: float __thiscall AudManagerBase::GetMasterSFXVolume(void) | ?GetMasterSFXVolume@AudManagerBase@@QAEMXZ
    0x50F1E0 | public: void __thiscall AudManagerBase::StopAllSounds(void) | ?StopAllSounds@AudManagerBase@@QAEXXZ
    0x50F230 | public: float __thiscall AudManagerBase::RandomizeNumber(float) | ?RandomizeNumber@AudManagerBase@@QAEMM@Z
    0x50F290 | public: float __thiscall AudManagerBase::RandomizeNumber(float,float) | ?RandomizeNumber@AudManagerBase@@QAEMMM@Z
    0x50F300 | public: class audManager * __thiscall AudManagerBase::GetAgeAudioManager(void) | ?GetAgeAudioManager@AudManagerBase@@QAEPAVaudManager@@XZ
    0x50F310 | public: void __thiscall AudManagerBase::SetReverb(int) | ?SetReverb@AudManagerBase@@QAEXH@Z
    0x50F330 | public: virtual void * __thiscall AudManagerBase::`scalar deleting destructor'(unsigned int) | ??_GAudManagerBase@@UAEPAXI@Z
    public: virtual void * __thiscall AudManagerBase::`vector deleting destructor'(unsigned int) | ??_EAudManagerBase@@UAEPAXI@Z
    0x5B4C18 | const AudManagerBase::`vftable' | ??_7AudManagerBase@@6B@
    0x6B1474 | class AudManagerBase * AUDMGRPTR | ?AUDMGRPTR@@3PAVAudManagerBase@@A
    0x6B1478 | class AudStreamingMusic * AUDMUSICPTR | ?AUDMUSICPTR@@3PAVAudStreamingMusic@@A
*/

// 0x50ED50 | ?Aud_Stream_Open@@YAPAVStream@@PAD@Z
inline class Stream* Aud_Stream_Open(char* arg1)
{
    return stub<cdecl_t<class Stream*, char*>>(0x50ED50, arg1);
}

// 0x50ED70 | ?Aud_Stream_Close@@YAXPAVStream@@@Z
inline void Aud_Stream_Close(class Stream* arg1)
{
    return stub<cdecl_t<void, class Stream*>>(0x50ED70, arg1);
}

// 0x50ED90 | ?Aud_Stream_Tell@@YAHPAVStream@@@Z
inline int32_t Aud_Stream_Tell(class Stream* arg1)
{
    return stub<cdecl_t<int32_t, class Stream*>>(0x50ED90, arg1);
}

// 0x50EDA0 | ?Aud_Stream_Seek@@YAHPAVStream@@H@Z
inline int32_t Aud_Stream_Seek(class Stream* arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, class Stream*, int32_t>>(0x50EDA0, arg1, arg2);
}

// 0x50EDC0 | ?Aud_Stream_Size@@YAHPAVStream@@@Z
inline int32_t Aud_Stream_Size(class Stream* arg1)
{
    return stub<cdecl_t<int32_t, class Stream*>>(0x50EDC0, arg1);
}

// 0x50EDF0 | ?Aud_Stream_Read@@YAHPAVStream@@PAXH@Z
inline int32_t Aud_Stream_Read(class Stream* arg1, void* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, class Stream*, void*, int32_t>>(0x50EDF0, arg1, arg2, arg3);
}

// 0x6B1474 | ?AUDMGRPTR@@3PAVAudManagerBase@@A
inline extern_var(0x6B1474, class AudManagerBase*, AUDMGRPTR);

// 0x6B1478 | ?AUDMUSICPTR@@3PAVAudStreamingMusic@@A
inline extern_var(0x6B1478, class AudStreamingMusic*, AUDMUSICPTR);

class AudManagerBase : asNode
{
public:
    // AudManagerBase::`vftable' @ 0x5B4C18

    // 0x50EE10 | ??0AudManagerBase@@QAE@XZ
    inline AudManagerBase()
    {
        stub<member_func_t<void, AudManagerBase>>(0x50EE10, this);
    }

    // 0x50EED0 | ?Init@AudManagerBase@@QAEXHFFH@Z
    inline void Init(int32_t arg1, int16_t arg2, int16_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, AudManagerBase, int32_t, int16_t, int16_t, int32_t>>(
            0x50EED0, this, arg1, arg2, arg3, arg4);
    }

    // 0x50EF80 | ?RestartAudio@AudManagerBase@@QAEXHHH@Z
    inline void RestartAudio(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, AudManagerBase, int32_t, int32_t, int32_t>>(0x50EF80, this, arg1, arg2, arg3);
    }

    // 0x50F000 | ?ShutDownAudio@AudManagerBase@@QAEXXZ
    inline void ShutDownAudio()
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F000, this);
    }

    // 0x50F060 | ?LoadSoundBank@AudManagerBase@@QAEPAVaudSoundBankHdr@@PAD@Z
    inline class audSoundBankHdr* LoadSoundBank(char* arg1)
    {
        return stub<member_func_t<class audSoundBankHdr*, AudManagerBase, char*>>(0x50F060, this, arg1);
    }

    // 0x50F070 | ?SoundFXOn@AudManagerBase@@QAE_NXZ
    inline bool SoundFXOn()
    {
        return stub<member_func_t<bool, AudManagerBase>>(0x50F070, this);
    }

    // 0x50F090 | ?SetStereoFlag@AudManagerBase@@QAEXH@Z
    inline void SetStereoFlag(int32_t arg1)
    {
        return stub<member_func_t<void, AudManagerBase, int32_t>>(0x50F090, this, arg1);
    }

    // 0x50F0C0 | ?SetReverbFlags@AudManagerBase@@QAEXHH@Z
    inline void SetReverbFlags(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudManagerBase, int32_t, int32_t>>(0x50F0C0, this, arg1, arg2);
    }

    // 0x50F0D0 | ?IsStereo@AudManagerBase@@QAEHXZ
    inline int32_t IsStereo()
    {
        return stub<member_func_t<int32_t, AudManagerBase>>(0x50F0D0, this);
    }

    // 0x50F0F0 | ?Enable@AudManagerBase@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F0F0, this);
    }

    // 0x50F100 | ?IsEnabled@AudManagerBase@@QAE_NXZ
    inline bool IsEnabled()
    {
        return stub<member_func_t<bool, AudManagerBase>>(0x50F100, this);
    }

    // 0x50F120 | ?Disable@AudManagerBase@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F120, this);
    }

    // 0x50F1C0 | ?GetMasterSFXVolume@AudManagerBase@@QAEMXZ
    inline float GetMasterSFXVolume()
    {
        return stub<member_func_t<float, AudManagerBase>>(0x50F1C0, this);
    }

    // 0x50F1E0 | ?StopAllSounds@AudManagerBase@@QAEXXZ
    inline void StopAllSounds()
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F1E0, this);
    }

    // 0x50F230 | ?RandomizeNumber@AudManagerBase@@QAEMM@Z
    inline float RandomizeNumber(float arg1)
    {
        return stub<member_func_t<float, AudManagerBase, float>>(0x50F230, this, arg1);
    }

    // 0x50F290 | ?RandomizeNumber@AudManagerBase@@QAEMMM@Z
    inline float RandomizeNumber(float arg1, float arg2)
    {
        return stub<member_func_t<float, AudManagerBase, float, float>>(0x50F290, this, arg1, arg2);
    }

    // 0x50F300 | ?GetAgeAudioManager@AudManagerBase@@QAEPAVaudManager@@XZ
    inline class audManager* GetAgeAudioManager()
    {
        return stub<member_func_t<class audManager*, AudManagerBase>>(0x50F300, this);
    }

    // 0x50F310 | ?SetReverb@AudManagerBase@@QAEXH@Z
    inline void SetReverb(int32_t arg1)
    {
        return stub<member_func_t<void, AudManagerBase, int32_t>>(0x50F310, this, arg1);
    }

    // 0x50EE40 | ??1AudManagerBase@@UAE@XZ
    inline ~AudManagerBase() override
    {
        stub<member_func_t<void, AudManagerBase>>(0x50EE40, this);
    }

    // 0x50F130 | ?Update@AudManagerBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F130, this);
    }

    // 0x50F1A0 | ?UpdatePaused@AudManagerBase@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, AudManagerBase>>(0x50F1A0, this);
    }
};
