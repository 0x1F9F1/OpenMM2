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

#include "state.h"

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
