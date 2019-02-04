/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    input:input

    0x4BA8B0 | public: static void __cdecl ioInput::Begin(bool) | ?Begin@ioInput@@SAX_N@Z
    0x4BA8E0 | public: static void __cdecl ioInput::End(void) | ?End@ioInput@@SAXXZ
    0x4BA900 | public: static void __cdecl ioInput::Poll(void) | ?Poll@ioInput@@SAXXZ
    0x4BA910 | public: static void __cdecl ioInput::Update(void) | ?Update@ioInput@@SAXXZ
    0x5CDDE4 | public: static bool ioInput::bUseJoystick | ?bUseJoystick@ioInput@@2_NA
*/

#include "hooking.h"

class ioInput
{
public:
    static inline extern_var(0x5CDDE4, bool, bUseJoystick);

    static void Update();
    static void Poll(void);
};
