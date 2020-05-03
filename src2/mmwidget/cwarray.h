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
    mmwidget:cwarray

    0x4EF6D0 | public: __thiscall UICWArray::UICWArray(void) | ??0UICWArray@@QAE@XZ
    0x4EF7A0 | public: virtual __thiscall UICWArray::~UICWArray(void) | ??1UICWArray@@UAE@XZ
    0x4EF830 | public: virtual void __thiscall UICWArray::Reset(void) | ?Reset@UICWArray@@UAEXXZ
    0x4EF840 | public: void __thiscall UICWArray::Init(float,float,float,float,int,class datCallback) | ?Init@UICWArray@@QAEXMMMMHVdatCallback@@@Z
    0x4EFA90 | public: void __thiscall UICWArray::VScrollCB(void) | ?VScrollCB@UICWArray@@QAEXXZ
    0x4EFB00 | public: void __thiscall UICWArray::SetVScrollVals(void) | ?SetVScrollVals@UICWArray@@QAEXXZ
    0x4EFB70 | public: void __thiscall UICWArray::SetVScrollPos(void) | ?SetVScrollPos@UICWArray@@QAEXXZ
    0x4EFBA0 | public: void __thiscall UICWArray::SetStartOffset(int) | ?SetStartOffset@UICWArray@@QAEXH@Z
    0x4EFBE0 | public: void __thiscall UICWArray::Redraw(void) | ?Redraw@UICWArray@@QAEXXZ
    0x4EFD40 | public: virtual void __thiscall UICWArray::Switch(int) | ?Switch@UICWArray@@UAEXH@Z
    0x4EFD80 | public: virtual void __thiscall UICWArray::Action(union eqEvent) | ?Action@UICWArray@@UAEXTeqEvent@@@Z
    0x4EFEC0 | public: virtual void __thiscall UICWArray::CaptureAction(union eqEvent) | ?CaptureAction@UICWArray@@UAEXTeqEvent@@@Z
    0x4EFF30 | public: virtual void __thiscall UICWArray::Update(void) | ?Update@UICWArray@@UAEXXZ
    0x4EFFC0 | public: void __thiscall UICWArray::EnterCapture(int) | ?EnterCapture@UICWArray@@QAEXH@Z
    0x4F0030 | public: void __thiscall UICWArray::ForceCapture(void) | ?ForceCapture@UICWArray@@QAEXXZ
    0x4F0060 | public: void __thiscall UICWArray::AcceptCapture(void) | ?AcceptCapture@UICWArray@@QAEXXZ
    0x4F00B0 | public: void __thiscall UICWArray::ResetCapture(void) | ?ResetCapture@UICWArray@@QAEXXZ
    0x4F00E0 | public: void __thiscall UICWArray::CheckCapture(void) | ?CheckCapture@UICWArray@@QAEXXZ
    0x4F0190 | public: void __thiscall UICWArray::SaveCFG(void) | ?SaveCFG@UICWArray@@QAEXXZ
    0x4F01D0 | public: void __thiscall UICWArray::LoadCFG(void) | ?LoadCFG@UICWArray@@QAEXXZ
    0x4F0220 | public: void __thiscall UICWArray::DefaultCFG(void) | ?DefaultCFG@UICWArray@@QAEXXZ
    0x4F0250 | public: void __thiscall UICWArray::DebugForceSetting(void) | ?DebugForceSetting@UICWArray@@QAEXXZ
    0x4F0270 | public: virtual void * __thiscall UICWArray::`scalar deleting destructor'(unsigned int) | ??_GUICWArray@@UAEPAXI@Z
    public: virtual void * __thiscall UICWArray::`vector deleting destructor'(unsigned int) | ??_EUICWArray@@UAEPAXI@Z
    0x4F02A0 | public: virtual void * __thiscall UIControlWidget::`vector deleting destructor'(unsigned int) | ??_EUIControlWidget@@UAEPAXI@Z
    0x5B3A60 | const UICWArray::`vftable' | ??_7UICWArray@@6B@
*/

class UICWArray : public uiWidget
{
    // const UICWArray::`vftable' @ 0x5B3A60

public:
    // 0x4EF6D0 | ??0UICWArray@@QAE@XZ
    UICWArray();

    // 0x4F0270 | ??_GUICWArray@@UAEPAXI@Z
    // 0x4EF7A0 | ??1UICWArray@@UAE@XZ
    ~UICWArray() override;

    // 0x4F0060 | ?AcceptCapture@UICWArray@@QAEXXZ
    void AcceptCapture();

    // 0x4EFD80 | ?Action@UICWArray@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EFEC0 | ?CaptureAction@UICWArray@@UAEXTeqEvent@@@Z
    void CaptureAction(union eqEvent arg1) override;

    // 0x4F00E0 | ?CheckCapture@UICWArray@@QAEXXZ
    void CheckCapture();

    // 0x4F0250 | ?DebugForceSetting@UICWArray@@QAEXXZ
    void DebugForceSetting();

    // 0x4F0220 | ?DefaultCFG@UICWArray@@QAEXXZ
    void DefaultCFG();

    // 0x4EFFC0 | ?EnterCapture@UICWArray@@QAEXH@Z
    void EnterCapture(i32 arg1);

    // 0x4F0030 | ?ForceCapture@UICWArray@@QAEXXZ
    void ForceCapture();

    // 0x4EF840 | ?Init@UICWArray@@QAEXMMMMHVdatCallback@@@Z
    void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5, class datCallback arg6);

    // 0x4F01D0 | ?LoadCFG@UICWArray@@QAEXXZ
    void LoadCFG();

    // 0x4EFBE0 | ?Redraw@UICWArray@@QAEXXZ
    void Redraw();

    // 0x4EF830 | ?Reset@UICWArray@@UAEXXZ
    void Reset() override;

    // 0x4F00B0 | ?ResetCapture@UICWArray@@QAEXXZ
    void ResetCapture();

    // 0x4F0190 | ?SaveCFG@UICWArray@@QAEXXZ
    void SaveCFG();

    // 0x4EFBA0 | ?SetStartOffset@UICWArray@@QAEXH@Z
    void SetStartOffset(i32 arg1);

    // 0x4EFB70 | ?SetVScrollPos@UICWArray@@QAEXXZ
    void SetVScrollPos();

    // 0x4EFB00 | ?SetVScrollVals@UICWArray@@QAEXXZ
    void SetVScrollVals();

    // 0x4EFD40 | ?Switch@UICWArray@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4EFF30 | ?Update@UICWArray@@UAEXXZ
    void Update() override;

    // 0x4EFA90 | ?VScrollCB@UICWArray@@QAEXXZ
    void VScrollCB();
};

check_size(UICWArray, 0xCC);
