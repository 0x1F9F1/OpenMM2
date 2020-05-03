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

#include "dash.h"

mmExternalView::mmExternalView()
{
    unimplemented();
}

mmExternalView::~mmExternalView()
{
    unimplemented();
}

void mmExternalView::Cull()
{
    return stub<thiscall_t<void, mmExternalView*>>(0x4319F0, this);
}

void mmExternalView::Init(class mmPlayer* arg1)
{
    return stub<thiscall_t<void, mmExternalView*, class mmPlayer*>>(0x431840, this, arg1);
}

void mmExternalView::ResChange(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmExternalView*, i32, i32>>(0x431880, this, arg1, arg2);
}

void mmExternalView::Reset()
{
    return stub<thiscall_t<void, mmExternalView*>>(0x4319D0, this);
}

void mmExternalView::Update()
{
    return stub<thiscall_t<void, mmExternalView*>>(0x4319E0, this);
}

char* mmExternalView::GetClassNameA()
{
    return stub<thiscall_t<char*, mmExternalView*>>(0x431C20, this);
}

mmDashView::mmDashView()
{
    unimplemented();
}

mmDashView::~mmDashView()
{
    unimplemented();
}

void mmDashView::Activate()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430E80, this);
}

void mmDashView::ActivateUntilTransitionIsOver()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430E60, this);
}

void mmDashView::AfterLoad()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430E00, this);
}

void mmDashView::BeforeSave()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430DA0, this);
}

void mmDashView::Cull()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430FB0, this);
}

void mmDashView::Deactivate()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430EA0, this);
}

void mmDashView::Init(char* arg1, class mmPlayer* arg2)
{
    return stub<thiscall_t<void, mmDashView*, char*, class mmPlayer*>>(0x430890, this, arg1, arg2);
}

void mmDashView::Reset()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430D90, this);
}

void mmDashView::TempDeactivate()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430EC0, this);
}

void mmDashView::Update()
{
    return stub<thiscall_t<void, mmDashView*>>(0x430ED0, this);
}

char* mmDashView::GetClassNameA()
{
    return stub<thiscall_t<char*, mmDashView*>>(0x431C30, this);
}

void mmDashView::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, mmDashView*, class datParser&>>(0x4315D0, this, arg1);
}

void mmDashView::LoadPivotInfo(char* arg1)
{
    return stub<thiscall_t<void, mmDashView*, char*>>(0x430C30, this, arg1);
}

void mmDashView::LoadPkg(char* arg1)
{
    return stub<thiscall_t<void, mmDashView*, char*>>(0x430A90, this, arg1);
}

define_dummy_symbol(mmgame_dash);
