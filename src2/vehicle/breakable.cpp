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

#include "breakable.h"

vehBreakable::vehBreakable(class modStatic** arg1, class Matrix34& arg2, i32 arg3, i32 arg4, i32 arg5)
{
    unimplemented();
}

void vehBreakable::Add(class vehBreakable* arg1)
{
    return stub<thiscall_t<void, vehBreakable*, class vehBreakable*>>(0x4D8BE0, this, arg1);
}

vehBreakableMgr::vehBreakableMgr()
{
    unimplemented();
}

vehBreakableMgr::~vehBreakableMgr()
{
    unimplemented();
}

void vehBreakableMgr::Add(char const* arg1, char const* arg2, class modStatic** arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, vehBreakableMgr*, char const*, char const*, class modStatic**, i32, i32>>(
        0x4D86A0, this, arg1, arg2, arg3, arg4, arg5);
}

class vehBreakable* vehBreakableMgr::Create(
    char const* arg1, char const* arg2, class modStatic** arg3, i32 arg4, i32 arg5)
{
    return stub<
        thiscall_t<class vehBreakable*, vehBreakableMgr*, char const*, char const*, class modStatic**, i32, i32>>(
        0x4D8600, this, arg1, arg2, arg3, arg4, arg5);
}

void vehBreakableMgr::Draw(class Matrix34 const& arg1, class modShader* arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehBreakableMgr*, class Matrix34 const&, class modShader*, i32>>(
        0x4D8780, this, arg1, arg2, arg3);
}

void vehBreakableMgr::DrawCityLit(class Matrix34 const& arg1, class modShader* arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehBreakableMgr*, class Matrix34 const&, class modShader*, i32>>(
        0x4D8890, this, arg1, arg2, arg3);
}

void vehBreakableMgr::Eject(class vehBreakable* arg1, i32 arg2)
{
    return stub<thiscall_t<void, vehBreakableMgr*, class vehBreakable*, i32>>(0x4D8940, this, arg1, arg2);
}

void vehBreakableMgr::EjectAll(i32 arg1)
{
    return stub<thiscall_t<void, vehBreakableMgr*, i32>>(0x4D8BB0, this, arg1);
}

class vehBreakable* vehBreakableMgr::Get(i32 arg1)
{
    return stub<thiscall_t<class vehBreakable*, vehBreakableMgr*, i32>>(0x4D86F0, this, arg1);
}

void vehBreakableMgr::Impact(f32 arg1, class Vector3 const& arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehBreakableMgr*, f32, class Vector3 const&, i32>>(0x4D88A0, this, arg1, arg2, arg3);
}

bool vehBreakableMgr::Init(class Matrix34* arg1)
{
    return stub<thiscall_t<bool, vehBreakableMgr*, class Matrix34*>>(0x4D85E0, this, arg1);
}

void vehBreakableMgr::Reset()
{
    return stub<thiscall_t<void, vehBreakableMgr*>>(0x4D8710, this);
}

void vehBreakableMgr::Update()
{
    return stub<thiscall_t<void, vehBreakableMgr*>>(0x4D8770, this);
}

define_dummy_symbol(vehicle_breakable);
