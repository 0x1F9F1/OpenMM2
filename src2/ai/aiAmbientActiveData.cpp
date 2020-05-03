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

#include "aiAmbientActiveData.h"

aiVehicleData::aiVehicleData()
{
    unimplemented();
}

aiVehicleData::~aiVehicleData()
{
    unimplemented();
}

void aiVehicleData::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, aiVehicleData*, class datParser&>>(0x56F7C0, this, arg1);
}

char* aiVehicleData::GetClassName()
{
    return stub<thiscall_t<char*, aiVehicleData*>>(0x56F940, this);
}

char const* aiVehicleData::GetDirName()
{
    return stub<thiscall_t<char const*, aiVehicleData*>>(0x56F950, this);
}

void aiVehicleData::SetFricElas()
{
    return stub<thiscall_t<void, aiVehicleData*>>(0x56F790, this);
}

define_dummy_symbol(ai_aiAmbientActiveData);
