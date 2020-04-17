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
    mmaudio:mmdmusicmanager

    0x519EB0 | public: __thiscall MMDMusicManager::MMDMusicManager(void) | ??0MMDMusicManager@@QAE@XZ
    0x519EE0 | public: __thiscall MMDMusicManager::~MMDMusicManager(void) | ??1MMDMusicManager@@QAE@XZ
    0x519F60 | public: void __thiscall MMDMusicManager::Init(int,unsigned long) | ?Init@MMDMusicManager@@QAEXHK@Z
    0x519FE0 | public: void __thiscall MMDMusicManager::Update(void) | ?Update@MMDMusicManager@@QAEXXZ
    0x519FF0 | public: void __thiscall MMDMusicManager::UpdateSeconds(void) | ?UpdateSeconds@MMDMusicManager@@QAEXXZ
    0x51A020 | public: void __thiscall MMDMusicManager::UpdateAmbientSFX(void) | ?UpdateAmbientSFX@MMDMusicManager@@QAEXXZ
    0x51A070 | public: void __thiscall MMDMusicManager::UpdateMusic(float,int,bool) | ?UpdateMusic@MMDMusicManager@@QAEXMH_N@Z
    0x51A0F0 | public: void __thiscall MMDMusicManager::UpdateSpeedEvents(void) | ?UpdateSpeedEvents@MMDMusicManager@@QAEXXZ
    0x51A170 | public: void __thiscall MMDMusicManager::CreateSpeedRanges(int) | ?CreateSpeedRanges@MMDMusicManager@@QAEXH@Z
    0x51A1A0 | public: void __thiscall MMDMusicManager::SetSpeedEventRange(float,float,unsigned char,int) | ?SetSpeedEventRange@MMDMusicManager@@QAEXMMEH@Z
    0x51A1D0 | public: void __thiscall MMDMusicManager::MatchMusicToPlayerSpeed(float) | ?MatchMusicToPlayerSpeed@MMDMusicManager@@QAEXM@Z
    0x51A2C0 | public: void __thiscall MMDMusicManager::Reset(void) | ?Reset@MMDMusicManager@@QAEXXZ
    0x51A2D0 | public: void __thiscall MMDMusicManager::EchoOn(float,float) | ?EchoOn@MMDMusicManager@@QAEXMM@Z
    0x51A3A0 | public: void __thiscall MMDMusicManager::EchoOff(void) | ?EchoOff@MMDMusicManager@@QAEXXZ
    0x6B15EC | class MMDMusicManager * MUSICMANAGERPTR | ?MUSICMANAGERPTR@@3PAVMMDMusicManager@@A
*/

// 0x6B15EC | ?MUSICMANAGERPTR@@3PAVMMDMusicManager@@A
inline extern_var(0x6B15EC, class MMDMusicManager*, MUSICMANAGERPTR);

class MMDMusicManager : DMusicManager
{
public:
    // 0x519EB0 | ??0MMDMusicManager@@QAE@XZ
    MMDMusicManager()
    {
        stub<member_func_t<void, MMDMusicManager>>(0x519EB0, this);
    }

    // 0x519EE0 | ??1MMDMusicManager@@QAE@XZ
    ~MMDMusicManager()
    {
        stub<member_func_t<void, MMDMusicManager>>(0x519EE0, this);
    }

    // 0x519F60 | ?Init@MMDMusicManager@@QAEXHK@Z
    void Init(i32 arg1, u32 arg2)
    {
        return stub<member_func_t<void, MMDMusicManager, i32, u32>>(0x519F60, this, arg1, arg2);
    }

    // 0x519FE0 | ?Update@MMDMusicManager@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x519FE0, this);
    }

    // 0x519FF0 | ?UpdateSeconds@MMDMusicManager@@QAEXXZ
    void UpdateSeconds()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x519FF0, this);
    }

    // 0x51A020 | ?UpdateAmbientSFX@MMDMusicManager@@QAEXXZ
    void UpdateAmbientSFX()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x51A020, this);
    }

    // 0x51A070 | ?UpdateMusic@MMDMusicManager@@QAEXMH_N@Z
    void UpdateMusic(f32 arg1, i32 arg2, bool arg3)
    {
        return stub<member_func_t<void, MMDMusicManager, f32, i32, bool>>(0x51A070, this, arg1, arg2, arg3);
    }

    // 0x51A0F0 | ?UpdateSpeedEvents@MMDMusicManager@@QAEXXZ
    void UpdateSpeedEvents()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x51A0F0, this);
    }

    // 0x51A170 | ?CreateSpeedRanges@MMDMusicManager@@QAEXH@Z
    void CreateSpeedRanges(i32 arg1)
    {
        return stub<member_func_t<void, MMDMusicManager, i32>>(0x51A170, this, arg1);
    }

    // 0x51A1A0 | ?SetSpeedEventRange@MMDMusicManager@@QAEXMMEH@Z
    void SetSpeedEventRange(f32 arg1, f32 arg2, u8 arg3, i32 arg4)
    {
        return stub<member_func_t<void, MMDMusicManager, f32, f32, u8, i32>>(0x51A1A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x51A1D0 | ?MatchMusicToPlayerSpeed@MMDMusicManager@@QAEXM@Z
    void MatchMusicToPlayerSpeed(f32 arg1)
    {
        return stub<member_func_t<void, MMDMusicManager, f32>>(0x51A1D0, this, arg1);
    }

    // 0x51A2C0 | ?Reset@MMDMusicManager@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x51A2C0, this);
    }

    // 0x51A2D0 | ?EchoOn@MMDMusicManager@@QAEXMM@Z
    void EchoOn(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, MMDMusicManager, f32, f32>>(0x51A2D0, this, arg1, arg2);
    }

    // 0x51A3A0 | ?EchoOff@MMDMusicManager@@QAEXXZ
    void EchoOff()
    {
        return stub<member_func_t<void, MMDMusicManager>>(0x51A3A0, this);
    }
};
