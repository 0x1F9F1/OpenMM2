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
    vehicle:wheel

    0x4D2190 | public: __thiscall vehWheel::vehWheel(void) | ??0vehWheel@@QAE@XZ
    0x4D22E0 | public: virtual void __thiscall vehWheel::Reset(void) | ?Reset@vehWheel@@UAEXXZ
    0x4D23F0 | public: void __thiscall vehWheel::ComputeConstants(void) | ?ComputeConstants@vehWheel@@QAEXXZ
    0x4D2490 | public: void __thiscall vehWheel::AddNormalLoad(float) | ?AddNormalLoad@vehWheel@@QAEXM@Z
    0x4D24C0 | public: void __thiscall vehWheel::SetNormalLoad(float) | ?SetNormalLoad@vehWheel@@QAEXM@Z
    0x4D25D0 | private: float __thiscall vehWheel::ComputeFriction(float,float *) | ?ComputeFriction@vehWheel@@AAEMMPAM@Z
    0x4D2690 | public: void __thiscall vehWheel::Init(class vehCarSim *,char const *,char *,class Vector3,class phInertialCS *,int,int) | ?Init@vehWheel@@QAEXPAVvehCarSim@@PBDPADVVector3@@PAVphInertialCS@@HH@Z
    0x4D2720 | private: void __thiscall vehWheel::CalcSuspensionForce(float,bool,float) | ?CalcSuspensionForce@vehWheel@@AAEXM_NM@Z
    0x4D2A00 | public: void __thiscall vehWheel::ComputeDwtdw(float,float *,float *,float *) | ?ComputeDwtdw@vehWheel@@QAEXMPAM00@Z
    0x4D3440 | private: float __thiscall vehWheel::GetBumpDisplacement(float) | ?GetBumpDisplacement@vehWheel@@AAEMM@Z
    0x4D34E0 | public: virtual void __thiscall vehWheel::Update(void) | ?Update@vehWheel@@UAEXXZ
    0x4D3F60 | public: int __thiscall vehWheel::GetSurfaceSound(void) | ?GetSurfaceSound@vehWheel@@QAEHXZ
    0x4D3F80 | public: void __thiscall vehWheel::SetInputs(float,float,float) | ?SetInputs@vehWheel@@QAEXMMM@Z
    0x4D4030 | public: float __thiscall vehWheel::GetVisualDispVert(void) | ?GetVisualDispVert@vehWheel@@QAEMXZ
    0x4D4090 | public: float __thiscall vehWheel::GetVisualDispLat(void) | ?GetVisualDispLat@vehWheel@@QAEMXZ
    0x4D40D0 | public: float __thiscall vehWheel::GetVisualDispLong(void) | ?GetVisualDispLong@vehWheel@@QAEMXZ
    0x4D4110 | public: void __thiscall vehWheel::CopyVars(class vehWheel *) | ?CopyVars@vehWheel@@QAEXPAV1@@Z
    public: virtual void __thiscall vehWheel::AddWidgets(class bkBank &) | ?AddWidgets@vehWheel@@UAEXAAVbkBank@@@Z
    0x4D41C0 | public: virtual void __thiscall vehWheel::FileIO(class datParser &) | ?FileIO@vehWheel@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehWheel::`vector deleting destructor'(unsigned int) | ??_EvehWheel@@UAEPAXI@Z
    0x4D4390 | public: virtual void * __thiscall vehWheel::`scalar deleting destructor'(unsigned int) | ??_GvehWheel@@UAEPAXI@Z
    0x4D43C0 | public: virtual char * __thiscall vehWheel::GetClassName(void) | ?GetClassName@vehWheel@@UAEPADXZ
    0x5B2DCC | const vehWheel::`vftable' | ??_7vehWheel@@6B@
    public: static float vehWheel::WeatherFriction | ?WeatherFriction@vehWheel@@2MA
*/

class vehWheel : asNode
{
public:
    // vehWheel::`vftable' @ 0x5B2DCC

    // 0x4D2190 | ??0vehWheel@@QAE@XZ
    inline vehWheel()
    {
        stub<member_func_t<void, vehWheel>>(0x4D2190, this);
    }

    // 0x4D23F0 | ?ComputeConstants@vehWheel@@QAEXXZ
    inline void ComputeConstants()
    {
        return stub<member_func_t<void, vehWheel>>(0x4D23F0, this);
    }

    // 0x4D2490 | ?AddNormalLoad@vehWheel@@QAEXM@Z
    inline void AddNormalLoad(f32 arg1)
    {
        return stub<member_func_t<void, vehWheel, f32>>(0x4D2490, this, arg1);
    }

    // 0x4D24C0 | ?SetNormalLoad@vehWheel@@QAEXM@Z
    inline void SetNormalLoad(f32 arg1)
    {
        return stub<member_func_t<void, vehWheel, f32>>(0x4D24C0, this, arg1);
    }

    // 0x4D25D0 | ?ComputeFriction@vehWheel@@AAEMMPAM@Z
    inline f32 ComputeFriction(f32 arg1, f32* arg2)
    {
        return stub<member_func_t<f32, vehWheel, f32, f32*>>(0x4D25D0, this, arg1, arg2);
    }

    // 0x4D2690 | ?Init@vehWheel@@QAEXPAVvehCarSim@@PBDPADVVector3@@PAVphInertialCS@@HH@Z
    inline void Init(class vehCarSim* arg1, char const* arg2, char* arg3, class Vector3 arg4, class phInertialCS* arg5,
        i32 arg6, i32 arg7)
    {
        return stub<member_func_t<void, vehWheel, class vehCarSim*, char const*, char*, class Vector3,
            class phInertialCS*, i32, i32>>(0x4D2690, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4D2720 | ?CalcSuspensionForce@vehWheel@@AAEXM_NM@Z
    inline void CalcSuspensionForce(f32 arg1, bool arg2, f32 arg3)
    {
        return stub<member_func_t<void, vehWheel, f32, bool, f32>>(0x4D2720, this, arg1, arg2, arg3);
    }

    // 0x4D2A00 | ?ComputeDwtdw@vehWheel@@QAEXMPAM00@Z
    inline void ComputeDwtdw(f32 arg1, f32* arg2, f32* arg3, f32* arg4)
    {
        return stub<member_func_t<void, vehWheel, f32, f32*, f32*, f32*>>(0x4D2A00, this, arg1, arg2, arg3, arg4);
    }

    // 0x4D3440 | ?GetBumpDisplacement@vehWheel@@AAEMM@Z
    inline f32 GetBumpDisplacement(f32 arg1)
    {
        return stub<member_func_t<f32, vehWheel, f32>>(0x4D3440, this, arg1);
    }

    // 0x4D3F60 | ?GetSurfaceSound@vehWheel@@QAEHXZ
    inline i32 GetSurfaceSound()
    {
        return stub<member_func_t<i32, vehWheel>>(0x4D3F60, this);
    }

    // 0x4D3F80 | ?SetInputs@vehWheel@@QAEXMMM@Z
    inline void SetInputs(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, vehWheel, f32, f32, f32>>(0x4D3F80, this, arg1, arg2, arg3);
    }

    // 0x4D4030 | ?GetVisualDispVert@vehWheel@@QAEMXZ
    inline f32 GetVisualDispVert()
    {
        return stub<member_func_t<f32, vehWheel>>(0x4D4030, this);
    }

    // 0x4D4090 | ?GetVisualDispLat@vehWheel@@QAEMXZ
    inline f32 GetVisualDispLat()
    {
        return stub<member_func_t<f32, vehWheel>>(0x4D4090, this);
    }

    // 0x4D40D0 | ?GetVisualDispLong@vehWheel@@QAEMXZ
    inline f32 GetVisualDispLong()
    {
        return stub<member_func_t<f32, vehWheel>>(0x4D40D0, this);
    }

    // 0x4D4110 | ?CopyVars@vehWheel@@QAEXPAV1@@Z
    inline void CopyVars(class vehWheel* arg1)
    {
        return stub<member_func_t<void, vehWheel, class vehWheel*>>(0x4D4110, this, arg1);
    }

    // 0x4CCED0 | ??1vehWheel@@UAE@XZ
    inline ~vehWheel() override
    {
        stub<member_func_t<void, vehWheel>>(0x4CCED0, this);
    }

    // 0x4D34E0 | ?Update@vehWheel@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehWheel>>(0x4D34E0, this);
    }

    // 0x4D22E0 | ?Reset@vehWheel@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehWheel>>(0x4D22E0, this);
    }

    // 0x4D41C0 | ?FileIO@vehWheel@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehWheel, class datParser&>>(0x4D41C0, this, arg1);
    }

    // 0x4D43C0 | ?GetClassName@vehWheel@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehWheel>>(0x4D43C0, this);
    }
};
