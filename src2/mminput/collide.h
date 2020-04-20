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
    mminput:collide

    0x531600 | public: virtual int __thiscall mmCollideFF::Init(struct IDirectInputDevice2A *) | ?Init@mmCollideFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x5317B0 | public: virtual int __thiscall mmCollideFF::SetValues(float,float) | ?SetValues@mmCollideFF@@UAEHMM@Z
    0x5317E0 | public: int __thiscall mmCollideFF::Assign(long,long) | ?Assign@mmCollideFF@@QAEHJJ@Z
    0x5318E0 | public: virtual int __thiscall mmCollideFF::Play(void) | ?Play@mmCollideFF@@UAEHXZ
    0x531930 | public: virtual int __thiscall mmCollideFF::Stop(void) | ?Stop@mmCollideFF@@UAEHXZ
*/

struct mmCollideFF
{
public:
    // mmCollideFF::`vftable' @ 0x5B52AC

    // 0x5317E0 | ?Assign@mmCollideFF@@QAEHJJ@Z
    inline int32_t Assign(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmCollideFF, int32_t, int32_t>>(0x5317E0, this, arg1, arg2);
    }

    // 0x531600 | ?Init@mmCollideFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmCollideFF, struct IDirectInputDevice2A*>>(0x531600, this, arg1);
    }

    // 0x5318E0 | ?Play@mmCollideFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmCollideFF>>(0x5318E0, this);
    }

    // 0x531930 | ?Stop@mmCollideFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmCollideFF>>(0x531930, this);
    }

    // 0x5317B0 | ?SetValues@mmCollideFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmCollideFF, float, float>>(0x5317B0, this, arg1, arg2);
    }
};
