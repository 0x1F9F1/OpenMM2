#include "stdafx.h"
#include "mmStatePack.h"

defnvar(0x6B1610, MMSTATE);
defnvar(0x6276F8, dgStatePack::Instance);

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
    return stub<thiscall_t<void, mmStatePack, const char*, const char*>>(0x523310, this, level, car);
}

bool mmStatePack::ParseStateArgs(void)
{
    return false;
}

dgStatePack::dgStatePack()
{
    memset(this, 0, sizeof(dgStatePack));

    this->MaxAmbientPedestrians = 0;
    this->EnablePedestrians = 0;
    this->NumberOfCTFRacers = 0;
    this->unk_68 = 0;
    this->TextureQuality = 1;
    this->unk_50 = 99;
    this->TrafficDensity = 1.0f;
    this->PedestrianDensity = 1.0f;
    this->MaxAmbientVehicles = 100;
    this->EnableCableCars = 1;
    this->EnableSubways = 1;
    this->CopDensity = 1.0f;
    this->OpponentDensity = 8.0f;
    this->unk_18 = 1.0f;
    this->unk_1C = 1.0f;
    this->unk_20 = 1.0f;
    this->unk_24 = 1;

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
