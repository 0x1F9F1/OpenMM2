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
    level:landmark

    0x467FF0 | public: virtual bool __thiscall lvlLandmark::IsLandmark(void) | ?IsLandmark@lvlLandmark@@UAE_NXZ
    0x468000 | public: virtual unsigned int __thiscall lvlLandmark::SizeOf(void) | ?SizeOf@lvlLandmark@@UAEIXZ
    0x468010 | public: virtual int __thiscall lvlLandmark::Init(char const *,class Matrix34 const &,int) | ?Init@lvlLandmark@@UAEHPBDABVMatrix34@@H@Z
    0x468030 | public: virtual int __thiscall lvlLandmark::IsVisible(class gfxViewport const &) | ?IsVisible@lvlLandmark@@UAEHABVgfxViewport@@@Z
*/

struct lvlLandmark : lvlFixedRotY
{
public:
    // lvlLandmark::`vftable' @ 0x5B1A88

    // 0x468030 | ?IsVisible@lvlLandmark@@UAEHABVgfxViewport@@@Z
    i32 IsVisible(class gfxViewport const& arg1) override
    {
        return stub<member_func_t<i32, lvlLandmark, class gfxViewport const&>>(0x468030, this, arg1);
    }

    // 0x468010 | ?Init@lvlLandmark@@UAEHPBDABVMatrix34@@H@Z
    i32 Init(char const* arg1, class Matrix34 const& arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, lvlLandmark, char const*, class Matrix34 const&, i32>>(
            0x468010, this, arg1, arg2, arg3);
    }

    // 0x468000 | ?SizeOf@lvlLandmark@@UAEIXZ
    u32 SizeOf() override
    {
        return stub<member_func_t<u32, lvlLandmark>>(0x468000, this);
    }

    // 0x467FF0 | ?IsLandmark@lvlLandmark@@UAE_NXZ
    bool IsLandmark() override
    {
        return stub<member_func_t<bool, lvlLandmark>>(0x467FF0, this);
    }

    // 0x465EB0 | ?IsCollidable@lvlLandmark@@UAE_NXZ
    bool IsCollidable() override
    {
        return stub<member_func_t<bool, lvlLandmark>>(0x465EB0, this);
    }
};
