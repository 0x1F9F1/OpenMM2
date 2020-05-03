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

#include "button.h"

/*
    mmwidget:togglebutton2

    0x4EE0C0 | public: __thiscall UIToggleButton2::UIToggleButton2(void) | ??0UIToggleButton2@@QAE@XZ
    0x4EE140 | public: virtual __thiscall UIToggleButton2::~UIToggleButton2(void) | ??1UIToggleButton2@@UAE@XZ
    0x4EE150 | public: void __thiscall UIToggleButton2::Init(struct LocString *,int *,float,float,float,float,int,int,class datCallback) | ?Init@UIToggleButton2@@QAEXPAULocString@@PAHMMMMHHVdatCallback@@@Z
    0x4EE220 | protected: virtual void __thiscall UIToggleButton2::DrawOff(void) | ?DrawOff@UIToggleButton2@@MAEXXZ
    0x4EE260 | protected: virtual void __thiscall UIToggleButton2::DrawOn(void) | ?DrawOn@UIToggleButton2@@MAEXXZ
    0x4EE2A0 | public: void __thiscall UIToggleButton2::Unkill(void) | ?Unkill@UIToggleButton2@@QAEXXZ
    0x4EE2D0 | public: virtual void __thiscall UIToggleButton2::DoToggle(void) | ?DoToggle@UIToggleButton2@@UAEXXZ
    0x4EE2F0 | public: virtual void __thiscall UIToggleButton2::Action(union eqEvent) | ?Action@UIToggleButton2@@UAEXTeqEvent@@@Z
    0x4EE370 | public: virtual void __thiscall UIToggleButton2::Switch(int) | ?Switch@UIToggleButton2@@UAEXH@Z
    public: virtual void * __thiscall UIToggleButton2::`vector deleting destructor'(unsigned int) | ??_EUIToggleButton2@@UAEPAXI@Z
    0x4EE3E0 | public: virtual void * __thiscall UIToggleButton2::`scalar deleting destructor'(unsigned int) | ??_GUIToggleButton2@@UAEPAXI@Z
    0x4EE410 | public: virtual void __thiscall UIToggleButton2::Update(void) | ?Update@UIToggleButton2@@UAEXXZ
    0x4EE420 | public: virtual void __thiscall UIToggleButton2::Enable(void) | ?Enable@UIToggleButton2@@UAEXXZ
    0x4EE430 | public: virtual void __thiscall UIToggleButton2::Disable(void) | ?Disable@UIToggleButton2@@UAEXXZ
    0x5B3914 | const UIToggleButton2::`vftable' | ??_7UIToggleButton2@@6B@
    protected: static int UIToggleButton2::ToggleBMLoaded | ?ToggleBMLoaded@UIToggleButton2@@1HA
*/

class UIToggleButton2 : public UIButton
{
    // const UIToggleButton2::`vftable' @ 0x5B3914

public:
    // 0x4EE0C0 | ??0UIToggleButton2@@QAE@XZ
    UIToggleButton2();

    // 0x4EE3E0 | ??_GUIToggleButton2@@UAEPAXI@Z
    // 0x4EE140 | ??1UIToggleButton2@@UAE@XZ
    ~UIToggleButton2() override;

    // 0x4EE2F0 | ?Action@UIToggleButton2@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EE430 | ?Disable@UIToggleButton2@@UAEXXZ
    void Disable() override;

    // 0x4EE420 | ?Enable@UIToggleButton2@@UAEXXZ
    void Enable() override;

    // 0x4EE150 | ?Init@UIToggleButton2@@QAEXPAULocString@@PAHMMMMHHVdatCallback@@@Z
    void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8,
        class datCallback arg9);

    // 0x4EE370 | ?Switch@UIToggleButton2@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4EE2A0 | ?Unkill@UIToggleButton2@@QAEXXZ
    void Unkill();

    // 0x4EE410 | ?Update@UIToggleButton2@@UAEXXZ
    void Update() override;

    // 0x4EE2D0 | ?DoToggle@UIToggleButton2@@UAEXXZ
    virtual void DoToggle();

protected:
    // 0x4EE220 | ?DrawOff@UIToggleButton2@@MAEXXZ
    virtual void DrawOff();

    // 0x4EE260 | ?DrawOn@UIToggleButton2@@MAEXXZ
    virtual void DrawOn();
};

check_size(UIToggleButton2, 0xB0);
