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
    mmgame:replay

    0x406870 | public: __thiscall mmReplayManager::mmReplayManager(void) | ??0mmReplayManager@@QAE@XZ
    0x406930 | public: virtual __thiscall mmReplayManager::~mmReplayManager(void) | ??1mmReplayManager@@UAE@XZ
    0x406990 | public: virtual void __thiscall mmReplayManager::Reset(void) | ?Reset@mmReplayManager@@UAEXXZ
    0x4069E0 | public: virtual void __thiscall mmReplayManager::Update(void) | ?Update@mmReplayManager@@UAEXXZ
    0x406DF0 | public: virtual void __thiscall mmReplayManager::Cull(void) | ?Cull@mmReplayManager@@UAEXXZ
    0x406E00 | private: void __thiscall mmReplayManager::ProcessCam(void) | ?ProcessCam@mmReplayManager@@AAEXXZ
    0x406E80 | private: void __thiscall mmReplayManager::StartReplay(void) | ?StartReplay@mmReplayManager@@AAEXXZ
    0x406EF0 | public: void __thiscall mmReplayManager::SetReplayDesc(char *) | ?SetReplayDesc@mmReplayManager@@QAEXPAD@Z
    0x406F30 | public: int __thiscall mmReplayManager::LoadReplayDesc(char *) | ?LoadReplayDesc@mmReplayManager@@QAEHPAD@Z
    0x407000 | public: void __thiscall mmReplayManager::LoadReplay(char *) | ?LoadReplay@mmReplayManager@@QAEXPAD@Z
    0x407130 | public: bool __thiscall mmReplayManager::EndOfReplay(void) | ?EndOfReplay@mmReplayManager@@QAE_NXZ
    0x407150 | public: void __thiscall mmReplayManager::SaveReplayDesc(char *) | ?SaveReplayDesc@mmReplayManager@@QAEXPAD@Z
    0x4071E0 | public: void __thiscall mmReplayManager::SaveReplay(char *) | ?SaveReplay@mmReplayManager@@QAEXPAD@Z
    0x4072D0 | public: float __thiscall mmReplayManager::GetBrakes(void) | ?GetBrakes@mmReplayManager@@QAEMXZ
    0x407300 | public: float __thiscall mmReplayManager::GetHandBrakes(void) | ?GetHandBrakes@mmReplayManager@@QAEMXZ
    0x407330 | public: float __thiscall mmReplayManager::GetSteering(void) | ?GetSteering@mmReplayManager@@QAEMXZ
    0x407360 | public: float __thiscall mmReplayManager::GetThrottle(void) | ?GetThrottle@mmReplayManager@@QAEMXZ
    0x407390 | public: void __thiscall mmReplayManager::GetData(int *,bool *) | ?GetData@mmReplayManager@@QAEXPAHPA_N@Z
    0x4073D0 | public: void __thiscall mmReplayManager::SetData(int,bool) | ?SetData@mmReplayManager@@QAEXH_N@Z
    public: void __thiscall mmReplayManager::AddWidgets(class bkBank *) | ?AddWidgets@mmReplayManager@@QAEXPAVbkBank@@@Z
    0x407410 | private: void __thiscall mmReplayManager::GetReplayInfo(void) | ?GetReplayInfo@mmReplayManager@@AAEXXZ
    0x4075A0 | private: void __thiscall mmReplayManager::SetReplayInfo(void) | ?SetReplayInfo@mmReplayManager@@AAEXXZ
    0x407720 | private: void __thiscall mmReplayManager::WriteReplayInfo(class Stream *) | ?WriteReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    0x407920 | private: void __thiscall mmReplayManager::ReadReplayInfo(class Stream *) | ?ReadReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    0x407B10 | public: virtual void * __thiscall mmReplayManager::`scalar deleting destructor'(unsigned int) | ??_GmmReplayManager@@UAEPAXI@Z
    public: virtual void * __thiscall mmReplayManager::`vector deleting destructor'(unsigned int) | ??_EmmReplayManager@@UAEPAXI@Z
    0x407B40 | public: virtual char * __thiscall asNode::GetClassName(void) | ?GetClassName@asNode@@UAEPADXZ
    0x5B0444 | const mmReplayManager::`vftable' | ??_7mmReplayManager@@6B@
    0x627248 | private: static class mmReplayManager * mmReplayManager::Instance | ?Instance@mmReplayManager@@0PAV1@A
*/

#include "hooking.h"

#include "node/node.h"
#include "vector/vector4.h"

class Stream;

class mmPlayer;

struct mmReplayData
{
    float Delta;
    float ElapsedTime;
    char Steering;
    char Brakes;
    char Throttle;
    char HandBrakes;
    char data;
    char field_D;
    char field_E;
    char field_F;
};

class mmReplayManager
    : public asNode
{
public:
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    char field_1C;
    char field_1D;
    char field_1E;
    char field_1F;
    uint32_t CurrentFrame;
    int FrameCount;
    uint8_t field_28;
    uint8_t pad29[3];
    int field_2C;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    mmPlayer* Player;
    float field_38;
    float field_3C;
    uint16_t field_40;
    char SomeBuffer[80];
    uint16_t field_92;
    Vector4 CameraPoints[100];
    int field_6D4;
    int RandSeed;
    char CityName[40];
    char CityName2[40];
    uint32_t VehicleID;
    uint32_t dword730;
    uint32_t dword734;
    uint32_t RaceID;
    uint32_t dword73C;
    uint32_t dword740;
    float TrafficDensity;
    float PedestrianDensity;
    float CopDensity;
    float OpponentDensity;
    float float754;
    uint32_t WeatherType;
    uint32_t TimeOfDay;
    char VehicleName[80];
    uint32_t VehiclePaintJob;
    char NetName[80];
    float RaceTimeLimit;
    float float808;
    uint32_t dword80C;
    uint32_t dword810;
    uint32_t dword814;
    uint32_t dword818;
    uint32_t dword81C;
    uint32_t MMState;
    uint32_t dword824;
    uint32_t dword828;
    int field_82C;
    int field_830;
    uint32_t dword834;
    uint32_t dword838;
    uint32_t dword83C;

    mmReplayManager();
    ~mmReplayManager();

    void LoadReplay(char * name);
    void ReadReplayInfo(Stream * stream);
    void SetReplayInfo();
    void StartReplay();

    inline_var(0x627248, mmReplayManager*, Instance);
};

check_size(mmReplayManager, 0x840);
