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
    vehicle:drivetrain

    0x4D9D60 | public: __thiscall vehDrivetrain::vehDrivetrain(void) | ??0vehDrivetrain@@QAE@XZ
    0x4D9DD0 | public: void __thiscall vehDrivetrain::Init(class vehCarSim *) | ?Init@vehDrivetrain@@QAEXPAVvehCarSim@@@Z
    0x4D9DE0 | public: void __thiscall vehDrivetrain::CopyVars(class vehDrivetrain *) | ?CopyVars@vehDrivetrain@@QAEXPAV1@@Z
    0x4D9E00 | public: virtual void __thiscall vehDrivetrain::Reset(void) | ?Reset@vehDrivetrain@@UAEXXZ
    0x4D9E20 | public: void __thiscall vehDrivetrain::Attach(void) | ?Attach@vehDrivetrain@@QAEXXZ
    0x4D9E40 | public: void __thiscall vehDrivetrain::Detach(void) | ?Detach@vehDrivetrain@@QAEXXZ
    0x4D9E50 | public: int __thiscall vehDrivetrain::AddWheel(class vehWheel *) | ?AddWheel@vehDrivetrain@@QAEHPAVvehWheel@@@Z
    0x4D9E90 | public: virtual void __thiscall vehDrivetrain::Update(void) | ?Update@vehDrivetrain@@UAEXXZ
    public: virtual void __thiscall vehDrivetrain::AddWidgets(class bkBank &) | ?AddWidgets@vehDrivetrain@@UAEXAAVbkBank@@@Z
    0x4DA570 | public: virtual void __thiscall vehDrivetrain::FileIO(class datParser &) | ?FileIO@vehDrivetrain@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehDrivetrain::`vector deleting destructor'(unsigned int) | ??_EvehDrivetrain@@UAEPAXI@Z
    0x4DA5D0 | public: virtual void * __thiscall vehDrivetrain::`scalar deleting destructor'(unsigned int) | ??_GvehDrivetrain@@UAEPAXI@Z
    0x4DA600 | public: virtual char * __thiscall vehDrivetrain::GetClassName(void) | ?GetClassName@vehDrivetrain@@UAEPADXZ
    0x5B30D0 | const vehDrivetrain::`vftable' | ??_7vehDrivetrain@@6B@
    public: static float vehDrivetrain::diffRatioMax | ?diffRatioMax@vehDrivetrain@@2MA
    public: static float vehDrivetrain::diffRatioMaxHighSpeed | ?diffRatioMaxHighSpeed@vehDrivetrain@@2MA
    public: static float vehDrivetrain::diffRatioHighSpeedLevel | ?diffRatioHighSpeedLevel@vehDrivetrain@@2MA
*/

class vehDrivetrain : asNode
{
public:
    // vehDrivetrain::`vftable' @ 0x5B30D0

    // 0x4D9D60 | ??0vehDrivetrain@@QAE@XZ
    inline vehDrivetrain()
    {
        stub<member_func_t<void, vehDrivetrain>>(0x4D9D60, this);
    }

    // 0x4D9DD0 | ?Init@vehDrivetrain@@QAEXPAVvehCarSim@@@Z
    inline void Init(class vehCarSim* arg1)
    {
        return stub<member_func_t<void, vehDrivetrain, class vehCarSim*>>(0x4D9DD0, this, arg1);
    }

    // 0x4D9DE0 | ?CopyVars@vehDrivetrain@@QAEXPAV1@@Z
    inline void CopyVars(class vehDrivetrain* arg1)
    {
        return stub<member_func_t<void, vehDrivetrain, class vehDrivetrain*>>(0x4D9DE0, this, arg1);
    }

    // 0x4D9E20 | ?Attach@vehDrivetrain@@QAEXXZ
    inline void Attach()
    {
        return stub<member_func_t<void, vehDrivetrain>>(0x4D9E20, this);
    }

    // 0x4D9E40 | ?Detach@vehDrivetrain@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, vehDrivetrain>>(0x4D9E40, this);
    }

    // 0x4D9E50 | ?AddWheel@vehDrivetrain@@QAEHPAVvehWheel@@@Z
    inline int32_t AddWheel(class vehWheel* arg1)
    {
        return stub<member_func_t<int32_t, vehDrivetrain, class vehWheel*>>(0x4D9E50, this, arg1);
    }

    // 0x4CCEC0 | ??1vehDrivetrain@@UAE@XZ
    inline ~vehDrivetrain() override
    {
        stub<member_func_t<void, vehDrivetrain>>(0x4CCEC0, this);
    }

    // 0x4D9E90 | ?Update@vehDrivetrain@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehDrivetrain>>(0x4D9E90, this);
    }

    // 0x4D9E00 | ?Reset@vehDrivetrain@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehDrivetrain>>(0x4D9E00, this);
    }

    // 0x4DA570 | ?FileIO@vehDrivetrain@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehDrivetrain, class datParser&>>(0x4DA570, this, arg1);
    }

    // 0x4DA600 | ?GetClassName@vehDrivetrain@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehDrivetrain>>(0x4DA600, this);
    }
};
