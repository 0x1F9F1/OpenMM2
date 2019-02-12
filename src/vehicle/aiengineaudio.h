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
    vehicle:aiengineaudio

    0x4DA720 | public: __thiscall aiEngineAudio::aiEngineAudio(void) | ??0aiEngineAudio@@QAE@XZ
    0x4DA740 | public: __thiscall aiEngineAudio::aiEngineAudio(class aiEngineAudio *) | ??0aiEngineAudio@@QAE@PAV0@@Z
    0x4DA820 | public: __thiscall aiEngineAudio::~aiEngineAudio(void) | ??1aiEngineAudio@@QAE@XZ
    0x4DA8D0 | public: static int __cdecl aiEngineAudio::Load(class aiEngineAudio * *,char *,char *,int *) | ?Load@aiEngineAudio@@SAHPAPAV1@PAD1PAH@Z
    0x4DA990 | public: static void __cdecl aiEngineAudio::AddToHash(char *,int) | ?AddToHash@aiEngineAudio@@SAXPADH@Z
    0x4DA9D0 | private: int __thiscall aiEngineAudio::ReadCSV(class Stream *) | ?ReadCSV@aiEngineAudio@@AAEHPAVStream@@@Z
    0x4DAC10 | public: void __thiscall aiEngineAudio::EchoOn(float) | ?EchoOn@aiEngineAudio@@QAEXM@Z
    0x4DAC40 | public: void __thiscall aiEngineAudio::EchoOff(void) | ?EchoOff@aiEngineAudio@@QAEXXZ
    0x4DAC50 | public: void __thiscall aiEngineAudio::UpdateEcho(void) | ?UpdateEcho@aiEngineAudio@@QAEXXZ
    0x4DAC60 | public: void __thiscall aiEngineAudio::AssignSounds(int) | ?AssignSounds@aiEngineAudio@@QAEXH@Z
    0x4DAC80 | public: void __thiscall aiEngineAudio::UnAssignSounds(void) | ?UnAssignSounds@aiEngineAudio@@QAEXXZ
    0x4DACA0 | public: void __thiscall aiEngineAudio::CalculatePitch(float,float,int) | ?CalculatePitch@aiEngineAudio@@QAEXMMH@Z
    0x4DAD30 | public: void __thiscall aiEngineAudio::UpdateDoppler(float,float,float) | ?UpdateDoppler@aiEngineAudio@@QAEXMMM@Z
*/

// #include "hooking.h"
