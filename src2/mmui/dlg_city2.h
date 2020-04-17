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
    mmui:dlg_city2

    0x4F9AE0 | public: __thiscall Dialog_City2::Dialog_City2(int,float,float,float,float,char *) | ??0Dialog_City2@@QAE@HMMMMPAD@Z
    0x4F9E10 | public: virtual __thiscall Dialog_City2::~Dialog_City2(void) | ??1Dialog_City2@@UAE@XZ
    0x4F9E80 | public: virtual void __thiscall Dialog_City2::PreSetup(void) | ?PreSetup@Dialog_City2@@UAEXXZ
    0x4F9E90 | public: virtual void __thiscall Dialog_City2::PostSetup(void) | ?PostSetup@Dialog_City2@@UAEXXZ
    0x4F9EA0 | public: void __thiscall Dialog_City2::ScrollCB(void) | ?ScrollCB@Dialog_City2@@QAEXXZ
    0x4F9EB0 | public: void __thiscall Dialog_City2::CancelCB(void) | ?CancelCB@Dialog_City2@@QAEXXZ
    0x4F9EE0 | public: void __thiscall Dialog_City2::DoneCB(void) | ?DoneCB@Dialog_City2@@QAEXXZ
    0x4F9F80 | public: void __thiscall Dialog_City2::SetCurrentCity(int) | ?SetCurrentCity@Dialog_City2@@QAEXH@Z
    public: virtual void * __thiscall Dialog_City2::`vector deleting destructor'(unsigned int) | ??_EDialog_City2@@UAEPAXI@Z
    0x4F9FC0 | public: virtual void * __thiscall Dialog_City2::`scalar deleting destructor'(unsigned int) | ??_GDialog_City2@@UAEPAXI@Z
    0x4F9FF0 | public: virtual void * __thiscall mmCompCity::`vector deleting destructor'(unsigned int) | ??_EmmCompCity@@UAEPAXI@Z
    0x5B3E40 | const Dialog_City2::`vftable' | ??_7Dialog_City2@@6B@
*/

struct Dialog_City2 : PUMenuBase
{
public:
    // Dialog_City2::`vftable' @ 0x5B3E40

    // 0x4F9AE0 | ??0Dialog_City2@@QAE@HMMMMPAD@Z
    Dialog_City2(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_City2, i32, f32, f32, f32, f32, char*>>(
            0x4F9AE0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4F9EA0 | ?ScrollCB@Dialog_City2@@QAEXXZ
    void ScrollCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4F9EA0, this);
    }

    // 0x4F9EB0 | ?CancelCB@Dialog_City2@@QAEXXZ
    void CancelCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4F9EB0, this);
    }

    // 0x4F9EE0 | ?DoneCB@Dialog_City2@@QAEXXZ
    void DoneCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4F9EE0, this);
    }

    // 0x4F9F80 | ?SetCurrentCity@Dialog_City2@@QAEXH@Z
    void SetCurrentCity(i32 arg1)
    {
        return stub<member_func_t<void, Dialog_City2, i32>>(0x4F9F80, this, arg1);
    }

    // 0x4F9E10 | ??1Dialog_City2@@UAE@XZ
    ~Dialog_City2() override
    {
        stub<member_func_t<void, Dialog_City2>>(0x4F9E10, this);
    }

    // 0x4F9E80 | ?PreSetup@Dialog_City2@@UAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4F9E80, this);
    }

    // 0x4F9E90 | ?PostSetup@Dialog_City2@@UAEXXZ
    void PostSetup() override
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4F9E90, this);
    }
};
