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
    mmui:dlg_ctrl

    0x4FE4C0 | public: __thiscall Dialog_ControlAssign::Dialog_ControlAssign(int,float,float,float,float,char *) | ??0Dialog_ControlAssign@@QAE@HMMMMPAD@Z
    0x4FE5D0 | public: virtual __thiscall Dialog_ControlAssign::~Dialog_ControlAssign(void) | ??1Dialog_ControlAssign@@UAE@XZ
    0x4FE5E0 | public: virtual void __thiscall Dialog_ControlAssign::PreSetup(void) | ?PreSetup@Dialog_ControlAssign@@UAEXXZ
    public: virtual void * __thiscall Dialog_ControlAssign::`vector deleting destructor'(unsigned int) | ??_EDialog_ControlAssign@@UAEPAXI@Z
    0x4FE5F0 | public: virtual void * __thiscall Dialog_ControlAssign::`scalar deleting destructor'(unsigned int) | ??_GDialog_ControlAssign@@UAEPAXI@Z
    0x5B416C | const Dialog_ControlAssign::`vftable' | ??_7Dialog_ControlAssign@@6B@
*/

struct Dialog_ControlAssign : PUMenuBase
{
public:
    // Dialog_ControlAssign::`vftable' @ 0x5B416C

    // 0x4FE4C0 | ??0Dialog_ControlAssign@@QAE@HMMMMPAD@Z
    inline Dialog_ControlAssign(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_ControlAssign, int32_t, float, float, float, float, char*>>(
            0x4FE4C0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FE5D0 | ??1Dialog_ControlAssign@@UAE@XZ
    inline ~Dialog_ControlAssign() override
    {
        stub<member_func_t<void, Dialog_ControlAssign>>(0x4FE5D0, this);
    }

    // 0x4FE5E0 | ?PreSetup@Dialog_ControlAssign@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_ControlAssign>>(0x4FE5E0, this);
    }
};
