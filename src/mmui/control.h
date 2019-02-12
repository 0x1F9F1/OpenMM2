/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmui:control

    0x501850 | void __cdecl FocusThis(void) | ?FocusThis@@YAXXZ
    0x501860 | public: __thiscall ControlSetup::ControlSetup(int) | ??0ControlSetup@@QAE@H@Z
    0x501A60 | public: virtual __thiscall ControlSetup::~ControlSetup(void) | ??1ControlSetup@@UAE@XZ
    0x501AE0 | public: void __thiscall ControlSetup::CreateDeviceOptions(void) | ?CreateDeviceOptions@ControlSetup@@QAEXXZ
    0x502020 | public: void __thiscall ControlSetup::DeactivateAllDeviceOptions(void) | ?DeactivateAllDeviceOptions@ControlSetup@@QAEXXZ
    0x502080 | public: void __thiscall ControlSetup::ActivateDeviceOptions(void) | ?ActivateDeviceOptions@ControlSetup@@QAEXXZ
    0x502360 | public: float __thiscall ControlSetup::SetControlPosition(class uiWidget *,float,float) | ?SetControlPosition@ControlSetup@@QAEMPAVuiWidget@@MM@Z
    0x502380 | public: void __thiscall ControlSetup::POVCB(void) | ?POVCB@ControlSetup@@QAEXXZ
    0x502390 | public: void __thiscall ControlSetup::SetSensitivityCB(void) | ?SetSensitivityCB@ControlSetup@@QAEXXZ
    0x5023A0 | public: void __thiscall ControlSetup::ControlSelect(void) | ?ControlSelect@ControlSetup@@QAEXXZ
    0x5023F0 | public: virtual void __thiscall ControlSetup::PreSetup(void) | ?PreSetup@ControlSetup@@UAEXXZ
    0x502430 | public: void __thiscall ControlSetup::SetFFPermissions(void) | ?SetFFPermissions@ControlSetup@@QAEXXZ
    0x502470 | public: void __thiscall ControlSetup::InitCustomControls(void) | ?InitCustomControls@ControlSetup@@QAEXXZ
    0x502500 | public: virtual void __thiscall ControlSetup::Update(void) | ?Update@ControlSetup@@UAEXXZ
    0x502520 | public: virtual void __thiscall ControlSetup::StoreCurrentSetup(void) | ?StoreCurrentSetup@ControlSetup@@UAEXXZ
    0x502530 | public: virtual void __thiscall ControlSetup::ResetDefaultAction(void) | ?ResetDefaultAction@ControlSetup@@UAEXXZ
    0x502570 | public: void __thiscall ControlSetup::LaunchJoyCpl(void) | ?LaunchJoyCpl@ControlSetup@@QAEXXZ
    0x502700 | public: virtual void __thiscall ControlSetup::CancelAction(void) | ?CancelAction@ControlSetup@@UAEXXZ
    0x502710 | public: virtual void __thiscall ControlSetup::DoneAction(void) | ?DoneAction@ControlSetup@@UAEXXZ
    0x502720 | public: void __thiscall ControlSetup::FocusDescription(void *,void *) | ?FocusDescription@ControlSetup@@QAEXPAX0@Z
    0x502750 | public: virtual void * __thiscall ControlSetup::`scalar deleting destructor'(unsigned int) | ??_GControlSetup@@UAEPAXI@Z
    public: virtual void * __thiscall ControlSetup::`vector deleting destructor'(unsigned int) | ??_EControlSetup@@UAEPAXI@Z
    0x5B429C | const ControlSetup::`vftable' | ??_7ControlSetup@@6B@
*/

// #include "hooking.h"
