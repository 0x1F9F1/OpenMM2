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
    mmgame:singlestunt

    0x415B00 | public: __thiscall mmSingleStunt::mmSingleStunt(void) | ??0mmSingleStunt@@QAE@XZ
    0x415BC0 | public: virtual __thiscall mmSingleStunt::~mmSingleStunt(void) | ??1mmSingleStunt@@UAE@XZ
    0x415C40 | public: virtual int __thiscall mmSingleStunt::Init(void) | ?Init@mmSingleStunt@@UAEHXZ
    0x415D40 | public: virtual void __thiscall mmSingleStunt::InitMyPlayer(void) | ?InitMyPlayer@mmSingleStunt@@UAEXXZ
    0x415DB0 | public: virtual void __thiscall mmSingleStunt::InitHUD(void) | ?InitHUD@mmSingleStunt@@UAEXXZ
    0x416070 | private: bool __thiscall mmSingleStunt::LoadEventFile(char *) | ?LoadEventFile@mmSingleStunt@@AAE_NPAD@Z
    0x416310 | public: void __thiscall mmSingleStunt::InitNewEvent(void) | ?InitNewEvent@mmSingleStunt@@QAEXXZ
    0x416450 | public: virtual void __thiscall mmSingleStunt::InitGameObjects(void) | ?InitGameObjects@mmSingleStunt@@UAEXXZ
    0x416720 | public: virtual void __thiscall mmSingleStunt::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleStunt@@UAEXXZ
    0x416760 | public: virtual void __thiscall mmSingleStunt::Reset(void) | ?Reset@mmSingleStunt@@UAEXXZ
    0x416820 | public: void __thiscall mmSingleStunt::EnableRacers(void) | ?EnableRacers@mmSingleStunt@@QAEXXZ
    0x416900 | private: int __thiscall mmSingleStunt::GetOpponentIndex(void) | ?GetOpponentIndex@mmSingleStunt@@AAEHXZ
    0x416920 | public: virtual void __thiscall mmSingleStunt::HitWaterHandler(void) | ?HitWaterHandler@mmSingleStunt@@UAEXXZ
    0x416970 | public: virtual void __thiscall mmSingleStunt::Update(void) | ?Update@mmSingleStunt@@UAEXXZ
    0x416980 | public: virtual void __thiscall mmSingleStunt::UpdateGameInput(int) | ?UpdateGameInput@mmSingleStunt@@UAEXH@Z
    0x416990 | public: virtual void __thiscall mmSingleStunt::UpdateGame(void) | ?UpdateGame@mmSingleStunt@@UAEXXZ
    0x416A50 | private: void __thiscall mmSingleStunt::UpdateEvade(void) | ?UpdateEvade@mmSingleStunt@@AAEXXZ
    0x417030 | private: void __thiscall mmSingleStunt::UpdateAccel(void) | ?UpdateAccel@mmSingleStunt@@AAEXXZ
    0x4174C0 | private: void __thiscall mmSingleStunt::UpdateJump(void) | ?UpdateJump@mmSingleStunt@@AAEXXZ
    0x417B10 | private: void __thiscall mmSingleStunt::UpdateChase(void) | ?UpdateChase@mmSingleStunt@@AAEXXZ
    0x4180F0 | private: void __thiscall mmSingleStunt::UpdateFrogger(void) | ?UpdateFrogger@mmSingleStunt@@AAEXXZ
    0x4187A0 | private: void __thiscall mmSingleStunt::UpdateCorner(void) | ?UpdateCorner@mmSingleStunt@@AAEXXZ
    0x419010 | private: void __thiscall mmSingleStunt::UpdateBlitz(void) | ?UpdateBlitz@mmSingleStunt@@AAEXXZ
    0x4195F0 | private: void __thiscall mmSingleStunt::UpdateStop(void) | ?UpdateStop@mmSingleStunt@@AAEXXZ
    0x419C90 | private: void __thiscall mmSingleStunt::UpdateCollide(void) | ?UpdateCollide@mmSingleStunt@@AAEXXZ
    0x41A130 | private: bool __thiscall mmSingleStunt::CheckTimeUp(void) | ?CheckTimeUp@mmSingleStunt@@AAE_NXZ
    0x41A1B0 | private: bool __thiscall mmSingleStunt::CheckCopPursuit(void) | ?CheckCopPursuit@mmSingleStunt@@AAE_NXZ
    0x41A310 | private: void __thiscall mmSingleStunt::HUDMessage(int) | ?HUDMessage@mmSingleStunt@@AAEXH@Z
    0x41A340 | public: void __thiscall mmSingleStunt::EventSoundCtrl(bool,int) | ?EventSoundCtrl@mmSingleStunt@@QAEX_NH@Z
    0x41A390 | private: void __thiscall mmSingleStunt::PlayTimerWarning(float) | ?PlayTimerWarning@mmSingleStunt@@AAEXM@Z
    0x41A460 | public: virtual void __thiscall mmSingleStunt::SwitchState(int) | ?SwitchState@mmSingleStunt@@UAEXH@Z
    0x41A470 | private: bool __thiscall mmSingleStunt::NextRaceAvailable(void) | ?NextRaceAvailable@mmSingleStunt@@AAE_NXZ
    0x41A490 | public: virtual void __thiscall mmSingleStunt::NextRace(void) | ?NextRace@mmSingleStunt@@UAEXXZ
    0x41A6F0 | public: int __thiscall mmSingleStunt::RegisterFinish(int) | ?RegisterFinish@mmSingleStunt@@QAEHH@Z
    public: void __thiscall mmSingleStunt::AddWidgets(class bkBank *) | ?AddWidgets@mmSingleStunt@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmSingleStunt::`scalar deleting destructor'(unsigned int) | ??_GmmSingleStunt@@UAEPAXI@Z
    0x41AA40 | public: virtual void * __thiscall mmSingleStunt::`vector deleting destructor'(unsigned int) | ??_EmmSingleStunt@@UAEPAXI@Z
    0x41AA70 | public: __thiscall mmPlayerRecord::mmPlayerRecord(class mmPlayerRecord const &) | ??0mmPlayerRecord@@QAE@ABV0@@Z
    public: virtual void * __thiscall mmPlayerRecord::`vector deleting destructor'(unsigned int) | ??_EmmPlayerRecord@@UAEPAXI@Z
    0x41AB20 | public: virtual void * __thiscall mmPlayerRecord::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerRecord@@UAEPAXI@Z
    0x41AB50 | public: virtual void __thiscall mmInfoBase::FileIO(class datParser &) | ?FileIO@mmInfoBase@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall mmInfoBase::`vector deleting destructor'(unsigned int) | ??_EmmInfoBase@@UAEPAXI@Z
    0x41AB60 | public: virtual void * __thiscall mmInfoBase::`scalar deleting destructor'(unsigned int) | ??_GmmInfoBase@@UAEPAXI@Z
    0x41AB90 | public: virtual __thiscall mmInfoBase::~mmInfoBase(void) | ??1mmInfoBase@@UAE@XZ
    0x41ABA0 | public: virtual class mmWaypoints * __thiscall mmGameSingle::GetWaypoints(void) | ?GetWaypoints@mmGameSingle@@UAEPAVmmWaypoints@@XZ
    public: __thiscall mmSingleRaceMusicData::~mmSingleRaceMusicData(void) | ??1mmSingleRaceMusicData@@QAE@XZ
    0x41ABC0 | public: __thiscall mmCCData::mmCCData(void) | ??0mmCCData@@QAE@XZ
    0x41ABE0 | public: __thiscall mmCCData::~mmCCData(void) | ??1mmCCData@@QAE@XZ
    0x41ABF0 | public: virtual void __thiscall mmSingleStunt::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleStunt@@UAEXH@Z
    0x5B059C | const mmSingleStunt::`vftable' | ??_7mmSingleStunt@@6B@
    0x5B0610 | const mmSingleRaceMusicData::`vftable' | ??_7mmSingleRaceMusicData@@6B@
    0x5B0614 | const mmGameMusicData::`vftable' | ??_7mmGameMusicData@@6B@
    0x5B062C | const mmPlayerRecord::`vftable' | ??_7mmPlayerRecord@@6B@
    0x5B0634 | const mmInfoBase::`vftable' | ??_7mmInfoBase@@6B@
*/

struct mmSingleStunt : mmGameSingle
{
public:
    // mmSingleStunt::`vftable' @ 0x5B059C

    // 0x415B00 | ??0mmSingleStunt@@QAE@XZ
    inline mmSingleStunt()
    {
        stub<member_func_t<void, mmSingleStunt>>(0x415B00, this);
    }

    // 0x416070 | ?LoadEventFile@mmSingleStunt@@AAE_NPAD@Z
    inline bool LoadEventFile(char* arg1)
    {
        return stub<member_func_t<bool, mmSingleStunt, char*>>(0x416070, this, arg1);
    }

    // 0x416310 | ?InitNewEvent@mmSingleStunt@@QAEXXZ
    inline void InitNewEvent()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416310, this);
    }

    // 0x416820 | ?EnableRacers@mmSingleStunt@@QAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416820, this);
    }

    // 0x416900 | ?GetOpponentIndex@mmSingleStunt@@AAEHXZ
    inline i32 GetOpponentIndex()
    {
        return stub<member_func_t<i32, mmSingleStunt>>(0x416900, this);
    }

    // 0x416A50 | ?UpdateEvade@mmSingleStunt@@AAEXXZ
    inline void UpdateEvade()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416A50, this);
    }

    // 0x417030 | ?UpdateAccel@mmSingleStunt@@AAEXXZ
    inline void UpdateAccel()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x417030, this);
    }

    // 0x4174C0 | ?UpdateJump@mmSingleStunt@@AAEXXZ
    inline void UpdateJump()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x4174C0, this);
    }

    // 0x417B10 | ?UpdateChase@mmSingleStunt@@AAEXXZ
    inline void UpdateChase()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x417B10, this);
    }

    // 0x4180F0 | ?UpdateFrogger@mmSingleStunt@@AAEXXZ
    inline void UpdateFrogger()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x4180F0, this);
    }

    // 0x4187A0 | ?UpdateCorner@mmSingleStunt@@AAEXXZ
    inline void UpdateCorner()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x4187A0, this);
    }

    // 0x419010 | ?UpdateBlitz@mmSingleStunt@@AAEXXZ
    inline void UpdateBlitz()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x419010, this);
    }

    // 0x4195F0 | ?UpdateStop@mmSingleStunt@@AAEXXZ
    inline void UpdateStop()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x4195F0, this);
    }

    // 0x419C90 | ?UpdateCollide@mmSingleStunt@@AAEXXZ
    inline void UpdateCollide()
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x419C90, this);
    }

    // 0x41A130 | ?CheckTimeUp@mmSingleStunt@@AAE_NXZ
    inline bool CheckTimeUp()
    {
        return stub<member_func_t<bool, mmSingleStunt>>(0x41A130, this);
    }

    // 0x41A1B0 | ?CheckCopPursuit@mmSingleStunt@@AAE_NXZ
    inline bool CheckCopPursuit()
    {
        return stub<member_func_t<bool, mmSingleStunt>>(0x41A1B0, this);
    }

    // 0x41A310 | ?HUDMessage@mmSingleStunt@@AAEXH@Z
    inline void HUDMessage(i32 arg1)
    {
        return stub<member_func_t<void, mmSingleStunt, i32>>(0x41A310, this, arg1);
    }

    // 0x41A340 | ?EventSoundCtrl@mmSingleStunt@@QAEX_NH@Z
    inline void EventSoundCtrl(bool arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmSingleStunt, bool, i32>>(0x41A340, this, arg1, arg2);
    }

    // 0x41A390 | ?PlayTimerWarning@mmSingleStunt@@AAEXM@Z
    inline void PlayTimerWarning(f32 arg1)
    {
        return stub<member_func_t<void, mmSingleStunt, f32>>(0x41A390, this, arg1);
    }

    // 0x41A470 | ?NextRaceAvailable@mmSingleStunt@@AAE_NXZ
    inline bool NextRaceAvailable()
    {
        return stub<member_func_t<bool, mmSingleStunt>>(0x41A470, this);
    }

    // 0x41A6F0 | ?RegisterFinish@mmSingleStunt@@QAEHH@Z
    inline i32 RegisterFinish(i32 arg1)
    {
        return stub<member_func_t<i32, mmSingleStunt, i32>>(0x41A6F0, this, arg1);
    }

    // 0x415BC0 | ??1mmSingleStunt@@UAE@XZ
    inline ~mmSingleStunt() override
    {
        stub<member_func_t<void, mmSingleStunt>>(0x415BC0, this);
    }

    // 0x416970 | ?Update@mmSingleStunt@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416970, this);
    }

    // 0x416760 | ?Reset@mmSingleStunt@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416760, this);
    }

    // 0x415C40 | ?Init@mmSingleStunt@@UAEHXZ
    inline i32 Init() override
    {
        return stub<member_func_t<i32, mmSingleStunt>>(0x415C40, this);
    }

    // 0x415D40 | ?InitMyPlayer@mmSingleStunt@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x415D40, this);
    }

    // 0x416720 | ?InitOtherPlayers@mmSingleStunt@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416720, this);
    }

    // 0x416450 | ?InitGameObjects@mmSingleStunt@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416450, this);
    }

    // 0x415DB0 | ?InitHUD@mmSingleStunt@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x415DB0, this);
    }

    // 0x416980 | ?UpdateGameInput@mmSingleStunt@@UAEXH@Z
    inline void UpdateGameInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleStunt, i32>>(0x416980, this, arg1);
    }

    // 0x41ABF0 | ?UpdateDebugKeyInput@mmSingleStunt@@UAEXH@Z
    inline void UpdateDebugKeyInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleStunt, i32>>(0x41ABF0, this, arg1);
    }

    // 0x416990 | ?UpdateGame@mmSingleStunt@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416990, this);
    }

    // 0x41A490 | ?NextRace@mmSingleStunt@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x41A490, this);
    }

    // 0x416920 | ?HitWaterHandler@mmSingleStunt@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleStunt>>(0x416920, this);
    }

    // 0x41A460 | ?SwitchState@mmSingleStunt@@UAEXH@Z
    inline void SwitchState(i32 arg1) override
    {
        return stub<member_func_t<void, mmSingleStunt, i32>>(0x41A460, this, arg1);
    }
};

struct mmInfoBase
{
public:
    // mmInfoBase::`vftable' @ 0x5B0634

    // 0x528230 | ??0mmInfoBase@@QAE@XZ
    inline mmInfoBase()
    {
        stub<member_func_t<void, mmInfoBase>>(0x528230, this);
    }

    // 0x528260 | ?Load@mmInfoBase@@QAEHPAD@Z
    inline i32 Load(char* arg1)
    {
        return stub<member_func_t<i32, mmInfoBase, char*>>(0x528260, this, arg1);
    }

    // 0x528310 | ?Save@mmInfoBase@@QAEHPAD@Z
    inline i32 Save(char* arg1)
    {
        return stub<member_func_t<i32, mmInfoBase, char*>>(0x528310, this, arg1);
    }

    // 0x5283C0 | ?SetIOPath@mmInfoBase@@QAEXPAD@Z
    inline void SetIOPath(char* arg1)
    {
        return stub<member_func_t<void, mmInfoBase, char*>>(0x5283C0, this, arg1);
    }

    // 0x41AB90 | ??1mmInfoBase@@UAE@XZ
    virtual inline ~mmInfoBase()
    {
        stub<member_func_t<void, mmInfoBase>>(0x41AB90, this);
    }

    // 0x41AB50 | ?FileIO@mmInfoBase@@UAEXAAVdatParser@@@Z
    virtual inline void FileIO(class datParser& arg1)
    {
        return stub<member_func_t<void, mmInfoBase, class datParser&>>(0x41AB50, this, arg1);
    }
};

struct mmCCData
{
public:
    // 0x41ABC0 | ??0mmCCData@@QAE@XZ
    inline mmCCData()
    {
        stub<member_func_t<void, mmCCData>>(0x41ABC0, this);
    }

    // 0x41ABE0 | ??1mmCCData@@QAE@XZ
    inline ~mmCCData()
    {
        stub<member_func_t<void, mmCCData>>(0x41ABE0, this);
    }
};
