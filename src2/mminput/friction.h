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
    mminput:friction

    0x531C20 | public: virtual int __thiscall mmFrictionFF::Init(struct IDirectInputDevice2A *) | ?Init@mmFrictionFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x531D30 | public: virtual int __thiscall mmFrictionFF::SetValues(float,float) | ?SetValues@mmFrictionFF@@UAEHMM@Z
    0x531D60 | public: int __thiscall mmFrictionFF::Assign(long) | ?Assign@mmFrictionFF@@QAEHJ@Z
    0x531E20 | public: virtual int __thiscall mmFrictionFF::Play(void) | ?Play@mmFrictionFF@@UAEHXZ
    0x531E80 | public: virtual int __thiscall mmFrictionFF::Stop(void) | ?Stop@mmFrictionFF@@UAEHXZ
*/

struct mmFrictionFF
{
public:
    // mmFrictionFF::`vftable' @ 0x5B529C

    // 0x531D60 | ?Assign@mmFrictionFF@@QAEHJ@Z
    inline int32_t Assign(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, int32_t>>(0x531D60, this, arg1);
    }

    // 0x531C20 | ?Init@mmFrictionFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, struct IDirectInputDevice2A*>>(0x531C20, this, arg1);
    }

    // 0x531E20 | ?Play@mmFrictionFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmFrictionFF>>(0x531E20, this);
    }

    // 0x531E80 | ?Stop@mmFrictionFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmFrictionFF>>(0x531E80, this);
    }

    // 0x531D30 | ?SetValues@mmFrictionFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, float, float>>(0x531D30, this, arg1, arg2);
    }
};
