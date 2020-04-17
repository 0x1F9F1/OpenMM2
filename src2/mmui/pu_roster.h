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
    mmui:pu_roster

    0x50A8B0 | public: __thiscall PURoster::PURoster(int,float,float,float,float) | ??0PURoster@@QAE@HMMMM@Z
    0x50AA60 | public: virtual __thiscall PURoster::~PURoster(void) | ??1PURoster@@UAE@XZ
    0x50AA70 | public: virtual void __thiscall PURoster::Reset(void) | ?Reset@PURoster@@UAEXXZ
    0x50AA80 | public: void __thiscall PURoster::BootButtonCB(void) | ?BootButtonCB@PURoster@@QAEXXZ
    0x50AAE0 | public: void __thiscall PURoster::SetHost(int) | ?SetHost@PURoster@@QAEXH@Z
    0x50AB50 | public: void __thiscall PURoster::AddName(char const *,unsigned long,int) | ?AddName@PURoster@@QAEXPBDKH@Z
    0x50AC30 | public: void __thiscall PURoster::RemoveName(char const *,unsigned long) | ?RemoveName@PURoster@@QAEXPBDK@Z
    0x50AD70 | public: void __thiscall PURoster::RemoveName(unsigned long) | ?RemoveName@PURoster@@QAEXK@Z
    0x50AEA0 | public: void __thiscall PURoster::ClearNames(void) | ?ClearNames@PURoster@@QAEXXZ
    0x50AF20 | public: void __thiscall PURoster::PostNames(void) | ?PostNames@PURoster@@QAEXXZ
    0x50AF50 | public: void __thiscall PURoster::SetBootCB(class datCallback) | ?SetBootCB@PURoster@@QAEXVdatCallback@@@Z
    0x50AF70 | public: int __thiscall PURoster::FindRosterName(char const *) | ?FindRosterName@PURoster@@QAEHPBD@Z
    0x50AFE0 | public: int __thiscall PURoster::FindRosterName(unsigned long) | ?FindRosterName@PURoster@@QAEHK@Z
    public: virtual void * __thiscall PURoster::`vector deleting destructor'(unsigned int) | ??_EPURoster@@UAEPAXI@Z
    0x50B010 | public: virtual void * __thiscall PURoster::`scalar deleting destructor'(unsigned int) | ??_GPURoster@@UAEPAXI@Z
    0x5B4768 | const PURoster::`vftable' | ??_7PURoster@@6B@
*/

struct PURoster : PUMenuBase
{
public:
    // PURoster::`vftable' @ 0x5B4768

    // 0x50A8B0 | ??0PURoster@@QAE@HMMMM@Z
    PURoster(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
    {
        stub<member_func_t<void, PURoster, i32, f32, f32, f32, f32>>(0x50A8B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50AA80 | ?BootButtonCB@PURoster@@QAEXXZ
    void BootButtonCB()
    {
        return stub<member_func_t<void, PURoster>>(0x50AA80, this);
    }

    // 0x50AAE0 | ?SetHost@PURoster@@QAEXH@Z
    void SetHost(i32 arg1)
    {
        return stub<member_func_t<void, PURoster, i32>>(0x50AAE0, this, arg1);
    }

    // 0x50AB50 | ?AddName@PURoster@@QAEXPBDKH@Z
    void AddName(char const* arg1, u32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, PURoster, char const*, u32, i32>>(0x50AB50, this, arg1, arg2, arg3);
    }

    // 0x50AC30 | ?RemoveName@PURoster@@QAEXPBDK@Z
    void RemoveName(char const* arg1, u32 arg2)
    {
        return stub<member_func_t<void, PURoster, char const*, u32>>(0x50AC30, this, arg1, arg2);
    }

    // 0x50AD70 | ?RemoveName@PURoster@@QAEXK@Z
    void RemoveName(u32 arg1)
    {
        return stub<member_func_t<void, PURoster, u32>>(0x50AD70, this, arg1);
    }

    // 0x50AEA0 | ?ClearNames@PURoster@@QAEXXZ
    void ClearNames()
    {
        return stub<member_func_t<void, PURoster>>(0x50AEA0, this);
    }

    // 0x50AF20 | ?PostNames@PURoster@@QAEXXZ
    void PostNames()
    {
        return stub<member_func_t<void, PURoster>>(0x50AF20, this);
    }

    // 0x50AF50 | ?SetBootCB@PURoster@@QAEXVdatCallback@@@Z
    void SetBootCB(class datCallback arg1)
    {
        return stub<member_func_t<void, PURoster, class datCallback>>(0x50AF50, this, arg1);
    }

    // 0x50AF70 | ?FindRosterName@PURoster@@QAEHPBD@Z
    i32 FindRosterName(char const* arg1)
    {
        return stub<member_func_t<i32, PURoster, char const*>>(0x50AF70, this, arg1);
    }

    // 0x50AFE0 | ?FindRosterName@PURoster@@QAEHK@Z
    i32 FindRosterName(u32 arg1)
    {
        return stub<member_func_t<i32, PURoster, u32>>(0x50AFE0, this, arg1);
    }

    // 0x50AA60 | ??1PURoster@@UAE@XZ
    ~PURoster() override
    {
        stub<member_func_t<void, PURoster>>(0x50AA60, this);
    }

    // 0x50AA70 | ?Reset@PURoster@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, PURoster>>(0x50AA70, this);
    }
};
