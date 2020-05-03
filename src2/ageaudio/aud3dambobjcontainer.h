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
    ageaudio:aud3dambobjcontainer

    0x513710 | public: __thiscall Aud3DAmbObjContainer::Aud3DAmbObjContainer(void) | ??0Aud3DAmbObjContainer@@QAE@XZ
    0x513720 | public: __thiscall Aud3DAmbObjContainer::~Aud3DAmbObjContainer(void) | ??1Aud3DAmbObjContainer@@QAE@XZ
    0x513780 | private: bool __thiscall Aud3DAmbObjContainer::FileValid(char *) | ?FileValid@Aud3DAmbObjContainer@@AAE_NPAD@Z
    0x5137C0 | public: bool __thiscall Aud3DAmbObjContainer::Init(char *) | ?Init@Aud3DAmbObjContainer@@QAE_NPAD@Z
    0x5138A0 | private: void __thiscall Aud3DAmbObjContainer::CreateAmbientObject(char *) | ?CreateAmbientObject@Aud3DAmbObjContainer@@AAEXPAD@Z
    0x513970 | public: void __thiscall Aud3DAmbObjContainer::Update(float) | ?Update@Aud3DAmbObjContainer@@QAEXM@Z
*/

struct Aud3DAmbObjContainer
{
public:
    // 0x513710 | ??0Aud3DAmbObjContainer@@QAE@XZ
    Aud3DAmbObjContainer();

    // 0x513720 | ??1Aud3DAmbObjContainer@@QAE@XZ
    ~Aud3DAmbObjContainer();

    // 0x5137C0 | ?Init@Aud3DAmbObjContainer@@QAE_NPAD@Z
    bool Init(char* arg1);

    // 0x513970 | ?Update@Aud3DAmbObjContainer@@QAEXM@Z
    void Update(f32 arg1);

private:
    // 0x5138A0 | ?CreateAmbientObject@Aud3DAmbObjContainer@@AAEXPAD@Z
    void CreateAmbientObject(char* arg1);

    // 0x513780 | ?FileValid@Aud3DAmbObjContainer@@AAE_NPAD@Z
    bool FileValid(char* arg1);
};

check_size(Aud3DAmbObjContainer, 0x0);
