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
    vehicle:siren

    0x4D6600 | public: __thiscall vehSiren::vehSiren(void) | ??0vehSiren@@QAE@XZ
    0x4D6630 | public: __thiscall vehSiren::~vehSiren(void) | ??1vehSiren@@QAE@XZ
    0x4D6680 | public: bool __thiscall vehSiren::Init(void) | ?Init@vehSiren@@QAE_NXZ
    0x4D6740 | public: bool __thiscall vehSiren::AddLight(class Vector3 const &,class Vector3 const &) | ?AddLight@vehSiren@@QAE_NABVVector3@@0@Z
    0x4D6820 | public: void __thiscall vehSiren::Reset(void) | ?Reset@vehSiren@@QAEXXZ
    0x4D6830 | public: void __thiscall vehSiren::Update(void) | ?Update@vehSiren@@QAEXXZ
    0x4D6880 | public: void __thiscall vehSiren::Draw(class Matrix34 const &) | ?Draw@vehSiren@@QAEXABVMatrix34@@@Z
    public: void __thiscall vehSiren::AddWidgets(class bkBank *) | ?AddWidgets@vehSiren@@QAEXPAVbkBank@@@Z
*/

struct vehSiren
{
public:
    // 0x4D6600 | ??0vehSiren@@QAE@XZ
    vehSiren();

    // 0x4D6630 | ??1vehSiren@@QAE@XZ
    ~vehSiren();

    // 0x4D6740 | ?AddLight@vehSiren@@QAE_NABVVector3@@0@Z
    bool AddLight(class Vector3 const& arg1, class Vector3 const& arg2);

    // 0x4D6880 | ?Draw@vehSiren@@QAEXABVMatrix34@@@Z
    void Draw(class Matrix34 const& arg1);

    // 0x4D6680 | ?Init@vehSiren@@QAE_NXZ
    bool Init();

    // 0x4D6820 | ?Reset@vehSiren@@QAEXXZ
    void Reset();

    // 0x4D6830 | ?Update@vehSiren@@QAEXXZ
    void Update();
};

check_size(vehSiren, 0x44);
