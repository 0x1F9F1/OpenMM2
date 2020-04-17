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
    directmusic:dmusicmanager

    0x5173F0 | public: __thiscall DMusicManager::DMusicManager(void) | ??0DMusicManager@@QAE@XZ
    0x517400 | public: __thiscall DMusicManager::~DMusicManager(void) | ??1DMusicManager@@QAE@XZ
    0x517420 | public: int __thiscall DMusicManager::Init(struct IDirectSound *,int,unsigned long,int,unsigned long,unsigned long) | ?Init@DMusicManager@@QAEHPAUIDirectSound@@HKHKK@Z
    0x5174B0 | public: void __thiscall DMusicManager::Activate(int) | ?Activate@DMusicManager@@QAEXH@Z
    0x5174D0 | public: class DMusicObject * __thiscall DMusicManager::GetDMusicObjectPtr(void) | ?GetDMusicObjectPtr@DMusicManager@@QAEPAVDMusicObject@@XZ
    0x5174E0 | public: void __thiscall DMusicManager::Update(void) | ?Update@DMusicManager@@QAEXXZ
    0x5174F0 | public: void __thiscall DMusicManager::SetVolume(float) | ?SetVolume@DMusicManager@@QAEXM@Z
    0x517520 | public: float __thiscall DMusicManager::GetVolume(void) | ?GetVolume@DMusicManager@@QAEMXZ
    0x517540 | public: void __thiscall DMusicManager::SetPan(float) | ?SetPan@DMusicManager@@QAEXM@Z
*/

struct DMusicManager
{
public:
    // 0x5173F0 | ??0DMusicManager@@QAE@XZ
    DMusicManager()
    {
        stub<member_func_t<void, DMusicManager>>(0x5173F0, this);
    }

    // 0x517400 | ??1DMusicManager@@QAE@XZ
    ~DMusicManager()
    {
        stub<member_func_t<void, DMusicManager>>(0x517400, this);
    }

    // 0x517420 | ?Init@DMusicManager@@QAEHPAUIDirectSound@@HKHKK@Z
    i32 Init(struct IDirectSound* arg1, i32 arg2, u32 arg3, i32 arg4, u32 arg5, u32 arg6)
    {
        return stub<member_func_t<i32, DMusicManager, struct IDirectSound*, i32, u32, i32, u32, u32>>(
            0x517420, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x5174B0 | ?Activate@DMusicManager@@QAEXH@Z
    void Activate(i32 arg1)
    {
        return stub<member_func_t<void, DMusicManager, i32>>(0x5174B0, this, arg1);
    }

    // 0x5174D0 | ?GetDMusicObjectPtr@DMusicManager@@QAEPAVDMusicObject@@XZ
    class DMusicObject* GetDMusicObjectPtr()
    {
        return stub<member_func_t<class DMusicObject*, DMusicManager>>(0x5174D0, this);
    }

    // 0x5174E0 | ?Update@DMusicManager@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, DMusicManager>>(0x5174E0, this);
    }

    // 0x5174F0 | ?SetVolume@DMusicManager@@QAEXM@Z
    void SetVolume(f32 arg1)
    {
        return stub<member_func_t<void, DMusicManager, f32>>(0x5174F0, this, arg1);
    }

    // 0x517520 | ?GetVolume@DMusicManager@@QAEMXZ
    f32 GetVolume()
    {
        return stub<member_func_t<f32, DMusicManager>>(0x517520, this);
    }

    // 0x517540 | ?SetPan@DMusicManager@@QAEXM@Z
    void SetPan(f32 arg1)
    {
        return stub<member_func_t<void, DMusicManager, f32>>(0x517540, this, arg1);
    }
};
