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
    ageaudio:aud3dambobjcontainer

    0x513710 | public: __thiscall Aud3DAmbObjContainer::Aud3DAmbObjContainer(void) | ??0Aud3DAmbObjContainer@@QAE@XZ
    0x513720 | public: __thiscall Aud3DAmbObjContainer::~Aud3DAmbObjContainer(void) | ??1Aud3DAmbObjContainer@@QAE@XZ
    0x513780 | private: bool __thiscall Aud3DAmbObjContainer::FileValid(char *) | ?FileValid@Aud3DAmbObjContainer@@AAE_NPAD@Z
    0x5137C0 | public: bool __thiscall Aud3DAmbObjContainer::Init(char *) | ?Init@Aud3DAmbObjContainer@@QAE_NPAD@Z
    0x5138A0 | private: void __thiscall Aud3DAmbObjContainer::CreateAmbientObject(char *) | ?CreateAmbientObject@Aud3DAmbObjContainer@@AAEXPAD@Z
    0x513970 | public: void __thiscall Aud3DAmbObjContainer::Update(float) | ?Update@Aud3DAmbObjContainer@@QAEXM@Z
*/

#include "hooking.h"
