/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    mminput:road

    0x531940 | public: virtual int __thiscall mmRoadFF::Init(struct IDirectInputDevice2A *) | ?Init@mmRoadFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x531A40 | public: virtual int __thiscall mmRoadFF::SetValues(float,float) | ?SetValues@mmRoadFF@@UAEHMM@Z
    0x531A70 | public: int __thiscall mmRoadFF::Assign(long,long) | ?Assign@mmRoadFF@@QAEHJJ@Z
    0x531B60 | public: virtual int __thiscall mmRoadFF::Play(void) | ?Play@mmRoadFF@@UAEHXZ
    0x531BD0 | public: virtual int __thiscall mmRoadFF::Stop(void) | ?Stop@mmRoadFF@@UAEHXZ
*/

#include "hooking.h"
