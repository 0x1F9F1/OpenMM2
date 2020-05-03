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

#include "ageaudio/audspeech.h"

/*
    mmaudio:mmccspeech

    0x51B810 | public: __thiscall mmCCSpeech::mmCCSpeech(void) | ??0mmCCSpeech@@QAE@XZ
    0x51B860 | public: virtual __thiscall mmCCSpeech::~mmCCSpeech(void) | ??1mmCCSpeech@@UAE@XZ
    0x51B900 | public: void __thiscall mmCCSpeech::PlayPreRace(void) | ?PlayPreRace@mmCCSpeech@@QAEXXZ
    0x51B950 | public: void __thiscall mmCCSpeech::PlayUnlock(void) | ?PlayUnlock@mmCCSpeech@@QAEXXZ
    0x51B970 | public: void __thiscall mmCCSpeech::PlayCheckPoint(int,float) | ?PlayCheckPoint@mmCCSpeech@@QAEXHM@Z
    0x51B9B0 | public: void __thiscall mmCCSpeech::PlayResults(int) | ?PlayResults@mmCCSpeech@@QAEXH@Z
    0x51B9D0 | public: void __thiscall mmCCSpeech::PlayResultsPoor(void) | ?PlayResultsPoor@mmCCSpeech@@QAEXXZ
    0x51B9F0 | public: void __thiscall mmCCSpeech::PlayResultsWin(void) | ?PlayResultsWin@mmCCSpeech@@QAEXXZ
    0x51BA10 | public: bool __thiscall mmCCSpeech::SetSubPath(char *) | ?SetSubPath@mmCCSpeech@@QAE_NPAD@Z
    0x51BAC0 | public: bool __thiscall mmCCSpeech::LoadUnlock(char *) | ?LoadUnlock@mmCCSpeech@@QAE_NPAD@Z
    0x51BB00 | public: bool __thiscall mmCCSpeech::LoadPreRace(char *) | ?LoadPreRace@mmCCSpeech@@QAE_NPAD@Z
    0x51BB40 | public: bool __thiscall mmCCSpeech::LoadResults(char *) | ?LoadResults@mmCCSpeech@@QAE_NPAD@Z
    0x51BB80 | public: bool __thiscall mmCCSpeech::LoadGroup(char *,int) | ?LoadGroup@mmCCSpeech@@QAE_NPADH@Z
    0x51BDB0 | public: bool __thiscall mmCCSpeech::LoadCheckPointIndexInfo(char *) | ?LoadCheckPointIndexInfo@mmCCSpeech@@QAE_NPAD@Z
    0x51BF40 | private: void __thiscall mmCCSpeech::CheckRaceLoadSanity(float,int) | ?CheckRaceLoadSanity@mmCCSpeech@@AAEXMH@Z
    0x51BF50 | private: bool __thiscall mmCCSpeech::SetReadState(char *,float,int *) | ?SetReadState@mmCCSpeech@@AAE_NPADMPAH@Z
    0x51C0D0 | private: int __thiscall mmCCSpeech::locstrnicmp(char *,char *) | ?locstrnicmp@mmCCSpeech@@AAEHPAD0@Z
    public: void __thiscall mmCCSpeech::AddWidgets(class bkBank &) | ?AddWidgets@mmCCSpeech@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall mmCCSpeech::`scalar deleting destructor'(unsigned int) | ??_GmmCCSpeech@@UAEPAXI@Z
    public: virtual void * __thiscall mmCCSpeech::`vector deleting destructor'(unsigned int) | ??_EmmCCSpeech@@UAEPAXI@Z
    const mmCCSpeech::`vftable' | ??_7mmCCSpeech@@6B@
*/

class mmCCSpeech : public AudSpeech
{
public:
    // 0x51B810 | ??0mmCCSpeech@@QAE@XZ
    mmCCSpeech();

    // 0x51B860 | ??1mmCCSpeech@@UAE@XZ
    ~mmCCSpeech();

    // 0x51BDB0 | ?LoadCheckPointIndexInfo@mmCCSpeech@@QAE_NPAD@Z
    bool LoadCheckPointIndexInfo(char* arg1);

    // 0x51BB80 | ?LoadGroup@mmCCSpeech@@QAE_NPADH@Z
    bool LoadGroup(char* arg1, i32 arg2);

    // 0x51BB00 | ?LoadPreRace@mmCCSpeech@@QAE_NPAD@Z
    bool LoadPreRace(char* arg1);

    // 0x51BB40 | ?LoadResults@mmCCSpeech@@QAE_NPAD@Z
    bool LoadResults(char* arg1);

    // 0x51BAC0 | ?LoadUnlock@mmCCSpeech@@QAE_NPAD@Z
    bool LoadUnlock(char* arg1);

    // 0x51B970 | ?PlayCheckPoint@mmCCSpeech@@QAEXHM@Z
    void PlayCheckPoint(i32 arg1, f32 arg2);

    // 0x51B900 | ?PlayPreRace@mmCCSpeech@@QAEXXZ
    void PlayPreRace();

    // 0x51B9B0 | ?PlayResults@mmCCSpeech@@QAEXH@Z
    void PlayResults(i32 arg1);

    // 0x51B9D0 | ?PlayResultsPoor@mmCCSpeech@@QAEXXZ
    void PlayResultsPoor();

    // 0x51B9F0 | ?PlayResultsWin@mmCCSpeech@@QAEXXZ
    void PlayResultsWin();

    // 0x51B950 | ?PlayUnlock@mmCCSpeech@@QAEXXZ
    void PlayUnlock();

    // 0x51BA10 | ?SetSubPath@mmCCSpeech@@QAE_NPAD@Z
    bool SetSubPath(char* arg1);

private:
    // 0x51BF40 | ?CheckRaceLoadSanity@mmCCSpeech@@AAEXMH@Z
    void CheckRaceLoadSanity(f32 arg1, i32 arg2);

    // 0x51BF50 | ?SetReadState@mmCCSpeech@@AAE_NPADMPAH@Z
    bool SetReadState(char* arg1, f32 arg2, i32* arg3);

    // 0x51C0D0 | ?locstrnicmp@mmCCSpeech@@AAEHPAD0@Z
    i32 locstrnicmp(char* arg1, char* arg2);
};

check_size(mmCCSpeech, 0xA0);
