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

#include "train.h"

gizTrainCar::gizTrainCar()
{
    unimplemented();
}

gizTrainCar::~gizTrainCar()
{
    unimplemented();
}

void gizTrainCar::Init(char* arg1, class dgPath* arg2, f32 arg3)
{
    return stub<thiscall_t<void, gizTrainCar*, char*, class dgPath*, f32>>(0x578970, this, arg1, arg2, arg3);
}

bool gizTrainCar::IsFirstStop()
{
    return stub<thiscall_t<bool, gizTrainCar*>>(0x578B20, this);
}

bool gizTrainCar::IsLastStop()
{
    return stub<thiscall_t<bool, gizTrainCar*>>(0x578B30, this);
}

void gizTrainCar::Reset(i32 arg1)
{
    return stub<thiscall_t<void, gizTrainCar*, i32>>(0x578930, this, arg1);
}

u32 gizTrainCar::SizeOf()
{
    return stub<thiscall_t<u32, gizTrainCar*>>(0x579250, this);
}

void gizTrainCar::Update(f32 arg1)
{
    return stub<thiscall_t<void, gizTrainCar*, f32>>(0x578A30, this, arg1);
}

gizTrain::gizTrain()
{
    unimplemented();
}

gizTrain::~gizTrain()
{
    unimplemented();
}

void gizTrain::CalcTrainAccel()
{
    return stub<thiscall_t<void, gizTrain*>>(0x578CC0, this);
}

bool gizTrain::InStation()
{
    return stub<thiscall_t<bool, gizTrain*>>(0x578EF0, this);
}

void gizTrain::Init(char* arg1, class dgPath* arg2)
{
    return stub<thiscall_t<void, gizTrain*, char*, class dgPath*>>(0x578C60, this, arg1, arg2);
}

void gizTrain::Reset()
{
    return stub<thiscall_t<void, gizTrain*>>(0x578C20, this);
}

void gizTrain::Update()
{
    return stub<thiscall_t<void, gizTrain*>>(0x578CD0, this);
}

gizTrainMgr::gizTrainMgr()
{
    unimplemented();
}

gizTrainMgr::~gizTrainMgr()
{
    unimplemented();
}

bool gizTrainMgr::Init(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, gizTrainMgr*, char*, char*, char*>>(0x579020, this, arg1, arg2, arg3);
}

void gizTrainMgr::Reset()
{
    return stub<thiscall_t<void, gizTrainMgr*>>(0x578FF0, this);
}

void gizTrainMgr::Update()
{
    return stub<thiscall_t<void, gizTrainMgr*>>(0x579170, this);
}

void gizTrainMgr::ApplyTuning()
{
    return stub<thiscall_t<void, gizTrainMgr*>>(0x5791B0, this);
}

define_dummy_symbol(gizmo_train);
