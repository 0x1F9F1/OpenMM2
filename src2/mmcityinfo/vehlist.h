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
    mmcityinfo:vehlist

    0x524550 | public: __thiscall mmVehList::mmVehList(void) | ??0mmVehList@@QAE@XZ
    0x524570 | public: virtual __thiscall mmVehList::~mmVehList(void) | ??1mmVehList@@UAE@XZ
    0x5245D0 | public: void __thiscall mmVehList::Init(int) | ?Init@mmVehList@@QAEXH@Z
    0x5245E0 | public: class mmVehInfo * __thiscall mmVehList::GetVehicleInfo(int) | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@H@Z
    0x524610 | public: class mmVehInfo * __thiscall mmVehList::GetVehicleInfo(char *) | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@PAD@Z
    0x524690 | public: void __thiscall mmVehList::SetDefaultVehicle(char *) | ?SetDefaultVehicle@mmVehList@@QAEXPAD@Z
    0x5246B0 | public: int __thiscall mmVehList::GetVehicleID(char *) | ?GetVehicleID@mmVehList@@QAEHPAD@Z
    0x524720 | public: void __thiscall mmVehList::Load(char *) | ?Load@mmVehList@@QAEXPAD@Z
    0x524810 | public: void __thiscall mmVehList::Print(void) | ?Print@mmVehList@@QAEXXZ
    0x524860 | bool __cdecl isVehInfoFile(char const *) | ?isVehInfoFile@@YA_NPBD@Z
    void __cdecl LoadVehListCB(char const *,bool,void *) | ?LoadVehListCB@@YAXPBD_NPAX@Z
    0x524950 | public: void __thiscall mmVehList::LoadAll(void) | ?LoadAll@mmVehList@@QAEXXZ
    public: virtual void * __thiscall mmVehList::`scalar deleting destructor'(unsigned int) | ??_GmmVehList@@UAEPAXI@Z
    0x524A00 | public: virtual void * __thiscall mmVehList::`vector deleting destructor'(unsigned int) | ??_EmmVehList@@UAEPAXI@Z
    0x5B5204 | const mmVehList::`vftable' | ??_7mmVehList@@6B@
    0x5D4814 | char * * vehLoadNameList | ?vehLoadNameList@@3PAPADA
    0x6B1CA8 | class mmVehList * VehicleListPtr | ?VehicleListPtr@@3PAVmmVehList@@A
*/

// 0x524860 | ?isVehInfoFile@@YA_NPBD@Z
inline bool isVehInfoFile(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x524860, arg1);
}

// 0x5D4814 | ?vehLoadNameList@@3PAPADA
inline extern_var(0x5D4814, char**, vehLoadNameList);

// 0x6B1CA8 | ?VehicleListPtr@@3PAVmmVehList@@A
inline extern_var(0x6B1CA8, class mmVehList*, VehicleListPtr);

class mmVehList
{
public:
    // mmVehList::`vftable' @ 0x5B5204

    // 0x524550 | ??0mmVehList@@QAE@XZ
    inline mmVehList()
    {
        stub<member_func_t<void, mmVehList>>(0x524550, this);
    }

    // 0x5245D0 | ?Init@mmVehList@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmVehList, int32_t>>(0x5245D0, this, arg1);
    }

    // 0x5245E0 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@H@Z
    inline class mmVehInfo* GetVehicleInfo(int32_t arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, int32_t>>(0x5245E0, this, arg1);
    }

    // 0x524610 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@PAD@Z
    inline class mmVehInfo* GetVehicleInfo(char* arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, char*>>(0x524610, this, arg1);
    }

    // 0x524690 | ?SetDefaultVehicle@mmVehList@@QAEXPAD@Z
    inline void SetDefaultVehicle(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x524690, this, arg1);
    }

    // 0x5246B0 | ?GetVehicleID@mmVehList@@QAEHPAD@Z
    inline int32_t GetVehicleID(char* arg1)
    {
        return stub<member_func_t<int32_t, mmVehList, char*>>(0x5246B0, this, arg1);
    }

    // 0x524720 | ?Load@mmVehList@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x524720, this, arg1);
    }

    // 0x524810 | ?Print@mmVehList@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, mmVehList>>(0x524810, this);
    }

    // 0x524950 | ?LoadAll@mmVehList@@QAEXXZ
    inline void LoadAll()
    {
        return stub<member_func_t<void, mmVehList>>(0x524950, this);
    }

    // 0x524570 | ??1mmVehList@@UAE@XZ
    virtual inline ~mmVehList()
    {
        stub<member_func_t<void, mmVehList>>(0x524570, this);
    }
};
