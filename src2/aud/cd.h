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
    aud:cd

    0x5A6EA0 | public: bool __thiscall audCD::Update(int) | ?Update@audCD@@QAE_NH@Z
    0x5A6EB0 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audCD::GetStatus(void) | ?GetStatus@audCD@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    0x5A6EC0 | public: bool __thiscall audCD::Play(void) | ?Play@audCD@@QAE_NXZ
    0x5A6ED0 | public: bool __thiscall audCD::Stop(void) | ?Stop@audCD@@QAE_NXZ
    0x5A6EE0 | public: bool __thiscall audCD::SetVolume(float) | ?SetVolume@audCD@@QAE_NM@Z
    0x5A6EF0 | public: bool __thiscall audCD::SetPitch(float) | ?SetPitch@audCD@@QAE_NM@Z
    0x5A6F00 | public: bool __thiscall audCD::SetPan(float) | ?SetPan@audCD@@QAE_NM@Z
    0x5A6F10 | public: bool __thiscall audCD::PauseResume(bool) | ?PauseResume@audCD@@QAE_N_N@Z
*/

struct audCD
{
public:
    // 0x5A6EA0 | ?Update@audCD@@QAE_NH@Z
    inline bool Update(i32 arg1)
    {
        return stub<member_func_t<bool, audCD, i32>>(0x5A6EA0, this, arg1);
    }

    // 0x5A6EB0 | ?GetStatus@audCD@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    inline enum audObject::AUD_OBJECTSTATUS GetStatus()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTSTATUS, audCD>>(0x5A6EB0, this);
    }

    // 0x5A6EC0 | ?Play@audCD@@QAE_NXZ
    inline bool Play()
    {
        return stub<member_func_t<bool, audCD>>(0x5A6EC0, this);
    }

    // 0x5A6ED0 | ?Stop@audCD@@QAE_NXZ
    inline bool Stop()
    {
        return stub<member_func_t<bool, audCD>>(0x5A6ED0, this);
    }

    // 0x5A6EE0 | ?SetVolume@audCD@@QAE_NM@Z
    inline bool SetVolume(f32 arg1)
    {
        return stub<member_func_t<bool, audCD, f32>>(0x5A6EE0, this, arg1);
    }

    // 0x5A6EF0 | ?SetPitch@audCD@@QAE_NM@Z
    inline bool SetPitch(f32 arg1)
    {
        return stub<member_func_t<bool, audCD, f32>>(0x5A6EF0, this, arg1);
    }

    // 0x5A6F00 | ?SetPan@audCD@@QAE_NM@Z
    inline bool SetPan(f32 arg1)
    {
        return stub<member_func_t<bool, audCD, f32>>(0x5A6F00, this, arg1);
    }

    // 0x5A6F10 | ?PauseResume@audCD@@QAE_N_N@Z
    inline bool PauseResume(bool arg1)
    {
        return stub<member_func_t<bool, audCD, bool>>(0x5A6F10, this, arg1);
    }
};
