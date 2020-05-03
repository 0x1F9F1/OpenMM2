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

#include "birth.h"

asBirthRule::asBirthRule()
{
    unimplemented();
}

asBirthRule::~asBirthRule()
{
    unimplemented();
}

void asBirthRule::Copy(class asBirthRule* arg1)
{
    return stub<thiscall_t<void, asBirthRule*, class asBirthRule*>>(0x45F0A0, this, arg1);
}

void asBirthRule::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, asBirthRule*, class datParser&>>(0x45F900, this, arg1);
}

char* asBirthRule::GetClassName()
{
    return stub<thiscall_t<char*, asBirthRule*>>(0x45FC20, this);
}

char const* asBirthRule::GetDirName()
{
    return stub<thiscall_t<char const*, asBirthRule*>>(0x45EDB0, this);
}

void asBirthRule::Indent(class datBaseTokenizer* arg1, i32 arg2)
{
    return stub<thiscall_t<void, asBirthRule*, class datBaseTokenizer*, i32>>(0x45F210, this, arg1, arg2);
}

void asBirthRule::InitSpark(struct asSparkInfo* arg1, class asParticles& arg2, i32 arg3)
{
    return stub<thiscall_t<void, asBirthRule*, struct asSparkInfo*, class asParticles&, i32>>(
        0x45EDC0, this, arg1, arg2, arg3);
}

void asBirthRule::Load(class datBaseTokenizer* arg1)
{
    return stub<thiscall_t<void, asBirthRule*, class datBaseTokenizer*>>(0x45F720, this, arg1);
}

void asBirthRule::Save(class datBaseTokenizer* arg1, i32 arg2)
{
    return stub<thiscall_t<void, asBirthRule*, class datBaseTokenizer*, i32>>(0x45F240, this, arg1, arg2);
}

define_dummy_symbol(effects_birth);
