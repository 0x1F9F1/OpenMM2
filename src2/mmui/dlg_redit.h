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
    mmui:dlg_redit

    0x4FA050 | public: __thiscall Dialog_ReplayEdit::Dialog_ReplayEdit(int,float,float,float,float,char *) | ??0Dialog_ReplayEdit@@QAE@HMMMMPAD@Z
    0x4FA1E0 | public: virtual __thiscall Dialog_ReplayEdit::~Dialog_ReplayEdit(void) | ??1Dialog_ReplayEdit@@UAE@XZ
    0x4FA1F0 | public: virtual void __thiscall Dialog_ReplayEdit::PreSetup(void) | ?PreSetup@Dialog_ReplayEdit@@UAEXXZ
    0x4FA200 | public: void __thiscall Dialog_ReplayEdit::ReplayDescCallback(void) | ?ReplayDescCallback@Dialog_ReplayEdit@@QAEXXZ
    0x4FA210 | public: void __thiscall Dialog_ReplayEdit::SetDesc(char *) | ?SetDesc@Dialog_ReplayEdit@@QAEXPAD@Z
    0x4FA280 | public: virtual void * __thiscall Dialog_ReplayEdit::`scalar deleting destructor'(unsigned int) | ??_GDialog_ReplayEdit@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_ReplayEdit::`vector deleting destructor'(unsigned int) | ??_EDialog_ReplayEdit@@UAEPAXI@Z
    0x5B3E88 | const Dialog_ReplayEdit::`vftable' | ??_7Dialog_ReplayEdit@@6B@
*/

struct Dialog_ReplayEdit : PUMenuBase
{
public:
    // Dialog_ReplayEdit::`vftable' @ 0x5B3E88

    // 0x4FA050 | ??0Dialog_ReplayEdit@@QAE@HMMMMPAD@Z
    Dialog_ReplayEdit(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_ReplayEdit, i32, f32, f32, f32, f32, char*>>(
            0x4FA050, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FA200 | ?ReplayDescCallback@Dialog_ReplayEdit@@QAEXXZ
    void ReplayDescCallback()
    {
        return stub<member_func_t<void, Dialog_ReplayEdit>>(0x4FA200, this);
    }

    // 0x4FA210 | ?SetDesc@Dialog_ReplayEdit@@QAEXPAD@Z
    void SetDesc(char* arg1)
    {
        return stub<member_func_t<void, Dialog_ReplayEdit, char*>>(0x4FA210, this, arg1);
    }

    // 0x4FA1E0 | ??1Dialog_ReplayEdit@@UAE@XZ
    ~Dialog_ReplayEdit() override
    {
        stub<member_func_t<void, Dialog_ReplayEdit>>(0x4FA1E0, this);
    }

    // 0x4FA1F0 | ?PreSetup@Dialog_ReplayEdit@@UAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_ReplayEdit>>(0x4FA1F0, this);
    }
};
