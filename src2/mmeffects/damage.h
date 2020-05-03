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
    mmeffects:damage

    0x5345B0 | public: __thiscall mmDamage::mmDamage(void) | ??0mmDamage@@QAE@XZ
    0x5345C0 | public: __thiscall mmDamage::~mmDamage(void) | ??1mmDamage@@QAE@XZ
    0x5345D0 | public: void __thiscall mmDamage::Init(class modStatic *) | ?Init@mmDamage@@QAEXPAVmodStatic@@@Z
    0x5345E0 | public: void __thiscall mmDamage::Reset(int) | ?Reset@mmDamage@@QAEXH@Z
    0x5345F0 | public: void __thiscall mmDamage::Apply(class Vector3 &,float) | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
*/

class mmDamage
{
public:
    // 0x5345B0 | ??0mmDamage@@QAE@XZ
    mmDamage();

    // 0x5345C0 | ??1mmDamage@@QAE@XZ
    ~mmDamage();

    // 0x5345F0 | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
    void Apply(class Vector3& arg1, f32 arg2);

    // 0x5345D0 | ?Init@mmDamage@@QAEXPAVmodStatic@@@Z
    void Init(class modStatic* arg1);

    // 0x5345E0 | ?Reset@mmDamage@@QAEXH@Z
    void Reset(i32 arg1);
};

check_size(mmDamage, 0x0);
