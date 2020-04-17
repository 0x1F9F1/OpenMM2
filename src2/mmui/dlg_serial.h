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
    mmui:dlg_serial

    0x4FD990 | public: __thiscall Dialog_Serial::Dialog_Serial(int,float,float,float,float,char *) | ??0Dialog_Serial@@QAE@HMMMMPAD@Z
    0x4FE340 | public: virtual __thiscall Dialog_Serial::~Dialog_Serial(void) | ??1Dialog_Serial@@UAE@XZ
    0x4FE3A0 | public: virtual void __thiscall Dialog_Serial::PreSetup(void) | ?PreSetup@Dialog_Serial@@UAEXXZ
    0x4FE3B0 | public: void __thiscall Dialog_Serial::IPAddressCallback(void) | ?IPAddressCallback@Dialog_Serial@@QAEXXZ
    0x4FE3C0 | public: void __thiscall Dialog_Serial::BuildComs(void) | ?BuildComs@Dialog_Serial@@QAEXXZ
    0x4FE480 | public: struct NETCOMMPACK * __thiscall Dialog_Serial::GetCommPack(void) | ?GetCommPack@Dialog_Serial@@QAEPAUNETCOMMPACK@@XZ
    0x4FE490 | public: virtual void * __thiscall Dialog_Serial::`scalar deleting destructor'(unsigned int) | ??_GDialog_Serial@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_Serial::`vector deleting destructor'(unsigned int) | ??_EDialog_Serial@@UAEPAXI@Z
    0x5B4124 | const Dialog_Serial::`vftable' | ??_7Dialog_Serial@@6B@
*/

struct Dialog_Serial : PUMenuBase
{
public:
    // Dialog_Serial::`vftable' @ 0x5B4124

    // 0x4FD990 | ??0Dialog_Serial@@QAE@HMMMMPAD@Z
    Dialog_Serial(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Serial, i32, f32, f32, f32, f32, char*>>(
            0x4FD990, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FE3B0 | ?IPAddressCallback@Dialog_Serial@@QAEXXZ
    void IPAddressCallback()
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x4FE3B0, this);
    }

    // 0x4FE3C0 | ?BuildComs@Dialog_Serial@@QAEXXZ
    void BuildComs()
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x4FE3C0, this);
    }

    // 0x4FE480 | ?GetCommPack@Dialog_Serial@@QAEPAUNETCOMMPACK@@XZ
    struct NETCOMMPACK* GetCommPack()
    {
        return stub<member_func_t<struct NETCOMMPACK*, Dialog_Serial>>(0x4FE480, this);
    }

    // 0x4FE340 | ??1Dialog_Serial@@UAE@XZ
    ~Dialog_Serial() override
    {
        stub<member_func_t<void, Dialog_Serial>>(0x4FE340, this);
    }

    // 0x4FE3A0 | ?PreSetup@Dialog_Serial@@UAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x4FE3A0, this);
    }
};
