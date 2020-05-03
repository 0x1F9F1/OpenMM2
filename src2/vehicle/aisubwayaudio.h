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

#include "ageaudio/aud3dambientobject.h"

/*
    vehicle:aisubwayaudio

    0x59D660 | public: __thiscall aiSubwayAudio::aiSubwayAudio(void) | ??0aiSubwayAudio@@QAE@XZ
    0x59D680 | public: virtual __thiscall aiSubwayAudio::~aiSubwayAudio(void) | ??1aiSubwayAudio@@UAE@XZ
    0x59D690 | public: void __thiscall aiSubwayAudio::Activate(int) | ?Activate@aiSubwayAudio@@QAEXH@Z
    0x59D6D0 | public: void __thiscall aiSubwayAudio::Deactivate(int) | ?Deactivate@aiSubwayAudio@@QAEXH@Z
    0x59D710 | public: void __thiscall aiSubwayAudio::Update(float) | ?Update@aiSubwayAudio@@QAEXM@Z
    public: virtual void * __thiscall aiSubwayAudio::`vector deleting destructor'(unsigned int) | ??_EaiSubwayAudio@@UAEPAXI@Z
    public: virtual void * __thiscall aiSubwayAudio::`scalar deleting destructor'(unsigned int) | ??_GaiSubwayAudio@@UAEPAXI@Z
    0x5B876C | const aiSubwayAudio::`vftable' | ??_7aiSubwayAudio@@6B@
*/

class aiSubwayAudio : public Aud3DAmbientObject
{
    // const aiSubwayAudio::`vftable' @ 0x5B876C

public:
    // 0x59D660 | ??0aiSubwayAudio@@QAE@XZ
    aiSubwayAudio();

    // 0x59D680 | ??1aiSubwayAudio@@UAE@XZ
    ~aiSubwayAudio();

    // 0x59D690 | ?Activate@aiSubwayAudio@@QAEXH@Z
    void Activate(i32 arg1);

    // 0x59D6D0 | ?Deactivate@aiSubwayAudio@@QAEXH@Z
    void Deactivate(i32 arg1);

    // 0x59D710 | ?Update@aiSubwayAudio@@QAEXM@Z
    void Update(f32 arg1);
};

check_size(aiSubwayAudio, 0x0);
