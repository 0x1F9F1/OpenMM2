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
    mmwidget:controlwidget

    0x4EBF20 | public: __thiscall UIControlWidget::UIControlWidget(void) | ??0UIControlWidget@@QAE@XZ
    0x4EC030 | public: virtual __thiscall UIControlWidget::~UIControlWidget(void) | ??1UIControlWidget@@UAE@XZ
    0x4EC0D0 | public: void __thiscall UIControlWidget::Init(float,float,float,float,float,class mmIO *,class datCallback) | ?Init@UIControlWidget@@QAEXMMMMMPAVmmIO@@VdatCallback@@@Z
    0x4EC250 | public: void __thiscall UIControlWidget::SetPosition(float,float,float,float) | ?SetPosition@UIControlWidget@@QAEXMMMM@Z
    0x4EC310 | public: virtual void __thiscall UIControlWidget::Update(void) | ?Update@UIControlWidget@@UAEXXZ
    0x4EC330 | public: void __thiscall UIControlWidget::UpdateField(void) | ?UpdateField@UIControlWidget@@QAEXXZ
    0x4EC360 | public: virtual void __thiscall UIControlWidget::Action(union eqEvent) | ?Action@UIControlWidget@@UAEXTeqEvent@@@Z
    0x4EC3B0 | public: virtual void __thiscall UIControlWidget::Switch(int) | ?Switch@UIControlWidget@@UAEXH@Z
    0x4EC420 | public: void __thiscall UIControlWidget::EnableField(void) | ?EnableField@UIControlWidget@@QAEXXZ
    0x4EC480 | public: void __thiscall UIControlWidget::DisableField(void) | ?DisableField@UIControlWidget@@QAEXXZ
    0x4EC4D0 | public: virtual void * __thiscall UIControlWidget::`scalar deleting destructor'(unsigned int) | ??_GUIControlWidget@@UAEPAXI@Z
    0x4EC500 | public: virtual void __thiscall UIControlWidget::TurnOn(void) | ?TurnOn@UIControlWidget@@UAEXXZ
    0x4EC510 | public: virtual void __thiscall UIControlWidget::TurnOff(void) | ?TurnOff@UIControlWidget@@UAEXXZ
    0x5B35E8 | const UIControlWidget::`vftable' | ??_7UIControlWidget@@6B@
*/

class UIControlWidget : public uiWidget
{
    // const UIControlWidget::`vftable' @ 0x5B35E8

public:
    // 0x4EBF20 | ??0UIControlWidget@@QAE@XZ
    UIControlWidget();

    // 0x4F02A0 | ??_EUIControlWidget@@UAEPAXI@Z
    // 0x4EC030 | ??1UIControlWidget@@UAE@XZ
    // 0x4EC4D0 | ??_GUIControlWidget@@UAEPAXI@Z
    ~UIControlWidget() override;

    // 0x4EC360 | ?Action@UIControlWidget@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EC480 | ?DisableField@UIControlWidget@@QAEXXZ
    void DisableField();

    // 0x4EC420 | ?EnableField@UIControlWidget@@QAEXXZ
    void EnableField();

    // 0x4EC0D0 | ?Init@UIControlWidget@@QAEXMMMMMPAVmmIO@@VdatCallback@@@Z
    void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class mmIO* arg6, class datCallback arg7);

    // 0x4EC250 | ?SetPosition@UIControlWidget@@QAEXMMMM@Z
    void SetPosition(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x4EC3B0 | ?Switch@UIControlWidget@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4EC510 | ?TurnOff@UIControlWidget@@UAEXXZ
    void TurnOff() override;

    // 0x4EC500 | ?TurnOn@UIControlWidget@@UAEXXZ
    void TurnOn() override;

    // 0x4EC310 | ?Update@UIControlWidget@@UAEXXZ
    void Update() override;

    // 0x4EC330 | ?UpdateField@UIControlWidget@@QAEXXZ
    void UpdateField();
};

check_size(UIControlWidget, 0xA8);
