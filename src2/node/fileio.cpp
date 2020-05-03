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

#include "fileio.h"

asFileIO::asFileIO()
{
    unimplemented();
}

asFileIO::~asFileIO()
{
    unimplemented();
}

void asFileIO::SetName(char const* arg1)
{
    return stub<thiscall_t<void, asFileIO*, char const*>>(0x597940, this, arg1);
}

void asFileIO::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, asFileIO*, class datParser&>>(0x5979B0, this, arg1);
}

void asFileIO::AfterLoad()
{
    return stub<thiscall_t<void, asFileIO*>>(0x595AE0, this);
}

void asFileIO::BeforeSave()
{
    return stub<thiscall_t<void, asFileIO*>>(0x595AF0, this);
}

bool asFileIO::Save()
{
    return stub<thiscall_t<bool, asFileIO*>>(0x597800, this);
}

bool asFileIO::Load()
{
    return stub<thiscall_t<bool, asFileIO*>>(0x597890, this);
}

char const* asFileIO::GetDirName()
{
    return stub<thiscall_t<char const*, asFileIO*>>(0x597970, this);
}

char const* asFileIO::GetClassName()
{
    return stub<thiscall_t<char const*, asFileIO*>>(0x5979C0, this);
}

define_dummy_symbol(node_fileio);
