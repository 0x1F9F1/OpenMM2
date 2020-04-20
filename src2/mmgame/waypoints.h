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

class mmWaypoints : asNode
{
public:
    // mmWaypoints::`vftable' @ 0x5B0F34

    // 0x434260 | ??0mmWaypoints@@QAE@XZ
    inline mmWaypoints()
    {
        stub<member_func_t<void, mmWaypoints>>(0x434260, this);
    }

    // 0x434430 | ?Init@mmWaypoints@@QAEHPAVmmPlayer@@PADHHHHI@Z
    inline int32_t Init(
        class mmPlayer* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, uint32_t arg7)
    {
        return stub<
            member_func_t<int32_t, mmWaypoints, class mmPlayer*, char*, int32_t, int32_t, int32_t, int32_t, uint32_t>>(
            0x434430, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x434540 | ?InitStatic@mmWaypoints@@QAEXPAVmmPlayer@@HI@Z
    inline void InitStatic(class mmPlayer* arg1, int32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, mmWaypoints, class mmPlayer*, int32_t, uint32_t>>(
            0x434540, this, arg1, arg2, arg3);
    }

    // 0x434700 | ?ReInit@mmWaypoints@@QAEXHPADI@Z
    inline void ReInit(int32_t arg1, char* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t, char*, uint32_t>>(0x434700, this, arg1, arg2, arg3);
    }

    // 0x434960 | ?GetStartAngle@mmWaypoints@@QAEMXZ
    inline float GetStartAngle()
    {
        return stub<member_func_t<float, mmWaypoints>>(0x434960, this);
    }

    // 0x434980 | ?SaveCSV@mmWaypoints@@QAEHPAD@Z
    inline int32_t SaveCSV(char* arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, char*>>(0x434980, this, arg1);
    }

    // 0x434A70 | ?LoadCSV@mmWaypoints@@QAEHPADH@Z
    inline int32_t LoadCSV(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmWaypoints, char*, int32_t>>(0x434A70, this, arg1, arg2);
    }

    // 0x4357D0 | ?DeactivateFinish@mmWaypoints@@QAEXXZ
    inline void DeactivateFinish()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x4357D0, this);
    }

    // 0x4358F0 | ?GetStart@mmWaypoints@@QAEXAAVVector3@@@Z
    inline void GetStart(class Vector3& arg1)
    {
        return stub<member_func_t<void, mmWaypoints, class Vector3&>>(0x4358F0, this, arg1);
    }

    // 0x435930 | ?GetWaypoint@mmWaypoints@@QAEXHAAVVector3@@@Z
    inline void GetWaypoint(int32_t arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t, class Vector3&>>(0x435930, this, arg1, arg2);
    }

    // 0x435970 | ?GetHeading@mmWaypoints@@QAEMH@Z
    inline float GetHeading(int32_t arg1)
    {
        return stub<member_func_t<float, mmWaypoints, int32_t>>(0x435970, this, arg1);
    }

    // 0x4359A0 | ?GenerateHitRooms@mmWaypoints@@IAEXXZ
    inline void GenerateHitRooms()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x4359A0, this);
    }

    // 0x435A00 | ?GetHitRoom@mmWaypoints@@QAEHH@Z
    inline int32_t GetHitRoom(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t>>(0x435A00, this, arg1);
    }

    // 0x435A20 | ?SetArrow@mmWaypoints@@QAEXXZ
    inline void SetArrow()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435A20, this);
    }

    // 0x435A50 | ?GetCurrentDistance@mmWaypoints@@QAEMXZ
    inline float GetCurrentDistance()
    {
        return stub<member_func_t<float, mmWaypoints>>(0x435A50, this);
    }

    // 0x435AA0 | ?ResetAllTags@mmWaypoints@@QAEXXZ
    inline void ResetAllTags()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435AA0, this);
    }

    // 0x435B10 | ?GetClosestWaypoint@mmWaypoints@@QAEXXZ
    inline void GetClosestWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435B10, this);
    }

    // 0x435BD0 | ?CycleCurrentWaypoint@mmWaypoints@@IAEXH@Z
    inline void CycleCurrentWaypoint(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x435BD0, this, arg1);
    }

    // 0x435C40 | ?GetNextWaypoint@mmWaypoints@@QAEXXZ
    inline void GetNextWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435C40, this);
    }

    // 0x435C50 | ?GetLastWaypoint@mmWaypoints@@QAEXXZ
    inline void GetLastWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435C50, this);
    }

    // 0x435C60 | ?SetCurrentGoals@mmWaypoints@@IAEXH@Z
    inline void SetCurrentGoals(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x435C60, this, arg1);
    }

    // 0x435CA0 | ?AnyDrawn@mmWaypoints@@QAEHXZ
    inline int32_t AnyDrawn()
    {
        return stub<member_func_t<int32_t, mmWaypoints>>(0x435CA0, this);
    }

    // 0x435CE0 | ?AIWPHit@mmWaypoints@@QAEHHHVMatrix34@@VVector3@@M@Z
    inline int32_t AIWPHit(int32_t arg1, int32_t arg2, class Matrix34 arg3, class Vector3 arg4, float arg5)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t, int32_t, class Matrix34, class Vector3, float>>(
            0x435CE0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x435DE0 | ?AnyWPHits@mmWaypoints@@QAEHH@Z
    inline int32_t AnyWPHits(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t>>(0x435DE0, this, arg1);
    }

    // 0x435F60 | ?ClearWaypoint@mmWaypoints@@IAEXH@Z
    inline void ClearWaypoint(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x435F60, this, arg1);
    }

    // 0x4360C0 | ?DisplayHUDMessage@mmWaypoints@@QAEXH@Z
    inline void DisplayHUDMessage(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x4360C0, this, arg1);
    }

    // 0x434370 | ??1mmWaypoints@@UAE@XZ
    inline ~mmWaypoints() override
    {
        stub<member_func_t<void, mmWaypoints>>(0x434370, this);
    }

    // 0x435240 | ?Cull@mmWaypoints@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435240, this);
    }

    // 0x435280 | ?Update@mmWaypoints@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x435280, this);
    }

    // 0x4357E0 | ?Reset@mmWaypoints@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x4357E0, this);
    }
};
