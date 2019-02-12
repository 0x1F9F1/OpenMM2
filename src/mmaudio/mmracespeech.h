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
    mmaudio:mmracespeech

    0x51A4E0 | public: __thiscall mmRaceSpeech::mmRaceSpeech(void) | ??0mmRaceSpeech@@QAE@XZ
    public: virtual __thiscall mmRaceSpeech::~mmRaceSpeech(void) | ??1mmRaceSpeech@@UAE@XZ
    0x51A590 | public: void __thiscall mmRaceSpeech::PlayPreRace(void) | ?PlayPreRace@mmRaceSpeech@@QAEXXZ
    0x51A660 | public: void __thiscall mmRaceSpeech::PlayUnlockRace(void) | ?PlayUnlockRace@mmRaceSpeech@@QAEXXZ
    0x51A6C0 | public: void __thiscall mmRaceSpeech::PlayUnlockVehicle(void) | ?PlayUnlockVehicle@mmRaceSpeech@@QAEXXZ
    0x51A720 | public: void __thiscall mmRaceSpeech::PlayUnlockTexture(void) | ?PlayUnlockTexture@mmRaceSpeech@@QAEXXZ
    0x51A750 | public: void __thiscall mmRaceSpeech::PlayFinalCheckPoint(void) | ?PlayFinalCheckPoint@mmRaceSpeech@@QAEXXZ
    0x51A780 | public: void __thiscall mmRaceSpeech::PlayFinalLap(void) | ?PlayFinalLap@mmRaceSpeech@@QAEXXZ
    0x51A7A0 | public: void __thiscall mmRaceSpeech::PlayDamagePenalty(void) | ?PlayDamagePenalty@mmRaceSpeech@@QAEXXZ
    0x51A7D0 | public: void __thiscall mmRaceSpeech::PlayRaceProgress(void) | ?PlayRaceProgress@mmRaceSpeech@@QAEXXZ
    0x51A800 | public: void __thiscall mmRaceSpeech::PlayResults(int,int) | ?PlayResults@mmRaceSpeech@@QAEXHH@Z
    0x51A840 | public: void __thiscall mmRaceSpeech::PlayResultsPoor(void) | ?PlayResultsPoor@mmRaceSpeech@@QAEXXZ
    0x51A890 | public: void __thiscall mmRaceSpeech::PlayResultsWin(void) | ?PlayResultsWin@mmRaceSpeech@@QAEXXZ
    0x51A8E0 | public: void __thiscall mmRaceSpeech::PlayResultsMid(void) | ?PlayResultsMid@mmRaceSpeech@@QAEXXZ
    0x51A930 | public: bool __thiscall mmRaceSpeech::LoadCityInfo(char *) | ?LoadCityInfo@mmRaceSpeech@@QAE_NPAD@Z
    0x51AB80 | public: bool __thiscall mmRaceSpeech::LoadVehicleUnlock(char *) | ?LoadVehicleUnlock@mmRaceSpeech@@QAE_NPAD@Z
    0x51ABC0 | public: bool __thiscall mmRaceSpeech::LoadTextureUnlock(char *) | ?LoadTextureUnlock@mmRaceSpeech@@QAE_NPAD@Z
    0x51AC00 | public: bool __thiscall mmRaceSpeech::LoadPreRace(char *) | ?LoadPreRace@mmRaceSpeech@@QAE_NPAD@Z
    0x51AC40 | public: bool __thiscall mmRaceSpeech::LoadResults(char *) | ?LoadResults@mmRaceSpeech@@QAE_NPAD@Z
    0x51AC80 | public: bool __thiscall mmRaceSpeech::LoadGroup(char *,int) | ?LoadGroup@mmRaceSpeech@@QAE_NPADH@Z
    0x51AF10 | private: void __thiscall mmRaceSpeech::CheckRaceLoadSanity(float,int) | ?CheckRaceLoadSanity@mmRaceSpeech@@AAEXMH@Z
    0x51AF20 | private: bool __thiscall mmRaceSpeech::SetReadState(char *,float,int *) | ?SetReadState@mmRaceSpeech@@AAE_NPADMPAH@Z
    0x51B300 | private: int __thiscall mmRaceSpeech::locstrnicmp(char *,char *) | ?locstrnicmp@mmRaceSpeech@@AAEHPAD0@Z
    public: void __thiscall mmRaceSpeech::AddWidgets(class bkBank &) | ?AddWidgets@mmRaceSpeech@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall mmRaceSpeech::`scalar deleting destructor'(unsigned int) | ??_GmmRaceSpeech@@UAEPAXI@Z
    public: virtual void * __thiscall mmRaceSpeech::`vector deleting destructor'(unsigned int) | ??_EmmRaceSpeech@@UAEPAXI@Z
    const mmRaceSpeech::`vftable' | ??_7mmRaceSpeech@@6B@
*/

// #include "hooking.h"
