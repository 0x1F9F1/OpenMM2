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

// #include "hooking.h"
