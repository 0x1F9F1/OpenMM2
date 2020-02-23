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
    mmaudio:mmspeechcontainer

    0x51B450 | public: __thiscall mmSpeechContainer::mmSpeechContainer(int,int,char *) | ??0mmSpeechContainer@@QAE@HHPAD@Z
    0x51B4C0 | public: __thiscall mmSpeechContainer::~mmSpeechContainer(void) | ??1mmSpeechContainer@@QAE@XZ
    0x51B5C0 | private: void __thiscall mmSpeechContainer::InitRace(int,int,char *) | ?InitRace@mmSpeechContainer@@AAEXHHPAD@Z
    0x51B6A0 | private: void __thiscall mmSpeechContainer::InitCC(int,char *) | ?InitCC@mmSpeechContainer@@AAEXHPAD@Z
    0x51B7A0 | public: void __thiscall mmSpeechContainer::Stop(void) | ?Stop@mmSpeechContainer@@QAEXXZ
    0x51B7B0 | public: void __thiscall mmSpeechContainer::Update(void) | ?Update@mmSpeechContainer@@QAEXXZ
    0x51B7E0 | public: class mmRaceSpeech * __thiscall mmSpeechContainer::GetRaceSpeechPtr(void) | ?GetRaceSpeechPtr@mmSpeechContainer@@QAEPAVmmRaceSpeech@@XZ
    0x51B7F0 | public: class mmCCSpeech * __thiscall mmSpeechContainer::GetCCSpeechPtr(void) | ?GetCCSpeechPtr@mmSpeechContainer@@QAEPAVmmCCSpeech@@XZ
*/

class mmSpeechContainer
{
public:
    // 0x51B450 | ??0mmSpeechContainer@@QAE@HHPAD@Z
    inline mmSpeechContainer(i32 arg1, i32 arg2, char* arg3)
    {
        stub<member_func_t<void, mmSpeechContainer, i32, i32, char*>>(0x51B450, this, arg1, arg2, arg3);
    }

    // 0x51B4C0 | ??1mmSpeechContainer@@QAE@XZ
    inline ~mmSpeechContainer()
    {
        stub<member_func_t<void, mmSpeechContainer>>(0x51B4C0, this);
    }

    // 0x51B5C0 | ?InitRace@mmSpeechContainer@@AAEXHHPAD@Z
    inline void InitRace(i32 arg1, i32 arg2, char* arg3)
    {
        return stub<member_func_t<void, mmSpeechContainer, i32, i32, char*>>(0x51B5C0, this, arg1, arg2, arg3);
    }

    // 0x51B6A0 | ?InitCC@mmSpeechContainer@@AAEXHPAD@Z
    inline void InitCC(i32 arg1, char* arg2)
    {
        return stub<member_func_t<void, mmSpeechContainer, i32, char*>>(0x51B6A0, this, arg1, arg2);
    }

    // 0x51B7A0 | ?Stop@mmSpeechContainer@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, mmSpeechContainer>>(0x51B7A0, this);
    }

    // 0x51B7B0 | ?Update@mmSpeechContainer@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmSpeechContainer>>(0x51B7B0, this);
    }

    // 0x51B7E0 | ?GetRaceSpeechPtr@mmSpeechContainer@@QAEPAVmmRaceSpeech@@XZ
    inline class mmRaceSpeech* GetRaceSpeechPtr()
    {
        return stub<member_func_t<class mmRaceSpeech*, mmSpeechContainer>>(0x51B7E0, this);
    }

    // 0x51B7F0 | ?GetCCSpeechPtr@mmSpeechContainer@@QAEPAVmmCCSpeech@@XZ
    inline class mmCCSpeech* GetCCSpeechPtr()
    {
        return stub<member_func_t<class mmCCSpeech*, mmSpeechContainer>>(0x51B7F0, this);
    }
};
