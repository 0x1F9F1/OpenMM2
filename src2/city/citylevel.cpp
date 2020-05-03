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

#include "citylevel.h"

cityTimeWeatherLighting::cityTimeWeatherLighting()
{
    unimplemented();
}

void cityTimeWeatherLighting::ComputeAmbientLightLevels()
{
    return stub<thiscall_t<void, cityTimeWeatherLighting*>>(0x443300, this);
}

void cityTimeWeatherLighting::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, cityTimeWeatherLighting*, class datParser&>>(0x443440, this, arg1);
}

void LoadCityTimeWeatherLighting()
{
    return stub<cdecl_t<void>>(0x443530);
}

cityLevel::cityLevel()
{
    unimplemented();
}

cityLevel::~cityLevel()
{
    unimplemented();
}

bool cityLevel::Collide(i32 arg1, class lvlSegment& arg2, class lvlIntersection* arg3)
{
    return stub<thiscall_t<bool, cityLevel*, i32, class lvlSegment&, class lvlIntersection*>>(
        0x447020, this, arg1, arg2, arg3);
}

void cityLevel::Draw(class gfxViewport const& arg1, u32 arg2)
{
    return stub<thiscall_t<void, cityLevel*, class gfxViewport const&, u32>>(0x445400, this, arg1, arg2);
}

void cityLevel::EnablePVS(bool arg1)
{
    return stub<thiscall_t<void, cityLevel*, bool>>(0x4472A0, this, arg1);
}

void cityLevel::EnableSky(bool arg1)
{
    return stub<thiscall_t<void, cityLevel*, bool>>(0x447290, this, arg1);
}

i32 cityLevel::FindRoomId(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<i32, cityLevel*, class Vector3 const&, i32>>(0x446A60, this, arg1, arg2);
}

class lvlLevelBound const* cityLevel::GetBound()
{
    return stub<thiscall_t<class lvlLevelBound const*, cityLevel*>>(0x443930, this);
}

bool cityLevel::GetBoundSphere(class Vector4& arg1, i32 arg2)
{
    return stub<thiscall_t<bool, cityLevel*, class Vector4&, i32>>(0x445310, this, arg1, arg2);
}

class gfxTexture* cityLevel::GetEnvMap(i32 arg1, class Vector3 const& arg2, f32& arg3)
{
    return stub<thiscall_t<class gfxTexture*, cityLevel*, i32, class Vector3 const&, f32&>>(
        0x443940, this, arg1, arg2, arg3);
}

i32 cityLevel::GetLastStartRoom()
{
    return stub<thiscall_t<i32, cityLevel*>>(0x447010, this);
}

f32 cityLevel::GetLightingIntensity(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, cityLevel*, class Vector3 const&>>(0x445290, this, arg1);
}

i32 cityLevel::GetNeighborCount(i32 arg1)
{
    return stub<thiscall_t<i32, cityLevel*, i32>>(0x446C20, this, arg1);
}

i32 cityLevel::GetNeighbors(i32* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, cityLevel*, i32*, i32>>(0x446C40, this, arg1, arg2);
}

i32 cityLevel::GetRoomPerimeter(i32 arg1, class Vector3* const arg2, i32 arg3)
{
    return stub<thiscall_t<i32, cityLevel*, i32, class Vector3* const, i32>>(0x446FA0, this, arg1, arg2, arg3);
}

i32 cityLevel::GetTouchedNeighbors(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4)
{
    return stub<thiscall_t<i32, cityLevel*, i32*, i32, i32, class Vector4 const&>>(
        0x446CD0, this, arg1, arg2, arg3, arg4);
}

i32 cityLevel::GetTouchedNeighborsR(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4, i32 arg5)
{
    return stub<thiscall_t<i32, cityLevel*, i32*, i32, i32, class Vector4 const&, i32>>(
        0x446D10, this, arg1, arg2, arg3, arg4, arg5);
}

i32 cityLevel::GetVisitList(
    i32* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<i32, cityLevel*, i32*, i32, class Vector3 const&, class Vector3 const&, i32, i32>>(
        0x447030, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

f32 cityLevel::GetWaterLevel(i32 arg1)
{
    return stub<thiscall_t<f32, cityLevel*, i32>>(0x445280, this, arg1);
}

void cityLevel::Load(char const* arg1)
{
    return stub<thiscall_t<void, cityLevel*, char const*>>(0x443F30, this, arg1);
}

void cityLevel::PostDraw()
{
    return stub<thiscall_t<void, cityLevel*>>(0x445300, this);
}

void cityLevel::PreDraw()
{
    return stub<thiscall_t<void, cityLevel*>>(0x4452E0, this);
}

void cityLevel::SetObjectDetail(i32 arg1)
{
    return stub<thiscall_t<void, cityLevel*, i32>>(0x443E50, this, arg1);
}

void cityLevel::SetPtxHeight(class asParticles& arg1)
{
    return stub<thiscall_t<void, cityLevel*, class asParticles&>>(0x4452A0, this, arg1);
}

void cityLevel::Update()
{
    return stub<thiscall_t<void, cityLevel*>>(0x4452B0, this);
}

void cityLevel::SetupLighting(class Vector3 const& arg1)
{
    return stub<cdecl_t<void, class Vector3 const&>>(0x4436A0, arg1);
}

void cityLevel::DecompressPvs(i32 arg1)
{
    return stub<thiscall_t<void, cityLevel*, i32>>(0x445340, this, arg1);
}

void cityLevel::DrawRooms(class gfxViewport const& arg1, u32 arg2, struct cityRoomRec const* arg3, i32 arg4)
{
    return stub<thiscall_t<void, cityLevel*, class gfxViewport const&, u32, struct cityRoomRec const*, i32>>(
        0x445820, this, arg1, arg2, arg3, arg4);
}

i32 cityLevel::FullProbe(class Vector3 const& arg1)
{
    return stub<thiscall_t<i32, cityLevel*, class Vector3 const&>>(0x446920, this, arg1);
}

void cityLevel::InitFullProbe(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, cityLevel*, i32, i32>>(0x446370, this, arg1, arg2);
}

bool cityLevel::IsInRoomCheckWarps(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<bool, cityLevel*, class Vector3 const&, i32>>(0x443610, this, arg1, arg2);
}

void cityLevel::SetupPerRoomLighting(i32 arg1)
{
    return stub<thiscall_t<void, cityLevel*, i32>>(0x4457B0, this, arg1);
}

dgRoadDecalInstance::dgRoadDecalInstance(char const* arg1, class dgPath const& arg2)
{
    unimplemented();
}

dgRoadDecalInstance::~dgRoadDecalInstance()
{
    unimplemented();
}

void dgRoadDecalInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, dgRoadDecalInstance*, i32>>(0x443E00, this, arg1);
}

void dgRoadDecalInstance::DrawShadow()
{
    return stub<thiscall_t<void, dgRoadDecalInstance*>>(0x443B60, this);
}

class Matrix34 const& dgRoadDecalInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, dgRoadDecalInstance*, class Matrix34&>>(0x443E30, this, arg1);
}

class Vector3 const& dgRoadDecalInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, dgRoadDecalInstance*>>(0x443E10, this);
}

void dgRoadDecalInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgRoadDecalInstance*, class Matrix34 const&>>(0x443E40, this, arg1);
}

u32 dgRoadDecalInstance::SizeOf()
{
    return stub<thiscall_t<u32, dgRoadDecalInstance*>>(0x443E20, this);
}

define_dummy_symbol(city_citylevel);
