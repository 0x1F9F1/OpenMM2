#pragma once

#include "asNode.h"
#include "Vector.h"

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
