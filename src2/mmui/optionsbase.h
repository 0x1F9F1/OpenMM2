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
    mmui:optionsbase

    0x50D230 | public: __thiscall OptionsBase::OptionsBase(int) | ??0OptionsBase@@QAE@H@Z
    0x50D3C0 | public: void __thiscall OptionsBase::CreateTitle(struct LocString *) | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    0x50D3F0 | public: virtual __thiscall OptionsBase::~OptionsBase(void) | ??1OptionsBase@@UAE@XZ
    public: virtual void * __thiscall OptionsBase::`vector deleting destructor'(unsigned int) | ??_EOptionsBase@@UAEPAXI@Z
    0x50D460 | public: virtual void * __thiscall OptionsBase::`scalar deleting destructor'(unsigned int) | ??_GOptionsBase@@UAEPAXI@Z
    0x50D490 | [thunk]: __thiscall `vcall'{80,{flat}}' }' | ??_9@$BFA@AE
    0x50D4A0 | [thunk]: __thiscall `vcall'{84,{flat}}' }' | ??_9@$BFE@AE
    0x50D4B0 | public: virtual void __thiscall OptionsBase::ResetDefaultAction(void) | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    0x5B4AD8 | const OptionsBase::`vftable' | ??_7OptionsBase@@6B@
*/

// 0x50D490 | ??_9@$BFA@AE

// 0x50D4A0 | ??_9@$BFE@AE

struct OptionsBase : UIMenu
{
public:
    // OptionsBase::`vftable' @ 0x5B4AD8

    // 0x50D230 | ??0OptionsBase@@QAE@H@Z
    inline OptionsBase(int32_t arg1)
    {
        stub<member_func_t<void, OptionsBase, int32_t>>(0x50D230, this, arg1);
    }

    // 0x50D3C0 | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    inline void CreateTitle(struct LocString* arg1)
    {
        return stub<member_func_t<void, OptionsBase, struct LocString*>>(0x50D3C0, this, arg1);
    }

    // 0x50D3F0 | ??1OptionsBase@@UAE@XZ
    inline ~OptionsBase() override
    {
        stub<member_func_t<void, OptionsBase>>(0x50D3F0, this);
    }

    // 0x4F5460 | ?IsAnOptionMenu@OptionsBase@@UAEHXZ
    inline int32_t IsAnOptionMenu() override
    {
        return stub<member_func_t<int32_t, OptionsBase>>(0x4F5460, this);
    }

    // 0x582519 | __purecall
    virtual inline void CancelAction()
    {
        return stub<member_func_t<void, OptionsBase>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline void DoneAction()
    {
        return stub<member_func_t<void, OptionsBase>>(0x582519, this);
    }

    // 0x50D4B0 | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    virtual inline void ResetDefaultAction()
    {
        return stub<member_func_t<void, OptionsBase>>(0x50D4B0, this);
    }

    // 0x4F5450 | ?StoreCurrentSetup@OptionsBase@@UAEXXZ
    virtual inline void StoreCurrentSetup()
    {
        return stub<member_func_t<void, OptionsBase>>(0x4F5450, this);
    }
};
