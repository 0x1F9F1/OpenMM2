/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmui:dlg_hoff

    0x4FBA70 | public: __thiscall Dialog_HallOfFame::Dialog_HallOfFame(int,float,float,float,float,char *) | ??0Dialog_HallOfFame@@QAE@HMMMMPAD@Z
    0x4FBFC0 | public: virtual __thiscall Dialog_HallOfFame::~Dialog_HallOfFame(void) | ??1Dialog_HallOfFame@@UAE@XZ
    0x4FC030 | public: virtual void __thiscall Dialog_HallOfFame::PreSetup(void) | ?PreSetup@Dialog_HallOfFame@@UAEXXZ
    0x4FC040 | public: void __thiscall Dialog_HallOfFame::AddRaceRecord(int,char *,char *,char *,int,char *,char *) | ?AddRaceRecord@Dialog_HallOfFame@@QAEXHPAD00H00@Z
    0x4FC570 | public: void __thiscall Dialog_HallOfFame::ResetRaceRecord(void) | ?ResetRaceRecord@Dialog_HallOfFame@@QAEXXZ
    0x4FC600 | public: void __thiscall Dialog_HallOfFame::SortByCity(void) | ?SortByCity@Dialog_HallOfFame@@QAEXXZ
    0x4FC620 | public: void __thiscall Dialog_HallOfFame::SetSortState(void) | ?SetSortState@Dialog_HallOfFame@@QAEXXZ
    0x4FC6A0 | public: void __thiscall Dialog_HallOfFame::InitRaceRecord(void) | ?InitRaceRecord@Dialog_HallOfFame@@QAEXXZ
    0x4FC840 | public: virtual void * __thiscall Dialog_HallOfFame::`scalar deleting destructor'(unsigned int) | ??_GDialog_HallOfFame@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_HallOfFame::`vector deleting destructor'(unsigned int) | ??_EDialog_HallOfFame@@UAEPAXI@Z
    0x5B4000 | const Dialog_HallOfFame::`vftable' | ??_7Dialog_HallOfFame@@6B@
*/

struct Dialog_HallOfFame : PUMenuBase
{
public:
    // Dialog_HallOfFame::`vftable' @ 0x5B4000

    // 0x4FBA70 | ??0Dialog_HallOfFame@@QAE@HMMMMPAD@Z
    inline Dialog_HallOfFame(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_HallOfFame, int32_t, float, float, float, float, char*>>(
            0x4FBA70, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FC040 | ?AddRaceRecord@Dialog_HallOfFame@@QAEXHPAD00H00@Z
    inline void AddRaceRecord(int32_t arg1, char* arg2, char* arg3, char* arg4, int32_t arg5, char* arg6, char* arg7)
    {
        return stub<member_func_t<void, Dialog_HallOfFame, int32_t, char*, char*, char*, int32_t, char*, char*>>(
            0x4FC040, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4FC570 | ?ResetRaceRecord@Dialog_HallOfFame@@QAEXXZ
    inline void ResetRaceRecord()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4FC570, this);
    }

    // 0x4FC600 | ?SortByCity@Dialog_HallOfFame@@QAEXXZ
    inline void SortByCity()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4FC600, this);
    }

    // 0x4FC620 | ?SetSortState@Dialog_HallOfFame@@QAEXXZ
    inline void SetSortState()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4FC620, this);
    }

    // 0x4FC6A0 | ?InitRaceRecord@Dialog_HallOfFame@@QAEXXZ
    inline void InitRaceRecord()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4FC6A0, this);
    }

    // 0x4FBFC0 | ??1Dialog_HallOfFame@@UAE@XZ
    inline ~Dialog_HallOfFame() override
    {
        stub<member_func_t<void, Dialog_HallOfFame>>(0x4FBFC0, this);
    }

    // 0x4FC030 | ?PreSetup@Dialog_HallOfFame@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4FC030, this);
    }
};
