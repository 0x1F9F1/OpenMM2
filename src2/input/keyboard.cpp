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

#include "keyboard.h"

void ioKeyboard::Begin(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4BAA70, arg1);
}

void ioKeyboard::End()
{
    return stub<cdecl_t<void>>(0x4BAB60);
}

i32 ioKeyboard::GetBufferedInput(char* arg1, i32 arg2)
{
    return stub<cdecl_t<i32, char*, i32>>(0x4BAC20, arg1, arg2);
}

void ioKeyboard::Update()
{
    return stub<cdecl_t<void>>(0x4BABA0);
}

define_dummy_symbol(input_keyboard);
