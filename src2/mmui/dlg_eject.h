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
    mmui:dlg_eject

    0x4F9340 | public: __thiscall Dialog_Eject::Dialog_Eject(int,float,float,float,float,char *) | ??0Dialog_Eject@@QAE@HMMMMPAD@Z
    0x4F9520 | public: virtual __thiscall Dialog_Eject::~Dialog_Eject(void) | ??1Dialog_Eject@@UAE@XZ
    0x4F9590 | public: virtual void __thiscall Dialog_Eject::PostSetup(void) | ?PostSetup@Dialog_Eject@@UAEXXZ
    0x4F95A0 | public: virtual void __thiscall Dialog_Eject::PreSetup(void) | ?PreSetup@Dialog_Eject@@UAEXXZ
    0x4F95B0 | public: void __thiscall Dialog_Eject::BootButtonCB(void) | ?BootButtonCB@Dialog_Eject@@QAEXXZ
    0x4F9610 | public: void __thiscall Dialog_Eject::AddName(char const *,unsigned long,int) | ?AddName@Dialog_Eject@@QAEXPBDKH@Z
    0x4F96B0 | public: void __thiscall Dialog_Eject::RemoveName(char const *,unsigned long) | ?RemoveName@Dialog_Eject@@QAEXPBDK@Z
    0x4F9800 | public: void __thiscall Dialog_Eject::RemoveName(unsigned long) | ?RemoveName@Dialog_Eject@@QAEXK@Z
    0x4F9940 | public: void __thiscall Dialog_Eject::ClearNames(void) | ?ClearNames@Dialog_Eject@@QAEXXZ
    0x4F99C0 | public: void __thiscall Dialog_Eject::PostNames(void) | ?PostNames@Dialog_Eject@@QAEXXZ
    0x4F99F0 | public: void __thiscall Dialog_Eject::SetBootCB(class datCallback) | ?SetBootCB@Dialog_Eject@@QAEXVdatCallback@@@Z
    0x4F9A10 | public: int __thiscall Dialog_Eject::FindRosterName(char const *) | ?FindRosterName@Dialog_Eject@@QAEHPBD@Z
    0x4F9A80 | public: int __thiscall Dialog_Eject::FindRosterName(unsigned long) | ?FindRosterName@Dialog_Eject@@QAEHK@Z
    public: virtual void * __thiscall Dialog_Eject::`vector deleting destructor'(unsigned int) | ??_EDialog_Eject@@UAEPAXI@Z
    0x4F9AB0 | public: virtual void * __thiscall Dialog_Eject::`scalar deleting destructor'(unsigned int) | ??_GDialog_Eject@@UAEPAXI@Z
    0x5B3DF8 | const Dialog_Eject::`vftable' | ??_7Dialog_Eject@@6B@
*/

struct Dialog_Eject : PUMenuBase
{
public:
    // Dialog_Eject::`vftable' @ 0x5B3DF8

    // 0x4F9340 | ??0Dialog_Eject@@QAE@HMMMMPAD@Z
    inline Dialog_Eject(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Eject, int32_t, float, float, float, float, char*>>(
            0x4F9340, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4F95B0 | ?BootButtonCB@Dialog_Eject@@QAEXXZ
    inline void BootButtonCB()
    {
        return stub<member_func_t<void, Dialog_Eject>>(0x4F95B0, this);
    }

    // 0x4F9610 | ?AddName@Dialog_Eject@@QAEXPBDKH@Z
    inline void AddName(char const* arg1, uint32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, Dialog_Eject, char const*, uint32_t, int32_t>>(
            0x4F9610, this, arg1, arg2, arg3);
    }

    // 0x4F96B0 | ?RemoveName@Dialog_Eject@@QAEXPBDK@Z
    inline void RemoveName(char const* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, Dialog_Eject, char const*, uint32_t>>(0x4F96B0, this, arg1, arg2);
    }

    // 0x4F9800 | ?RemoveName@Dialog_Eject@@QAEXK@Z
    inline void RemoveName(uint32_t arg1)
    {
        return stub<member_func_t<void, Dialog_Eject, uint32_t>>(0x4F9800, this, arg1);
    }

    // 0x4F9940 | ?ClearNames@Dialog_Eject@@QAEXXZ
    inline void ClearNames()
    {
        return stub<member_func_t<void, Dialog_Eject>>(0x4F9940, this);
    }

    // 0x4F99C0 | ?PostNames@Dialog_Eject@@QAEXXZ
    inline void PostNames()
    {
        return stub<member_func_t<void, Dialog_Eject>>(0x4F99C0, this);
    }

    // 0x4F99F0 | ?SetBootCB@Dialog_Eject@@QAEXVdatCallback@@@Z
    inline void SetBootCB(class datCallback arg1)
    {
        return stub<member_func_t<void, Dialog_Eject, class datCallback>>(0x4F99F0, this, arg1);
    }

    // 0x4F9A10 | ?FindRosterName@Dialog_Eject@@QAEHPBD@Z
    inline int32_t FindRosterName(char const* arg1)
    {
        return stub<member_func_t<int32_t, Dialog_Eject, char const*>>(0x4F9A10, this, arg1);
    }

    // 0x4F9A80 | ?FindRosterName@Dialog_Eject@@QAEHK@Z
    inline int32_t FindRosterName(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, Dialog_Eject, uint32_t>>(0x4F9A80, this, arg1);
    }

    // 0x4F9520 | ??1Dialog_Eject@@UAE@XZ
    inline ~Dialog_Eject() override
    {
        stub<member_func_t<void, Dialog_Eject>>(0x4F9520, this);
    }

    // 0x4F95A0 | ?PreSetup@Dialog_Eject@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Eject>>(0x4F95A0, this);
    }

    // 0x4F9590 | ?PostSetup@Dialog_Eject@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, Dialog_Eject>>(0x4F9590, this);
    }
};
