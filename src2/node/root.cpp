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

#include "root.h"

asRoot::asRoot()
{
    unimplemented();
}

asRoot::~asRoot()
{
    unimplemented();
}

char* asRoot::GetClassName()
{
    return stub<thiscall_t<char*, asRoot*>>(0x4A0CD0, this);
}

void asRoot::Init(bool arg1)
{
    return stub<thiscall_t<void, asRoot*, bool>>(0x4A0BE0, this, arg1);
}

bool asRoot::IsPaused()
{
    return stub<thiscall_t<bool, asRoot*>>(0x4A0C60, this);
}

void asRoot::Quit()
{
    return stub<thiscall_t<void, asRoot*>>(0x4A0C50, this);
}

void asRoot::Reset()
{
    return stub<thiscall_t<void, asRoot*>>(0x4A0C40, this);
}

void asRoot::SetPause(bool arg1)
{
    return stub<thiscall_t<void, asRoot*, bool>>(0x4A0C80, this, arg1);
}

void asRoot::TogglePause()
{
    return stub<thiscall_t<void, asRoot*>>(0x4A0C70, this);
}

void asRoot::Update()
{
    return stub<thiscall_t<void, asRoot*>>(0x4A0C00, this);
}

define_dummy_symbol(node_root);
