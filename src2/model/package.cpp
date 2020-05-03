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

#include "package.h"

modPackage::modPackage()
{
    unimplemented();
}

modPackage::~modPackage()
{
    unimplemented();
}

void modPackage::Close()
{
    return stub<thiscall_t<void, modPackage*>>(0x4A4790, this);
}

void modPackage::CloseFile()
{
    return stub<thiscall_t<void, modPackage*>>(0x4A4800, this);
}

bool modPackage::Open(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, modPackage*, char const*, char const*>>(0x4A4700, this, arg1, arg2);
}

class Stream* modPackage::OpenFile(char const* arg1)
{
    return stub<thiscall_t<class Stream*, modPackage*, char const*>>(0x4A47B0, this, arg1);
}

void modPackage::Skip()
{
    return stub<thiscall_t<void, modPackage*>>(0x4A4970, this);
}

void modPackage::SkipTo(char const* arg1)
{
    return stub<thiscall_t<void, modPackage*, char const*>>(0x4A48D0, this, arg1);
}

void modPackage::NextItem()
{
    return stub<thiscall_t<void, modPackage*>>(0x4A4820, this);
}

define_dummy_symbol(model_package);
