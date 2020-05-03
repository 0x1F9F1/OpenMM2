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

#include "textfield.h"

/*
    mmwidget:icon

    0x4ED880 | public: __thiscall UIIcon::UIIcon(void) | ??0UIIcon@@QAE@XZ
    0x4ED8D0 | public: virtual __thiscall UIIcon::~UIIcon(void) | ??1UIIcon@@UAE@XZ
    0x4ED8E0 | public: void __thiscall UIIcon::Init(char *,float,float) | ?Init@UIIcon@@QAEXPADMM@Z
    0x4ED920 | public: void __thiscall UIIcon::LoadBitchmap(char *) | ?LoadBitchmap@UIIcon@@QAEXPAD@Z
    0x4ED930 | public: void __thiscall UIIcon::LoadBitmap(char *) | ?LoadBitmap@UIIcon@@QAEXPAD@Z
    0x4ED970 | public: void __thiscall UIIcon::GetHitArea(float &,float &) | ?GetHitArea@UIIcon@@QAEXAAM0@Z
    0x4ED9B0 | public: virtual void __thiscall UIIcon::Switch(int) | ?Switch@UIIcon@@UAEXH@Z
    0x4ED9F0 | public: virtual void __thiscall UIIcon::Update(void) | ?Update@UIIcon@@UAEXXZ
    0x4EDA10 | public: virtual void __thiscall UIIcon::Cull(void) | ?Cull@UIIcon@@UAEXXZ
    0x4EDA40 | public: virtual void * __thiscall UIIcon::`scalar deleting destructor'(unsigned int) | ??_GUIIcon@@UAEPAXI@Z
    public: virtual void * __thiscall UIIcon::`vector deleting destructor'(unsigned int) | ??_EUIIcon@@UAEPAXI@Z
    0x5B37DC | const UIIcon::`vftable' | ??_7UIIcon@@6B@
*/

class UIIcon : public uiWidget
{
    // const UIIcon::`vftable' @ 0x5B37DC

public:
    // 0x4ED880 | ??0UIIcon@@QAE@XZ
    UIIcon();

    // 0x4EDA40 | ??_GUIIcon@@UAEPAXI@Z
    // 0x4ED8D0 | ??1UIIcon@@UAE@XZ
    ~UIIcon() override;

    // 0x4EDA10 | ?Cull@UIIcon@@UAEXXZ
    void Cull() override;

    // 0x4ED970 | ?GetHitArea@UIIcon@@QAEXAAM0@Z
    void GetHitArea(f32& arg1, f32& arg2);

    // 0x4ED8E0 | ?Init@UIIcon@@QAEXPADMM@Z
    void Init(char* arg1, f32 arg2, f32 arg3);

    // 0x4ED920 | ?LoadBitchmap@UIIcon@@QAEXPAD@Z
    void LoadBitchmap(char* arg1);

    // 0x4ED930 | ?LoadBitmap@UIIcon@@QAEXPAD@Z
    void LoadBitmap(char* arg1);

    // 0x4ED9B0 | ?Switch@UIIcon@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4ED9F0 | ?Update@UIIcon@@UAEXXZ
    void Update() override;
};

check_size(UIIcon, 0x84);
