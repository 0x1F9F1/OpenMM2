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

#include "material.h"

phMaterial::phMaterial()
{
    unimplemented();
}

void phMaterial::Load(class datAsciiTokenizer& arg1)
{
    return stub<thiscall_t<void, phMaterial*, class datAsciiTokenizer&>>(0x493070, this, arg1);
}

void phMaterial::LoadBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, phMaterial*, class Stream*>>(0x4932A0, this, arg1);
}

void phMaterial::SetName(char const* arg1)
{
    return stub<thiscall_t<void, phMaterial*, char const*>>(0x493050, this, arg1);
}

void phMaterial::Copy(class phMaterial const& arg1)
{
    return stub<thiscall_t<void, phMaterial*, class phMaterial const&>>(0x493270, this, arg1);
}

void phMaterial::Save(class datAsciiTokenizer& arg1)
{
    return stub<thiscall_t<void, phMaterial*, class datAsciiTokenizer&>>(0x493160, this, arg1);
}

void phMaterial::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, phMaterial*, class Stream*>>(0x493340, this, arg1);
}

phMaterialMgr::~phMaterialMgr()
{
    unimplemented();
}

void phMaterialMgr::AddToTable(class phMaterial* arg1)
{
    return stub<thiscall_t<void, phMaterialMgr*, class phMaterial*>>(0x493660, this, arg1);
}

class phMaterial* phMaterialMgr::Find(char const* arg1)
{
    return stub<thiscall_t<class phMaterial*, phMaterialMgr*, char const*>>(0x493640, this, arg1);
}

i32 phMaterialMgr::FindIndexOfName(char const* arg1)
{
    return stub<thiscall_t<i32, phMaterialMgr*, char const*>>(0x493870, this, arg1);
}

char const* phMaterialMgr::FindNameOfIndex(i32 arg1)
{
    return stub<thiscall_t<char const*, phMaterialMgr*, i32>>(0x493840, this, arg1);
}

bool phMaterialMgr::LoadTable(char const* arg1)
{
    return stub<thiscall_t<bool, phMaterialMgr*, char const*>>(0x493680, this, arg1);
}

void phMaterialMgr::Save(class phMaterial* arg1, class datAsciiTokenizer* arg2)
{
    return stub<thiscall_t<void, phMaterialMgr*, class phMaterial*, class datAsciiTokenizer*>>(
        0x493800, this, arg1, arg2);
}

class phMaterial* phMaterialMgr::Load(class Stream* arg1)
{
    return stub<thiscall_t<class phMaterial*, phMaterialMgr*, class Stream*>>(0x493780, this, arg1);
}

class phMaterial* phMaterialMgr::Load(class datAsciiTokenizer* arg1)
{
    return stub<thiscall_t<class phMaterial*, phMaterialMgr*, class datAsciiTokenizer*>>(0x493700, this, arg1);
}

class phMaterialMgr& phMaterialMgr::CreateInstance(i32 arg1)
{
    return stub<cdecl_t<class phMaterialMgr&, i32>>(0x493420, arg1);
}

phMaterialMgr::phMaterialMgr()
{
    unimplemented();
}

phMaterialMgr::phMaterialMgr(class phMaterial* arg1, i32 arg2)
{
    unimplemented();
}

define_dummy_symbol(phcore_material);
