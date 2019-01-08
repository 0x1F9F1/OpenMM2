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

#include "hooking.h"
