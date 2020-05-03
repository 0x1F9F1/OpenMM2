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

#include "gameman.h"

mmGameManager::mmGameManager()
{
    unimplemented();
}

mmGameManager::~mmGameManager()
{
    unimplemented();
}

void mmGameManager::BeDone()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x402FA0, this);
}

void mmGameManager::Cull()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x4031D0, this);
}

void mmGameManager::ForcePopupUI()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x402FB0, this);
}

void mmGameManager::ForceReplayUI()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x402FE0, this);
}

void mmGameManager::Reset()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x402E30, this);
}

void mmGameManager::Update()
{
    return stub<thiscall_t<void, mmGameManager*>>(0x403000, this);
}

define_dummy_symbol(mmgame_gameman);
