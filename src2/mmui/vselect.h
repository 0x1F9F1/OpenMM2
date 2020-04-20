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
    mmui:vselect

    0x4F5470 | public: __thiscall VehicleSelectBase::VehicleSelectBase(int) | ??0VehicleSelectBase@@QAE@H@Z
    0x4F55F0 | public: void __thiscall VehicleSelectBase::IncColor(void) | ?IncColor@VehicleSelectBase@@QAEXXZ
    0x4F56B0 | public: void __thiscall VehicleSelectBase::DecColor(void) | ?DecColor@VehicleSelectBase@@QAEXXZ
    0x4F5780 | public: void __thiscall VehicleSelectBase::IncTrans(void) | ?IncTrans@VehicleSelectBase@@QAEXXZ
    0x4F5790 | public: void __thiscall VehicleSelectBase::DecTrans(void) | ?DecTrans@VehicleSelectBase@@QAEXXZ
    0x4F57A0 | public: void __thiscall VehicleSelectBase::ColorCB(void) | ?ColorCB@VehicleSelectBase@@QAEXXZ
    0x4F57C0 | public: void __thiscall VehicleSelectBase::InitCarSelection(int,float,float,float,float) | ?InitCarSelection@VehicleSelectBase@@QAEXHMMMM@Z
    0x4F68F0 | public: virtual __thiscall VehicleSelectBase::~VehicleSelectBase(void) | ??1VehicleSelectBase@@UAE@XZ
    0x4F6A00 | public: virtual void __thiscall VehicleSelectBase::PreSetup(void) | ?PreSetup@VehicleSelectBase@@UAEXXZ
    0x4F6AD0 | public: virtual void __thiscall VehicleSelectBase::PostSetup(void) | ?PostSetup@VehicleSelectBase@@UAEXXZ
    0x4F6AF0 | public: void __thiscall VehicleSelectBase::AllSetCar(char *,int) | ?AllSetCar@VehicleSelectBase@@QAEXPADH@Z
    0x4F6B40 | public: void __thiscall VehicleSelectBase::TDPickCB(void) | ?TDPickCB@VehicleSelectBase@@QAEXXZ
    0x4F6B50 | public: virtual void __thiscall VehicleSelectBase::Reset(void) | ?Reset@VehicleSelectBase@@UAEXXZ
    0x4F6B60 | public: virtual void __thiscall VehicleSelectBase::Update(void) | ?Update@VehicleSelectBase@@UAEXXZ
    0x4F6C00 | public: char * __thiscall VehicleSelectBase::GetCarTitle(int,char *,short,class string *) | ?GetCarTitle@VehicleSelectBase@@QAEPADHPADFPAVstring@@@Z
    0x4F6D30 | public: int __thiscall VehicleSelectBase::CurrentVehicleIsLocked(void) | ?CurrentVehicleIsLocked@VehicleSelectBase@@QAEHXZ
    0x4F6D90 | public: void __thiscall VehicleSelectBase::SetLastUnlockedVehicle(void) | ?SetLastUnlockedVehicle@VehicleSelectBase@@QAEXXZ
    0x4F6DF0 | public: void __thiscall VehicleSelectBase::CarMod(int &) | ?CarMod@VehicleSelectBase@@QAEXAAH@Z
    0x4F6E20 | public: void __thiscall VehicleSelectBase::SetPick(int,short) | ?SetPick@VehicleSelectBase@@QAEXHF@Z
    0x4F7120 | public: void __thiscall VehicleSelectBase::ShowCarDesc(void) | ?ShowCarDesc@VehicleSelectBase@@QAEXXZ
    0x4F7340 | public: int __thiscall VehicleSelectBase::LoadStats(char *) | ?LoadStats@VehicleSelectBase@@QAEHPAD@Z
    0x4F73E0 | float __cdecl max(float,float) | ?max@@YAMMM@Z
    0x4F7400 | float __cdecl min(float,float) | ?min@@YAMMM@Z
    0x4F7420 | public: void __thiscall VehicleSelectBase::AssignVehicleStats(int,float,float,float,float) | ?AssignVehicleStats@VehicleSelectBase@@QAEXHMMMM@Z
    0x4F7590 | public: void __thiscall VehicleSelectBase::FillStats(void) | ?FillStats@VehicleSelectBase@@QAEXXZ
    0x4F75E0 | public: void __thiscall VehicleSelectBase::SetLockedLabel(void) | ?SetLockedLabel@VehicleSelectBase@@QAEXXZ
    0x4F7770 | public: void __thiscall VehicleSelectBase::LockColor(void) | ?LockColor@VehicleSelectBase@@QAEXXZ
    0x4F77F0 | public: void __thiscall VehicleSelectBase::FocusDescription(int,int) | ?FocusDescription@VehicleSelectBase@@QAEXHH@Z
    0x4F7960 | public: virtual void * __thiscall VehicleSelectBase::`scalar deleting destructor'(unsigned int) | ??_GVehicleSelectBase@@UAEPAXI@Z
    public: virtual void * __thiscall VehicleSelectBase::`vector deleting destructor'(unsigned int) | ??_EVehicleSelectBase@@UAEPAXI@Z
    0x4F7990 | public: virtual void * __thiscall asDofCS::`vector deleting destructor'(unsigned int) | ??_EasDofCS@@UAEPAXI@Z
    0x4F79F0 | public: virtual __thiscall asDofCS::~asDofCS(void) | ??1asDofCS@@UAE@XZ
    0x4F7A00 | public: virtual void * __thiscall mmVehicleForm::`vector deleting destructor'(unsigned int) | ??_EmmVehicleForm@@UAEPAXI@Z
    0x4F7A60 | public: void __thiscall VehicleSelectBase::DecCar(void) | ?DecCar@VehicleSelectBase@@QAEXXZ
    0x4F7A70 | public: void __thiscall VehicleSelectBase::IncCar(void) | ?IncCar@VehicleSelectBase@@QAEXXZ
    0x4F7A80 | public: void __thiscall VehicleSelectBase::SetShowcaseFlag(void) | ?SetShowcaseFlag@VehicleSelectBase@@QAEXXZ
    public: class mmDamage __thiscall mmVehicleForm::GetDamage(void) | ?GetDamage@mmVehicleForm@@QAE?AVmmDamage@@XZ
    0x4F7A90 | public: int __thiscall mmVehInfo::IsValid(void) | ?IsValid@mmVehInfo@@QAEHXZ
    0x5B3D38 | const VehicleSelectBase::`vftable' | ??_7VehicleSelectBase@@6B@
    public: static float VehicleSelectBase::PolarInclination | ?PolarInclination@VehicleSelectBase@@2MA
    public: static float VehicleSelectBase::CurrentUIDist | ?CurrentUIDist@VehicleSelectBase@@2MA
    public: static float VehicleSelectBase::PolarApproach | ?PolarApproach@VehicleSelectBase@@2MA
*/

// 0x4F73E0 | ?max@@YAMMM@Z
inline float max(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x4F73E0, arg1, arg2);
}

// 0x4F7400 | ?min@@YAMMM@Z
inline float min(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x4F7400, arg1, arg2);
}

struct VehicleSelectBase : UIMenu
{
public:
    // VehicleSelectBase::`vftable' @ 0x5B3D38

    // 0x4F5470 | ??0VehicleSelectBase@@QAE@H@Z
    inline VehicleSelectBase(int32_t arg1)
    {
        stub<member_func_t<void, VehicleSelectBase, int32_t>>(0x4F5470, this, arg1);
    }

    // 0x4F55F0 | ?IncColor@VehicleSelectBase@@QAEXXZ
    inline void IncColor()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F55F0, this);
    }

    // 0x4F56B0 | ?DecColor@VehicleSelectBase@@QAEXXZ
    inline void DecColor()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F56B0, this);
    }

    // 0x4F5780 | ?IncTrans@VehicleSelectBase@@QAEXXZ
    inline void IncTrans()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F5780, this);
    }

    // 0x4F5790 | ?DecTrans@VehicleSelectBase@@QAEXXZ
    inline void DecTrans()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F5790, this);
    }

    // 0x4F57A0 | ?ColorCB@VehicleSelectBase@@QAEXXZ
    inline void ColorCB()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F57A0, this);
    }

    // 0x4F57C0 | ?InitCarSelection@VehicleSelectBase@@QAEXHMMMM@Z
    inline void InitCarSelection(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, float, float, float, float>>(
            0x4F57C0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4F6AF0 | ?AllSetCar@VehicleSelectBase@@QAEXPADH@Z
    inline void AllSetCar(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, VehicleSelectBase, char*, int32_t>>(0x4F6AF0, this, arg1, arg2);
    }

    // 0x4F6B40 | ?TDPickCB@VehicleSelectBase@@QAEXXZ
    inline void TDPickCB()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6B40, this);
    }

    // 0x4F6C00 | ?GetCarTitle@VehicleSelectBase@@QAEPADHPADFPAVstring@@@Z
    inline char* GetCarTitle(int32_t arg1, char* arg2, int16_t arg3, class string* arg4)
    {
        return stub<member_func_t<char*, VehicleSelectBase, int32_t, char*, int16_t, class string*>>(
            0x4F6C00, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F6D30 | ?CurrentVehicleIsLocked@VehicleSelectBase@@QAEHXZ
    inline int32_t CurrentVehicleIsLocked()
    {
        return stub<member_func_t<int32_t, VehicleSelectBase>>(0x4F6D30, this);
    }

    // 0x4F6D90 | ?SetLastUnlockedVehicle@VehicleSelectBase@@QAEXXZ
    inline void SetLastUnlockedVehicle()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6D90, this);
    }

    // 0x4F6DF0 | ?CarMod@VehicleSelectBase@@QAEXAAH@Z
    inline void CarMod(int32_t& arg1)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t&>>(0x4F6DF0, this, arg1);
    }

    // 0x4F6E20 | ?SetPick@VehicleSelectBase@@QAEXHF@Z
    inline void SetPick(int32_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, int16_t>>(0x4F6E20, this, arg1, arg2);
    }

    // 0x4F7120 | ?ShowCarDesc@VehicleSelectBase@@QAEXXZ
    inline void ShowCarDesc()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7120, this);
    }

    // 0x4F7340 | ?LoadStats@VehicleSelectBase@@QAEHPAD@Z
    inline int32_t LoadStats(char* arg1)
    {
        return stub<member_func_t<int32_t, VehicleSelectBase, char*>>(0x4F7340, this, arg1);
    }

    // 0x4F7420 | ?AssignVehicleStats@VehicleSelectBase@@QAEXHMMMM@Z
    inline void AssignVehicleStats(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, float, float, float, float>>(
            0x4F7420, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4F7590 | ?FillStats@VehicleSelectBase@@QAEXXZ
    inline void FillStats()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7590, this);
    }

    // 0x4F75E0 | ?SetLockedLabel@VehicleSelectBase@@QAEXXZ
    inline void SetLockedLabel()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F75E0, this);
    }

    // 0x4F7770 | ?LockColor@VehicleSelectBase@@QAEXXZ
    inline void LockColor()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7770, this);
    }

    // 0x4F77F0 | ?FocusDescription@VehicleSelectBase@@QAEXHH@Z
    inline void FocusDescription(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, int32_t>>(0x4F77F0, this, arg1, arg2);
    }

    // 0x4F7A60 | ?DecCar@VehicleSelectBase@@QAEXXZ
    inline void DecCar()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7A60, this);
    }

    // 0x4F7A70 | ?IncCar@VehicleSelectBase@@QAEXXZ
    inline void IncCar()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7A70, this);
    }

    // 0x4F7A80 | ?SetShowcaseFlag@VehicleSelectBase@@QAEXXZ
    inline void SetShowcaseFlag()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F7A80, this);
    }

    // 0x4F68F0 | ??1VehicleSelectBase@@UAE@XZ
    inline ~VehicleSelectBase() override
    {
        stub<member_func_t<void, VehicleSelectBase>>(0x4F68F0, this);
    }

    // 0x4F6B60 | ?Update@VehicleSelectBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6B60, this);
    }

    // 0x4F6B50 | ?Reset@VehicleSelectBase@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6B50, this);
    }

    // 0x4F6A00 | ?PreSetup@VehicleSelectBase@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6A00, this);
    }

    // 0x4F6AD0 | ?PostSetup@VehicleSelectBase@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4F6AD0, this);
    }
};
