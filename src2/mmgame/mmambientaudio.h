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
    mmgame:mmambientaudio

    0x432C40 | public: __thiscall mmAmbientAudio::mmAmbientAudio(class mmPlayer *) | ??0mmAmbientAudio@@QAE@PAVmmPlayer@@@Z
    0x432D00 | public: __thiscall mmAmbientAudio::~mmAmbientAudio(void) | ??1mmAmbientAudio@@QAE@XZ
    0x432D10 | public: void __thiscall mmAmbientAudio::Update(void) | ?Update@mmAmbientAudio@@QAEXXZ
*/

struct mmAmbientAudio
{
public:
    // 0x432C40 | ??0mmAmbientAudio@@QAE@PAVmmPlayer@@@Z
    mmAmbientAudio(class mmPlayer* arg1);

    // 0x432D00 | ??1mmAmbientAudio@@QAE@XZ
    ~mmAmbientAudio();

    // 0x432D10 | ?Update@mmAmbientAudio@@QAEXXZ
    void Update();
};

check_size(mmAmbientAudio, 0x0);
