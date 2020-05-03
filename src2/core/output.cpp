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

#include "output.h"

void Abortf(char const* arg1, ...)
{
    unimplemented();
}

void DisablePopUpErrors()
{
    return stub<cdecl_t<void>>(0x4C94D0);
}

void DisablePopUpQuits()
{
    return stub<cdecl_t<void>>(0x4C94E0);
}

void Displayf(char const* arg1, ...)
{
    unimplemented();
}

void EnablePopUpErrors()
{
    return stub<cdecl_t<void>>(0x4C94F0);
}

void EnablePopUpQuits()
{
    return stub<cdecl_t<void>>(0x4C9500);
}

void Errorf(char const* arg1, ...)
{
    unimplemented();
}

void Messagef(char const* arg1, ...)
{
    unimplemented();
}

void Printf(char const* arg1, ...)
{
    unimplemented();
}

void Quitf(char const* arg1, ...)
{
    unimplemented();
}

void Warningf(char const* arg1, ...)
{
    unimplemented();
}

void datOutput::CallAfterMsgBoxFunction()
{
    return stub<cdecl_t<void>>(0x4C9580);
}

void datOutput::CallBeforeMsgBoxFunction()
{
    return stub<cdecl_t<void>>(0x4C9570);
}

void datOutput::CloseLog()
{
    return stub<cdecl_t<void>>(0x4C9530);
}

bool datOutput::OpenLog(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4C95A0, arg1);
}

void datOutput::SetAfterMsgBoxFunction(void (*arg1)(void))
{
    return stub<cdecl_t<void, void (*)(void)>>(0x4C9560, arg1);
}

void datOutput::SetBeforeMsgBoxFunction(void (*arg1)(void))
{
    return stub<cdecl_t<void, void (*)(void)>>(0x4C9550, arg1);
}

void datOutput::SetOutputMask(u32 arg1)
{
    return stub<cdecl_t<void, u32>>(0x4C9590, arg1);
}

define_dummy_symbol(core_output);
