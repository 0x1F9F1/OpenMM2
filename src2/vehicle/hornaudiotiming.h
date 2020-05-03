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

/*
    vehicle:hornaudiotiming

    0x4DF260 | public: __thiscall vehHornAudioTiming::vehHornAudioTiming(void) | ??0vehHornAudioTiming@@QAE@XZ
    0x4DF280 | public: __thiscall vehHornAudioTiming::vehHornAudioTiming(class vehHornAudioTiming *) | ??0vehHornAudioTiming@@QAE@PAV0@@Z
    0x4DF2E0 | public: __thiscall vehHornAudioTiming::~vehHornAudioTiming(void) | ??1vehHornAudioTiming@@QAE@XZ
    0x4DF330 | public: void __thiscall vehHornAudioTiming::Reset(void) | ?Reset@vehHornAudioTiming@@QAEXXZ
    0x4DF340 | public: void __thiscall vehHornAudioTiming::AllocPlayPause(float,float) | ?AllocPlayPause@vehHornAudioTiming@@QAEXMM@Z
    0x4DF3D0 | public: void __thiscall vehHornAudioTiming::Stop(class AudSoundBase *) | ?Stop@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
    0x4DF400 | public: void __thiscall vehHornAudioTiming::Play(class AudSoundBase *) | ?Play@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
    0x4DF440 | public: void __thiscall vehHornAudioTiming::Update(class AudSoundBase *) | ?Update@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
*/

class vehHornAudioTiming
{
public:
    // 0x4DF260 | ??0vehHornAudioTiming@@QAE@XZ
    vehHornAudioTiming();

    // 0x4DF280 | ??0vehHornAudioTiming@@QAE@PAV0@@Z
    vehHornAudioTiming(class vehHornAudioTiming* arg1);

    // 0x4DF2E0 | ??1vehHornAudioTiming@@QAE@XZ
    ~vehHornAudioTiming();

    // 0x4DF340 | ?AllocPlayPause@vehHornAudioTiming@@QAEXMM@Z
    void AllocPlayPause(f32 arg1, f32 arg2);

    // 0x4DF400 | ?Play@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
    void Play(class AudSoundBase* arg1);

    // 0x4DF330 | ?Reset@vehHornAudioTiming@@QAEXXZ
    void Reset();

    // 0x4DF3D0 | ?Stop@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
    void Stop(class AudSoundBase* arg1);

    // 0x4DF440 | ?Update@vehHornAudioTiming@@QAEXPAVAudSoundBase@@@Z
    void Update(class AudSoundBase* arg1);
};

check_size(vehHornAudioTiming, 0x14);
