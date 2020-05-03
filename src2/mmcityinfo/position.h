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
    mmcityinfo:position

    0x52A0B0 | public: __thiscall mmPositions::mmPositions(void) | ??0mmPositions@@QAE@XZ
    0x52A0C0 | public: __thiscall mmPositions::~mmPositions(void) | ??1mmPositions@@QAE@XZ
    0x52A0E0 | public: void __thiscall mmPositions::Init(int) | ?Init@mmPositions@@QAEXH@Z
    0x52A110 | public: int __thiscall mmPositions::Load(char *) | ?Load@mmPositions@@QAEHPAD@Z
    0x52A300 | public: int __thiscall mmPositions::GetCount(void) | ?GetCount@mmPositions@@QAEHXZ
    0x52A310 | public: class Vector4 & __thiscall mmPositions::GetVector4(int) | ?GetVector4@mmPositions@@QAEAAVVector4@@H@Z
    0x52A340 | public: int __thiscall mmPositions::GetFrameRate(int) | ?GetFrameRate@mmPositions@@QAEHH@Z
    0x52A370 | public: int __thiscall mmPositions::Dump(char *) | ?Dump@mmPositions@@QAEHPAD@Z
    0x52A380 | public: int __thiscall mmPositions::Recall(int,class Matrix34 *,int *,char *) | ?Recall@mmPositions@@QAEHHPAVMatrix34@@PAHPAD@Z
    0x52A410 | public: int __thiscall mmPositions::Register(class Vector4 &,int,int,int,int,char *) | ?Register@mmPositions@@QAEHAAVVector4@@HHHHPAD@Z
*/

struct mmPositions
{
public:
    // 0x52A0B0 | ??0mmPositions@@QAE@XZ
    mmPositions();

    // 0x52A0C0 | ??1mmPositions@@QAE@XZ
    ~mmPositions();

    // 0x52A370 | ?Dump@mmPositions@@QAEHPAD@Z
    i32 Dump(char* arg1);

    // 0x52A300 | ?GetCount@mmPositions@@QAEHXZ
    i32 GetCount();

    // 0x52A340 | ?GetFrameRate@mmPositions@@QAEHH@Z
    i32 GetFrameRate(i32 arg1);

    // 0x52A310 | ?GetVector4@mmPositions@@QAEAAVVector4@@H@Z
    class Vector4& GetVector4(i32 arg1);

    // 0x52A0E0 | ?Init@mmPositions@@QAEXH@Z
    void Init(i32 arg1);

    // 0x52A110 | ?Load@mmPositions@@QAEHPAD@Z
    i32 Load(char* arg1);

    // 0x52A380 | ?Recall@mmPositions@@QAEHHPAVMatrix34@@PAHPAD@Z
    i32 Recall(i32 arg1, class Matrix34* arg2, i32* arg3, char* arg4);

    // 0x52A410 | ?Register@mmPositions@@QAEHAAVVector4@@HHHHPAD@Z
    i32 Register(class Vector4& arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, char* arg6);
};

check_size(mmPositions, 0x0);
