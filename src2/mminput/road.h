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
    mminput:road

    0x531940 | public: virtual int __thiscall mmRoadFF::Init(struct IDirectInputDevice2A *) | ?Init@mmRoadFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x531A40 | public: virtual int __thiscall mmRoadFF::SetValues(float,float) | ?SetValues@mmRoadFF@@UAEHMM@Z
    0x531A70 | public: int __thiscall mmRoadFF::Assign(long,long) | ?Assign@mmRoadFF@@QAEHJJ@Z
    0x531B60 | public: virtual int __thiscall mmRoadFF::Play(void) | ?Play@mmRoadFF@@UAEHXZ
    0x531BD0 | public: virtual int __thiscall mmRoadFF::Stop(void) | ?Stop@mmRoadFF@@UAEHXZ
*/

struct mmRoadFF
{
public:
    // mmRoadFF::`vftable' @ 0x5B52CC

    // 0x531A70 | ?Assign@mmRoadFF@@QAEHJJ@Z
    inline i32 Assign(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmRoadFF, i32, i32>>(0x531A70, this, arg1, arg2);
    }

    // 0x531940 | ?Init@mmRoadFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline i32 Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<i32, mmRoadFF, struct IDirectInputDevice2A*>>(0x531940, this, arg1);
    }

    // 0x531B60 | ?Play@mmRoadFF@@UAEHXZ
    virtual inline i32 Play()
    {
        return stub<member_func_t<i32, mmRoadFF>>(0x531B60, this);
    }

    // 0x531BD0 | ?Stop@mmRoadFF@@UAEHXZ
    virtual inline i32 Stop()
    {
        return stub<member_func_t<i32, mmRoadFF>>(0x531BD0, this);
    }

    // 0x531A40 | ?SetValues@mmRoadFF@@UAEHMM@Z
    virtual inline i32 SetValues(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, mmRoadFF, f32, f32>>(0x531A40, this, arg1, arg2);
    }
};
