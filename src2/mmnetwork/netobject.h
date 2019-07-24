/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmnetwork:netobject

    0x572BE0 | public: __thiscall asNetObject::asNetObject(void) | ??0asNetObject@@QAE@XZ
    0x572C00 | public: virtual __thiscall asNetObject::~asNetObject(void) | ??1asNetObject@@UAE@XZ
    0x572C10 | public: virtual void __thiscall asNetObject::Update(void) | ?Update@asNetObject@@UAEXXZ
    public: virtual void * __thiscall asNetObject::`vector deleting destructor'(unsigned int) | ??_EasNetObject@@UAEPAXI@Z
    0x572C20 | public: virtual void * __thiscall asNetObject::`scalar deleting destructor'(unsigned int) | ??_GasNetObject@@UAEPAXI@Z
    0x5B5D18 | const asNetObject::`vftable' | ??_7asNetObject@@6B@
*/

struct asNetObject : asNode
{
public:
    // asNetObject::`vftable' @ 0x5B5D18

    // 0x572BE0 | ??0asNetObject@@QAE@XZ
    inline asNetObject()
    {
        stub<member_func_t<void, asNetObject>>(0x572BE0, this);
    }

    // 0x572C00 | ??1asNetObject@@UAE@XZ
    inline ~asNetObject() override
    {
        stub<member_func_t<void, asNetObject>>(0x572C00, this);
    }

    // 0x572C10 | ?Update@asNetObject@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asNetObject>>(0x572C10, this);
    }
};
