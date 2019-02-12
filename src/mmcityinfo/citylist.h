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
    mmcityinfo:citylist

    0x524160 | public: __thiscall mmCityList::mmCityList(void) | ??0mmCityList@@QAE@XZ
    0x524180 | public: virtual __thiscall mmCityList::~mmCityList(void) | ??1mmCityList@@UAE@XZ
    0x5241E0 | public: void __thiscall mmCityList::Init(int) | ?Init@mmCityList@@QAEXH@Z
    0x5241F0 | public: class mmCityInfo * __thiscall mmCityList::GetCityInfo(int) | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@H@Z
    0x524220 | public: class mmCityInfo * __thiscall mmCityList::GetCityInfo(char *) | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@PAD@Z
    0x524270 | public: int __thiscall mmCityList::GetCityID(char *) | ?GetCityID@mmCityList@@QAEHPAD@Z
    0x5242C0 | public: void __thiscall mmCityList::SetCurrentCity(char *) | ?SetCurrentCity@mmCityList@@QAEXPAD@Z
    0x5242F0 | public: void __thiscall mmCityList::SetCurrentCity(int) | ?SetCurrentCity@mmCityList@@QAEXH@Z
    0x524320 | public: class mmCityInfo * __thiscall mmCityList::GetCurrentCity(void) | ?GetCurrentCity@mmCityList@@QAEPAVmmCityInfo@@XZ
    0x524330 | public: void __thiscall mmCityList::Load(char *) | ?Load@mmCityList@@QAEXPAD@Z
    0x524420 | public: void __thiscall mmCityList::Print(void) | ?Print@mmCityList@@QAEXXZ
    0x524460 | bool __cdecl isCityInfoFile(char const *) | ?isCityInfoFile@@YA_NPBD@Z
    void __cdecl LoadCityCB(char const *,bool,void *) | ?LoadCityCB@@YAXPBD_NPAX@Z
    0x5244F0 | public: void __thiscall mmCityList::LoadAll(void) | ?LoadAll@mmCityList@@QAEXXZ
    public: virtual void * __thiscall mmCityList::`scalar deleting destructor'(unsigned int) | ??_GmmCityList@@UAEPAXI@Z
    0x524520 | public: virtual void * __thiscall mmCityList::`vector deleting destructor'(unsigned int) | ??_EmmCityList@@UAEPAXI@Z
    0x5B5200 | const mmCityList::`vftable' | ??_7mmCityList@@6B@
    0x6B1CA0 | class mmCityList * CityListPtr | ?CityListPtr@@3PAVmmCityList@@A
*/

// #include "hooking.h"
