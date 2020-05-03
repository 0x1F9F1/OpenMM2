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
    mmui:dlg_newp

    0x4FD5B0 | public: __thiscall Dialog_NewPlayer::Dialog_NewPlayer(int,float,float,float,float,char *) | ??0Dialog_NewPlayer@@QAE@HMMMMPAD@Z
    0x4FD910 | public: virtual __thiscall Dialog_NewPlayer::~Dialog_NewPlayer(void) | ??1Dialog_NewPlayer@@UAE@XZ
    0x4FD920 | public: void __thiscall Dialog_NewPlayer::EnterNewPlayer(void) | ?EnterNewPlayer@Dialog_NewPlayer@@QAEXXZ
    0x4FD930 | public: virtual void __thiscall Dialog_NewPlayer::PreSetup(void) | ?PreSetup@Dialog_NewPlayer@@UAEXXZ
    0x4FD960 | public: virtual void * __thiscall Dialog_NewPlayer::`scalar deleting destructor'(unsigned int) | ??_GDialog_NewPlayer@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_NewPlayer::`vector deleting destructor'(unsigned int) | ??_EDialog_NewPlayer@@UAEPAXI@Z
    0x5B40DC | const Dialog_NewPlayer::`vftable' | ??_7Dialog_NewPlayer@@6B@
*/

class Dialog_NewPlayer : public PUMenuBase
{
    // const Dialog_NewPlayer::`vftable' @ 0x5B40DC

public:
    // 0x4FD5B0 | ??0Dialog_NewPlayer@@QAE@HMMMMPAD@Z
    Dialog_NewPlayer(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x4FD960 | ??_GDialog_NewPlayer@@UAEPAXI@Z
    // 0x4FD910 | ??1Dialog_NewPlayer@@UAE@XZ
    ~Dialog_NewPlayer() override;

    // 0x4FD920 | ?EnterNewPlayer@Dialog_NewPlayer@@QAEXXZ
    void EnterNewPlayer();

    // 0x4FD930 | ?PreSetup@Dialog_NewPlayer@@UAEXXZ
    void PreSetup() override;
};

check_size(Dialog_NewPlayer, 0x0);
