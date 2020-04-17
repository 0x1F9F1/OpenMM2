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
    mminput:spring

    0x531EC0 | public: virtual int __thiscall mmSpringFF::Init(struct IDirectInputDevice2A *) | ?Init@mmSpringFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x531FC0 | public: virtual int __thiscall mmSpringFF::SetValues(float,float) | ?SetValues@mmSpringFF@@UAEHMM@Z
    0x531FF0 | public: int __thiscall mmSpringFF::Assign(long) | ?Assign@mmSpringFF@@QAEHJ@Z
    0x5320E0 | public: virtual int __thiscall mmSpringFF::Play(void) | ?Play@mmSpringFF@@UAEHXZ
    0x532150 | public: virtual int __thiscall mmSpringFF::Stop(void) | ?Stop@mmSpringFF@@UAEHXZ
*/

struct mmSpringFF
{
public:
    // mmSpringFF::`vftable' @ 0x5B52BC

    // 0x531FF0 | ?Assign@mmSpringFF@@QAEHJ@Z
    i32 Assign(i32 arg1)
    {
        return stub<member_func_t<i32, mmSpringFF, i32>>(0x531FF0, this, arg1);
    }

    // 0x531EC0 | ?Init@mmSpringFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual i32 Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<i32, mmSpringFF, struct IDirectInputDevice2A*>>(0x531EC0, this, arg1);
    }

    // 0x5320E0 | ?Play@mmSpringFF@@UAEHXZ
    virtual i32 Play()
    {
        return stub<member_func_t<i32, mmSpringFF>>(0x5320E0, this);
    }

    // 0x532150 | ?Stop@mmSpringFF@@UAEHXZ
    virtual i32 Stop()
    {
        return stub<member_func_t<i32, mmSpringFF>>(0x532150, this);
    }

    // 0x531FC0 | ?SetValues@mmSpringFF@@UAEHMM@Z
    virtual i32 SetValues(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, mmSpringFF, f32, f32>>(0x531FC0, this, arg1, arg2);
    }
};
