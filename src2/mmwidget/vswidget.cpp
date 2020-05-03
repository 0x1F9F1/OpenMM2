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

#include "vswidget.h"

VSWidget::VSWidget()
{
    unimplemented();
}

VSWidget::~VSWidget()
{
    unimplemented();
}

i32 VSWidget::Action(union eqEvent arg1, f32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, VSWidget*, union eqEvent, f32, f32, i32>>(0x4F2DE0, this, arg1, arg2, arg3, arg4);
}

void VSWidget::CalcTroughRatio(f32 arg1)
{
    return stub<thiscall_t<void, VSWidget*, f32>>(0x4F2A90, this, arg1);
}

void VSWidget::Cull()
{
    return stub<thiscall_t<void, VSWidget*>>(0x4F3020, this);
}

f32 VSWidget::Dec()
{
    return stub<thiscall_t<f32, VSWidget*>>(0x4F2C00, this);
}

void VSWidget::EvalMouseXY(f32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, VSWidget*, f32, f32, i32>>(0x4F2EA0, this, arg1, arg2, arg3);
}

f32 VSWidget::Inc()
{
    return stub<thiscall_t<f32, VSWidget*>>(0x4F2BB0, this);
}

void VSWidget::Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32* arg5, class datCallback arg6, i32 arg7)
{
    return stub<thiscall_t<void, VSWidget*, f32, f32, f32, f32, i32*, class datCallback, i32>>(
        0x4F28F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void VSWidget::LoadBitmap()
{
    return stub<thiscall_t<void, VSWidget*>>(0x4F2950, this);
}

void VSWidget::SetHotSpots()
{
    return stub<thiscall_t<void, VSWidget*>>(0x4F2B00, this);
}

void VSWidget::SetStep(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, VSWidget*, i32, f32>>(0x4F2C60, this, arg1, arg2);
}

void VSWidget::SetTrough(f32 arg1)
{
    return stub<thiscall_t<void, VSWidget*, f32>>(0x4F2CD0, this, arg1);
}

void VSWidget::Switch(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, VSWidget*, i32, f32, f32>>(0x4F2D90, this, arg1, arg2, arg3);
}

void VSWidget::SyncData()
{
    return stub<thiscall_t<void, VSWidget*>>(0x4F2B70, this);
}

void VSWidget::Update()
{
    return stub<thiscall_t<void, VSWidget*>>(0x4F2D60, this);
}

define_dummy_symbol(mmwidget_vswidget);
