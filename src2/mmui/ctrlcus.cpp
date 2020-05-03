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

#include "ctrlcus.h"

ControlCustom::ControlCustom(i32 arg1)
{
    unimplemented();
}

ControlCustom::~ControlCustom()
{
    unimplemented();
}

void ControlCustom::BadAssignCB()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x502830, this);
}

void ControlCustom::CancelAction()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x502900, this);
}

void ControlCustom::CancelBadAssignment()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x502890, this);
}

void ControlCustom::ClearBadAssignment()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x502880, this);
}

void ControlCustom::DoneAction()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x5028F0, this);
}

void ControlCustom::ResetDefaultAction()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x5028D0, this);
}

void ControlCustom::VerifyBadAssignment()
{
    return stub<thiscall_t<void, ControlCustom*>>(0x5028B0, this);
}

define_dummy_symbol(mmui_ctrlcus);
