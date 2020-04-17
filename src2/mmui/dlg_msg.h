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
    mmui:dlg_msg

    0x4FD3D0 | public: __thiscall Dialog_Message::Dialog_Message(int,float,float,float,float,char *) | ??0Dialog_Message@@QAE@HMMMMPAD@Z
    0x4FD4F0 | public: void __thiscall Dialog_Message::Init(int,char *,char *) | ?Init@Dialog_Message@@QAEXHPAD0@Z
    0x4FD560 | public: virtual __thiscall Dialog_Message::~Dialog_Message(void) | ??1Dialog_Message@@UAE@XZ
    0x4FD570 | public: virtual void __thiscall Dialog_Message::PreSetup(void) | ?PreSetup@Dialog_Message@@UAEXXZ
    public: virtual void * __thiscall Dialog_Message::`vector deleting destructor'(unsigned int) | ??_EDialog_Message@@UAEPAXI@Z
    0x4FD580 | public: virtual void * __thiscall Dialog_Message::`scalar deleting destructor'(unsigned int) | ??_GDialog_Message@@UAEPAXI@Z
    0x5B4094 | const Dialog_Message::`vftable' | ??_7Dialog_Message@@6B@
*/

struct Dialog_Message : PUMenuBase
{
public:
    // Dialog_Message::`vftable' @ 0x5B4094

    // 0x4FD3D0 | ??0Dialog_Message@@QAE@HMMMMPAD@Z
    Dialog_Message(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Message, i32, f32, f32, f32, f32, char*>>(
            0x4FD3D0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FD4F0 | ?Init@Dialog_Message@@QAEXHPAD0@Z
    void Init(i32 arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<void, Dialog_Message, i32, char*, char*>>(0x4FD4F0, this, arg1, arg2, arg3);
    }

    // 0x4FD560 | ??1Dialog_Message@@UAE@XZ
    ~Dialog_Message() override
    {
        stub<member_func_t<void, Dialog_Message>>(0x4FD560, this);
    }

    // 0x4FD570 | ?PreSetup@Dialog_Message@@UAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Message>>(0x4FD570, this);
    }
};
