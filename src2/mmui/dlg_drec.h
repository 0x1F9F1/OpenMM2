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
    mmui:dlg_drec

    0x4FC870 | public: __thiscall Dialog_DriverRec::Dialog_DriverRec(int,float,float,float,float,char *) | ??0Dialog_DriverRec@@QAE@HMMMMPAD@Z
    0x4FCD00 | public: virtual __thiscall Dialog_DriverRec::~Dialog_DriverRec(void) | ??1Dialog_DriverRec@@UAE@XZ
    0x4FCD70 | public: virtual void __thiscall Dialog_DriverRec::PreSetup(void) | ?PreSetup@Dialog_DriverRec@@UAEXXZ
    0x4FCD80 | public: void __thiscall Dialog_DriverRec::InitDriverRecord(int) | ?InitDriverRecord@Dialog_DriverRec@@QAEXH@Z
    0x4FCE50 | public: int __thiscall Dialog_DriverRec::AddDriverRecord(int,char *,int,float,char *,int) | ?AddDriverRecord@Dialog_DriverRec@@QAEHHPADHM0H@Z
    0x4FD270 | public: void __thiscall Dialog_DriverRec::ResetDriverRecord(void) | ?ResetDriverRecord@Dialog_DriverRec@@QAEXXZ
    0x4FD300 | public: void __thiscall Dialog_DriverRec::SetRecordPosition(int) | ?SetRecordPosition@Dialog_DriverRec@@QAEXH@Z
    0x4FD320 | public: void __thiscall Dialog_DriverRec::SetSortState(void) | ?SetSortState@Dialog_DriverRec@@QAEXXZ
    0x4FD380 | public: void __thiscall Dialog_DriverRec::SetCityState(void) | ?SetCityState@Dialog_DriverRec@@QAEXXZ
    public: virtual void * __thiscall Dialog_DriverRec::`vector deleting destructor'(unsigned int) | ??_EDialog_DriverRec@@UAEPAXI@Z
    0x4FD3A0 | public: virtual void * __thiscall Dialog_DriverRec::`scalar deleting destructor'(unsigned int) | ??_GDialog_DriverRec@@UAEPAXI@Z
    0x5B404C | const Dialog_DriverRec::`vftable' | ??_7Dialog_DriverRec@@6B@
*/

class Dialog_DriverRec : public PUMenuBase
{
    // const Dialog_DriverRec::`vftable' @ 0x5B404C

public:
    // 0x4FC870 | ??0Dialog_DriverRec@@QAE@HMMMMPAD@Z
    Dialog_DriverRec(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x4FD3A0 | ??_GDialog_DriverRec@@UAEPAXI@Z
    // 0x4FCD00 | ??1Dialog_DriverRec@@UAE@XZ
    ~Dialog_DriverRec() override;

    // 0x4FCE50 | ?AddDriverRecord@Dialog_DriverRec@@QAEHHPADHM0H@Z
    i32 AddDriverRecord(i32 arg1, char* arg2, i32 arg3, f32 arg4, char* arg5, i32 arg6);

    // 0x4FCD80 | ?InitDriverRecord@Dialog_DriverRec@@QAEXH@Z
    void InitDriverRecord(i32 arg1);

    // 0x4FCD70 | ?PreSetup@Dialog_DriverRec@@UAEXXZ
    void PreSetup() override;

    // 0x4FD270 | ?ResetDriverRecord@Dialog_DriverRec@@QAEXXZ
    void ResetDriverRecord();

    // 0x4FD380 | ?SetCityState@Dialog_DriverRec@@QAEXXZ
    void SetCityState();

    // 0x4FD300 | ?SetRecordPosition@Dialog_DriverRec@@QAEXH@Z
    void SetRecordPosition(i32 arg1);

    // 0x4FD320 | ?SetSortState@Dialog_DriverRec@@QAEXXZ
    void SetSortState();
};

check_size(Dialog_DriverRec, 0x0);
