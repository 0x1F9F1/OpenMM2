/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
    input:keyboard

    0x4BAA70 | public: static void __cdecl ioKeyboard::Begin(bool) | ?Begin@ioKeyboard@@SAX_N@Z
    0x4BAB60 | public: static void __cdecl ioKeyboard::End(void) | ?End@ioKeyboard@@SAXXZ
    0x4BABA0 | public: static void __cdecl ioKeyboard::Update(void) | ?Update@ioKeyboard@@SAXXZ
    0x4BAC20 | public: static int __cdecl ioKeyboard::GetBufferedInput(char *,int) | ?GetBufferedInput@ioKeyboard@@SAHPADH@Z
    0x6A3674 | private: static unsigned char (* ioKeyboard::m_Keys)[256] | ?m_Keys@ioKeyboard@@0PAY0BAA@EA
    0x6A387C | private: static int ioKeyboard::m_Active | ?m_Active@ioKeyboard@@0HA
*/
