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

#include "contactmgr.h"

phContactMgr::phContactMgr()
{
    unimplemented();
}

phContactMgr::~phContactMgr()
{
    unimplemented();
}

i32 phContactMgr::AllocNewContact(i32 arg1)
{
    return stub<thiscall_t<i32, phContactMgr*, i32>>(0x470460, this, arg1);
}

void phContactMgr::ApplyImpact(class phImpact* arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, phContactMgr*, class phImpact*, class Vector3 const&>>(0x4738D0, this, arg1, arg2);
}

void phContactMgr::Calc2Impacts(class phImpact* arg1)
{
    return stub<thiscall_t<void, phContactMgr*, class phImpact*>>(0x471AB0, this, arg1);
}

void phContactMgr::Calc2ImpactsFixed(class phImpact* arg1, bool arg2)
{
    return stub<thiscall_t<void, phContactMgr*, class phImpact*, bool>>(0x472790, this, arg1, arg2);
}

void phContactMgr::Calc3Impacts(i32 arg1, class phImpact* arg2)
{
    return stub<thiscall_t<void, phContactMgr*, i32, class phImpact*>>(0x472E20, this, arg1, arg2);
}

void phContactMgr::Calc3ImpactsFixed(i32 arg1, class phImpact* arg2, bool arg3)
{
    return stub<thiscall_t<void, phContactMgr*, i32, class phImpact*, bool>>(0x4737B0, this, arg1, arg2, arg3);
}

bool phContactMgr::CalcContact(class phImpact& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, class Vector3* arg6, class Matrix34* arg7)
{
    return stub<thiscall_t<bool, phContactMgr*, class phImpact&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3 const&, class Vector3*, class Matrix34*>>(
        0x470AE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 phContactMgr::CalcContactHash(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<i32, phContactMgr*, i32, i32, i32, i32, i32>>(0x473F20, this, arg1, arg2, arg3, arg4, arg5);
}

void phContactMgr::CalcHeldContact(i32 arg1, i32& arg2, class Vector3 const& arg3, class Vector3 const& arg4,
    class Vector3 const& arg5, class Vector3* arg6, class Matrix34* arg7)
{
    return stub<thiscall_t<void, phContactMgr*, i32, i32&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3*, class Matrix34*>>(
        0x471240, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void phContactMgr::CalcHeldContacts(class phColliderBase* arg1, class phColliderBase* arg2, i32 arg3)
{
    return stub<thiscall_t<void, phContactMgr*, class phColliderBase*, class phColliderBase*, i32>>(
        0x4706A0, this, arg1, arg2, arg3);
}

void phContactMgr::CalcImpact(class phImpact* arg1, f32 arg2)
{
    return stub<thiscall_t<void, phContactMgr*, class phImpact*, f32>>(0x4714E0, this, arg1, arg2);
}

void phContactMgr::CalcNextOverSamples()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x470860, this);
}

void phContactMgr::CullImpactList(i32* arg1, class phImpact* arg2)
{
    return stub<thiscall_t<void, phContactMgr*, i32*, class phImpact*>>(0x471620, this, arg1, arg2);
}

bool phContactMgr::FindNextContact(i32 arg1, i32* arg2, i32* arg3)
{
    return stub<thiscall_t<bool, phContactMgr*, i32, i32*, i32*>>(0x471470, this, arg1, arg2, arg3);
}

f32 phContactMgr::GetCMInvSeconds()
{
    return stub<thiscall_t<f32, phContactMgr*>>(0x473ED0, this);
}

f32 phContactMgr::GetCMSeconds()
{
    return stub<thiscall_t<f32, phContactMgr*>>(0x473EA0, this);
}

void phContactMgr::RemoveContact(i32 arg1)
{
    return stub<thiscall_t<void, phContactMgr*, i32>>(0x470500, this, arg1);
}

void phContactMgr::Reset()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x470240, this);
}

void phContactMgr::Resize()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x4702B0, this);
}

void phContactMgr::ResolveThreePlusImpacts(i32 arg1, class phImpact* arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, bool arg6)
{
    return stub<thiscall_t<void, phContactMgr*, i32, class phImpact*, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, bool>>(0x473310, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool phContactMgr::SearchContact(i32 arg1, i32* arg2)
{
    return stub<thiscall_t<bool, phContactMgr*, i32, i32*>>(0x471420, this, arg1, arg2);
}

i32 phContactMgr::SeekContact(i32 arg1, class phImpact const& arg2)
{
    return stub<thiscall_t<i32, phContactMgr*, i32, class phImpact const&>>(0x470630, this, arg1, arg2);
}

i32 phContactMgr::SeekHeldContact(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phContactMgr*, i32, i32, i32>>(0x470F20, this, arg1, arg2, arg3);
}

void phContactMgr::SetCMOversampleTime(f32 arg1)
{
    return stub<thiscall_t<void, phContactMgr*, f32>>(0x473F00, this, arg1);
}

bool phContactMgr::TestHeldContact(class phColliderBase const* arg1, class phColliderBase const* arg2, i32* arg3)
{
    return stub<thiscall_t<bool, phContactMgr*, class phColliderBase const*, class phColliderBase const*, i32*>>(
        0x470D20, this, arg1, arg2, arg3);
}

void phContactMgr::Update()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x4709F0, this);
}

bool phContactMgr::AddHCEntry(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<bool, phContactMgr*, i32, i32>>(0x4711A0, this, arg1, arg2);
}

i32 phContactMgr::AddHeldContact(class phColliderBase const* arg1, class phColliderBase const* arg2)
{
    return stub<thiscall_t<i32, phContactMgr*, class phColliderBase const*, class phColliderBase const*>>(
        0x4710B0, this, arg1, arg2);
}

void phContactMgr::ClearContactList()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x470270, this);
}

void phContactMgr::ClearHeldContactTable()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x470F70, this);
}

bool phContactMgr::GetNextHeldContact(i32 arg1, i32* arg2, i32* arg3, bool* arg4)
{
    return stub<thiscall_t<bool, phContactMgr*, i32, i32*, i32*, bool*>>(0x4713D0, this, arg1, arg2, arg3, arg4);
}

bool phContactMgr::HCContactGone(class phHeldContact* arg1)
{
    return stub<thiscall_t<bool, phContactMgr*, class phHeldContact*>>(0x471210, this, arg1);
}

void phContactMgr::HeldContactResize()
{
    return stub<thiscall_t<void, phContactMgr*>>(0x4712D0, this);
}

void phContactMgr::RemoveHeldContact(i32 arg1)
{
    return stub<thiscall_t<void, phContactMgr*, i32>>(0x470FA0, this, arg1);
}

f32 phContactMgr::EstMaxMoved(
    class Matrix34 const& arg1, class phColliderBase const* arg2, class phColliderBase const* arg3)
{
    return stub<cdecl_t<f32, class Matrix34 const&, class phColliderBase const*, class phColliderBase const*>>(
        0x470E50, arg1, arg2, arg3);
}

define_dummy_symbol(phcollide_contactmgr);
