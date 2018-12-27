#include "stdafx.h"
#include "mmStatePack.h"

const char* dgGameModeNames[7] =
{
    "roam", "race%d", "multicop", "circuit%d", "blitz%d", "croam", "crash%d"
};

mmStatePack::mmStatePack()
{
    // Uninitlaized data is fun.
}

mmStatePack::~mmStatePack()
{
}

void mmStatePack::SetDefaults(const char* level, const char* car)
{
    stub<thiscall_t<void, mmStatePack, const char*, const char*>>(0x523310, this, level, car);

    strcpy_s(AudioDeviceName, "Primary Sound Driver");
}

bool mmStatePack::ParseStateArgs(void)
{
    return false;
}

dgStatePack::dgStatePack()
{
    memset(this, 0, sizeof(dgStatePack));

    MaxAmbientPedestrians = 0;
    EnablePedestrians = 0;
    NumberOfCTFRacers = 0;
    unk_68 = 0;
    TextureQuality = 1;
    unk_50 = 99;
    TrafficDensity = 1.0f;
    PedestrianDensity = 1.0f;
    MaxAmbientVehicles = 100;
    EnableCableCars = 1;
    EnableSubways = 1;
    CopDensity = 1.0f;
    OpponentDensity = 8.0f;
    unk_18 = 1.0f;
    unk_1C = 1.0f;
    unk_20 = 1.0f;
    unk_24 = 1;

    dgStatePack::Instance = this;
}

dgStatePack::~dgStatePack()
{
    dgStatePack::Instance = 0;
}

NetStartArray::NetStartArray()
{
    Clear();
}

NetStartArray::~NetStartArray()
{
    Clear();
}

void NetStartArray::Clear()
{
    memset(Slots, 0, sizeof(Slots));
}
