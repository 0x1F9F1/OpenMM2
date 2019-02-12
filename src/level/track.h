/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    level:track

    0x465EC0 | public: __thiscall lvlTrackManager::lvlTrackManager(void) | ??0lvlTrackManager@@QAE@XZ
    0x465ED0 | public: __thiscall lvlTrackManager::~lvlTrackManager(void) | ??1lvlTrackManager@@QAE@XZ
    0x465EE0 | public: void __thiscall lvlTrackManager::Init(class Matrix34 const &,float,int) | ?Init@lvlTrackManager@@QAEXABVMatrix34@@MH@Z
    0x465F50 | public: void __thiscall lvlTrackManager::Reset(void) | ?Reset@lvlTrackManager@@QAEXXZ
    private: void __thiscall lvlTrackManager::VerifyTrack(void) | ?VerifyTrack@lvlTrackManager@@AAEXXZ
    0x465F60 | public: void __thiscall lvlTrackManager::Update(class Vector3 const &,class Vector3 const &,class gfxTexture *) | ?Update@lvlTrackManager@@QAEXABVVector3@@0PAVgfxTexture@@@Z
    0x466320 | public: void __thiscall lvlTrackManager::Draw(void) | ?Draw@lvlTrackManager@@QAEXXZ
    0x4663E0 | private: void __thiscall lvlTrackManager::AddVertex(class gfxTexture *,float,class Vector3 const &,class Vector3 const &) | ?AddVertex@lvlTrackManager@@AAEXPAVgfxTexture@@MABVVector3@@1@Z
    0x466470 | public: float __thiscall Vector3::Dot(class Vector3 const &) const | ?Dot@Vector3@@QBEMABV1@@Z
    0x466490 | public: float __thiscall Vector3::Mag(void) const | ?Mag@Vector3@@QBEMXZ
*/

// #include "hooking.h"
