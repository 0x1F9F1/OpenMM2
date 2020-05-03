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
    mmui:dlg_host

    0x4FAD20 | public: __thiscall Dialog_Host::Dialog_Host(int,float,float,float,float,char *) | ??0Dialog_Host@@QAE@HMMMMPAD@Z
    0x4FAF40 | public: virtual __thiscall Dialog_Host::~Dialog_Host(void) | ??1Dialog_Host@@UAE@XZ
    0x4FAF50 | public: virtual void __thiscall Dialog_Host::PreSetup(void) | ?PreSetup@Dialog_Host@@UAEXXZ
    0x4FAF90 | public: void __thiscall Dialog_Host::PasswordCallback(void) | ?PasswordCallback@Dialog_Host@@QAEXXZ
    0x4FAFA0 | public: void __thiscall Dialog_Host::Clear(void) | ?Clear@Dialog_Host@@QAEXXZ
    public: virtual void * __thiscall Dialog_Host::`vector deleting destructor'(unsigned int) | ??_EDialog_Host@@UAEPAXI@Z
    0x4FAFE0 | public: virtual void * __thiscall Dialog_Host::`scalar deleting destructor'(unsigned int) | ??_GDialog_Host@@UAEPAXI@Z
    0x5B3F24 | const Dialog_Host::`vftable' | ??_7Dialog_Host@@6B@
*/

class Dialog_Host : public PUMenuBase
{
    // const Dialog_Host::`vftable' @ 0x5B3F24

public:
    // 0x4FAD20 | ??0Dialog_Host@@QAE@HMMMMPAD@Z
    Dialog_Host(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x4FAFE0 | ??_GDialog_Host@@UAEPAXI@Z
    // 0x4FAF40 | ??1Dialog_Host@@UAE@XZ
    ~Dialog_Host() override;

    // 0x4FAFA0 | ?Clear@Dialog_Host@@QAEXXZ
    void Clear();

    // 0x4FAF90 | ?PasswordCallback@Dialog_Host@@QAEXXZ
    void PasswordCallback();

    // 0x4FAF50 | ?PreSetup@Dialog_Host@@UAEXXZ
    void PreSetup() override;
};

check_size(Dialog_Host, 0x0);
