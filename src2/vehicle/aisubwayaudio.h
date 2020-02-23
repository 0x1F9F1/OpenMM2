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

struct aiSubwayAudio : Aud3DAmbientObject
{
public:
    // aiSubwayAudio::`vftable' @ 0x5B876C

    // 0x59D660 | ??0aiSubwayAudio@@QAE@XZ
    inline aiSubwayAudio()
    {
        stub<member_func_t<void, aiSubwayAudio>>(0x59D660, this);
    }

    // 0x59D690 | ?Activate@aiSubwayAudio@@QAEXH@Z
    inline void Activate(i32 arg1)
    {
        return stub<member_func_t<void, aiSubwayAudio, i32>>(0x59D690, this, arg1);
    }

    // 0x59D6D0 | ?Deactivate@aiSubwayAudio@@QAEXH@Z
    inline void Deactivate(i32 arg1)
    {
        return stub<member_func_t<void, aiSubwayAudio, i32>>(0x59D6D0, this, arg1);
    }

    // 0x59D710 | ?Update@aiSubwayAudio@@QAEXM@Z
    inline void Update(f32 arg1)
    {
        return stub<member_func_t<void, aiSubwayAudio, f32>>(0x59D710, this, arg1);
    }
};
