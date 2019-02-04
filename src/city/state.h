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
    city:state

    0x443110 | public: __thiscall dgStatePack::dgStatePack(void) | ??0dgStatePack@@QAE@XZ
    0x443180 | public: __thiscall dgStatePack::~dgStatePack(void) | ??1dgStatePack@@QAE@XZ
    0x443190 | public: void __thiscall dgStatePack::InitFromArgs(void) | ?InitFromArgs@dgStatePack@@QAEXXZ
    0x5C56AC | char const * * dgGameModeNames | ?dgGameModeNames@@3PAPBDA
    0x6276F8 | public: static struct dgStatePack * dgStatePack::Instance | ?Instance@dgStatePack@@2PAU1@A
*/

#include "hooking.h"

#include "minwin.h"

enum dgGameMode : uint32_t
{
    Cruise,
    Checkpoint,
    CnR,
    Circuit,
    Blitz,
    CRoam, // unused
    CrashCourse,
};

enum dgSkillLevel : uint32_t
{
    Amateur,
    Professional,
};

class dgStatePack
{
public:
    dgGameMode GameMode;

    int RaceId;

    float TrafficDensity;
    float PedestrianDensity;
    float CopDensity;
    float OpponentDensity;

    /* ---- MC1 leftovers ---- */
    float unk_18; // unused (default: 0.5)
    float unk_1C; // unused (default: 0.5)
    float unk_20; // unused (default: 0.5)
    bool unk_24;  // unused (default: 1)

    int NumberOfCTFRacers; // default: 0
                           /* ----------------------- */

    BOOL DisableAI;

    int unk_30; // unused
    int MaxAmbientVehicles;
    int MaxAmbientPedestrians; // unused -- assumed name (default: 100)
    int unk_3C; // unused

    BOOL EnableCableCars;
    BOOL EnableSubways;

    int NumLaps;

    int TextureQuality;
    int unk_50; // unused (default: 99)

    int TimeOfDay;
    int WeatherType;
    dgSkillLevel SkillLevel;

    // 0x1 | Sound Enabled
    // 0x4 | CD Player Enabled
    int AudioFlags;

    BOOL EnablePedestrians;
    void *unk_68; // related to hookmen

    dgStatePack();
    ~dgStatePack();

    static inline extern_var(0x6276F8, dgStatePack*, Instance);
};

check_size(dgStatePack, 0x6C);
