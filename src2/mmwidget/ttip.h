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
    mmwidget:ttip

    0x4F1620 | public: __thiscall mmToolTip::mmToolTip(void) | ??0mmToolTip@@QAE@XZ
    0x4F1690 | public: virtual __thiscall mmToolTip::~mmToolTip(void) | ??1mmToolTip@@UAE@XZ
    0x4F16F0 | public: void __thiscall mmToolTip::Init(class UIMenu *,struct LocString *) | ?Init@mmToolTip@@QAEXPAVUIMenu@@PAULocString@@@Z
    0x4F17A0 | public: void __thiscall mmToolTip::SetText(struct LocString *) | ?SetText@mmToolTip@@QAEXPAULocString@@@Z
    0x4F17C0 | public: void __thiscall mmToolTip::Switch(int) | ?Switch@mmToolTip@@QAEXH@Z
    0x4F17D0 | public: virtual void __thiscall mmToolTip::Update(void) | ?Update@mmToolTip@@UAEXXZ
    public: virtual void * __thiscall mmToolTip::`vector deleting destructor'(unsigned int) | ??_EmmToolTip@@UAEPAXI@Z
    0x4F17E0 | public: virtual void * __thiscall mmToolTip::`scalar deleting destructor'(unsigned int) | ??_GmmToolTip@@UAEPAXI@Z
    0x5B3B64 | const mmToolTip::`vftable' | ??_7mmToolTip@@6B@
*/

struct mmToolTip : asNode
{
public:
    // mmToolTip::`vftable' @ 0x5B3B64

    // 0x4F1620 | ??0mmToolTip@@QAE@XZ
    inline mmToolTip()
    {
        stub<member_func_t<void, mmToolTip>>(0x4F1620, this);
    }

    // 0x4F16F0 | ?Init@mmToolTip@@QAEXPAVUIMenu@@PAULocString@@@Z
    inline void Init(class UIMenu* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, mmToolTip, class UIMenu*, struct LocString*>>(0x4F16F0, this, arg1, arg2);
    }

    // 0x4F17A0 | ?SetText@mmToolTip@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, mmToolTip, struct LocString*>>(0x4F17A0, this, arg1);
    }

    // 0x4F17C0 | ?Switch@mmToolTip@@QAEXH@Z
    inline void Switch(int32_t arg1)
    {
        return stub<member_func_t<void, mmToolTip, int32_t>>(0x4F17C0, this, arg1);
    }

    // 0x4F1690 | ??1mmToolTip@@UAE@XZ
    inline ~mmToolTip() override
    {
        stub<member_func_t<void, mmToolTip>>(0x4F1690, this);
    }

    // 0x4F17D0 | ?Update@mmToolTip@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmToolTip>>(0x4F17D0, this);
    }
};
