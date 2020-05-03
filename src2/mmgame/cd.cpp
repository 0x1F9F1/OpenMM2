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

#include "cd.h"

mmCDPlayer::mmCDPlayer()
{
    unimplemented();
}

mmCDPlayer::~mmCDPlayer()
{
    unimplemented();
}

void mmCDPlayer::Cull()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x433170, this);
}

void mmCDPlayer::Init(class mmHUD* arg1)
{
    return stub<thiscall_t<void, mmCDPlayer*, class mmHUD*>>(0x433000, this, arg1);
}

void mmCDPlayer::NextTrack()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x4333F0, this);
}

void mmCDPlayer::PlayStop()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x433370, this);
}

void mmCDPlayer::PrevTrack()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x433460, this);
}

void mmCDPlayer::Reset()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x4330F0, this);
}

void mmCDPlayer::Toggle()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x4334D0, this);
}

void mmCDPlayer::Update()
{
    return stub<thiscall_t<void, mmCDPlayer*>>(0x433100, this);
}

define_dummy_symbol(mmgame_cd);
