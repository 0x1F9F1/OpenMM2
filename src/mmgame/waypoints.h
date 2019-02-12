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
    mmgame:waypoints

    0x434260 | public: __thiscall mmWaypoints::mmWaypoints(void) | ??0mmWaypoints@@QAE@XZ
    0x434370 | public: virtual __thiscall mmWaypoints::~mmWaypoints(void) | ??1mmWaypoints@@UAE@XZ
    0x434430 | public: int __thiscall mmWaypoints::Init(class mmPlayer *,char *,int,int,int,int,unsigned int) | ?Init@mmWaypoints@@QAEHPAVmmPlayer@@PADHHHHI@Z
    0x434540 | public: void __thiscall mmWaypoints::InitStatic(class mmPlayer *,int,unsigned int) | ?InitStatic@mmWaypoints@@QAEXPAVmmPlayer@@HI@Z
    0x434700 | public: void __thiscall mmWaypoints::ReInit(int,char *,unsigned int) | ?ReInit@mmWaypoints@@QAEXHPADI@Z
    0x434960 | public: float __thiscall mmWaypoints::GetStartAngle(void) | ?GetStartAngle@mmWaypoints@@QAEMXZ
    0x434980 | public: int __thiscall mmWaypoints::SaveCSV(char *) | ?SaveCSV@mmWaypoints@@QAEHPAD@Z
    0x434A70 | public: int __thiscall mmWaypoints::LoadCSV(char *,int) | ?LoadCSV@mmWaypoints@@QAEHPADH@Z
    0x435240 | public: virtual void __thiscall mmWaypoints::Cull(void) | ?Cull@mmWaypoints@@UAEXXZ
    0x435280 | public: virtual void __thiscall mmWaypoints::Update(void) | ?Update@mmWaypoints@@UAEXXZ
    0x4357D0 | public: void __thiscall mmWaypoints::DeactivateFinish(void) | ?DeactivateFinish@mmWaypoints@@QAEXXZ
    0x4357E0 | public: virtual void __thiscall mmWaypoints::Reset(void) | ?Reset@mmWaypoints@@UAEXXZ
    0x4358F0 | public: void __thiscall mmWaypoints::GetStart(class Vector3 &) | ?GetStart@mmWaypoints@@QAEXAAVVector3@@@Z
    0x435930 | public: void __thiscall mmWaypoints::GetWaypoint(int,class Vector3 &) | ?GetWaypoint@mmWaypoints@@QAEXHAAVVector3@@@Z
    0x435970 | public: float __thiscall mmWaypoints::GetHeading(int) | ?GetHeading@mmWaypoints@@QAEMH@Z
    0x4359A0 | protected: void __thiscall mmWaypoints::GenerateHitRooms(void) | ?GenerateHitRooms@mmWaypoints@@IAEXXZ
    0x435A00 | public: int __thiscall mmWaypoints::GetHitRoom(int) | ?GetHitRoom@mmWaypoints@@QAEHH@Z
    0x435A20 | public: void __thiscall mmWaypoints::SetArrow(void) | ?SetArrow@mmWaypoints@@QAEXXZ
    0x435A50 | public: float __thiscall mmWaypoints::GetCurrentDistance(void) | ?GetCurrentDistance@mmWaypoints@@QAEMXZ
    0x435AA0 | public: void __thiscall mmWaypoints::ResetAllTags(void) | ?ResetAllTags@mmWaypoints@@QAEXXZ
    0x435B10 | public: void __thiscall mmWaypoints::GetClosestWaypoint(void) | ?GetClosestWaypoint@mmWaypoints@@QAEXXZ
    0x435BD0 | protected: void __thiscall mmWaypoints::CycleCurrentWaypoint(int) | ?CycleCurrentWaypoint@mmWaypoints@@IAEXH@Z
    0x435C40 | public: void __thiscall mmWaypoints::GetNextWaypoint(void) | ?GetNextWaypoint@mmWaypoints@@QAEXXZ
    0x435C50 | public: void __thiscall mmWaypoints::GetLastWaypoint(void) | ?GetLastWaypoint@mmWaypoints@@QAEXXZ
    0x435C60 | protected: void __thiscall mmWaypoints::SetCurrentGoals(int) | ?SetCurrentGoals@mmWaypoints@@IAEXH@Z
    0x435CA0 | public: int __thiscall mmWaypoints::AnyDrawn(void) | ?AnyDrawn@mmWaypoints@@QAEHXZ
    0x435CE0 | public: int __thiscall mmWaypoints::AIWPHit(int,int,class Matrix34,class Vector3,float) | ?AIWPHit@mmWaypoints@@QAEHHHVMatrix34@@VVector3@@M@Z
    public: int __thiscall mmWaypoints::AnyAIWPHit(unsigned int &,int,class Matrix34,class Vector3,float) | ?AnyAIWPHit@mmWaypoints@@QAEHAAIHVMatrix34@@VVector3@@M@Z
    0x435DE0 | public: int __thiscall mmWaypoints::AnyWPHits(int) | ?AnyWPHits@mmWaypoints@@QAEHH@Z
    0x435F60 | protected: void __thiscall mmWaypoints::ClearWaypoint(int) | ?ClearWaypoint@mmWaypoints@@IAEXH@Z
    0x4360C0 | public: void __thiscall mmWaypoints::DisplayHUDMessage(int) | ?DisplayHUDMessage@mmWaypoints@@QAEXH@Z
    public: virtual void __thiscall mmWaypoints::AddWidgets(class bkBank &) | ?AddWidgets@mmWaypoints@@UAEXAAVbkBank@@@Z
    public: void __thiscall mmWaypoints::UseWidgets(class bkBank &) | ?UseWidgets@mmWaypoints@@QAEXAAVbkBank@@@Z
    public: void __thiscall mmWaypoints::SetWPCallback(void) | ?SetWPCallback@mmWaypoints@@QAEXXZ
    public: void __thiscall mmWaypoints::WPDropCB(void) | ?WPDropCB@mmWaypoints@@QAEXXZ
    public: void __thiscall mmWaypoints::WPDeleteCB(void) | ?WPDeleteCB@mmWaypoints@@QAEXXZ
    public: void __thiscall mmWaypoints::WPToggleCB(void) | ?WPToggleCB@mmWaypoints@@QAEXXZ
    public: void __thiscall mmWaypoints::WPResetCB(void) | ?WPResetCB@mmWaypoints@@QAEXXZ
    public: void __thiscall mmWaypoints::ChangeWPCallback(void) | ?ChangeWPCallback@mmWaypoints@@QAEXXZ
    0x4363A0 | public: virtual void * __thiscall mmWaypoints::`scalar deleting destructor'(unsigned int) | ??_GmmWaypoints@@UAEPAXI@Z
    public: virtual void * __thiscall mmWaypoints::`vector deleting destructor'(unsigned int) | ??_EmmWaypoints@@UAEPAXI@Z
    0x5B0F34 | const mmWaypoints::`vftable' | ??_7mmWaypoints@@6B@
*/

// #include "hooking.h"
