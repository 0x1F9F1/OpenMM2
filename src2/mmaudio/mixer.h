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
    mmaudio:mixer

    0x51C100 | public: void __thiscall VolumeDW::Set(float,float) | ?Set@VolumeDW@@QAEXMM@Z
    0x51C1C0 | public: unsigned long __thiscall VolumeDW::Value(void) | ?Value@VolumeDW@@QAEKXZ
    0x51C1F0 | public: unsigned long __thiscall MixerCTL::Init(void) | ?Init@MixerCTL@@QAEKXZ
    0x51C230 | public: virtual __thiscall MixerCTL::~MixerCTL(void) | ??1MixerCTL@@UAE@XZ
    0x51C240 | public: void __thiscall MixerCTL::AssignWaveBalance(float) | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    0x51C290 | public: void __thiscall MixerCTL::AssignCDBalance(float) | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    0x51C2E0 | public: void __thiscall MixerCTL::RefreshAll(unsigned long) | ?RefreshAll@MixerCTL@@QAEXK@Z
    0x51C2F0 | public: float __thiscall MixerCTL::GetWaveBalance(void) | ?GetWaveBalance@MixerCTL@@QAEMXZ
    0x51C300 | public: float __thiscall MixerCTL::GetWaveVolume(void) | ?GetWaveVolume@MixerCTL@@QAEMXZ
    0x51C310 | public: void __thiscall MixerCTL::AssignWaveVolume(float) | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    0x51C330 | public: void __thiscall MixerCTL::AssignCDVolume(float) | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    0x51C350 | public: float __thiscall MixerCTL::GetCDBalance(void) | ?GetCDBalance@MixerCTL@@QAEMXZ
    0x51C360 | public: float __thiscall MixerCTL::GetCDVolume(void) | ?GetCDVolume@MixerCTL@@QAEMXZ
    0x51C370 | public: unsigned long __thiscall MixerCTL::AssignMixerVolume(float,unsigned long) | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    0x51C5C0 | public: unsigned long __thiscall MixerCTL::AssignMixerBalance(float,unsigned long) | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    0x51C870 | public: float __thiscall MixerCTL::GetMixerBalance(unsigned long) | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    0x51CAE0 | public: void __thiscall MixerCTL::SetDeviceNum(unsigned int) | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    0x51CB00 | private: char * __thiscall MixerCTL::GetErrorMessage(unsigned long) | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    0x51CBA0 | private: long __thiscall MixerCTL::WindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?WindowProc@MixerCTL@@AAEJPAUHWND__@@IIJ@Z
    0x51CBB0 | public: virtual void * __thiscall MixerCTL::`scalar deleting destructor'(unsigned int) | ??_GMixerCTL@@UAEPAXI@Z
    public: virtual void * __thiscall MixerCTL::`vector deleting destructor'(unsigned int) | ??_EMixerCTL@@UAEPAXI@Z
    0x5B4E70 | const MixerCTL::`vftable' | ??_7MixerCTL@@6B@
*/

class MixerCTL
{
public:
    // MixerCTL::`vftable' @ 0x5B4E70

    // 0x51C1F0 | ?Init@MixerCTL@@QAEKXZ
    u32 Init()
    {
        return stub<member_func_t<u32, MixerCTL>>(0x51C1F0, this);
    }

    // 0x51C240 | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    void AssignWaveBalance(f32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, f32>>(0x51C240, this, arg1);
    }

    // 0x51C290 | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    void AssignCDBalance(f32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, f32>>(0x51C290, this, arg1);
    }

    // 0x51C2E0 | ?RefreshAll@MixerCTL@@QAEXK@Z
    void RefreshAll(u32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, u32>>(0x51C2E0, this, arg1);
    }

    // 0x51C2F0 | ?GetWaveBalance@MixerCTL@@QAEMXZ
    f32 GetWaveBalance()
    {
        return stub<member_func_t<f32, MixerCTL>>(0x51C2F0, this);
    }

    // 0x51C300 | ?GetWaveVolume@MixerCTL@@QAEMXZ
    f32 GetWaveVolume()
    {
        return stub<member_func_t<f32, MixerCTL>>(0x51C300, this);
    }

    // 0x51C310 | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    void AssignWaveVolume(f32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, f32>>(0x51C310, this, arg1);
    }

    // 0x51C330 | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    void AssignCDVolume(f32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, f32>>(0x51C330, this, arg1);
    }

    // 0x51C350 | ?GetCDBalance@MixerCTL@@QAEMXZ
    f32 GetCDBalance()
    {
        return stub<member_func_t<f32, MixerCTL>>(0x51C350, this);
    }

    // 0x51C360 | ?GetCDVolume@MixerCTL@@QAEMXZ
    f32 GetCDVolume()
    {
        return stub<member_func_t<f32, MixerCTL>>(0x51C360, this);
    }

    // 0x51C370 | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    u32 AssignMixerVolume(f32 arg1, u32 arg2)
    {
        return stub<member_func_t<u32, MixerCTL, f32, u32>>(0x51C370, this, arg1, arg2);
    }

    // 0x51C5C0 | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    u32 AssignMixerBalance(f32 arg1, u32 arg2)
    {
        return stub<member_func_t<u32, MixerCTL, f32, u32>>(0x51C5C0, this, arg1, arg2);
    }

    // 0x51C870 | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    f32 GetMixerBalance(u32 arg1)
    {
        return stub<member_func_t<f32, MixerCTL, u32>>(0x51C870, this, arg1);
    }

    // 0x51CAE0 | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    void SetDeviceNum(u32 arg1)
    {
        return stub<member_func_t<void, MixerCTL, u32>>(0x51CAE0, this, arg1);
    }

    // 0x51CB00 | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    char* GetErrorMessage(u32 arg1)
    {
        return stub<member_func_t<char*, MixerCTL, u32>>(0x51CB00, this, arg1);
    }

    // 0x51CBA0 | ?WindowProc@MixerCTL@@AAEJPAUHWND__@@IIJ@Z
    i32 WindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
    {
        return stub<member_func_t<i32, MixerCTL, struct HWND__*, u32, u32, i32>>(
            0x51CBA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x51C230 | ??1MixerCTL@@UAE@XZ
    virtual ~MixerCTL()
    {
        stub<member_func_t<void, MixerCTL>>(0x51C230, this);
    }
};

struct VolumeDW
{
public:
    // 0x51C100 | ?Set@VolumeDW@@QAEXMM@Z
    void Set(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, VolumeDW, f32, f32>>(0x51C100, this, arg1, arg2);
    }

    // 0x51C1C0 | ?Value@VolumeDW@@QAEKXZ
    u32 Value()
    {
        return stub<member_func_t<u32, VolumeDW>>(0x51C1C0, this);
    }
};
