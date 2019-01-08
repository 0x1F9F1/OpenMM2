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

#include "hooking.h"
