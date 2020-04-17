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
    ageaudio:audspeech

    0x510090 | public: __thiscall AudSpeech::AudSpeech(bool) | ??0AudSpeech@@QAE@_N@Z
    0x510120 | public: virtual __thiscall AudSpeech::~AudSpeech(void) | ??1AudSpeech@@UAE@XZ
    0x5101D0 | public: void __thiscall AudSpeech::SetSubPath(char *) | ?SetSubPath@AudSpeech@@QAEXPAD@Z
    0x510220 | public: void __thiscall AudSpeech::SetExtension(char *) | ?SetExtension@AudSpeech@@QAEXPAD@Z
    0x510270 | public: void __thiscall AudSpeech::AllocateSpeechData(char *,float,float) | ?AllocateSpeechData@AudSpeech@@QAEXPADMM@Z
    0x510350 | public: void __thiscall AudSpeech::AllocateQueuePlayData(void) | ?AllocateQueuePlayData@AudSpeech@@QAEXXZ
    0x5103F0 | private: void __thiscall AudSpeech::PutInQueue(int,int,float) | ?PutInQueue@AudSpeech@@AAEXHHM@Z
    0x510450 | public: void __thiscall AudSpeech::Play(int,float) | ?Play@AudSpeech@@QAEXHM@Z
    0x510480 | public: void __thiscall AudSpeech::SetVolume(float) | ?SetVolume@AudSpeech@@QAEXM@Z
    0x5104B0 | private: void __thiscall AudSpeech::SetStreamVolume(float) | ?SetStreamVolume@AudSpeech@@AAEXM@Z
    0x5104D0 | private: void __thiscall AudSpeech::SetOneShotVolume(float) | ?SetOneShotVolume@AudSpeech@@AAEXM@Z
    0x510510 | private: void __thiscall AudSpeech::PlayStream(int,float) | ?PlayStream@AudSpeech@@AAEXHM@Z
    0x510570 | private: void __thiscall AudSpeech::PlayOneShot(int,float) | ?PlayOneShot@AudSpeech@@AAEXHM@Z
    0x5105E0 | public: bool __thiscall AudSpeech::IsPlaying(void) | ?IsPlaying@AudSpeech@@QAE_NXZ
    0x510600 | public: void __thiscall AudSpeech::Play(int,int,float) | ?Play@AudSpeech@@QAEXHHM@Z
    0x510640 | private: void __thiscall AudSpeech::PlayStream(int,int,float) | ?PlayStream@AudSpeech@@AAEXHHM@Z
    0x5106B0 | private: void __thiscall AudSpeech::PlayOneShot(int,int,float) | ?PlayOneShot@AudSpeech@@AAEXHHM@Z
    0x510720 | public: void __thiscall AudSpeech::Update(void) | ?Update@AudSpeech@@QAEXXZ
    0x5107F0 | private: void __thiscall AudSpeech::EmptyQueue(void) | ?EmptyQueue@AudSpeech@@AAEXXZ
    0x510840 | public: void __thiscall AudSpeech::Stop(void) | ?Stop@AudSpeech@@QAEXXZ
    0x510890 | public: int __thiscall AudSpeech::GetCatAddValue(int) | ?GetCatAddValue@AudSpeech@@QAEHH@Z
    0x5108B0 | public: int __thiscall AudSpeech::GetEndSufixNumber(int) | ?GetEndSufixNumber@AudSpeech@@QAEHH@Z
    public: virtual void * __thiscall AudSpeech::`scalar deleting destructor'(unsigned int) | ??_GAudSpeech@@UAEPAXI@Z
    public: virtual void * __thiscall AudSpeech::`vector deleting destructor'(unsigned int) | ??_EAudSpeech@@UAEPAXI@Z
    const AudSpeech::`vftable' | ??_7AudSpeech@@6B@
*/

struct AudSpeech
{
public:
    // 0x510090 | ??0AudSpeech@@QAE@_N@Z
    AudSpeech(bool arg1)
    {
        stub<member_func_t<void, AudSpeech, bool>>(0x510090, this, arg1);
    }

    // 0x5101D0 | ?SetSubPath@AudSpeech@@QAEXPAD@Z
    void SetSubPath(char* arg1)
    {
        return stub<member_func_t<void, AudSpeech, char*>>(0x5101D0, this, arg1);
    }

    // 0x510220 | ?SetExtension@AudSpeech@@QAEXPAD@Z
    void SetExtension(char* arg1)
    {
        return stub<member_func_t<void, AudSpeech, char*>>(0x510220, this, arg1);
    }

    // 0x510270 | ?AllocateSpeechData@AudSpeech@@QAEXPADMM@Z
    void AllocateSpeechData(char* arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudSpeech, char*, f32, f32>>(0x510270, this, arg1, arg2, arg3);
    }

    // 0x510350 | ?AllocateQueuePlayData@AudSpeech@@QAEXXZ
    void AllocateQueuePlayData()
    {
        return stub<member_func_t<void, AudSpeech>>(0x510350, this);
    }

    // 0x5103F0 | ?PutInQueue@AudSpeech@@AAEXHHM@Z
    void PutInQueue(i32 arg1, i32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudSpeech, i32, i32, f32>>(0x5103F0, this, arg1, arg2, arg3);
    }

    // 0x510450 | ?Play@AudSpeech@@QAEXHM@Z
    void Play(i32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, AudSpeech, i32, f32>>(0x510450, this, arg1, arg2);
    }

    // 0x510480 | ?SetVolume@AudSpeech@@QAEXM@Z
    void SetVolume(f32 arg1)
    {
        return stub<member_func_t<void, AudSpeech, f32>>(0x510480, this, arg1);
    }

    // 0x5104B0 | ?SetStreamVolume@AudSpeech@@AAEXM@Z
    void SetStreamVolume(f32 arg1)
    {
        return stub<member_func_t<void, AudSpeech, f32>>(0x5104B0, this, arg1);
    }

    // 0x5104D0 | ?SetOneShotVolume@AudSpeech@@AAEXM@Z
    void SetOneShotVolume(f32 arg1)
    {
        return stub<member_func_t<void, AudSpeech, f32>>(0x5104D0, this, arg1);
    }

    // 0x510510 | ?PlayStream@AudSpeech@@AAEXHM@Z
    void PlayStream(i32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, AudSpeech, i32, f32>>(0x510510, this, arg1, arg2);
    }

    // 0x510570 | ?PlayOneShot@AudSpeech@@AAEXHM@Z
    void PlayOneShot(i32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, AudSpeech, i32, f32>>(0x510570, this, arg1, arg2);
    }

    // 0x5105E0 | ?IsPlaying@AudSpeech@@QAE_NXZ
    bool IsPlaying()
    {
        return stub<member_func_t<bool, AudSpeech>>(0x5105E0, this);
    }

    // 0x510600 | ?Play@AudSpeech@@QAEXHHM@Z
    void Play(i32 arg1, i32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudSpeech, i32, i32, f32>>(0x510600, this, arg1, arg2, arg3);
    }

    // 0x510640 | ?PlayStream@AudSpeech@@AAEXHHM@Z
    void PlayStream(i32 arg1, i32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudSpeech, i32, i32, f32>>(0x510640, this, arg1, arg2, arg3);
    }

    // 0x5106B0 | ?PlayOneShot@AudSpeech@@AAEXHHM@Z
    void PlayOneShot(i32 arg1, i32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudSpeech, i32, i32, f32>>(0x5106B0, this, arg1, arg2, arg3);
    }

    // 0x510720 | ?Update@AudSpeech@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, AudSpeech>>(0x510720, this);
    }

    // 0x5107F0 | ?EmptyQueue@AudSpeech@@AAEXXZ
    void EmptyQueue()
    {
        return stub<member_func_t<void, AudSpeech>>(0x5107F0, this);
    }

    // 0x510840 | ?Stop@AudSpeech@@QAEXXZ
    void Stop()
    {
        return stub<member_func_t<void, AudSpeech>>(0x510840, this);
    }

    // 0x510890 | ?GetCatAddValue@AudSpeech@@QAEHH@Z
    i32 GetCatAddValue(i32 arg1)
    {
        return stub<member_func_t<i32, AudSpeech, i32>>(0x510890, this, arg1);
    }

    // 0x5108B0 | ?GetEndSufixNumber@AudSpeech@@QAEHH@Z
    i32 GetEndSufixNumber(i32 arg1)
    {
        return stub<member_func_t<i32, AudSpeech, i32>>(0x5108B0, this, arg1);
    }
};
