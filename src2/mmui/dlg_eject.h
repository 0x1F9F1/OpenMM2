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
    mmui:dlg_eject

    0x4F9340 | public: __thiscall Dialog_Eject::Dialog_Eject(int,float,float,float,float,char *) | ??0Dialog_Eject@@QAE@HMMMMPAD@Z
    0x4F9520 | public: virtual __thiscall Dialog_Eject::~Dialog_Eject(void) | ??1Dialog_Eject@@UAE@XZ
    0x4F9590 | public: virtual void __thiscall Dialog_Eject::PostSetup(void) | ?PostSetup@Dialog_Eject@@UAEXXZ
    0x4F95A0 | public: virtual void __thiscall Dialog_Eject::PreSetup(void) | ?PreSetup@Dialog_Eject@@UAEXXZ
    0x4F95B0 | public: void __thiscall Dialog_Eject::BootButtonCB(void) | ?BootButtonCB@Dialog_Eject@@QAEXXZ
    0x4F9610 | public: void __thiscall Dialog_Eject::AddName(char const *,unsigned long,int) | ?AddName@Dialog_Eject@@QAEXPBDKH@Z
    0x4F96B0 | public: void __thiscall Dialog_Eject::RemoveName(char const *,unsigned long) | ?RemoveName@Dialog_Eject@@QAEXPBDK@Z
    0x4F9800 | public: void __thiscall Dialog_Eject::RemoveName(unsigned long) | ?RemoveName@Dialog_Eject@@QAEXK@Z
    0x4F9940 | public: void __thiscall Dialog_Eject::ClearNames(void) | ?ClearNames@Dialog_Eject@@QAEXXZ
    0x4F99C0 | public: void __thiscall Dialog_Eject::PostNames(void) | ?PostNames@Dialog_Eject@@QAEXXZ
    0x4F99F0 | public: void __thiscall Dialog_Eject::SetBootCB(class datCallback) | ?SetBootCB@Dialog_Eject@@QAEXVdatCallback@@@Z
    0x4F9A10 | public: int __thiscall Dialog_Eject::FindRosterName(char const *) | ?FindRosterName@Dialog_Eject@@QAEHPBD@Z
    0x4F9A80 | public: int __thiscall Dialog_Eject::FindRosterName(unsigned long) | ?FindRosterName@Dialog_Eject@@QAEHK@Z
    public: virtual void * __thiscall Dialog_Eject::`vector deleting destructor'(unsigned int) | ??_EDialog_Eject@@UAEPAXI@Z
    0x4F9AB0 | public: virtual void * __thiscall Dialog_Eject::`scalar deleting destructor'(unsigned int) | ??_GDialog_Eject@@UAEPAXI@Z
    0x5B3DF8 | const Dialog_Eject::`vftable' | ??_7Dialog_Eject@@6B@
*/

class Dialog_Eject : public PUMenuBase
{
    // const Dialog_Eject::`vftable' @ 0x5B3DF8

public:
    // 0x4F9340 | ??0Dialog_Eject@@QAE@HMMMMPAD@Z
    Dialog_Eject(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x4F9AB0 | ??_GDialog_Eject@@UAEPAXI@Z
    // 0x4F9520 | ??1Dialog_Eject@@UAE@XZ
    ~Dialog_Eject() override;

    // 0x4F9610 | ?AddName@Dialog_Eject@@QAEXPBDKH@Z
    void AddName(char const* arg1, u32 arg2, i32 arg3);

    // 0x4F95B0 | ?BootButtonCB@Dialog_Eject@@QAEXXZ
    void BootButtonCB();

    // 0x4F9940 | ?ClearNames@Dialog_Eject@@QAEXXZ
    void ClearNames();

    // 0x4F9A10 | ?FindRosterName@Dialog_Eject@@QAEHPBD@Z
    i32 FindRosterName(char const* arg1);

    // 0x4F9A80 | ?FindRosterName@Dialog_Eject@@QAEHK@Z
    i32 FindRosterName(u32 arg1);

    // 0x4F99C0 | ?PostNames@Dialog_Eject@@QAEXXZ
    void PostNames();

    // 0x4F9590 | ?PostSetup@Dialog_Eject@@UAEXXZ
    void PostSetup() override;

    // 0x4F95A0 | ?PreSetup@Dialog_Eject@@UAEXXZ
    void PreSetup() override;

    // 0x4F9800 | ?RemoveName@Dialog_Eject@@QAEXK@Z
    void RemoveName(u32 arg1);

    // 0x4F96B0 | ?RemoveName@Dialog_Eject@@QAEXPBDK@Z
    void RemoveName(char const* arg1, u32 arg2);

    // 0x4F99F0 | ?SetBootCB@Dialog_Eject@@QAEXVdatCallback@@@Z
    void SetBootCB(class datCallback arg1);
};

check_size(Dialog_Eject, 0x2F8);
