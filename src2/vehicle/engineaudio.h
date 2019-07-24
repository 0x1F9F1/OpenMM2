/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    vehicle:engineaudio

    0x4DD8B0 | public: __thiscall vehEngineAudio::vehEngineAudio(void) | ??0vehEngineAudio@@QAE@XZ
    0x4DD8C0 | public: virtual __thiscall vehEngineAudio::~vehEngineAudio(void) | ??1vehEngineAudio@@UAE@XZ
    0x4DD930 | public: int __thiscall vehEngineAudio::GetSoundIndex(int) | ?GetSoundIndex@vehEngineAudio@@QAEHH@Z
    0x4DD950 | public: void __thiscall vehEngineAudio::Stop(void) | ?Stop@vehEngineAudio@@QAEXXZ
    0x4DD980 | public: void __thiscall vehEngineAudio::UpdateRPM(float,float,float,float) | ?UpdateRPM@vehEngineAudio@@QAEXMMMM@Z
    0x4DD9C0 | public: void __thiscall vehEngineAudio::UpdateRPM(float) | ?UpdateRPM@vehEngineAudio@@QAEXM@Z
    0x4DD9F0 | public: void __thiscall vehEngineAudio::EchoOn(float) | ?EchoOn@vehEngineAudio@@QAEXM@Z
    0x4DDA20 | public: void __thiscall vehEngineAudio::EchoOff(void) | ?EchoOff@vehEngineAudio@@QAEXXZ
    0x4DDA50 | public: void __thiscall vehEngineAudio::Enable3DMode(class Vector3 *) | ?Enable3DMode@vehEngineAudio@@QAEXPAVVector3@@@Z
    0x4DDA60 | public: void __thiscall vehEngineAudio::Disable3DMode(void) | ?Disable3DMode@vehEngineAudio@@QAEXXZ
    0x4DDA70 | public: void __thiscall vehEngineAudio::AssignSounds(int) | ?AssignSounds@vehEngineAudio@@QAEXH@Z
    0x4DDAC0 | public: void __thiscall vehEngineAudio::UnAssignSounds(void) | ?UnAssignSounds@vehEngineAudio@@QAEXXZ
    0x4DDAF0 | public: int __thiscall vehEngineAudio::Load(class Stream *) | ?Load@vehEngineAudio@@QAEHPAVStream@@@Z
    public: void __thiscall vehEngineAudio::AddWidgets(class bkBank &) | ?AddWidgets@vehEngineAudio@@QAEXAAVbkBank@@@Z
    public: void __thiscall vehEngineAudio::WidgetGlobalAtten(void) | ?WidgetGlobalAtten@vehEngineAudio@@QAEXXZ
    public: void __thiscall vehEngineAudio::SaveParamsPlay(void) | ?SaveParamsPlay@vehEngineAudio@@QAEXXZ
    public: void __thiscall vehEngineAudio::SaveParamsOpp(void) | ?SaveParamsOpp@vehEngineAudio@@QAEXXZ
    private: void __thiscall vehEngineAudio::SaveParams(char *) | ?SaveParams@vehEngineAudio@@AAEXPAD@Z
    public: void __thiscall vehEngineAudio::SetCSVFileName(char *) | ?SetCSVFileName@vehEngineAudio@@QAEXPAD@Z
    0x4DDCD0 | public: void __thiscall vehEngineAudio::Silence(int) | ?Silence@vehEngineAudio@@QAEXH@Z
    0x4DDD00 | public: void __thiscall vehEngineAudio::SetPan(float) | ?SetPan@vehEngineAudio@@QAEXM@Z
    public: virtual void * __thiscall vehEngineAudio::`vector deleting destructor'(unsigned int) | ??_EvehEngineAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehEngineAudio::`scalar deleting destructor'(unsigned int) | ??_GvehEngineAudio@@UAEPAXI@Z
    const vehEngineAudio::`vftable' | ??_7vehEngineAudio@@6B@
*/

struct vehEngineAudio
{
public:
    // 0x4DD8B0 | ??0vehEngineAudio@@QAE@XZ
    inline vehEngineAudio()
    {
        stub<member_func_t<void, vehEngineAudio>>(0x4DD8B0, this);
    }

    // 0x4DD930 | ?GetSoundIndex@vehEngineAudio@@QAEHH@Z
    inline int32_t GetSoundIndex(int32_t arg1)
    {
        return stub<member_func_t<int32_t, vehEngineAudio, int32_t>>(0x4DD930, this, arg1);
    }

    // 0x4DD950 | ?Stop@vehEngineAudio@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, vehEngineAudio>>(0x4DD950, this);
    }

    // 0x4DD980 | ?UpdateRPM@vehEngineAudio@@QAEXMMMM@Z
    inline void UpdateRPM(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, vehEngineAudio, float, float, float, float>>(
            0x4DD980, this, arg1, arg2, arg3, arg4);
    }

    // 0x4DD9C0 | ?UpdateRPM@vehEngineAudio@@QAEXM@Z
    inline void UpdateRPM(float arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, float>>(0x4DD9C0, this, arg1);
    }

    // 0x4DD9F0 | ?EchoOn@vehEngineAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, float>>(0x4DD9F0, this, arg1);
    }

    // 0x4DDA20 | ?EchoOff@vehEngineAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, vehEngineAudio>>(0x4DDA20, this);
    }

    // 0x4DDA50 | ?Enable3DMode@vehEngineAudio@@QAEXPAVVector3@@@Z
    inline void Enable3DMode(class Vector3* arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, class Vector3*>>(0x4DDA50, this, arg1);
    }

    // 0x4DDA60 | ?Disable3DMode@vehEngineAudio@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, vehEngineAudio>>(0x4DDA60, this);
    }

    // 0x4DDA70 | ?AssignSounds@vehEngineAudio@@QAEXH@Z
    inline void AssignSounds(int32_t arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, int32_t>>(0x4DDA70, this, arg1);
    }

    // 0x4DDAC0 | ?UnAssignSounds@vehEngineAudio@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, vehEngineAudio>>(0x4DDAC0, this);
    }

    // 0x4DDAF0 | ?Load@vehEngineAudio@@QAEHPAVStream@@@Z
    inline int32_t Load(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, vehEngineAudio, class Stream*>>(0x4DDAF0, this, arg1);
    }

    // 0x4DDCD0 | ?Silence@vehEngineAudio@@QAEXH@Z
    inline void Silence(int32_t arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, int32_t>>(0x4DDCD0, this, arg1);
    }

    // 0x4DDD00 | ?SetPan@vehEngineAudio@@QAEXM@Z
    inline void SetPan(float arg1)
    {
        return stub<member_func_t<void, vehEngineAudio, float>>(0x4DDD00, this, arg1);
    }
};
