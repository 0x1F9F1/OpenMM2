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
    mmgame:gauge

    0x43E710 | public: __thiscall RadialGauge::RadialGauge(void) | ??0RadialGauge@@QAE@XZ
    0x43E7A0 | public: void __thiscall RadialGauge::Init(class modStatic *,class modShader * *,class Vector3,float const *,float const *,float) | ?Init@RadialGauge@@QAEXPAVmodStatic@@PAPAVmodShader@@VVector3@@PBM3M@Z
    public: void __thiscall RadialGauge::AddWidgets(class bkBank *) | ?AddWidgets@RadialGauge@@QAEXPAVbkBank@@@Z
    0x43E820 | public: virtual void __thiscall RadialGauge::Update(void) | ?Update@RadialGauge@@UAEXXZ
    0x43E940 | public: virtual void __thiscall RadialGauge::Cull(void) | ?Cull@RadialGauge@@UAEXXZ
    0x43E9F0 | public: void __thiscall RadialGauge::Cull(class Matrix34 const *) | ?Cull@RadialGauge@@QAEXPBVMatrix34@@@Z
    0x43ED50 | private: float __thiscall RadialGauge::GetArrowAngle(void) | ?GetArrowAngle@RadialGauge@@AAEMXZ
    0x43EE40 | public: __thiscall mmLinearGauge::mmLinearGauge(void) | ??0mmLinearGauge@@QAE@XZ
    0x43EE60 | public: __thiscall mmLinearGauge::~mmLinearGauge(void) | ??1mmLinearGauge@@QAE@XZ
    0x43EE70 | public: void __thiscall mmLinearGauge::Init(char *,float *,float *,int,class mmExternalView *) | ?Init@mmLinearGauge@@QAEXPADPAM1HPAVmmExternalView@@@Z
    0x43EED0 | public: void __thiscall mmLinearGauge::InitOverlay(char *) | ?InitOverlay@mmLinearGauge@@QAEXPAD@Z
    0x43EEF0 | public: void __thiscall mmLinearGauge::Draw(void) | ?Draw@mmLinearGauge@@QAEXXZ
    0x43EFB0 | public: void __thiscall mmSlidingGauge::Init(char *,float *,float *,int,class mmExternalView *,int) | ?Init@mmSlidingGauge@@QAEXPADPAM1HPAVmmExternalView@@H@Z
    0x43EFE0 | public: void __thiscall mmSlidingGauge::Draw(void) | ?Draw@mmSlidingGauge@@QAEXXZ
    0x43F0A0 | public: __thiscall mmGearIndicator::mmGearIndicator(void) | ??0mmGearIndicator@@QAE@XZ
    0x43F0C0 | public: void __thiscall mmGearIndicator::Init(class mmExternalView *,class mmPlayer *) | ?Init@mmGearIndicator@@QAEXPAVmmExternalView@@PAVmmPlayer@@@Z
    0x43F1F0 | public: void __thiscall mmGearIndicator::Draw(void) | ?Draw@mmGearIndicator@@QAEXXZ
    0x43F260 | public: __thiscall mmSpeedIndicator::mmSpeedIndicator(void) | ??0mmSpeedIndicator@@QAE@XZ
    0x43F280 | public: void __thiscall mmSpeedIndicator::Init(class mmExternalView *,class vehCarSim *) | ?Init@mmSpeedIndicator@@QAEXPAVmmExternalView@@PAVvehCarSim@@@Z
    0x43F330 | public: void __thiscall mmSpeedIndicator::Draw(void) | ?Draw@mmSpeedIndicator@@QAEXXZ
    0x43F450 | public: virtual void * __thiscall RadialGauge::`scalar deleting destructor'(unsigned int) | ??_GRadialGauge@@UAEPAXI@Z
    public: virtual void * __thiscall RadialGauge::`vector deleting destructor'(unsigned int) | ??_ERadialGauge@@UAEPAXI@Z
    0x43DD30 | public: __thiscall Vector3::Vector3(float,float,float) | ??0Vector3@@QAE@MMM@Z
    0x480AA0 | public: void __thiscall Vector3::Set(class Vector3 const &) | ?Set@Vector3@@QAEXABV1@@Z
    public: void __thiscall gfxRenderState::SetLighting(bool) | ?SetLighting@gfxRenderState@@QAEX_N@Z
    0x43F480 | private: void __thiscall gfxRenderState::CheckSet(unsigned char &,unsigned char) | ?CheckSet@gfxRenderState@@AAEXAAEE@Z
    0x5B11B4 | const RadialGauge::`vftable' | ??_7RadialGauge@@6B@
    0x62762C | private: static bool RadialGauge::bDebugPivot | ?bDebugPivot@RadialGauge@@0_NA
*/

struct RadialGauge : asNode
{
public:
    // RadialGauge::`vftable' @ 0x5B11B4

    // 0x43E710 | ??0RadialGauge@@QAE@XZ
    RadialGauge()
    {
        stub<member_func_t<void, RadialGauge>>(0x43E710, this);
    }

    // 0x43E7A0 | ?Init@RadialGauge@@QAEXPAVmodStatic@@PAPAVmodShader@@VVector3@@PBM3M@Z
    void Init(
        class modStatic* arg1, class modShader** arg2, class Vector3 arg3, f32 const* arg4, f32 const* arg5, f32 arg6)
    {
        return stub<member_func_t<void, RadialGauge, class modStatic*, class modShader**, class Vector3, f32 const*,
            f32 const*, f32>>(0x43E7A0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x43E9F0 | ?Cull@RadialGauge@@QAEXPBVMatrix34@@@Z
    void Cull(class Matrix34 const* arg1)
    {
        return stub<member_func_t<void, RadialGauge, class Matrix34 const*>>(0x43E9F0, this, arg1);
    }

    // 0x43ED50 | ?GetArrowAngle@RadialGauge@@AAEMXZ
    f32 GetArrowAngle()
    {
        return stub<member_func_t<f32, RadialGauge>>(0x43ED50, this);
    }

    // 0x62762C | ?bDebugPivot@RadialGauge@@0_NA
    static inline extern_var(0x62762C, bool, bDebugPivot);

    // 0x431B90 | ??1RadialGauge@@UAE@XZ
    ~RadialGauge() override
    {
        stub<member_func_t<void, RadialGauge>>(0x431B90, this);
    }

    // 0x43E940 | ?Cull@RadialGauge@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, RadialGauge>>(0x43E940, this);
    }

    // 0x43E820 | ?Update@RadialGauge@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, RadialGauge>>(0x43E820, this);
    }
};

struct mmSlidingGauge
{
public:
    // 0x431C10 | ??1mmSlidingGauge@@QAE@XZ
    ~mmSlidingGauge()
    {
        stub<member_func_t<void, mmSlidingGauge>>(0x431C10, this);
    }

    // 0x43EFB0 | ?Init@mmSlidingGauge@@QAEXPADPAM1HPAVmmExternalView@@H@Z
    void Init(char* arg1, f32* arg2, f32* arg3, i32 arg4, class mmExternalView* arg5, i32 arg6)
    {
        return stub<member_func_t<void, mmSlidingGauge, char*, f32*, f32*, i32, class mmExternalView*, i32>>(
            0x43EFB0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x43EFE0 | ?Draw@mmSlidingGauge@@QAEXXZ
    void Draw()
    {
        return stub<member_func_t<void, mmSlidingGauge>>(0x43EFE0, this);
    }
};

struct mmLinearGauge
{
public:
    // 0x43EE40 | ??0mmLinearGauge@@QAE@XZ
    mmLinearGauge()
    {
        stub<member_func_t<void, mmLinearGauge>>(0x43EE40, this);
    }

    // 0x43EE60 | ??1mmLinearGauge@@QAE@XZ
    ~mmLinearGauge()
    {
        stub<member_func_t<void, mmLinearGauge>>(0x43EE60, this);
    }

    // 0x43EE70 | ?Init@mmLinearGauge@@QAEXPADPAM1HPAVmmExternalView@@@Z
    void Init(char* arg1, f32* arg2, f32* arg3, i32 arg4, class mmExternalView* arg5)
    {
        return stub<member_func_t<void, mmLinearGauge, char*, f32*, f32*, i32, class mmExternalView*>>(
            0x43EE70, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x43EED0 | ?InitOverlay@mmLinearGauge@@QAEXPAD@Z
    void InitOverlay(char* arg1)
    {
        return stub<member_func_t<void, mmLinearGauge, char*>>(0x43EED0, this, arg1);
    }

    // 0x43EEF0 | ?Draw@mmLinearGauge@@QAEXXZ
    void Draw()
    {
        return stub<member_func_t<void, mmLinearGauge>>(0x43EEF0, this);
    }
};

struct mmGearIndicator
{
public:
    // 0x43F0A0 | ??0mmGearIndicator@@QAE@XZ
    mmGearIndicator()
    {
        stub<member_func_t<void, mmGearIndicator>>(0x43F0A0, this);
    }

    // 0x43F0C0 | ?Init@mmGearIndicator@@QAEXPAVmmExternalView@@PAVmmPlayer@@@Z
    void Init(class mmExternalView* arg1, class mmPlayer* arg2)
    {
        return stub<member_func_t<void, mmGearIndicator, class mmExternalView*, class mmPlayer*>>(
            0x43F0C0, this, arg1, arg2);
    }

    // 0x43F1F0 | ?Draw@mmGearIndicator@@QAEXXZ
    void Draw()
    {
        return stub<member_func_t<void, mmGearIndicator>>(0x43F1F0, this);
    }
};

struct mmSpeedIndicator
{
public:
    // 0x43F260 | ??0mmSpeedIndicator@@QAE@XZ
    mmSpeedIndicator()
    {
        stub<member_func_t<void, mmSpeedIndicator>>(0x43F260, this);
    }

    // 0x43F280 | ?Init@mmSpeedIndicator@@QAEXPAVmmExternalView@@PAVvehCarSim@@@Z
    void Init(class mmExternalView* arg1, class vehCarSim* arg2)
    {
        return stub<member_func_t<void, mmSpeedIndicator, class mmExternalView*, class vehCarSim*>>(
            0x43F280, this, arg1, arg2);
    }

    // 0x43F330 | ?Draw@mmSpeedIndicator@@QAEXXZ
    void Draw()
    {
        return stub<member_func_t<void, mmSpeedIndicator>>(0x43F330, this);
    }
};
