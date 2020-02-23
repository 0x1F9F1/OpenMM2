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

// 0x501850 | ?FocusThis@@YAXXZ
inline void FocusThis()
{
    return stub<cdecl_t<void>>(0x501850);
}

struct ControlSetup : OptionsBase
{
public:
    // ControlSetup::`vftable' @ 0x5B429C

    // 0x501860 | ??0ControlSetup@@QAE@H@Z
    inline ControlSetup(i32 arg1)
    {
        stub<member_func_t<void, ControlSetup, i32>>(0x501860, this, arg1);
    }

    // 0x501AE0 | ?CreateDeviceOptions@ControlSetup@@QAEXXZ
    inline void CreateDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x501AE0, this);
    }

    // 0x502020 | ?DeactivateAllDeviceOptions@ControlSetup@@QAEXXZ
    inline void DeactivateAllDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502020, this);
    }

    // 0x502080 | ?ActivateDeviceOptions@ControlSetup@@QAEXXZ
    inline void ActivateDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502080, this);
    }

    // 0x502360 | ?SetControlPosition@ControlSetup@@QAEMPAVuiWidget@@MM@Z
    inline f32 SetControlPosition(class uiWidget* arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<f32, ControlSetup, class uiWidget*, f32, f32>>(0x502360, this, arg1, arg2, arg3);
    }

    // 0x502380 | ?POVCB@ControlSetup@@QAEXXZ
    inline void POVCB()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502380, this);
    }

    // 0x502390 | ?SetSensitivityCB@ControlSetup@@QAEXXZ
    inline void SetSensitivityCB()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502390, this);
    }

    // 0x5023A0 | ?ControlSelect@ControlSetup@@QAEXXZ
    inline void ControlSelect()
    {
        return stub<member_func_t<void, ControlSetup>>(0x5023A0, this);
    }

    // 0x502430 | ?SetFFPermissions@ControlSetup@@QAEXXZ
    inline void SetFFPermissions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502430, this);
    }

    // 0x502470 | ?InitCustomControls@ControlSetup@@QAEXXZ
    inline void InitCustomControls()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502470, this);
    }

    // 0x502570 | ?LaunchJoyCpl@ControlSetup@@QAEXXZ
    inline void LaunchJoyCpl()
    {
        return stub<member_func_t<void, ControlSetup>>(0x502570, this);
    }

    // 0x502720 | ?FocusDescription@ControlSetup@@QAEXPAX0@Z
    inline void FocusDescription(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, ControlSetup, void*, void*>>(0x502720, this, arg1, arg2);
    }

    // 0x501A60 | ??1ControlSetup@@UAE@XZ
    inline ~ControlSetup() override
    {
        stub<member_func_t<void, ControlSetup>>(0x501A60, this);
    }

    // 0x502500 | ?Update@ControlSetup@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x502500, this);
    }

    // 0x5023F0 | ?PreSetup@ControlSetup@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x5023F0, this);
    }

    // 0x502700 | ?CancelAction@ControlSetup@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x502700, this);
    }

    // 0x502710 | ?DoneAction@ControlSetup@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x502710, this);
    }

    // 0x502530 | ?ResetDefaultAction@ControlSetup@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x502530, this);
    }

    // 0x502520 | ?StoreCurrentSetup@ControlSetup@@UAEXXZ
    inline void StoreCurrentSetup() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x502520, this);
    }
};
