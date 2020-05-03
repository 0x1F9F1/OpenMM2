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

#include "cullmgr.h"

asCullManager::asCullManager(i32 arg1, i32 arg2)
{
    unimplemented();
}

asCullManager::~asCullManager()
{
    unimplemented();
}

void asCullManager::DeclareBitmap(class asCullable* arg1, class gfxBitmap* arg2)
{
    return stub<thiscall_t<void, asCullManager*, class asCullable*, class gfxBitmap*>>(0x4A1680, this, arg1, arg2);
}

void asCullManager::Reset()
{
    return stub<thiscall_t<void, asCullManager*>>(0x4A13F0, this);
}

void asCullManager::Update()
{
    return stub<thiscall_t<void, asCullManager*>>(0x4A1450, this);
}

void asCullManager::DeclareCamera(class asCamera* arg1)
{
    return stub<thiscall_t<void, asCullManager*, class asCamera*>>(0x4A1580, this, arg1);
}

void asCullManager::DeclareCullable(class asCullable* arg1)
{
    return stub<thiscall_t<void, asCullManager*, class asCullable*>>(0x4A15B0, this, arg1);
}

void asCullManager::DeclareCullable2D(class asCullable* arg1)
{
    return stub<thiscall_t<void, asCullManager*, class asCullable*>>(0x4A1600, this, arg1);
}

void asCullManager::DeclareCullable2DFG(class asCullable* arg1)
{
    return stub<thiscall_t<void, asCullManager*, class asCullable*>>(0x4A1640, this, arg1);
}

void asCullManager::DisplayVersionString()
{
    return stub<thiscall_t<void, asCullManager*>>(0x4A1440, this);
}

define_dummy_symbol(node_cullmgr);
