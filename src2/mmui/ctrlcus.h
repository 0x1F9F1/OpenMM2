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

#include "optionsbase.h"

/*
    mmui:ctrlcus

    0x502780 | public: __thiscall ControlCustom::ControlCustom(int) | ??0ControlCustom@@QAE@H@Z
    0x502820 | public: virtual __thiscall ControlCustom::~ControlCustom(void) | ??1ControlCustom@@UAE@XZ
    0x502830 | public: void __thiscall ControlCustom::BadAssignCB(void) | ?BadAssignCB@ControlCustom@@QAEXXZ
    0x502880 | public: void __thiscall ControlCustom::ClearBadAssignment(void) | ?ClearBadAssignment@ControlCustom@@QAEXXZ
    0x502890 | public: void __thiscall ControlCustom::CancelBadAssignment(void) | ?CancelBadAssignment@ControlCustom@@QAEXXZ
    0x5028B0 | public: void __thiscall ControlCustom::VerifyBadAssignment(void) | ?VerifyBadAssignment@ControlCustom@@QAEXXZ
    0x5028D0 | public: virtual void __thiscall ControlCustom::ResetDefaultAction(void) | ?ResetDefaultAction@ControlCustom@@UAEXXZ
    0x5028F0 | public: virtual void __thiscall ControlCustom::DoneAction(void) | ?DoneAction@ControlCustom@@UAEXXZ
    0x502900 | public: virtual void __thiscall ControlCustom::CancelAction(void) | ?CancelAction@ControlCustom@@UAEXXZ
    public: virtual void * __thiscall ControlCustom::`vector deleting destructor'(unsigned int) | ??_EControlCustom@@UAEPAXI@Z
    0x502920 | public: virtual void * __thiscall ControlCustom::`scalar deleting destructor'(unsigned int) | ??_GControlCustom@@UAEPAXI@Z
    0x5B42F4 | const ControlCustom::`vftable' | ??_7ControlCustom@@6B@
*/

class ControlCustom : public OptionsBase
{
    // const ControlCustom::`vftable' @ 0x5B42F4

public:
    // 0x502780 | ??0ControlCustom@@QAE@H@Z
    ControlCustom(i32 arg1);

    // 0x502920 | ??_GControlCustom@@UAEPAXI@Z
    // 0x502820 | ??1ControlCustom@@UAE@XZ
    ~ControlCustom() override;

    // 0x502830 | ?BadAssignCB@ControlCustom@@QAEXXZ
    void BadAssignCB();

    // 0x502900 | ?CancelAction@ControlCustom@@UAEXXZ
    void CancelAction() override;

    // 0x502890 | ?CancelBadAssignment@ControlCustom@@QAEXXZ
    void CancelBadAssignment();

    // 0x502880 | ?ClearBadAssignment@ControlCustom@@QAEXXZ
    void ClearBadAssignment();

    // 0x5028F0 | ?DoneAction@ControlCustom@@UAEXXZ
    void DoneAction() override;

    // 0x5028D0 | ?ResetDefaultAction@ControlCustom@@UAEXXZ
    void ResetDefaultAction() override;

    // 0x5028B0 | ?VerifyBadAssignment@ControlCustom@@QAEXXZ
    void VerifyBadAssignment();
};

check_size(ControlCustom, 0x7218);
