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

#include "pu_menu.h"

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

class Dialog_HallOfFame : public PUMenuBase
{
    // const Dialog_HallOfFame::`vftable' @ 0x5B4000

public:
    // 0x4FBA70 | ??0Dialog_HallOfFame@@QAE@HMMMMPAD@Z
    Dialog_HallOfFame(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x4FC840 | ??_GDialog_HallOfFame@@UAEPAXI@Z
    // 0x4FBFC0 | ??1Dialog_HallOfFame@@UAE@XZ
    ~Dialog_HallOfFame() override;

    // 0x4FC040 | ?AddRaceRecord@Dialog_HallOfFame@@QAEXHPAD00H00@Z
    void AddRaceRecord(i32 arg1, char* arg2, char* arg3, char* arg4, i32 arg5, char* arg6, char* arg7);

    // 0x4FC6A0 | ?InitRaceRecord@Dialog_HallOfFame@@QAEXXZ
    void InitRaceRecord();

    // 0x4FC030 | ?PreSetup@Dialog_HallOfFame@@UAEXXZ
    void PreSetup() override;

    // 0x4FC570 | ?ResetRaceRecord@Dialog_HallOfFame@@QAEXXZ
    void ResetRaceRecord();

    // 0x4FC620 | ?SetSortState@Dialog_HallOfFame@@QAEXXZ
    void SetSortState();

    // 0x4FC600 | ?SortByCity@Dialog_HallOfFame@@QAEXXZ
    void SortByCity();
};

check_size(Dialog_HallOfFame, 0x0);
