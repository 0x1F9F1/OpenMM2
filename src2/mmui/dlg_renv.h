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
    mmui:dlg_renv

    0x4FB200 | public: __thiscall Dialog_RaceEnvironment::Dialog_RaceEnvironment(int,float,float,float,float,char *) | ??0Dialog_RaceEnvironment@@QAE@HMMMMPAD@Z
    0x4FB8D0 | public: virtual __thiscall Dialog_RaceEnvironment::~Dialog_RaceEnvironment(void) | ??1Dialog_RaceEnvironment@@UAE@XZ
    0x4FB930 | public: virtual void __thiscall Dialog_RaceEnvironment::PreSetup(void) | ?PreSetup@Dialog_RaceEnvironment@@UAEXXZ
    0x4FB980 | public: void __thiscall Dialog_RaceEnvironment::ControlPedSlider(void) | ?ControlPedSlider@Dialog_RaceEnvironment@@QAEXXZ
    0x4FB9A0 | public: void __thiscall Dialog_RaceEnvironment::SetMultiRaceOptions(int) | ?SetMultiRaceOptions@Dialog_RaceEnvironment@@QAEXH@Z
    0x4FB9E0 | public: void __thiscall Dialog_RaceEnvironment::DoneCallback(void) | ?DoneCallback@Dialog_RaceEnvironment@@QAEXXZ
    0x4FBA30 | public: void __thiscall Dialog_RaceEnvironment::CancelCallback(void) | ?CancelCallback@Dialog_RaceEnvironment@@QAEXXZ
    0x4FBA40 | public: virtual void * __thiscall Dialog_RaceEnvironment::`scalar deleting destructor'(unsigned int) | ??_GDialog_RaceEnvironment@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_RaceEnvironment::`vector deleting destructor'(unsigned int) | ??_EDialog_RaceEnvironment@@UAEPAXI@Z
    0x5B3FB8 | const Dialog_RaceEnvironment::`vftable' | ??_7Dialog_RaceEnvironment@@6B@
*/

struct Dialog_RaceEnvironment : PUMenuBase
{
public:
    // Dialog_RaceEnvironment::`vftable' @ 0x5B3FB8

    // 0x4FB200 | ??0Dialog_RaceEnvironment@@QAE@HMMMMPAD@Z
    Dialog_RaceEnvironment(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_RaceEnvironment, i32, f32, f32, f32, f32, char*>>(
            0x4FB200, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FB980 | ?ControlPedSlider@Dialog_RaceEnvironment@@QAEXXZ
    void ControlPedSlider()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4FB980, this);
    }

    // 0x4FB9A0 | ?SetMultiRaceOptions@Dialog_RaceEnvironment@@QAEXH@Z
    void SetMultiRaceOptions(i32 arg1)
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment, i32>>(0x4FB9A0, this, arg1);
    }

    // 0x4FB9E0 | ?DoneCallback@Dialog_RaceEnvironment@@QAEXXZ
    void DoneCallback()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4FB9E0, this);
    }

    // 0x4FBA30 | ?CancelCallback@Dialog_RaceEnvironment@@QAEXXZ
    void CancelCallback()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4FBA30, this);
    }

    // 0x4FB8D0 | ??1Dialog_RaceEnvironment@@UAE@XZ
    ~Dialog_RaceEnvironment() override
    {
        stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4FB8D0, this);
    }

    // 0x4FB930 | ?PreSetup@Dialog_RaceEnvironment@@UAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4FB930, this);
    }
};
