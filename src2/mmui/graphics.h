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
    mmui:graphics

    0x4F3F50 | void __cdecl AutoDetect(int) | ?AutoDetect@@YAXH@Z
    0x4F4280 | public: __thiscall GraphicsOptions::GraphicsOptions(int) | ??0GraphicsOptions@@QAE@H@Z
    0x4F50D0 | public: virtual __thiscall GraphicsOptions::~GraphicsOptions(void) | ??1GraphicsOptions@@UAE@XZ
    0x4F5140 | public: void __thiscall GraphicsOptions::SetResolution(void) | ?SetResolution@GraphicsOptions@@QAEXXZ
    0x4F5150 | public: void __thiscall GraphicsOptions::TogglePeds(void) | ?TogglePeds@GraphicsOptions@@QAEXXZ
    0x4F5170 | public: void __thiscall GraphicsOptions::SetLightQuality(void) | ?SetLightQuality@GraphicsOptions@@QAEXXZ
    0x4F5220 | public: void __thiscall GraphicsOptions::SetRenderer(void) | ?SetRenderer@GraphicsOptions@@QAEXXZ
    0x4F5230 | public: virtual void __thiscall GraphicsOptions::PreSetup(void) | ?PreSetup@GraphicsOptions@@UAEXXZ
    0x4F52E0 | public: virtual void __thiscall GraphicsOptions::ResetDefaultAction(void) | ?ResetDefaultAction@GraphicsOptions@@UAEXXZ
    0x4F53A0 | public: virtual void __thiscall GraphicsOptions::CancelAction(void) | ?CancelAction@GraphicsOptions@@UAEXXZ
    0x4F53B0 | public: virtual void __thiscall GraphicsOptions::DoneAction(void) | ?DoneAction@GraphicsOptions@@UAEXXZ
    0x4F53F0 | public: void __thiscall GraphicsOptions::FocusDescription(void *,void *) | ?FocusDescription@GraphicsOptions@@QAEXPAX0@Z
    public: virtual void * __thiscall GraphicsOptions::`vector deleting destructor'(unsigned int) | ??_EGraphicsOptions@@UAEPAXI@Z
    0x4F5420 | public: virtual void * __thiscall GraphicsOptions::`scalar deleting destructor'(unsigned int) | ??_GGraphicsOptions@@UAEPAXI@Z
    0x4F5450 | public: virtual void __thiscall OptionsBase::StoreCurrentSetup(void) | ?StoreCurrentSetup@OptionsBase@@UAEXXZ
    0x4F5460 | public: virtual int __thiscall OptionsBase::IsAnOptionMenu(void) | ?IsAnOptionMenu@OptionsBase@@UAEHXZ
    0x5B3CD4 | const GraphicsOptions::`vftable' | ??_7GraphicsOptions@@6B@
    int data1 | ?data1@@3HA
    int data2 | ?data2@@3HA
    int data3 | ?data3@@3HA
    int data4 | ?data4@@3HA
    int data5 | ?data5@@3HA
    int data6 | ?data6@@3HA
    0x6B0454 | unsigned int mmCpuSpeed | ?mmCpuSpeed@@3IA
    bool NeedFullShutdown | ?NeedFullShutdown@@3_NA
    int RenderToSystemMemory | ?RenderToSystemMemory@@3HA
    int TextureLevel | ?TextureLevel@@3HA
*/

// 0x4F3F50 | ?AutoDetect@@YAXH@Z
inline void AutoDetect(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x4F3F50, arg1);
}

// 0x6B0454 | ?mmCpuSpeed@@3IA
inline extern_var(0x6B0454, uint32_t, mmCpuSpeed);

struct GraphicsOptions : OptionsBase
{
public:
    // GraphicsOptions::`vftable' @ 0x5B3CD4

    // 0x4F4280 | ??0GraphicsOptions@@QAE@H@Z
    inline GraphicsOptions(i32 arg1)
    {
        stub<member_func_t<void, GraphicsOptions, i32>>(0x4F4280, this, arg1);
    }

    // 0x4F5140 | ?SetResolution@GraphicsOptions@@QAEXXZ
    inline void SetResolution()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F5140, this);
    }

    // 0x4F5150 | ?TogglePeds@GraphicsOptions@@QAEXXZ
    inline void TogglePeds()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F5150, this);
    }

    // 0x4F5170 | ?SetLightQuality@GraphicsOptions@@QAEXXZ
    inline void SetLightQuality()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F5170, this);
    }

    // 0x4F5220 | ?SetRenderer@GraphicsOptions@@QAEXXZ
    inline void SetRenderer()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F5220, this);
    }

    // 0x4F53F0 | ?FocusDescription@GraphicsOptions@@QAEXPAX0@Z
    inline void FocusDescription(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, GraphicsOptions, void*, void*>>(0x4F53F0, this, arg1, arg2);
    }

    // 0x4F50D0 | ??1GraphicsOptions@@UAE@XZ
    inline ~GraphicsOptions() override
    {
        stub<member_func_t<void, GraphicsOptions>>(0x4F50D0, this);
    }

    // 0x4F5230 | ?PreSetup@GraphicsOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F5230, this);
    }

    // 0x4F53A0 | ?CancelAction@GraphicsOptions@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F53A0, this);
    }

    // 0x4F53B0 | ?DoneAction@GraphicsOptions@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F53B0, this);
    }

    // 0x4F52E0 | ?ResetDefaultAction@GraphicsOptions@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x4F52E0, this);
    }
};
