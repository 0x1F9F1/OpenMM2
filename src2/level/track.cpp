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

#include "track.h"

lvlTrackManager::lvlTrackManager()
{
    unimplemented();
}

lvlTrackManager::~lvlTrackManager()
{
    unimplemented();
}

void lvlTrackManager::Draw()
{
    return stub<thiscall_t<void, lvlTrackManager*>>(0x466320, this);
}

void lvlTrackManager::Init(class Matrix34 const& arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, lvlTrackManager*, class Matrix34 const&, f32, i32>>(0x465EE0, this, arg1, arg2, arg3);
}

void lvlTrackManager::Reset()
{
    return stub<thiscall_t<void, lvlTrackManager*>>(0x465F50, this);
}

void lvlTrackManager::Update(class Vector3 const& arg1, class Vector3 const& arg2, class gfxTexture* arg3)
{
    return stub<thiscall_t<void, lvlTrackManager*, class Vector3 const&, class Vector3 const&, class gfxTexture*>>(
        0x465F60, this, arg1, arg2, arg3);
}

void lvlTrackManager::AddVertex(class gfxTexture* arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<void, lvlTrackManager*, class gfxTexture*, f32, class Vector3 const&, class Vector3 const&>>(
        0x4663E0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(level_track);
