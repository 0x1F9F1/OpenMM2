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
    mmwidget:bm_label

    0x4ED4D0 | public: __thiscall UIBMLabel::UIBMLabel(void) | ??0UIBMLabel@@QAE@XZ
    0x4ED540 | public: virtual __thiscall UIBMLabel::~UIBMLabel(void) | ??1UIBMLabel@@UAE@XZ
    0x4ED5C0 | public: void __thiscall UIBMLabel::Init(class string *,float,float,int *) | ?Init@UIBMLabel@@QAEXPAVstring@@MMPAH@Z
    0x4ED680 | public: void __thiscall UIBMLabel::SetBitmapName(class string *) | ?SetBitmapName@UIBMLabel@@QAEXPAVstring@@@Z
    0x4ED720 | private: void __thiscall UIBMLabel::LoadBitmap(void) | ?LoadBitmap@UIBMLabel@@AAEXXZ
    0x4ED7F0 | public: virtual void __thiscall UIBMLabel::Update(void) | ?Update@UIBMLabel@@UAEXXZ
    0x4ED820 | public: virtual void __thiscall UIBMLabel::Cull(void) | ?Cull@UIBMLabel@@UAEXXZ
    public: virtual void * __thiscall UIBMLabel::`vector deleting destructor'(unsigned int) | ??_EUIBMLabel@@UAEPAXI@Z
    0x4ED850 | public: virtual void * __thiscall UIBMLabel::`scalar deleting destructor'(unsigned int) | ??_GUIBMLabel@@UAEPAXI@Z
    0x5B3778 | const UIBMLabel::`vftable' | ??_7UIBMLabel@@6B@
*/

class UIBMLabel : public uiWidget
{
    // const UIBMLabel::`vftable' @ 0x5B3778

public:
    // 0x4ED4D0 | ??0UIBMLabel@@QAE@XZ
    UIBMLabel();

    // 0x4ED850 | ??_GUIBMLabel@@UAEPAXI@Z
    // 0x4ED540 | ??1UIBMLabel@@UAE@XZ
    ~UIBMLabel() override;

    // 0x4ED820 | ?Cull@UIBMLabel@@UAEXXZ
    void Cull() override;

    // 0x4ED5C0 | ?Init@UIBMLabel@@QAEXPAVstring@@MMPAH@Z
    void Init(class string* arg1, f32 arg2, f32 arg3, i32* arg4);

    // 0x4ED680 | ?SetBitmapName@UIBMLabel@@QAEXPAVstring@@@Z
    void SetBitmapName(class string* arg1);

    // 0x4ED7F0 | ?Update@UIBMLabel@@UAEXXZ
    void Update() override;

private:
    // 0x4ED720 | ?LoadBitmap@UIBMLabel@@AAEXXZ
    void LoadBitmap();
};

check_size(UIBMLabel, 0x98);
