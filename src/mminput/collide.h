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
    mminput:collide

    0x531600 | public: virtual int __thiscall mmCollideFF::Init(struct IDirectInputDevice2A *) | ?Init@mmCollideFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x5317B0 | public: virtual int __thiscall mmCollideFF::SetValues(float,float) | ?SetValues@mmCollideFF@@UAEHMM@Z
    0x5317E0 | public: int __thiscall mmCollideFF::Assign(long,long) | ?Assign@mmCollideFF@@QAEHJJ@Z
    0x5318E0 | public: virtual int __thiscall mmCollideFF::Play(void) | ?Play@mmCollideFF@@UAEHXZ
    0x531930 | public: virtual int __thiscall mmCollideFF::Stop(void) | ?Stop@mmCollideFF@@UAEHXZ
*/

#include "hooking.h"
