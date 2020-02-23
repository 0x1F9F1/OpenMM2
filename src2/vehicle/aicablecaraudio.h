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
    vehicle:aicablecaraudio

    0x59D350 | public: __thiscall aiCableCarAudio::aiCableCarAudio(void) | ??0aiCableCarAudio@@QAE@XZ
    0x59D3A0 | public: virtual __thiscall aiCableCarAudio::~aiCableCarAudio(void) | ??1aiCableCarAudio@@UAE@XZ
    0x59D400 | public: void __thiscall aiCableCarAudio::Init(class Vector3 *,float *) | ?Init@aiCableCarAudio@@QAEXPAVVector3@@PAM@Z
    0x59D440 | public: void __thiscall aiCableCarAudio::Reset(void) | ?Reset@aiCableCarAudio@@QAEXXZ
    0x59D450 | public: virtual void __thiscall aiCableCarAudio::UnAssignSounds(int) | ?UnAssignSounds@aiCableCarAudio@@UAEXH@Z
    0x59D460 | public: virtual void __thiscall aiCableCarAudio::UpdateAudio(void) | ?UpdateAudio@aiCableCarAudio@@UAEXXZ
    0x59D490 | public: int __thiscall aiCableCarAudio::UpdateAudio(float) | ?UpdateAudio@aiCableCarAudio@@QAEHM@Z
    0x59D530 | public: virtual void __thiscall aiCableCarAudio::AssignSounds(void) | ?AssignSounds@aiCableCarAudio@@UAEXXZ
    public: virtual void * __thiscall aiCableCarAudio::`scalar deleting destructor'(unsigned int) | ??_GaiCableCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall aiCableCarAudio::`vector deleting destructor'(unsigned int) | ??_EaiCableCarAudio@@UAEPAXI@Z
    0x5B8754 | const aiCableCarAudio::`vftable' | ??_7aiCableCarAudio@@6B@
    private: static float aiCableCarAudio::s_fVolume | ?s_fVolume@aiCableCarAudio@@0MA
*/

struct aiCableCarAudio : Aud3DObject
{
public:
    // aiCableCarAudio::`vftable' @ 0x5B8754

    // 0x59D350 | ??0aiCableCarAudio@@QAE@XZ
    inline aiCableCarAudio()
    {
        stub<member_func_t<void, aiCableCarAudio>>(0x59D350, this);
    }

    // 0x59D400 | ?Init@aiCableCarAudio@@QAEXPAVVector3@@PAM@Z
    inline void Init(class Vector3* arg1, f32* arg2)
    {
        return stub<member_func_t<void, aiCableCarAudio, class Vector3*, f32*>>(0x59D400, this, arg1, arg2);
    }

    // 0x59D440 | ?Reset@aiCableCarAudio@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiCableCarAudio>>(0x59D440, this);
    }

    // 0x59D490 | ?UpdateAudio@aiCableCarAudio@@QAEHM@Z
    inline i32 UpdateAudio(f32 arg1)
    {
        return stub<member_func_t<i32, aiCableCarAudio, f32>>(0x59D490, this, arg1);
    }

    // 0x59D530 | ?AssignSounds@aiCableCarAudio@@UAEXXZ
    inline void AssignSounds() override
    {
        return stub<member_func_t<void, aiCableCarAudio>>(0x59D530, this);
    }

    // 0x59D450 | ?UnAssignSounds@aiCableCarAudio@@UAEXH@Z
    inline void UnAssignSounds(i32 arg1) override
    {
        return stub<member_func_t<void, aiCableCarAudio, i32>>(0x59D450, this, arg1);
    }

    // 0x59D460 | ?UpdateAudio@aiCableCarAudio@@UAEXXZ
    inline void UpdateAudio() override
    {
        return stub<member_func_t<void, aiCableCarAudio>>(0x59D460, this);
    }
};
