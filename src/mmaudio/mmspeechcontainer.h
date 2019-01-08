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

#include "hooking.h"
