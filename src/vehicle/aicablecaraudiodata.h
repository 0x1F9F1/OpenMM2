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
    vehicle:aicablecaraudiodata

    0x59E2B0 | public: __thiscall aiCableCarAudioData::aiCableCarAudioData(void) | ??0aiCableCarAudioData@@QAE@XZ
    0x59E340 | public: __thiscall aiCableCarAudioData::~aiCableCarAudioData(void) | ??1aiCableCarAudioData@@QAE@XZ
    0x59E350 | public: void __thiscall aiCableCarAudioData::Stop(void) | ?Stop@aiCableCarAudioData@@QAEXXZ
    0x59E380 | public: class AudSoundBase * __thiscall aiCableCarAudioData::GetGoPtr(void) | ?GetGoPtr@aiCableCarAudioData@@QAEPAVAudSoundBase@@XZ
    0x59E390 | public: class AudSoundBase * __thiscall aiCableCarAudioData::GetStopPtr(void) | ?GetStopPtr@aiCableCarAudioData@@QAEPAVAudSoundBase@@XZ
    0x59E3A0 | public: class AudSoundBase * __thiscall aiCableCarAudioData::GetLoopPtr(void) | ?GetLoopPtr@aiCableCarAudioData@@QAEPAVAudSoundBase@@XZ
    0x59E3B0 | public: class AudSoundBase * __thiscall aiCableCarAudioData::GetGetSpeedPtr(void) | ?GetGetSpeedPtr@aiCableCarAudioData@@QAEPAVAudSoundBase@@XZ
    0x59E3C0 | public: class AudSoundBase * __thiscall aiCableCarAudioData::GetCrossIntersectionPtr(void) | ?GetCrossIntersectionPtr@aiCableCarAudioData@@QAEPAVAudSoundBase@@XZ
    0x59E3D0 | public: void __thiscall aiCableCarAudioData::UpdatePlay(float,float,float) | ?UpdatePlay@aiCableCarAudioData@@QAEXMMM@Z
    0x59E580 | public: void __thiscall aiCableCarAudioData::UpdateState(float,float) | ?UpdateState@aiCableCarAudioData@@QAEXMM@Z
    0x59E630 | public: void __thiscall aiCableCarAudioData::AssignSounds(int) | ?AssignSounds@aiCableCarAudioData@@QAEXH@Z
    0x59E6A0 | public: void __thiscall aiCableCarAudioData::UnAssignSounds(void) | ?UnAssignSounds@aiCableCarAudioData@@QAEXXZ
*/

#include "hooking.h"
