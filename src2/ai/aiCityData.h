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
    ai:aiCityData

    0x555BD0 | public: __thiscall aiCityData::aiCityData(char *,char *) | ??0aiCityData@@QAE@PAD0@Z
    0x5560E0 | public: virtual __thiscall aiCityData::~aiCityData(void) | ??1aiCityData@@UAE@XZ
    public: void __thiscall aiCityData::AddWidgets(class bkBank &) | ?AddWidgets@aiCityData@@QAEXAAVbkBank@@@Z
    0x5561B0 | public: virtual void * __thiscall aiCityData::`scalar deleting destructor'(unsigned int) | ??_GaiCityData@@UAEPAXI@Z
    public: virtual void * __thiscall aiCityData::`vector deleting destructor'(unsigned int) | ??_EaiCityData@@UAEPAXI@Z
    0x5B59E4 | const aiCityData::`vftable' | ??_7aiCityData@@6B@
*/

struct aiCityData : Base
{
public:
    // aiCityData::`vftable' @ 0x5B59E4

    // 0x555BD0 | ??0aiCityData@@QAE@PAD0@Z
    inline aiCityData(char* arg1, char* arg2)
    {
        stub<member_func_t<void, aiCityData, char*, char*>>(0x555BD0, this, arg1, arg2);
    }

    // 0x5560E0 | ??1aiCityData@@UAE@XZ
    inline ~aiCityData() override
    {
        stub<member_func_t<void, aiCityData>>(0x5560E0, this);
    }
};
