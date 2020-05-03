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

class lvlMaterial* lvlMaterialMgr::Find(char const* arg1)
{
    return stub<thiscall_t<class lvlMaterial*, lvlMaterialMgr*, char const*>>(0x466A30, this, arg1);
}

class phMaterial* lvlMaterialMgr::Load(class datAsciiTokenizer* arg1)
{
    return stub<thiscall_t<class phMaterial*, lvlMaterialMgr*, class datAsciiTokenizer*>>(0x466A50, this, arg1);
}

class lvlMaterial* lvlMaterialMgr::Lookup(i32 arg1)
{
    return stub<thiscall_t<class lvlMaterial*, lvlMaterialMgr*, i32>>(0x466A40, this, arg1);
}

class lvlMaterialMgr& lvlMaterialMgr::CreateInstance()
{
    return stub<cdecl_t<class lvlMaterialMgr&>>(0x466930);
}

void lvlMaterialMgr::DeleteInstance()
{
    return stub<cdecl_t<void>>(0x466A00);
}

class lvlMaterialMgr& lvlMaterialMgr::GetInstance()
{
    return stub<cdecl_t<class lvlMaterialMgr&>>(0x42CCA0);
}

lvlMaterialMgr::lvlMaterialMgr()
{
    unimplemented();
}

lvlMaterial::lvlMaterial()
{
    unimplemented();
}

void lvlMaterial::Copy(class lvlMaterial const& arg1)
{
    return stub<thiscall_t<void, lvlMaterial*, class lvlMaterial const&>>(0x4668E0, this, arg1);
}

void lvlMaterial::Load(class datAsciiTokenizer& arg1)
{
    return stub<thiscall_t<void, lvlMaterial*, class datAsciiTokenizer&>>(0x466510, this, arg1);
}

void lvlMaterial::Save(class datAsciiTokenizer& arg1)
{
    return stub<thiscall_t<void, lvlMaterial*, class datAsciiTokenizer&>>(0x4666F0, this, arg1);
}

define_dummy_symbol(level_material);
