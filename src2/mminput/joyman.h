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
i32 __stdcall inputEnumDeviceProc(struct DIDEVICEINSTANCEA* arg1, void* arg2);

struct mmJoyMan
{
public:
    // 0x52FC40 | ??0mmJoyMan@@QAE@XZ
    mmJoyMan();

    // 0x52FC50 | ??1mmJoyMan@@QAE@XZ
    ~mmJoyMan();

    // 0x52FDF0 | ?ButtonToBit@mmJoyMan@@QAEHH@Z
    i32 ButtonToBit(i32 arg1);

    // 0x530100 | ?FFIsPlaying@mmJoyMan@@QAEHH@Z
    i32 FFIsPlaying(i32 arg1);

    // 0x5300A0 | ?FFPlay@mmJoyMan@@QAEHH@Z
    i32 FFPlay(i32 arg1);

    // 0x530130 | ?FFSetValues@mmJoyMan@@QAEHHMM@Z
    i32 FFSetValues(i32 arg1, f32 arg2, f32 arg3);

    // 0x5300D0 | ?FFStop@mmJoyMan@@QAEHH@Z
    i32 FFStop(i32 arg1);

    // 0x530030 | ?GetFFEffect@mmJoyMan@@QAEPAVmmEffectFF@@H@Z
    class mmEffectFF* GetFFEffect(i32 arg1);

    // 0x52FE60 | ?GetJoyAxis@mmJoyMan@@QAEMHH@Z
    f32 GetJoyAxis(i32 arg1, i32 arg2);

    // 0x52FEA0 | ?GetJoyButton@mmJoyMan@@QAEHHH@Z
    i32 GetJoyButton(i32 arg1, i32 arg2);

    // 0x530000 | ?GetOneButton@mmJoyMan@@QAEHJ@Z
    i32 GetOneButton(i32 arg1);

    // 0x530190 | ?HasCoolie@mmJoyMan@@QAEHXZ
    i32 HasCoolie();

    // 0x5301B0 | ?HasThrottle@mmJoyMan@@QAEHXZ
    i32 HasThrottle();

    // 0x52FC90 | ?Init@mmJoyMan@@QAEHPAUHINSTANCE__@@PAUHWND__@@@Z
    i32 Init(struct HINSTANCE__* arg1, struct HWND__* arg2);

    // 0x52FF50 | ?PollJoyAxes@mmJoyMan@@QAEHXZ
    i32 PollJoyAxes();

    // 0x52FEF0 | ?PollJoyButtons@mmJoyMan@@QAEHXZ
    i32 PollJoyButtons();

    // 0x52FE20 | ?QJoystick@mmJoyMan@@QAEHXZ
    i32 QJoystick();

    // 0x52FF90 | ?SetCapture@mmJoyMan@@QAEXH@Z
    void SetCapture(i32 arg1);

    // 0x530170 | ?StopAllFF@mmJoyMan@@QAEXXZ
    void StopAllFF();

    // 0x530060 | ?ToggleEnabled@mmJoyMan@@QAEHH@Z
    i32 ToggleEnabled(i32 arg1);

    // 0x52FE30 | ?Update@mmJoyMan@@QAEXXZ
    void Update();
};

check_size(mmJoyMan, 0x0);
