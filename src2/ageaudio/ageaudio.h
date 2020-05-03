/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "node/node.h"

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

// 0x50ED70 | ?Aud_Stream_Close@@YAXPAVStream@@@Z
void Aud_Stream_Close(class Stream* arg1);

// 0x50ED50 | ?Aud_Stream_Open@@YAPAVStream@@PAD@Z
class Stream* Aud_Stream_Open(char* arg1);

// 0x50EDF0 | ?Aud_Stream_Read@@YAHPAVStream@@PAXH@Z
i32 Aud_Stream_Read(class Stream* arg1, void* arg2, i32 arg3);

// 0x50EDA0 | ?Aud_Stream_Seek@@YAHPAVStream@@H@Z
i32 Aud_Stream_Seek(class Stream* arg1, i32 arg2);

// 0x50EDC0 | ?Aud_Stream_Size@@YAHPAVStream@@@Z
i32 Aud_Stream_Size(class Stream* arg1);

// 0x50ED90 | ?Aud_Stream_Tell@@YAHPAVStream@@@Z
i32 Aud_Stream_Tell(class Stream* arg1);

// 0x6B1474 | ?AUDMGRPTR@@3PAVAudManagerBase@@A
inline extern_var(0x6B1474, class AudManagerBase*, AUDMGRPTR);

// 0x6B1478 | ?AUDMUSICPTR@@3PAVAudStreamingMusic@@A
inline extern_var(0x6B1478, class AudStreamingMusic*, AUDMUSICPTR);

class AudManagerBase : public asNode
{
    // const AudManagerBase::`vftable' @ 0x5B4C18

public:
    // 0x50EE10 | ??0AudManagerBase@@QAE@XZ
    AudManagerBase();

    // 0x50F330 | ??_GAudManagerBase@@UAEPAXI@Z
    // 0x50EE40 | ??1AudManagerBase@@UAE@XZ
    ~AudManagerBase() override;

    // 0x50F120 | ?Disable@AudManagerBase@@QAEXXZ
    void Disable();

    // 0x50F0F0 | ?Enable@AudManagerBase@@QAEXXZ
    void Enable();

    // 0x50F300 | ?GetAgeAudioManager@AudManagerBase@@QAEPAVaudManager@@XZ
    class audManager* GetAgeAudioManager();

    // 0x50F1C0 | ?GetMasterSFXVolume@AudManagerBase@@QAEMXZ
    f32 GetMasterSFXVolume();

    // 0x50EED0 | ?Init@AudManagerBase@@QAEXHFFH@Z
    void Init(i32 arg1, i16 arg2, i16 arg3, i32 arg4);

    // 0x50F100 | ?IsEnabled@AudManagerBase@@QAE_NXZ
    bool IsEnabled();

    // 0x50F0D0 | ?IsStereo@AudManagerBase@@QAEHXZ
    i32 IsStereo();

    // 0x50F060 | ?LoadSoundBank@AudManagerBase@@QAEPAVaudSoundBankHdr@@PAD@Z
    class audSoundBankHdr* LoadSoundBank(char* arg1);

    // 0x50F230 | ?RandomizeNumber@AudManagerBase@@QAEMM@Z
    f32 RandomizeNumber(f32 arg1);

    // 0x50F290 | ?RandomizeNumber@AudManagerBase@@QAEMMM@Z
    f32 RandomizeNumber(f32 arg1, f32 arg2);

    // 0x50EF80 | ?RestartAudio@AudManagerBase@@QAEXHHH@Z
    void RestartAudio(i32 arg1, i32 arg2, i32 arg3);

    // 0x50F310 | ?SetReverb@AudManagerBase@@QAEXH@Z
    void SetReverb(i32 arg1);

    // 0x50F0C0 | ?SetReverbFlags@AudManagerBase@@QAEXHH@Z
    void SetReverbFlags(i32 arg1, i32 arg2);

    // 0x50F090 | ?SetStereoFlag@AudManagerBase@@QAEXH@Z
    void SetStereoFlag(i32 arg1);

    // 0x50F000 | ?ShutDownAudio@AudManagerBase@@QAEXXZ
    void ShutDownAudio();

    // 0x50F070 | ?SoundFXOn@AudManagerBase@@QAE_NXZ
    bool SoundFXOn();

    // 0x50F1E0 | ?StopAllSounds@AudManagerBase@@QAEXXZ
    void StopAllSounds();

    // 0x50F130 | ?Update@AudManagerBase@@UAEXXZ
    void Update() override;

    // 0x50F1A0 | ?UpdatePaused@AudManagerBase@@UAEXXZ
    void UpdatePaused() override;
};

check_size(AudManagerBase, 0x0);
