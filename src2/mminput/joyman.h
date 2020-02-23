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
    mminput:joyman

    0x52FC10 | int __stdcall inputEnumDeviceProc(struct DIDEVICEINSTANCEA *,void *) | ?inputEnumDeviceProc@@YGHPAUDIDEVICEINSTANCEA@@PAX@Z
    0x52FC40 | public: __thiscall mmJoyMan::mmJoyMan(void) | ??0mmJoyMan@@QAE@XZ
    0x52FC50 | public: __thiscall mmJoyMan::~mmJoyMan(void) | ??1mmJoyMan@@QAE@XZ
    0x52FC90 | public: int __thiscall mmJoyMan::Init(struct HINSTANCE__ *,struct HWND__ *) | ?Init@mmJoyMan@@QAEHPAUHINSTANCE__@@PAUHWND__@@@Z
    0x52FDF0 | public: int __thiscall mmJoyMan::ButtonToBit(int) | ?ButtonToBit@mmJoyMan@@QAEHH@Z
    0x52FE20 | public: int __thiscall mmJoyMan::QJoystick(void) | ?QJoystick@mmJoyMan@@QAEHXZ
    0x52FE30 | public: void __thiscall mmJoyMan::Update(void) | ?Update@mmJoyMan@@QAEXXZ
    0x52FE60 | public: float __thiscall mmJoyMan::GetJoyAxis(int,int) | ?GetJoyAxis@mmJoyMan@@QAEMHH@Z
    0x52FEA0 | public: int __thiscall mmJoyMan::GetJoyButton(int,int) | ?GetJoyButton@mmJoyMan@@QAEHHH@Z
    0x52FEF0 | public: int __thiscall mmJoyMan::PollJoyButtons(void) | ?PollJoyButtons@mmJoyMan@@QAEHXZ
    0x52FF50 | public: int __thiscall mmJoyMan::PollJoyAxes(void) | ?PollJoyAxes@mmJoyMan@@QAEHXZ
    0x52FF90 | public: void __thiscall mmJoyMan::SetCapture(int) | ?SetCapture@mmJoyMan@@QAEXH@Z
    0x530000 | public: int __thiscall mmJoyMan::GetOneButton(long) | ?GetOneButton@mmJoyMan@@QAEHJ@Z
    0x530030 | public: class mmEffectFF * __thiscall mmJoyMan::GetFFEffect(int) | ?GetFFEffect@mmJoyMan@@QAEPAVmmEffectFF@@H@Z
    0x530060 | public: int __thiscall mmJoyMan::ToggleEnabled(int) | ?ToggleEnabled@mmJoyMan@@QAEHH@Z
    0x5300A0 | public: int __thiscall mmJoyMan::FFPlay(int) | ?FFPlay@mmJoyMan@@QAEHH@Z
    0x5300D0 | public: int __thiscall mmJoyMan::FFStop(int) | ?FFStop@mmJoyMan@@QAEHH@Z
    0x530100 | public: int __thiscall mmJoyMan::FFIsPlaying(int) | ?FFIsPlaying@mmJoyMan@@QAEHH@Z
    0x530130 | public: int __thiscall mmJoyMan::FFSetValues(int,float,float) | ?FFSetValues@mmJoyMan@@QAEHHMM@Z
    0x530170 | public: void __thiscall mmJoyMan::StopAllFF(void) | ?StopAllFF@mmJoyMan@@QAEXXZ
    0x530190 | public: int __thiscall mmJoyMan::HasCoolie(void) | ?HasCoolie@mmJoyMan@@QAEHXZ
    0x5301B0 | public: int __thiscall mmJoyMan::HasThrottle(void) | ?HasThrottle@mmJoyMan@@QAEHXZ
    0x5301D0 | public: void * __thiscall mmJoystick::`vector deleting destructor'(unsigned int) | ??_EmmJoystick@@QAEPAXI@Z
*/

// 0x52FC10 | ?inputEnumDeviceProc@@YGHPAUDIDEVICEINSTANCEA@@PAX@Z
inline i32 __stdcall inputEnumDeviceProc(struct DIDEVICEINSTANCEA* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct DIDEVICEINSTANCEA*, void*>>(0x52FC10, arg1, arg2);
}

struct mmJoyMan
{
public:
    // 0x52FC40 | ??0mmJoyMan@@QAE@XZ
    inline mmJoyMan()
    {
        stub<member_func_t<void, mmJoyMan>>(0x52FC40, this);
    }

    // 0x52FC50 | ??1mmJoyMan@@QAE@XZ
    inline ~mmJoyMan()
    {
        stub<member_func_t<void, mmJoyMan>>(0x52FC50, this);
    }

    // 0x52FC90 | ?Init@mmJoyMan@@QAEHPAUHINSTANCE__@@PAUHWND__@@@Z
    inline i32 Init(struct HINSTANCE__* arg1, struct HWND__* arg2)
    {
        return stub<member_func_t<i32, mmJoyMan, struct HINSTANCE__*, struct HWND__*>>(0x52FC90, this, arg1, arg2);
    }

    // 0x52FDF0 | ?ButtonToBit@mmJoyMan@@QAEHH@Z
    inline i32 ButtonToBit(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x52FDF0, this, arg1);
    }

    // 0x52FE20 | ?QJoystick@mmJoyMan@@QAEHXZ
    inline i32 QJoystick()
    {
        return stub<member_func_t<i32, mmJoyMan>>(0x52FE20, this);
    }

    // 0x52FE30 | ?Update@mmJoyMan@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmJoyMan>>(0x52FE30, this);
    }

    // 0x52FE60 | ?GetJoyAxis@mmJoyMan@@QAEMHH@Z
    inline f32 GetJoyAxis(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<f32, mmJoyMan, i32, i32>>(0x52FE60, this, arg1, arg2);
    }

    // 0x52FEA0 | ?GetJoyButton@mmJoyMan@@QAEHHH@Z
    inline i32 GetJoyButton(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmJoyMan, i32, i32>>(0x52FEA0, this, arg1, arg2);
    }

    // 0x52FEF0 | ?PollJoyButtons@mmJoyMan@@QAEHXZ
    inline i32 PollJoyButtons()
    {
        return stub<member_func_t<i32, mmJoyMan>>(0x52FEF0, this);
    }

    // 0x52FF50 | ?PollJoyAxes@mmJoyMan@@QAEHXZ
    inline i32 PollJoyAxes()
    {
        return stub<member_func_t<i32, mmJoyMan>>(0x52FF50, this);
    }

    // 0x52FF90 | ?SetCapture@mmJoyMan@@QAEXH@Z
    inline void SetCapture(i32 arg1)
    {
        return stub<member_func_t<void, mmJoyMan, i32>>(0x52FF90, this, arg1);
    }

    // 0x530000 | ?GetOneButton@mmJoyMan@@QAEHJ@Z
    inline i32 GetOneButton(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x530000, this, arg1);
    }

    // 0x530030 | ?GetFFEffect@mmJoyMan@@QAEPAVmmEffectFF@@H@Z
    inline class mmEffectFF* GetFFEffect(i32 arg1)
    {
        return stub<member_func_t<class mmEffectFF*, mmJoyMan, i32>>(0x530030, this, arg1);
    }

    // 0x530060 | ?ToggleEnabled@mmJoyMan@@QAEHH@Z
    inline i32 ToggleEnabled(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x530060, this, arg1);
    }

    // 0x5300A0 | ?FFPlay@mmJoyMan@@QAEHH@Z
    inline i32 FFPlay(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x5300A0, this, arg1);
    }

    // 0x5300D0 | ?FFStop@mmJoyMan@@QAEHH@Z
    inline i32 FFStop(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x5300D0, this, arg1);
    }

    // 0x530100 | ?FFIsPlaying@mmJoyMan@@QAEHH@Z
    inline i32 FFIsPlaying(i32 arg1)
    {
        return stub<member_func_t<i32, mmJoyMan, i32>>(0x530100, this, arg1);
    }

    // 0x530130 | ?FFSetValues@mmJoyMan@@QAEHHMM@Z
    inline i32 FFSetValues(i32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<i32, mmJoyMan, i32, f32, f32>>(0x530130, this, arg1, arg2, arg3);
    }

    // 0x530170 | ?StopAllFF@mmJoyMan@@QAEXXZ
    inline void StopAllFF()
    {
        return stub<member_func_t<void, mmJoyMan>>(0x530170, this);
    }

    // 0x530190 | ?HasCoolie@mmJoyMan@@QAEHXZ
    inline i32 HasCoolie()
    {
        return stub<member_func_t<i32, mmJoyMan>>(0x530190, this);
    }

    // 0x5301B0 | ?HasThrottle@mmJoyMan@@QAEHXZ
    inline i32 HasThrottle()
    {
        return stub<member_func_t<i32, mmJoyMan>>(0x5301B0, this);
    }
};
