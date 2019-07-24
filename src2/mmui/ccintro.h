/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmui:ccintro

    0x502D40 | public: __thiscall CrashCourseIntro::CrashCourseIntro(int) | ??0CrashCourseIntro@@QAE@H@Z
    0x502E80 | public: virtual __thiscall CrashCourseIntro::~CrashCourseIntro(void) | ??1CrashCourseIntro@@UAE@XZ
    0x502E90 | public: virtual void __thiscall CrashCourseIntro::PreSetup(void) | ?PreSetup@CrashCourseIntro@@UAEXXZ
    0x502EB0 | public: virtual void __thiscall CrashCourseIntro::PostSetup(void) | ?PostSetup@CrashCourseIntro@@UAEXXZ
    0x502EC0 | public: virtual void * __thiscall CrashCourseIntro::`scalar deleting destructor'(unsigned int) | ??_GCrashCourseIntro@@UAEPAXI@Z
    public: virtual void * __thiscall CrashCourseIntro::`vector deleting destructor'(unsigned int) | ??_ECrashCourseIntro@@UAEPAXI@Z
    0x5B4394 | const CrashCourseIntro::`vftable' | ??_7CrashCourseIntro@@6B@
*/

struct CrashCourseIntro : UIMenu
{
public:
    // CrashCourseIntro::`vftable' @ 0x5B4394

    // 0x502D40 | ??0CrashCourseIntro@@QAE@H@Z
    inline CrashCourseIntro(int32_t arg1)
    {
        stub<member_func_t<void, CrashCourseIntro, int32_t>>(0x502D40, this, arg1);
    }

    // 0x502E80 | ??1CrashCourseIntro@@UAE@XZ
    inline ~CrashCourseIntro() override
    {
        stub<member_func_t<void, CrashCourseIntro>>(0x502E80, this);
    }

    // 0x502E90 | ?PreSetup@CrashCourseIntro@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, CrashCourseIntro>>(0x502E90, this);
    }

    // 0x502EB0 | ?PostSetup@CrashCourseIntro@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, CrashCourseIntro>>(0x502EB0, this);
    }
};
