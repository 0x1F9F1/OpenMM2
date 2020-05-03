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

#pragma once

#include "node/node.h"

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

class mmWaypoints : public asNode
{
    // const mmWaypoints::`vftable' @ 0x5B0F34

public:
    // 0x434260 | ??0mmWaypoints@@QAE@XZ
    mmWaypoints();

    // 0x4363A0 | ??_GmmWaypoints@@UAEPAXI@Z
    // 0x434370 | ??1mmWaypoints@@UAE@XZ
    ~mmWaypoints() override;

    // 0x435CE0 | ?AIWPHit@mmWaypoints@@QAEHHHVMatrix34@@VVector3@@M@Z
    i32 AIWPHit(i32 arg1, i32 arg2, class Matrix34 arg3, class Vector3 arg4, f32 arg5);

    // 0x435CA0 | ?AnyDrawn@mmWaypoints@@QAEHXZ
    i32 AnyDrawn();

    // 0x435DE0 | ?AnyWPHits@mmWaypoints@@QAEHH@Z
    i32 AnyWPHits(i32 arg1);

    // 0x435240 | ?Cull@mmWaypoints@@UAEXXZ
    void Cull() override;

    // 0x4357D0 | ?DeactivateFinish@mmWaypoints@@QAEXXZ
    void DeactivateFinish();

    // 0x4360C0 | ?DisplayHUDMessage@mmWaypoints@@QAEXH@Z
    void DisplayHUDMessage(i32 arg1);

    // 0x435B10 | ?GetClosestWaypoint@mmWaypoints@@QAEXXZ
    void GetClosestWaypoint();

    // 0x435A50 | ?GetCurrentDistance@mmWaypoints@@QAEMXZ
    f32 GetCurrentDistance();

    // 0x435970 | ?GetHeading@mmWaypoints@@QAEMH@Z
    f32 GetHeading(i32 arg1);

    // 0x435A00 | ?GetHitRoom@mmWaypoints@@QAEHH@Z
    i32 GetHitRoom(i32 arg1);

    // 0x435C50 | ?GetLastWaypoint@mmWaypoints@@QAEXXZ
    void GetLastWaypoint();

    // 0x435C40 | ?GetNextWaypoint@mmWaypoints@@QAEXXZ
    void GetNextWaypoint();

    // 0x4358F0 | ?GetStart@mmWaypoints@@QAEXAAVVector3@@@Z
    void GetStart(class Vector3& arg1);

    // 0x434960 | ?GetStartAngle@mmWaypoints@@QAEMXZ
    f32 GetStartAngle();

    // 0x435930 | ?GetWaypoint@mmWaypoints@@QAEXHAAVVector3@@@Z
    void GetWaypoint(i32 arg1, class Vector3& arg2);

    // 0x434430 | ?Init@mmWaypoints@@QAEHPAVmmPlayer@@PADHHHHI@Z
    i32 Init(class mmPlayer* arg1, char* arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, u32 arg7);

    // 0x434540 | ?InitStatic@mmWaypoints@@QAEXPAVmmPlayer@@HI@Z
    void InitStatic(class mmPlayer* arg1, i32 arg2, u32 arg3);

    // 0x434A70 | ?LoadCSV@mmWaypoints@@QAEHPADH@Z
    i32 LoadCSV(char* arg1, i32 arg2);

    // 0x434700 | ?ReInit@mmWaypoints@@QAEXHPADI@Z
    void ReInit(i32 arg1, char* arg2, u32 arg3);

    // 0x4357E0 | ?Reset@mmWaypoints@@UAEXXZ
    void Reset() override;

    // 0x435AA0 | ?ResetAllTags@mmWaypoints@@QAEXXZ
    void ResetAllTags();

    // 0x434980 | ?SaveCSV@mmWaypoints@@QAEHPAD@Z
    i32 SaveCSV(char* arg1);

    // 0x435A20 | ?SetArrow@mmWaypoints@@QAEXXZ
    void SetArrow();

    // 0x435280 | ?Update@mmWaypoints@@UAEXXZ
    void Update() override;

protected:
    // 0x435F60 | ?ClearWaypoint@mmWaypoints@@IAEXH@Z
    void ClearWaypoint(i32 arg1);

    // 0x435BD0 | ?CycleCurrentWaypoint@mmWaypoints@@IAEXH@Z
    void CycleCurrentWaypoint(i32 arg1);

    // 0x4359A0 | ?GenerateHitRooms@mmWaypoints@@IAEXXZ
    void GenerateHitRooms();

    // 0x435C60 | ?SetCurrentGoals@mmWaypoints@@IAEXH@Z
    void SetCurrentGoals(i32 arg1);
};

check_size(mmWaypoints, 0x90);
