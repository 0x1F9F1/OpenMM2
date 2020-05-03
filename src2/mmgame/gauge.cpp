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

#include "gauge.h"

RadialGauge::RadialGauge()
{
    unimplemented();
}

RadialGauge::~RadialGauge()
{
    unimplemented();
}

void RadialGauge::Cull()
{
    return stub<thiscall_t<void, RadialGauge*>>(0x43E940, this);
}

void RadialGauge::Cull(class Matrix34 const* arg1)
{
    return stub<thiscall_t<void, RadialGauge*, class Matrix34 const*>>(0x43E9F0, this, arg1);
}

void RadialGauge::Init(
    class modStatic* arg1, class modShader** arg2, class Vector3 arg3, f32 const* arg4, f32 const* arg5, f32 arg6)
{
    return stub<thiscall_t<void, RadialGauge*, class modStatic*, class modShader**, class Vector3, f32 const*,
        f32 const*, f32>>(0x43E7A0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void RadialGauge::Update()
{
    return stub<thiscall_t<void, RadialGauge*>>(0x43E820, this);
}

f32 RadialGauge::GetArrowAngle()
{
    return stub<thiscall_t<f32, RadialGauge*>>(0x43ED50, this);
}

mmSlidingGauge::~mmSlidingGauge()
{
    unimplemented();
}

void mmSlidingGauge::Draw()
{
    return stub<thiscall_t<void, mmSlidingGauge*>>(0x43EFE0, this);
}

void mmSlidingGauge::Init(char* arg1, f32* arg2, f32* arg3, i32 arg4, class mmExternalView* arg5, i32 arg6)
{
    return stub<thiscall_t<void, mmSlidingGauge*, char*, f32*, f32*, i32, class mmExternalView*, i32>>(
        0x43EFB0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

mmLinearGauge::mmLinearGauge()
{
    unimplemented();
}

mmLinearGauge::~mmLinearGauge()
{
    unimplemented();
}

void mmLinearGauge::Draw()
{
    return stub<thiscall_t<void, mmLinearGauge*>>(0x43EEF0, this);
}

void mmLinearGauge::Init(char* arg1, f32* arg2, f32* arg3, i32 arg4, class mmExternalView* arg5)
{
    return stub<thiscall_t<void, mmLinearGauge*, char*, f32*, f32*, i32, class mmExternalView*>>(
        0x43EE70, this, arg1, arg2, arg3, arg4, arg5);
}

void mmLinearGauge::InitOverlay(char* arg1)
{
    return stub<thiscall_t<void, mmLinearGauge*, char*>>(0x43EED0, this, arg1);
}

mmGearIndicator::mmGearIndicator()
{
    unimplemented();
}

void mmGearIndicator::Draw()
{
    return stub<thiscall_t<void, mmGearIndicator*>>(0x43F1F0, this);
}

void mmGearIndicator::Init(class mmExternalView* arg1, class mmPlayer* arg2)
{
    return stub<thiscall_t<void, mmGearIndicator*, class mmExternalView*, class mmPlayer*>>(0x43F0C0, this, arg1, arg2);
}

mmSpeedIndicator::mmSpeedIndicator()
{
    unimplemented();
}

void mmSpeedIndicator::Draw()
{
    return stub<thiscall_t<void, mmSpeedIndicator*>>(0x43F330, this);
}

void mmSpeedIndicator::Init(class mmExternalView* arg1, class vehCarSim* arg2)
{
    return stub<thiscall_t<void, mmSpeedIndicator*, class mmExternalView*, class vehCarSim*>>(
        0x43F280, this, arg1, arg2);
}

define_dummy_symbol(mmgame_gauge);
