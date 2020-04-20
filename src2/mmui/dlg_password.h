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
    mmui:dlg_password

    0x4FB010 | public: __thiscall Dialog_Password::Dialog_Password(int,float,float,float,float,char *) | ??0Dialog_Password@@QAE@HMMMMPAD@Z
    0x4FB1A0 | public: virtual __thiscall Dialog_Password::~Dialog_Password(void) | ??1Dialog_Password@@UAE@XZ
    0x4FB1B0 | public: virtual void __thiscall Dialog_Password::PreSetup(void) | ?PreSetup@Dialog_Password@@UAEXXZ
    0x4FB1C0 | public: void __thiscall Dialog_Password::PasswordCallback(void) | ?PasswordCallback@Dialog_Password@@QAEXXZ
    0x4FB1D0 | public: virtual void * __thiscall Dialog_Password::`scalar deleting destructor'(unsigned int) | ??_GDialog_Password@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_Password::`vector deleting destructor'(unsigned int) | ??_EDialog_Password@@UAEPAXI@Z
    0x5B3F6C | const Dialog_Password::`vftable' | ??_7Dialog_Password@@6B@
*/

struct Dialog_Password : PUMenuBase
{
public:
    // Dialog_Password::`vftable' @ 0x5B3F6C

    // 0x4FB010 | ??0Dialog_Password@@QAE@HMMMMPAD@Z
    inline Dialog_Password(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Password, int32_t, float, float, float, float, char*>>(
            0x4FB010, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FB1C0 | ?PasswordCallback@Dialog_Password@@QAEXXZ
    inline void PasswordCallback()
    {
        return stub<member_func_t<void, Dialog_Password>>(0x4FB1C0, this);
    }

    // 0x4FB1A0 | ??1Dialog_Password@@UAE@XZ
    inline ~Dialog_Password() override
    {
        stub<member_func_t<void, Dialog_Password>>(0x4FB1A0, this);
    }

    // 0x4FB1B0 | ?PreSetup@Dialog_Password@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Password>>(0x4FB1B0, this);
    }
};
