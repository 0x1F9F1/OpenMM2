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

#include "event.h"

eqEventHandler::eqEventHandler()
{
    unimplemented();
}

eqEventHandler::~eqEventHandler()
{
    unimplemented();
}

void eqEventHandler::AddClient(class eqEventMonitor* arg1)
{
    return stub<thiscall_t<void, eqEventHandler*, class eqEventMonitor*>>(0x4A2030, this, arg1);
}

i32 eqEventHandler::BeginGfx(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, eqEventHandler*, i32, i32, i32>>(0x4A1730, this, arg1, arg2, arg3);
}

void eqEventHandler::ClearActive(i32 arg1)
{
    return stub<thiscall_t<void, eqEventHandler*, i32>>(0x4A1780, this, arg1);
}

void eqEventHandler::EndGfx()
{
    return stub<thiscall_t<void, eqEventHandler*>>(0x4A1740, this);
}

void eqEventHandler::MinimizeApp(i32 arg1)
{
    return stub<thiscall_t<void, eqEventHandler*, i32>>(0x4A1760, this, arg1);
}

void eqEventHandler::RemoveClient(class eqEventMonitor* arg1)
{
    return stub<thiscall_t<void, eqEventHandler*, class eqEventMonitor*>>(0x4A2090, this, arg1);
}

void eqEventHandler::RestoreApp()
{
    return stub<thiscall_t<void, eqEventHandler*>>(0x4A1750, this);
}

void eqEventHandler::SetActive(i32 arg1)
{
    return stub<thiscall_t<void, eqEventHandler*, i32>>(0x4A1770, this, arg1);
}

void eqEventHandler::Update()
{
    return stub<thiscall_t<void, eqEventHandler*>>(0x4A1790, this);
}

char* eqEventHandler::EKeyName(i32 arg1)
{
    return stub<cdecl_t<char*, i32>>(0x4A1D60, arg1);
}

eqEventMonitor::eqEventMonitor()
{
    unimplemented();
}

eqEventMonitor::~eqEventMonitor()
{
    unimplemented();
}

void eqEventMonitor::Mouse(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8)
{
    return stub<thiscall_t<void, eqEventMonitor*, void*, i32, i32, i32, i32, i32, i32, i32>>(
        0x4A2110, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void eqEventMonitor::Keyboard(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, eqEventMonitor*, void*, i32, i32, i32, i32>>(
        0x4A2190, this, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(node_event);
