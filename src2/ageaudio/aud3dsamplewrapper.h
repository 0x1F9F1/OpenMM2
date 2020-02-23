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
    ageaudio:aud3dsamplewrapper

    0x5139A0 | public: __thiscall Aud3DSampleWrapper::Aud3DSampleWrapper(char *,int,unsigned long) | ??0Aud3DSampleWrapper@@QAE@PADHK@Z
    0x513AE0 | public: __thiscall Aud3DSampleWrapper::Aud3DSampleWrapper(int,int,unsigned long) | ??0Aud3DSampleWrapper@@QAE@HHK@Z
    0x513BB0 | public: __thiscall Aud3DSampleWrapper::~Aud3DSampleWrapper(void) | ??1Aud3DSampleWrapper@@QAE@XZ
    0x513C20 | public: void __thiscall Aud3DSampleWrapper::SetSampleName(char *) | ?SetSampleName@Aud3DSampleWrapper@@QAEXPAD@Z
    0x513C40 | public: void __thiscall Aud3DSampleWrapper::Load(char *,int) | ?Load@Aud3DSampleWrapper@@QAEXPADH@Z
    0x513CA0 | public: class AudSoundBase * __thiscall Aud3DSampleWrapper::GetSoundPtr(short) | ?GetSoundPtr@Aud3DSampleWrapper@@QAEPAVAudSoundBase@@F@Z
    0x513CC0 | public: void __thiscall Aud3DSampleWrapper::Update(void) | ?Update@Aud3DSampleWrapper@@QAEXXZ
*/

class Aud3DSampleWrapper
{
public:
    // 0x5139A0 | ??0Aud3DSampleWrapper@@QAE@PADHK@Z
    inline Aud3DSampleWrapper(char* arg1, i32 arg2, u32 arg3)
    {
        stub<member_func_t<void, Aud3DSampleWrapper, char*, i32, u32>>(0x5139A0, this, arg1, arg2, arg3);
    }

    // 0x513AE0 | ??0Aud3DSampleWrapper@@QAE@HHK@Z
    inline Aud3DSampleWrapper(i32 arg1, i32 arg2, u32 arg3)
    {
        stub<member_func_t<void, Aud3DSampleWrapper, i32, i32, u32>>(0x513AE0, this, arg1, arg2, arg3);
    }

    // 0x513BB0 | ??1Aud3DSampleWrapper@@QAE@XZ
    inline ~Aud3DSampleWrapper()
    {
        stub<member_func_t<void, Aud3DSampleWrapper>>(0x513BB0, this);
    }

    // 0x513C20 | ?SetSampleName@Aud3DSampleWrapper@@QAEXPAD@Z
    inline void SetSampleName(char* arg1)
    {
        return stub<member_func_t<void, Aud3DSampleWrapper, char*>>(0x513C20, this, arg1);
    }

    // 0x513C40 | ?Load@Aud3DSampleWrapper@@QAEXPADH@Z
    inline void Load(char* arg1, i32 arg2)
    {
        return stub<member_func_t<void, Aud3DSampleWrapper, char*, i32>>(0x513C40, this, arg1, arg2);
    }

    // 0x513CA0 | ?GetSoundPtr@Aud3DSampleWrapper@@QAEPAVAudSoundBase@@F@Z
    inline class AudSoundBase* GetSoundPtr(i16 arg1)
    {
        return stub<member_func_t<class AudSoundBase*, Aud3DSampleWrapper, i16>>(0x513CA0, this, arg1);
    }

    // 0x513CC0 | ?Update@Aud3DSampleWrapper@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, Aud3DSampleWrapper>>(0x513CC0, this);
    }
};
