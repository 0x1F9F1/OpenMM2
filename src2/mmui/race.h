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
    mmui:race

    0x505110 | public: __thiscall RaceMenu::RaceMenu(int) | ??0RaceMenu@@QAE@H@Z
    0x5051E0 | public: virtual __thiscall RaceMenu::~RaceMenu(void) | ??1RaceMenu@@UAE@XZ
    0x5051F0 | public: int __thiscall RaceMenu::GetRaceID(void) | ?GetRaceID@RaceMenu@@QAEHXZ
    0x505280 | public: void __thiscall RaceMenu::SetProgressMask(int) | ?SetProgressMask@RaceMenu@@QAEXH@Z
    0x5052A0 | public: void __thiscall RaceMenu::SetBlitzMask(int) | ?SetBlitzMask@RaceMenu@@QAEXH@Z
    0x5052C0 | public: void __thiscall RaceMenu::SetCheckpointMask(int) | ?SetCheckpointMask@RaceMenu@@QAEXH@Z
    0x5052E0 | public: void __thiscall RaceMenu::SetCircuitMask(int) | ?SetCircuitMask@RaceMenu@@QAEXH@Z
    0x505300 | public: char * __thiscall RaceMenu::GetRaceName(enum dgGameMode,int) | ?GetRaceName@RaceMenu@@QAEPADW4dgGameMode@@H@Z
    public: virtual void * __thiscall RaceMenu::`vector deleting destructor'(unsigned int) | ??_ERaceMenu@@UAEPAXI@Z
    0x505420 | public: virtual void * __thiscall RaceMenu::`scalar deleting destructor'(unsigned int) | ??_GRaceMenu@@UAEPAXI@Z
    0x505450 | public: virtual void __thiscall RaceMenuBase::SetCRWidgets(int) | ?SetCRWidgets@RaceMenuBase@@UAEXH@Z
    0x505460 | public: virtual void __thiscall RaceMenuBase::InitCRWidgets(void) | ?InitCRWidgets@RaceMenuBase@@UAEXXZ
    0x5B44A4 | const RaceMenu::`vftable' | ??_7RaceMenu@@6B@
*/

struct RaceMenu : RaceMenuBase
{
public:
    // RaceMenu::`vftable' @ 0x5B44A4

    // 0x505110 | ??0RaceMenu@@QAE@H@Z
    inline RaceMenu(i32 arg1)
    {
        stub<member_func_t<void, RaceMenu, i32>>(0x505110, this, arg1);
    }

    // 0x5051F0 | ?GetRaceID@RaceMenu@@QAEHXZ
    inline i32 GetRaceID()
    {
        return stub<member_func_t<i32, RaceMenu>>(0x5051F0, this);
    }

    // 0x505280 | ?SetProgressMask@RaceMenu@@QAEXH@Z
    inline void SetProgressMask(i32 arg1)
    {
        return stub<member_func_t<void, RaceMenu, i32>>(0x505280, this, arg1);
    }

    // 0x5052A0 | ?SetBlitzMask@RaceMenu@@QAEXH@Z
    inline void SetBlitzMask(i32 arg1)
    {
        return stub<member_func_t<void, RaceMenu, i32>>(0x5052A0, this, arg1);
    }

    // 0x5052C0 | ?SetCheckpointMask@RaceMenu@@QAEXH@Z
    inline void SetCheckpointMask(i32 arg1)
    {
        return stub<member_func_t<void, RaceMenu, i32>>(0x5052C0, this, arg1);
    }

    // 0x5052E0 | ?SetCircuitMask@RaceMenu@@QAEXH@Z
    inline void SetCircuitMask(i32 arg1)
    {
        return stub<member_func_t<void, RaceMenu, i32>>(0x5052E0, this, arg1);
    }

    // 0x505300 | ?GetRaceName@RaceMenu@@QAEPADW4dgGameMode@@H@Z
    inline char* GetRaceName(enum dgGameMode arg1, i32 arg2)
    {
        return stub<member_func_t<char*, RaceMenu, enum dgGameMode, i32>>(0x505300, this, arg1, arg2);
    }

    // 0x5051E0 | ??1RaceMenu@@UAE@XZ
    inline ~RaceMenu() override
    {
        stub<member_func_t<void, RaceMenu>>(0x5051E0, this);
    }
};
