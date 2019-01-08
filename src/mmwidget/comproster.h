/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
    mmwidget:comproster

    0x59F8C0 | public: __thiscall mmCompRoster::mmCompRoster(void) | ??0mmCompRoster@@QAE@XZ
    0x59F940 | public: virtual __thiscall mmCompRoster::~mmCompRoster(void) | ??1mmCompRoster@@UAE@XZ
    0x59FA00 | public: void __thiscall mmCompRoster::Init(char *,char *,char *,unsigned long,int,int) | ?Init@mmCompRoster@@QAEXPAD00KHH@Z
    0x59FAE0 | public: void __thiscall mmCompRoster::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *,int) | ?InitTitle@mmCompRoster@@QAEXMMMMPAULocString@@000H@Z
    0x59FAF0 | public: void __thiscall mmCompRoster::LoadBitmap(char *) | ?LoadBitmap@mmCompRoster@@QAEXPAD@Z
    0x59FB50 | public: void __thiscall mmCompRoster::LoadTeamBitmap(char *) | ?LoadTeamBitmap@mmCompRoster@@QAEXPAD@Z
    0x59FB90 | public: virtual void __thiscall mmCompRoster::Reset(void) | ?Reset@mmCompRoster@@UAEXXZ
    0x59FBA0 | public: virtual void __thiscall mmCompRoster::Update(void) | ?Update@mmCompRoster@@UAEXXZ
    0x59FBE0 | public: void __thiscall mmCompRoster::SetError(void) | ?SetError@mmCompRoster@@QAEXXZ
    0x59FC10 | public: void __thiscall mmCompRoster::SetReady(int) | ?SetReady@mmCompRoster@@QAEXH@Z
    0x59FC50 | public: void __thiscall mmCompRoster::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompRoster@@QAEXXZ
    0x59FCB0 | public: virtual void __thiscall mmCompRoster::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompRoster@@UAEXPAVmmTextNode@@HM@Z
    0x59FD30 | public: virtual void __thiscall mmCompRoster::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompRoster@@UAEXMMMM@Z
    0x59FD60 | public: virtual void __thiscall mmCompRoster::SetBltXY(float,float) | ?SetBltXY@mmCompRoster@@UAEXMM@Z
    0x59FD90 | public: virtual void __thiscall mmCompRoster::Cull(void) | ?Cull@mmCompRoster@@UAEXXZ
    0x59FE20 | public: void __thiscall mmCompRoster::SetName(char *) | ?SetName@mmCompRoster@@QAEXPAD@Z
    0x59FE60 | public: void __thiscall mmCompRoster::SetColor(char *) | ?SetColor@mmCompRoster@@QAEXPAD@Z
    0x59FE70 | public: void __thiscall mmCompRoster::SetCar(char *) | ?SetCar@mmCompRoster@@QAEXPAD@Z
    0x59FEB0 | public: void __thiscall mmCompRoster::SetTeam(int) | ?SetTeam@mmCompRoster@@QAEXH@Z
    0x59FEF0 | public: virtual void * __thiscall mmCompRoster::`scalar deleting destructor'(unsigned int) | ??_GmmCompRoster@@UAEPAXI@Z
    public: virtual void * __thiscall mmCompRoster::`vector deleting destructor'(unsigned int) | ??_EmmCompRoster@@UAEPAXI@Z
    0x5B89BC | const mmCompRoster::`vftable' | ??_7mmCompRoster@@6B@
*/

#include "hooking.h"
