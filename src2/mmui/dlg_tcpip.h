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
    mmui:dlg_tcpip

    0x4FE620 | public: __thiscall Dialog_TCPIP::Dialog_TCPIP(int,float,float,float,float,char *) | ??0Dialog_TCPIP@@QAE@HMMMMPAD@Z
    0x4FE7B0 | public: virtual __thiscall Dialog_TCPIP::~Dialog_TCPIP(void) | ??1Dialog_TCPIP@@UAE@XZ
    0x4FE7C0 | public: virtual void __thiscall Dialog_TCPIP::PreSetup(void) | ?PreSetup@Dialog_TCPIP@@UAEXXZ
    0x4FE7D0 | public: void __thiscall Dialog_TCPIP::IPAddressCallback(void) | ?IPAddressCallback@Dialog_TCPIP@@QAEXXZ
    0x4FE7E0 | public: void __thiscall Dialog_TCPIP::SetIPAddress(char *) | ?SetIPAddress@Dialog_TCPIP@@QAEXPAD@Z
    public: virtual void * __thiscall Dialog_TCPIP::`vector deleting destructor'(unsigned int) | ??_EDialog_TCPIP@@UAEPAXI@Z
    0x4FE850 | public: virtual void * __thiscall Dialog_TCPIP::`scalar deleting destructor'(unsigned int) | ??_GDialog_TCPIP@@UAEPAXI@Z
    0x5B41B4 | const Dialog_TCPIP::`vftable' | ??_7Dialog_TCPIP@@6B@
*/

struct Dialog_TCPIP : PUMenuBase
{
public:
    // Dialog_TCPIP::`vftable' @ 0x5B41B4

    // 0x4FE620 | ??0Dialog_TCPIP@@QAE@HMMMMPAD@Z
    inline Dialog_TCPIP(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_TCPIP, int32_t, float, float, float, float, char*>>(
            0x4FE620, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FE7D0 | ?IPAddressCallback@Dialog_TCPIP@@QAEXXZ
    inline void IPAddressCallback()
    {
        return stub<member_func_t<void, Dialog_TCPIP>>(0x4FE7D0, this);
    }

    // 0x4FE7E0 | ?SetIPAddress@Dialog_TCPIP@@QAEXPAD@Z
    inline void SetIPAddress(char* arg1)
    {
        return stub<member_func_t<void, Dialog_TCPIP, char*>>(0x4FE7E0, this, arg1);
    }

    // 0x4FE7B0 | ??1Dialog_TCPIP@@UAE@XZ
    inline ~Dialog_TCPIP() override
    {
        stub<member_func_t<void, Dialog_TCPIP>>(0x4FE7B0, this);
    }

    // 0x4FE7C0 | ?PreSetup@Dialog_TCPIP@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_TCPIP>>(0x4FE7C0, this);
    }
};
