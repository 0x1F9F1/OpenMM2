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
    mmeffects:damage

    0x5345B0 | public: __thiscall mmDamage::mmDamage(void) | ??0mmDamage@@QAE@XZ
    0x5345C0 | public: __thiscall mmDamage::~mmDamage(void) | ??1mmDamage@@QAE@XZ
    0x5345D0 | public: void __thiscall mmDamage::Init(class modStatic *) | ?Init@mmDamage@@QAEXPAVmodStatic@@@Z
    0x5345E0 | public: void __thiscall mmDamage::Reset(int) | ?Reset@mmDamage@@QAEXH@Z
    0x5345F0 | public: void __thiscall mmDamage::Apply(class Vector3 &,float) | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
*/

struct mmDamage
{
public:
    // 0x5345B0 | ??0mmDamage@@QAE@XZ
    mmDamage()
    {
        stub<member_func_t<void, mmDamage>>(0x5345B0, this);
    }

    // 0x5345C0 | ??1mmDamage@@QAE@XZ
    ~mmDamage()
    {
        stub<member_func_t<void, mmDamage>>(0x5345C0, this);
    }

    // 0x5345D0 | ?Init@mmDamage@@QAEXPAVmodStatic@@@Z
    void Init(class modStatic* arg1)
    {
        return stub<member_func_t<void, mmDamage, class modStatic*>>(0x5345D0, this, arg1);
    }

    // 0x5345E0 | ?Reset@mmDamage@@QAEXH@Z
    void Reset(i32 arg1)
    {
        return stub<member_func_t<void, mmDamage, i32>>(0x5345E0, this, arg1);
    }

    // 0x5345F0 | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
    void Apply(class Vector3& arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmDamage, class Vector3&, f32>>(0x5345F0, this, arg1, arg2);
    }
};
