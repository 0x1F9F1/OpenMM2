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
    ageaudio:aud3dsamplewrapper

    0x5139A0 | public: __thiscall Aud3DSampleWrapper::Aud3DSampleWrapper(char *,int,unsigned long) | ??0Aud3DSampleWrapper@@QAE@PADHK@Z
    0x513AE0 | public: __thiscall Aud3DSampleWrapper::Aud3DSampleWrapper(int,int,unsigned long) | ??0Aud3DSampleWrapper@@QAE@HHK@Z
    0x513BB0 | public: __thiscall Aud3DSampleWrapper::~Aud3DSampleWrapper(void) | ??1Aud3DSampleWrapper@@QAE@XZ
    0x513C20 | public: void __thiscall Aud3DSampleWrapper::SetSampleName(char *) | ?SetSampleName@Aud3DSampleWrapper@@QAEXPAD@Z
    0x513C40 | public: void __thiscall Aud3DSampleWrapper::Load(char *,int) | ?Load@Aud3DSampleWrapper@@QAEXPADH@Z
    0x513CA0 | public: class AudSoundBase * __thiscall Aud3DSampleWrapper::GetSoundPtr(short) | ?GetSoundPtr@Aud3DSampleWrapper@@QAEPAVAudSoundBase@@F@Z
    0x513CC0 | public: void __thiscall Aud3DSampleWrapper::Update(void) | ?Update@Aud3DSampleWrapper@@QAEXXZ
*/

#include "hooking.h"
