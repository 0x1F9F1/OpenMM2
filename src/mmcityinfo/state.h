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
    mmcityinfo:state

    0x523310 | public: void __thiscall mmStatePack::SetDefaults(char *,char *) | ?SetDefaults@mmStatePack@@QAEXPAD0@Z
    0x523590 | public: bool __thiscall mmStatePack::ParseStateArgs(void) | ?ParseStateArgs@mmStatePack@@QAE_NXZ
    0x5235A0 | public: __thiscall NetStartArray::NetStartArray(void) | ??0NetStartArray@@QAE@XZ
    0x5235B0 | public: __thiscall NetStartArray::~NetStartArray(void) | ??1NetStartArray@@QAE@XZ
    0x5235C0 | public: void __thiscall NetStartArray::Clear(void) | ?Clear@NetStartArray@@QAEXXZ
    0x5235D0 | public: int __thiscall NetStartArray::GetIndex(unsigned long) | ?GetIndex@NetStartArray@@QAEHK@Z
    0x5235F0 | public: void __thiscall NetStartArray::ClearIndex(unsigned long) | ?ClearIndex@NetStartArray@@QAEXK@Z
    0x523610 | public: int __thiscall NetStartArray::AssignOpenIndex(unsigned long) | ?AssignOpenIndex@NetStartArray@@QAEHK@Z
    0x523650 | public: void __thiscall NetStartArray::Init(unsigned long *) | ?Init@NetStartArray@@QAEXPAK@Z
    0x5237B0 | public: __thiscall mmStatePack::~mmStatePack(void) | ??1mmStatePack@@QAE@XZ
    0x523800 | public: __thiscall mmStatePack::mmStatePack(void) | ??0mmStatePack@@QAE@XZ
    0x523850 | public: virtual __thiscall mmPlayerData::~mmPlayerData(void) | ??1mmPlayerData@@UAE@XZ
    0x5238B0 | public: virtual void * __thiscall mmPlayerData::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerData@@UAEPAXI@Z
    public: virtual void * __thiscall mmPlayerData::`vector deleting destructor'(unsigned int) | ??_EmmPlayerData@@UAEPAXI@Z
    0x5B51F8 | const mmPlayerData::`vftable' | ??_7mmPlayerData@@6B@
    class mmStatePack MMSTATE | ?MMSTATE@@3VmmStatePack@@A
    0x6B19F8 | class mmPlayerData MMCURRPLAYER | ?MMCURRPLAYER@@3VmmPlayerData@@A
*/

#include "hooking.h"

#include "city/state.h"

class NetStartArray
{
public:
    uint32_t Slots[10];

    NetStartArray();
    ~NetStartArray();

    void Clear();
};

check_size(NetStartArray, 0x28);

class mmStatePack
    : public dgStatePack
{
public:
    char CityName[40];
    char CityLocale[40]; // same as city name, referred to as 'locale'?
    char ReplayName[40];

    int VehicleId;

    int InputDevice;
    int unk_EC; // seems heavily tied into multiplayer, but also has singleplayer uses?

    BOOL CopsChaseAI; // cops will chase after opponents
    int unk_F4; // unused

    BOOL Shutdown; // stop the process

                   /*
                   Player settings
                   */

    float Difficulty; // based on the SkillLevel
    int TransmissionType;
    float PhysicsRealism; // unused :(
    BOOL UseForceFeedback;
    BOOL DisableProfile;

    char VehicleName[80];
    int VehiclePaintjob;

    char NetName[80];

    /*
    Race settings?
    */

    float TimeLimit;

    int GameState; // -1 = ???, 0 = main menu, 1 = race
    BOOL DisableRegen; // educated guess based on a skipped call to mmPlayer::UpdateRegen if true

                       /*
                       Audio settings
                       */

    float SoundFXVolume;
    float AudioBalance;
    float MusicVolume;
    short NumAudioChannels;
    short unk_1CE[10]; // unused -- not sure what this might've been
    char AudioDeviceName[200];
    bool HasMusicCD; // allow use of music player if true

                     /*
                     Cops 'n Robbers settings
                     */

    int CnRMode;
    int CnRLimitType;
    int CnRTeam;
    float CnRTimeLimit;
    int CnRPointLimit;
    int CnRGoldMass;

    /*
    Unknown settings (unused)
    */

    int unk_2C4; // default: 0
    int unk_2C8; // default: 0
    char unk_2CC[160];

    /*
    View settings (NAMES NEED CONFIRMATION!)
    */

    bool unk_36C;
    char MapMode;
    bool UseWideFOV;
    bool ShowDash;

    bool ShowMirror;
    bool unk_371;
    bool unk_372;
    bool ShowIcons;

    bool unk_374;
    bool unk_375;
    bool HudOrient;
    bool HudZoomIn;

    /*
    Graphics settings
    */

    BOOL BestTextureFilter; // MM1 - unused
    BOOL InterlacedRendering; // MM1 - unused
    float FarClip;
    BOOL EnableSky;
    float LightingQuality;
    BOOL UsePortals;
    int ObjectDetail;
    BOOL EnableReflections; // vehicle reflections
    int CloudShadowQuality;

    /*
    Cheat settings?
    */

    BOOL IsCheating; // true if player entered a cheatcode
    float TimeLimitOverride; // overrides TimeLimit when > 0
    BOOL UnlockRewards; // only works on startup

                        /*
                        Multiplayer settings
                        */

    bool AllowCheaters; // don't check tuning CRC
    bool ShowMultiplayerResults; // display results at end of multiplayer
    bool IsHost; // unconfirmed
    bool UseDialup;

    /*
    Global settings?
    */

    BOOL UseIME;
    HIMC IMEContext;

    bool InCrashCourse;

    NetStartArray NetStartArray;

    mmStatePack();
    ~mmStatePack();

    void SetDefaults(const char* level, const char* car);
    bool ParseStateArgs(void);
};

extern const char* dgGameModeNames[7];

// Guess
check_size(mmStatePack, 0x3E0);

inline_var(0x6B1610, mmStatePack, MMSTATE);
