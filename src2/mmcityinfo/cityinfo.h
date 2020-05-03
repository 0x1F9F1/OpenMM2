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

/*
    mmcityinfo:cityinfo

    0x52A540 | public: __thiscall mmCityInfo::mmCityInfo(void) | ??0mmCityInfo@@QAE@XZ
    0x52A560 | public: virtual __thiscall mmCityInfo::~mmCityInfo(void) | ??1mmCityInfo@@UAE@XZ
    0x52A570 | public: int __thiscall mmCityInfo::Load(char *) | ?Load@mmCityInfo@@QAEHPAD@Z
    public: virtual void * __thiscall mmCityInfo::`vector deleting destructor'(unsigned int) | ??_EmmCityInfo@@UAEPAXI@Z
    0x52A8C0 | public: virtual void * __thiscall mmCityInfo::`scalar deleting destructor'(unsigned int) | ??_GmmCityInfo@@UAEPAXI@Z
    0x5B524C | const mmCityInfo::`vftable' | ??_7mmCityInfo@@6B@
*/

class mmCityInfo
{
    // const mmCityInfo::`vftable' @ 0x5B524C

public:
    // 0x52A540 | ??0mmCityInfo@@QAE@XZ
    mmCityInfo();

    // 0x52A8C0 | ??_GmmCityInfo@@UAEPAXI@Z
    // 0x52A560 | ??1mmCityInfo@@UAE@XZ
    virtual ~mmCityInfo();

    // 0x52A570 | ?Load@mmCityInfo@@QAEHPAD@Z
    i32 Load(char* arg1);
};

check_size(mmCityInfo, 0x0);
