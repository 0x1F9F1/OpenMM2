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
    mmwidget:compcity

    0x59E7E0 | public: __thiscall mmCompCity::mmCompCity(void) | ??0mmCompCity@@QAE@XZ
    0x59E810 | public: virtual __thiscall mmCompCity::~mmCompCity(void) | ??1mmCompCity@@UAE@XZ
    0x59E8A0 | public: void __thiscall mmCompCity::Init(char *,int,int,int) | ?Init@mmCompCity@@QAEXPADHHH@Z
    0x59E910 | public: void __thiscall mmCompCity::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *) | ?InitTitle@mmCompCity@@QAEXMMMMPAULocString@@000@Z
    0x59E980 | public: virtual void __thiscall mmCompCity::Reset(void) | ?Reset@mmCompCity@@UAEXXZ
    0x59E990 | public: virtual void __thiscall mmCompCity::Update(void) | ?Update@mmCompCity@@UAEXXZ
    0x59E9A0 | public: void __thiscall mmCompCity::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompCity@@QAEXXZ
    0x59EA00 | public: void __thiscall mmCompCity::SetTitleGeometry(void) | ?SetTitleGeometry@mmCompCity@@QAEXXZ
    0x59EA20 | public: virtual void __thiscall mmCompCity::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompCity@@UAEXPAVmmTextNode@@HM@Z
    0x59EA60 | public: virtual void __thiscall mmCompCity::Highlight(class mmTextNode *,int) | ?Highlight@mmCompCity@@UAEXPAVmmTextNode@@H@Z
    0x59EAB0 | public: virtual void __thiscall mmCompCity::Box(int,class mmTextNode *,int) | ?Box@mmCompCity@@UAEXHPAVmmTextNode@@H@Z
    0x59EAE0 | public: virtual void __thiscall mmCompCity::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompCity@@UAEXMMMM@Z
    0x59EB10 | public: virtual void __thiscall mmCompCity::Cull(void) | ?Cull@mmCompCity@@UAEXXZ
    0x59EB20 | public: virtual void * __thiscall mmCompCity::`scalar deleting destructor'(unsigned int) | ??_GmmCompCity@@UAEPAXI@Z
    0x59EB50 | public: virtual __thiscall mmCompBase::~mmCompBase(void) | ??1mmCompBase@@UAE@XZ
    0x59EB60 | public: virtual void __thiscall mmCompBase::DisableBlt(void) | ?DisableBlt@mmCompBase@@UAEXXZ
    0x59EB70 | public: virtual void __thiscall mmCompBase::SetBltXY(float,float) | ?SetBltXY@mmCompBase@@UAEXMM@Z
    0x59EB90 | public: virtual void __thiscall mmCompBase::Action(union eqEvent) | ?Action@mmCompBase@@UAEXTeqEvent@@@Z
    0x59EBA0 | public: virtual void __thiscall mmCompBase::CaptureAction(union eqEvent) | ?CaptureAction@mmCompBase@@UAEXTeqEvent@@@Z
    0x59EBB0 | public: virtual void __thiscall mmCompBase::Switch(int) | ?Switch@mmCompBase@@UAEXH@Z
    0x59EBC0 | public: virtual void __thiscall mmCompBase::Action(union eqEvent,float,float,int) | ?Action@mmCompBase@@UAEXTeqEvent@@MMH@Z
    0x59EBD0 | public: virtual void __thiscall mmCompBase::EvalMouseXY(float,float) | ?EvalMouseXY@mmCompBase@@UAEXMM@Z
    0x59EBE0 | public: virtual void __thiscall mmCompBase::Highlight(class mmTextNode *,int) | ?Highlight@mmCompBase@@UAEXPAVmmTextNode@@H@Z
    0x59EBF0 | public: virtual void __thiscall mmCompBase::Box(int,class mmTextNode *,int) | ?Box@mmCompBase@@UAEXHPAVmmTextNode@@H@Z
    0x59EC00 | public: virtual void __thiscall mmCompBase::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompBase@@UAEXMMMM@Z
    0x59EC20 | public: virtual void * __thiscall mmCompBase::`scalar deleting destructor'(unsigned int) | ??_GmmCompBase@@UAEPAXI@Z
    public: virtual void * __thiscall mmCompBase::`vector deleting destructor'(unsigned int) | ??_EmmCompBase@@UAEPAXI@Z
    0x5B87D4 | const mmCompCity::`vftable' | ??_7mmCompCity@@6B@
    0x5B8834 | const mmCompBase::`vftable' | ??_7mmCompBase@@6B@
*/

#include "hooking.h"
