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

#include "viewmgr.h"

mmViewMgr::mmViewMgr()
{
    unimplemented();
}

mmViewMgr::~mmViewMgr()
{
    unimplemented();
}

void mmViewMgr::Init(class mmHUD* arg1, class mmHudMap* arg2, class mmPlayer* arg3)
{
    return stub<thiscall_t<void, mmViewMgr*, class mmHUD*, class mmHudMap*, class mmPlayer*>>(
        0x431C80, this, arg1, arg2, arg3);
}

void mmViewMgr::SetViewSetting(i32 arg1)
{
    return stub<thiscall_t<void, mmViewMgr*, i32>>(0x431D10, this, arg1);
}

void mmViewMgr::Update()
{
    return stub<thiscall_t<void, mmViewMgr*>>(0x432100, this);
}

define_dummy_symbol(mmgame_viewmgr);
