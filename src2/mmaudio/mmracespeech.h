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

class mmRaceSpeech : AudSpeech
{
public:
    // 0x51A4E0 | ??0mmRaceSpeech@@QAE@XZ
    inline mmRaceSpeech()
    {
        stub<member_func_t<void, mmRaceSpeech>>(0x51A4E0, this);
    }

    // 0x51A590 | ?PlayPreRace@mmRaceSpeech@@QAEXXZ
    inline void PlayPreRace()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A590, this);
    }

    // 0x51A660 | ?PlayUnlockRace@mmRaceSpeech@@QAEXXZ
    inline void PlayUnlockRace()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A660, this);
    }

    // 0x51A6C0 | ?PlayUnlockVehicle@mmRaceSpeech@@QAEXXZ
    inline void PlayUnlockVehicle()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A6C0, this);
    }

    // 0x51A720 | ?PlayUnlockTexture@mmRaceSpeech@@QAEXXZ
    inline void PlayUnlockTexture()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A720, this);
    }

    // 0x51A750 | ?PlayFinalCheckPoint@mmRaceSpeech@@QAEXXZ
    inline void PlayFinalCheckPoint()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A750, this);
    }

    // 0x51A780 | ?PlayFinalLap@mmRaceSpeech@@QAEXXZ
    inline void PlayFinalLap()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A780, this);
    }

    // 0x51A7A0 | ?PlayDamagePenalty@mmRaceSpeech@@QAEXXZ
    inline void PlayDamagePenalty()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A7A0, this);
    }

    // 0x51A7D0 | ?PlayRaceProgress@mmRaceSpeech@@QAEXXZ
    inline void PlayRaceProgress()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A7D0, this);
    }

    // 0x51A800 | ?PlayResults@mmRaceSpeech@@QAEXHH@Z
    inline void PlayResults(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmRaceSpeech, i32, i32>>(0x51A800, this, arg1, arg2);
    }

    // 0x51A840 | ?PlayResultsPoor@mmRaceSpeech@@QAEXXZ
    inline void PlayResultsPoor()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A840, this);
    }

    // 0x51A890 | ?PlayResultsWin@mmRaceSpeech@@QAEXXZ
    inline void PlayResultsWin()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A890, this);
    }

    // 0x51A8E0 | ?PlayResultsMid@mmRaceSpeech@@QAEXXZ
    inline void PlayResultsMid()
    {
        return stub<member_func_t<void, mmRaceSpeech>>(0x51A8E0, this);
    }

    // 0x51A930 | ?LoadCityInfo@mmRaceSpeech@@QAE_NPAD@Z
    inline bool LoadCityInfo(char* arg1)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*>>(0x51A930, this, arg1);
    }

    // 0x51AB80 | ?LoadVehicleUnlock@mmRaceSpeech@@QAE_NPAD@Z
    inline bool LoadVehicleUnlock(char* arg1)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*>>(0x51AB80, this, arg1);
    }

    // 0x51ABC0 | ?LoadTextureUnlock@mmRaceSpeech@@QAE_NPAD@Z
    inline bool LoadTextureUnlock(char* arg1)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*>>(0x51ABC0, this, arg1);
    }

    // 0x51AC00 | ?LoadPreRace@mmRaceSpeech@@QAE_NPAD@Z
    inline bool LoadPreRace(char* arg1)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*>>(0x51AC00, this, arg1);
    }

    // 0x51AC40 | ?LoadResults@mmRaceSpeech@@QAE_NPAD@Z
    inline bool LoadResults(char* arg1)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*>>(0x51AC40, this, arg1);
    }

    // 0x51AC80 | ?LoadGroup@mmRaceSpeech@@QAE_NPADH@Z
    inline bool LoadGroup(char* arg1, i32 arg2)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*, i32>>(0x51AC80, this, arg1, arg2);
    }

    // 0x51AF10 | ?CheckRaceLoadSanity@mmRaceSpeech@@AAEXMH@Z
    inline void CheckRaceLoadSanity(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmRaceSpeech, f32, i32>>(0x51AF10, this, arg1, arg2);
    }

    // 0x51AF20 | ?SetReadState@mmRaceSpeech@@AAE_NPADMPAH@Z
    inline bool SetReadState(char* arg1, f32 arg2, i32* arg3)
    {
        return stub<member_func_t<bool, mmRaceSpeech, char*, f32, i32*>>(0x51AF20, this, arg1, arg2, arg3);
    }

    // 0x51B300 | ?locstrnicmp@mmRaceSpeech@@AAEHPAD0@Z
    inline i32 locstrnicmp(char* arg1, char* arg2)
    {
        return stub<member_func_t<i32, mmRaceSpeech, char*, char*>>(0x51B300, this, arg1, arg2);
    }
};
