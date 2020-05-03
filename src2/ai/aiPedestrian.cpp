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

#include "aiPedestrian.h"

aiPedestrian::aiPedestrian()
{
    unimplemented();
}

aiPedestrian::~aiPedestrian()
{
    unimplemented();
}

void aiPedestrian::DrawDebug()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550EB0, this);
}

void aiPedestrian::Dump()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550C40, this);
}

void aiPedestrian::Go()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550C20, this);
}

void aiPedestrian::Init(char* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPedestrian*, char*, i32, i32>>(0x54B0D0, this, arg1, arg2, arg3);
}

void aiPedestrian::QuickDump()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550DE0, this);
}

void aiPedestrian::ReplayDebug()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550EA0, this);
}

void aiPedestrian::Reset()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550BF0, this);
}

void aiPedestrian::Reset(class aiPath* arg1, i32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class aiPath*, i32>>(0x54B5C0, this, arg1, arg2);
}

void aiPedestrian::Stop()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x550C00, this);
}

void aiPedestrian::Update()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54B9C0, this);
}

i32 aiPedestrian::Accident()
{
    return stub<thiscall_t<i32, aiPedestrian*>>(0x54CCC0, this);
}

void aiPedestrian::Anticipate()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54D100, this);
}

void aiPedestrian::Avoid(f32* arg1)
{
    return stub<thiscall_t<void, aiPedestrian*, f32*>>(0x54D8D0, this, arg1);
}

void aiPedestrian::AvoidBanger(class lvlInstance* arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class lvlInstance*, f32>>(0x54FE50, this, arg1, arg2);
}

void aiPedestrian::AvoidObstacle(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class Vector3 const&, f32>>(0x54FF90, this, arg1, arg2);
}

void aiPedestrian::AvoidPedCollision(class aiPedestrian* arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class aiPedestrian*, f32>>(0x54FEC0, this, arg1, arg2);
}

void aiPedestrian::AvoidPlayer(class Vector3& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class Vector3&, f32>>(0x54FDE0, this, arg1, arg2);
}

void aiPedestrian::CalcCurve(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiPedestrian*, i32, i32, f32>>(0x5504A0, this, arg1, arg2, arg3);
}

void aiPedestrian::ComputeCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<thiscall_t<void, aiPedestrian*, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x5509D0, this, arg1, arg2, arg3, arg4);
}

void aiPedestrian::CrossStreet()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54C4F0, this);
}

i32 aiPedestrian::DetectBangerCollision(class lvlInstance** arg1, f32* arg2)
{
    return stub<thiscall_t<i32, aiPedestrian*, class lvlInstance**, f32*>>(0x54F800, this, arg1, arg2);
}

i32 aiPedestrian::DetectPedCollision(f32 arg1, class aiPedestrian** arg2, f32* arg3)
{
    return stub<thiscall_t<i32, aiPedestrian*, f32, class aiPedestrian**, f32*>>(0x54FA00, this, arg1, arg2, arg3);
}

i32 aiPedestrian::DetectPlayerAnticipate(f32* arg1, f32* arg2)
{
    return stub<thiscall_t<i32, aiPedestrian*, f32*, f32*>>(0x54E8C0, this, arg1, arg2);
}

i32 aiPedestrian::DetectPlayerCollision(f32* arg1)
{
    return stub<thiscall_t<i32, aiPedestrian*, f32*>>(0x54F720, this, arg1);
}

i32 aiPedestrian::DetectPlayerForwardCollision(f32* arg1, f32* arg2)
{
    return stub<thiscall_t<i32, aiPedestrian*, f32*, f32*>>(0x54E680, this, arg1, arg2);
}

class aiPath* aiPedestrian::GetRoadToLeft()
{
    return stub<thiscall_t<class aiPath*, aiPedestrian*>>(0x54F6A0, this);
}

class aiPath* aiPedestrian::GetRoadToRight()
{
    return stub<thiscall_t<class aiPath*, aiPedestrian*>>(0x54F620, this);
}

class aiPath* aiPedestrian::PickNextRdSeg()
{
    return stub<thiscall_t<class aiPath*, aiPedestrian*>>(0x54F390, this);
}

void aiPedestrian::PreCrossStreet()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54BFA0, this);
}

f32 aiPedestrian::RoadDistance()
{
    return stub<thiscall_t<f32, aiPedestrian*>>(0x54EAE0, this);
}

class aiPath* aiPedestrian::SetNextRoad()
{
    return stub<thiscall_t<class aiPath*, aiPedestrian*>>(0x54F310, this);
}

void aiPedestrian::SolvePosition(class Vector3& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiPedestrian*, class Vector3&, f32>>(0x550BA0, this, arg1, arg2);
}

void aiPedestrian::SolveRoadSegment(f32 arg1)
{
    return stub<thiscall_t<void, aiPedestrian*, f32>>(0x54F1D0, this, arg1);
}

void aiPedestrian::SolveTargetPoint(f32 arg1)
{
    return stub<thiscall_t<void, aiPedestrian*, f32>>(0x550400, this, arg1);
}

f32 aiPedestrian::TimeToCollision(f32 arg1)
{
    return stub<thiscall_t<f32, aiPedestrian*, f32>>(0x54E650, this, arg1);
}

i32 aiPedestrian::UpcomingAccident()
{
    return stub<thiscall_t<i32, aiPedestrian*>>(0x54F340, this);
}

void aiPedestrian::WaitCrossStreet()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54C6F0, this);
}

void aiPedestrian::Wander()
{
    return stub<thiscall_t<void, aiPedestrian*>>(0x54CDB0, this);
}

define_dummy_symbol(ai_aiPedestrian);
