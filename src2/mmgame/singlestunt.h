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

#include "data/base.h"
#include "gamesingle.h"
#include "mmgamemusicdata.h"

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

class mmSingleStunt : public mmGameSingle
{
    // const mmSingleStunt::`vftable' @ 0x5B059C

public:
    // 0x415B00 | ??0mmSingleStunt@@QAE@XZ
    mmSingleStunt();

    // 0x41AA40 | ??_EmmSingleStunt@@UAEPAXI@Z
    // 0x415BC0 | ??1mmSingleStunt@@UAE@XZ
    ~mmSingleStunt() override;

    // 0x416820 | ?EnableRacers@mmSingleStunt@@QAEXXZ
    void EnableRacers();

    // 0x41A340 | ?EventSoundCtrl@mmSingleStunt@@QAEX_NH@Z
    void EventSoundCtrl(bool arg1, i32 arg2);

    // 0x416920 | ?HitWaterHandler@mmSingleStunt@@UAEXXZ
    void HitWaterHandler() override;

    // 0x415C40 | ?Init@mmSingleStunt@@UAEHXZ
    i32 Init() override;

    // 0x416450 | ?InitGameObjects@mmSingleStunt@@UAEXXZ
    void InitGameObjects() override;

    // 0x415DB0 | ?InitHUD@mmSingleStunt@@UAEXXZ
    void InitHUD() override;

    // 0x415D40 | ?InitMyPlayer@mmSingleStunt@@UAEXXZ
    void InitMyPlayer() override;

    // 0x416310 | ?InitNewEvent@mmSingleStunt@@QAEXXZ
    void InitNewEvent();

    // 0x416720 | ?InitOtherPlayers@mmSingleStunt@@UAEXXZ
    void InitOtherPlayers() override;

    // 0x41A490 | ?NextRace@mmSingleStunt@@UAEXXZ
    void NextRace() override;

    // 0x41A6F0 | ?RegisterFinish@mmSingleStunt@@QAEHH@Z
    i32 RegisterFinish(i32 arg1);

    // 0x416760 | ?Reset@mmSingleStunt@@UAEXXZ
    void Reset() override;

    // 0x41A460 | ?SwitchState@mmSingleStunt@@UAEXH@Z
    void SwitchState(i32 arg1) override;

    // 0x416970 | ?Update@mmSingleStunt@@UAEXXZ
    void Update() override;

    // 0x41ABF0 | ?UpdateDebugKeyInput@mmSingleStunt@@UAEXH@Z
    void UpdateDebugKeyInput(i32 arg1) override;

    // 0x416990 | ?UpdateGame@mmSingleStunt@@UAEXXZ
    void UpdateGame() override;

    // 0x416980 | ?UpdateGameInput@mmSingleStunt@@UAEXH@Z
    void UpdateGameInput(i32 arg1) override;

private:
    // 0x41A1B0 | ?CheckCopPursuit@mmSingleStunt@@AAE_NXZ
    bool CheckCopPursuit();

    // 0x41A130 | ?CheckTimeUp@mmSingleStunt@@AAE_NXZ
    bool CheckTimeUp();

    // 0x416900 | ?GetOpponentIndex@mmSingleStunt@@AAEHXZ
    i32 GetOpponentIndex();

    // 0x41A310 | ?HUDMessage@mmSingleStunt@@AAEXH@Z
    void HUDMessage(i32 arg1);

    // 0x416070 | ?LoadEventFile@mmSingleStunt@@AAE_NPAD@Z
    bool LoadEventFile(char* arg1);

    // 0x41A470 | ?NextRaceAvailable@mmSingleStunt@@AAE_NXZ
    bool NextRaceAvailable();

    // 0x41A390 | ?PlayTimerWarning@mmSingleStunt@@AAEXM@Z
    void PlayTimerWarning(f32 arg1);

    // 0x417030 | ?UpdateAccel@mmSingleStunt@@AAEXXZ
    void UpdateAccel();

    // 0x419010 | ?UpdateBlitz@mmSingleStunt@@AAEXXZ
    void UpdateBlitz();

    // 0x417B10 | ?UpdateChase@mmSingleStunt@@AAEXXZ
    void UpdateChase();

    // 0x419C90 | ?UpdateCollide@mmSingleStunt@@AAEXXZ
    void UpdateCollide();

    // 0x4187A0 | ?UpdateCorner@mmSingleStunt@@AAEXXZ
    void UpdateCorner();

    // 0x416A50 | ?UpdateEvade@mmSingleStunt@@AAEXXZ
    void UpdateEvade();

    // 0x4180F0 | ?UpdateFrogger@mmSingleStunt@@AAEXXZ
    void UpdateFrogger();

    // 0x4174C0 | ?UpdateJump@mmSingleStunt@@AAEXXZ
    void UpdateJump();

    // 0x4195F0 | ?UpdateStop@mmSingleStunt@@AAEXXZ
    void UpdateStop();
};

check_size(mmSingleStunt, 0x7970);

struct mmInfoBase : Base
{
    // const mmInfoBase::`vftable' @ 0x5B0634

public:
    // 0x528230 | ??0mmInfoBase@@QAE@XZ
    mmInfoBase();

    // 0x41AB60 | ??_GmmInfoBase@@UAEPAXI@Z
    // 0x41AB90 | ??1mmInfoBase@@UAE@XZ
    ~mmInfoBase() override;

    // 0x528260 | ?Load@mmInfoBase@@QAEHPAD@Z
    i32 Load(char* arg1);

    // 0x528310 | ?Save@mmInfoBase@@QAEHPAD@Z
    i32 Save(char* arg1);

    // 0x5283C0 | ?SetIOPath@mmInfoBase@@QAEXPAD@Z
    void SetIOPath(char* arg1);

    // 0x41AB50 | ?FileIO@mmInfoBase@@UAEXAAVdatParser@@@Z
    virtual void FileIO(class datParser& arg1);
};

check_size(mmInfoBase, 0x0);

struct mmCCData
{
public:
    // 0x41ABC0 | ??0mmCCData@@QAE@XZ
    mmCCData();

    // 0x41ABE0 | ??1mmCCData@@QAE@XZ
    ~mmCCData();
};

check_size(mmCCData, 0x3C);

struct mmSingleRaceMusicData : mmGameMusicData
{
    // const mmSingleRaceMusicData::`vftable' @ 0x5B0610

public:
    // 0x4336D0 | ?LoadMusic@mmSingleRaceMusicData@@UAE_NPAD@Z
    bool LoadMusic(char* arg1) override;

private:
    // 0x433890 | ?LoadMusicSegments@mmSingleRaceMusicData@@AAE_NPAVStream@@F@Z
    bool LoadMusicSegments(class Stream* arg1, i16 arg2);
};

check_size(mmSingleRaceMusicData, 0x0);
