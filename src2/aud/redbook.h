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
    aud:redbook

    0x5A6C20 | public: bool __thiscall audRedbook::Update(int) | ?Update@audRedbook@@QAE_NH@Z
    0x5A6C30 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audRedbook::GetStatus(void) | ?GetStatus@audRedbook@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    0x5A6CB0 | public: bool __thiscall audRedbook::Play(void) | ?Play@audRedbook@@QAE_NXZ
    0x5A6D00 | public: bool __thiscall audRedbook::Stop(void) | ?Stop@audRedbook@@QAE_NXZ
    0x5A6D30 | public: bool __thiscall audRedbook::SetVolume(float) | ?SetVolume@audRedbook@@QAE_NM@Z
    0x5A6D40 | public: bool __thiscall audRedbook::SetPitch(float) | ?SetPitch@audRedbook@@QAE_NM@Z
    0x5A6D50 | public: bool __thiscall audRedbook::SetPan(float) | ?SetPan@audRedbook@@QAE_NM@Z
    0x5A6D60 | public: bool __thiscall audRedbook::PauseResume(bool) | ?PauseResume@audRedbook@@QAE_N_N@Z
    0x5A6DF0 | public: void __thiscall audRedbook::Destroy(void) | ?Destroy@audRedbook@@QAEXXZ
*/

struct audRedbook
{
public:
    // 0x5A6DF0 | ?Destroy@audRedbook@@QAEXXZ
    void Destroy();

    // 0x5A6C30 | ?GetStatus@audRedbook@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    enum audObject::AUD_OBJECTSTATUS GetStatus();

    // 0x5A6D60 | ?PauseResume@audRedbook@@QAE_N_N@Z
    bool PauseResume(bool arg1);

    // 0x5A6CB0 | ?Play@audRedbook@@QAE_NXZ
    bool Play();

    // 0x5A6D50 | ?SetPan@audRedbook@@QAE_NM@Z
    bool SetPan(f32 arg1);

    // 0x5A6D40 | ?SetPitch@audRedbook@@QAE_NM@Z
    bool SetPitch(f32 arg1);

    // 0x5A6D30 | ?SetVolume@audRedbook@@QAE_NM@Z
    bool SetVolume(f32 arg1);

    // 0x5A6D00 | ?Stop@audRedbook@@QAE_NXZ
    bool Stop();

    // 0x5A6C20 | ?Update@audRedbook@@QAE_NH@Z
    bool Update(i32 arg1);
};

check_size(audRedbook, 0x0);
