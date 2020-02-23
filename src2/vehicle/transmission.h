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
    vehicle:transmission

    0x4CF0F0 | public: __thiscall vehTransmission::vehTransmission(void) | ??0vehTransmission@@QAE@XZ
    0x4CF200 | public: virtual void __thiscall vehTransmission::Reset(void) | ?Reset@vehTransmission@@UAEXXZ
    0x4CF220 | public: void __thiscall vehTransmission::ComputeConstants(void) | ?ComputeConstants@vehTransmission@@QAEXXZ
    0x4CF530 | private: float __thiscall vehTransmission::GearRatioFromMPH(float) | ?GearRatioFromMPH@vehTransmission@@AAEMM@Z
    0x4CF560 | public: void __thiscall vehTransmission::Init(class vehCarSim *) | ?Init@vehTransmission@@QAEXPAVvehCarSim@@@Z
    0x4CF570 | public: int __thiscall vehTransmission::Upshift(void) | ?Upshift@vehTransmission@@QAEHXZ
    0x4CF5B0 | public: int __thiscall vehTransmission::Downshift(void) | ?Downshift@vehTransmission@@QAEHXZ
    0x4CF600 | public: virtual void __thiscall vehTransmission::Update(void) | ?Update@vehTransmission@@UAEXXZ
    0x4CF6B0 | public: void __thiscall vehTransmission::Automatic(int) | ?Automatic@vehTransmission@@QAEXH@Z
    0x4CF6C0 | public: void __thiscall vehTransmission::SetReverse(void) | ?SetReverse@vehTransmission@@QAEXXZ
    0x4CF6D0 | public: void __thiscall vehTransmission::SetNeutral(void) | ?SetNeutral@vehTransmission@@QAEXXZ
    0x4CF6E0 | public: void __thiscall vehTransmission::SetForward(void) | ?SetForward@vehTransmission@@QAEXXZ
    0x4CF700 | public: int __thiscall vehTransmission::SetCurrentGear(int) | ?SetCurrentGear@vehTransmission@@QAEHH@Z
    public: virtual void __thiscall vehTransmission::AddWidgets(class bkBank &) | ?AddWidgets@vehTransmission@@UAEXAAVbkBank@@@Z
    0x4CF740 | public: virtual void __thiscall vehTransmission::FileIO(class datParser &) | ?FileIO@vehTransmission@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehTransmission::`vector deleting destructor'(unsigned int) | ??_EvehTransmission@@UAEPAXI@Z
    0x4CF850 | public: virtual void * __thiscall vehTransmission::`scalar deleting destructor'(unsigned int) | ??_GvehTransmission@@UAEPAXI@Z
    0x4CF880 | public: virtual char * __thiscall vehTransmission::GetClassName(void) | ?GetClassName@vehTransmission@@UAEPADXZ
    0x5B2D2C | const vehTransmission::`vftable' | ??_7vehTransmission@@6B@
*/

struct vehTransmission : asNode
{
public:
    // vehTransmission::`vftable' @ 0x5B2D2C

    // 0x4CF0F0 | ??0vehTransmission@@QAE@XZ
    inline vehTransmission()
    {
        stub<member_func_t<void, vehTransmission>>(0x4CF0F0, this);
    }

    // 0x4CF220 | ?ComputeConstants@vehTransmission@@QAEXXZ
    inline void ComputeConstants()
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF220, this);
    }

    // 0x4CF530 | ?GearRatioFromMPH@vehTransmission@@AAEMM@Z
    inline f32 GearRatioFromMPH(f32 arg1)
    {
        return stub<member_func_t<f32, vehTransmission, f32>>(0x4CF530, this, arg1);
    }

    // 0x4CF560 | ?Init@vehTransmission@@QAEXPAVvehCarSim@@@Z
    inline void Init(class vehCarSim* arg1)
    {
        return stub<member_func_t<void, vehTransmission, class vehCarSim*>>(0x4CF560, this, arg1);
    }

    // 0x4CF570 | ?Upshift@vehTransmission@@QAEHXZ
    inline i32 Upshift()
    {
        return stub<member_func_t<i32, vehTransmission>>(0x4CF570, this);
    }

    // 0x4CF5B0 | ?Downshift@vehTransmission@@QAEHXZ
    inline i32 Downshift()
    {
        return stub<member_func_t<i32, vehTransmission>>(0x4CF5B0, this);
    }

    // 0x4CF6B0 | ?Automatic@vehTransmission@@QAEXH@Z
    inline void Automatic(i32 arg1)
    {
        return stub<member_func_t<void, vehTransmission, i32>>(0x4CF6B0, this, arg1);
    }

    // 0x4CF6C0 | ?SetReverse@vehTransmission@@QAEXXZ
    inline void SetReverse()
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF6C0, this);
    }

    // 0x4CF6D0 | ?SetNeutral@vehTransmission@@QAEXXZ
    inline void SetNeutral()
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF6D0, this);
    }

    // 0x4CF6E0 | ?SetForward@vehTransmission@@QAEXXZ
    inline void SetForward()
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF6E0, this);
    }

    // 0x4CF700 | ?SetCurrentGear@vehTransmission@@QAEHH@Z
    inline i32 SetCurrentGear(i32 arg1)
    {
        return stub<member_func_t<i32, vehTransmission, i32>>(0x4CF700, this, arg1);
    }

    // 0x4CCEB0 | ??1vehTransmission@@UAE@XZ
    inline ~vehTransmission() override
    {
        stub<member_func_t<void, vehTransmission>>(0x4CCEB0, this);
    }

    // 0x4CF600 | ?Update@vehTransmission@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF600, this);
    }

    // 0x4CF200 | ?Reset@vehTransmission@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehTransmission>>(0x4CF200, this);
    }

    // 0x4CF740 | ?FileIO@vehTransmission@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehTransmission, class datParser&>>(0x4CF740, this, arg1);
    }

    // 0x4CF880 | ?GetClassName@vehTransmission@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehTransmission>>(0x4CF880, this);
    }
};
