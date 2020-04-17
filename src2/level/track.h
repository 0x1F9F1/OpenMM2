/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

class lvlTrackManager
{
public:
    // 0x465EC0 | ??0lvlTrackManager@@QAE@XZ
    lvlTrackManager()
    {
        stub<member_func_t<void, lvlTrackManager>>(0x465EC0, this);
    }

    // 0x465ED0 | ??1lvlTrackManager@@QAE@XZ
    ~lvlTrackManager()
    {
        stub<member_func_t<void, lvlTrackManager>>(0x465ED0, this);
    }

    // 0x465EE0 | ?Init@lvlTrackManager@@QAEXABVMatrix34@@MH@Z
    void Init(class Matrix34 const& arg1, f32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, lvlTrackManager, class Matrix34 const&, f32, i32>>(
            0x465EE0, this, arg1, arg2, arg3);
    }

    // 0x465F50 | ?Reset@lvlTrackManager@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, lvlTrackManager>>(0x465F50, this);
    }

    // 0x465F60 | ?Update@lvlTrackManager@@QAEXABVVector3@@0PAVgfxTexture@@@Z
    void Update(class Vector3 const& arg1, class Vector3 const& arg2, class gfxTexture* arg3)
    {
        return stub<
            member_func_t<void, lvlTrackManager, class Vector3 const&, class Vector3 const&, class gfxTexture*>>(
            0x465F60, this, arg1, arg2, arg3);
    }

    // 0x466320 | ?Draw@lvlTrackManager@@QAEXXZ
    void Draw()
    {
        return stub<member_func_t<void, lvlTrackManager>>(0x466320, this);
    }

    // 0x4663E0 | ?AddVertex@lvlTrackManager@@AAEXPAVgfxTexture@@MABVVector3@@1@Z
    void AddVertex(class gfxTexture* arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4)
    {
        return stub<
            member_func_t<void, lvlTrackManager, class gfxTexture*, f32, class Vector3 const&, class Vector3 const&>>(
            0x4663E0, this, arg1, arg2, arg3, arg4);
    }
};
