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

#include "data/base.h"

/*
    node:cullable

    0x4A3440 | public: virtual void __thiscall asCullable::Cull(void) | ?Cull@asCullable@@UAEXXZ
    public: virtual void __thiscall asCullable::Stats(void) | ?Stats@asCullable@@UAEXXZ
*/

class asCullable : public Base
{
public:
    // 0x460EA0 | ??1asCullable@@UAE@XZ
    ~asCullable();

    // 0x4A3440 | ?Cull@asCullable@@UAEXXZ
    virtual void Cull();
};

check_size(asCullable, 0x0);
