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

#include "psdl.h"

bool sdlPoly::SetFlatQuad(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, f32 arg6)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, i32, i32, i32, i32, f32>>(
        0x447670, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool sdlPoly::SetFlatTri(i32 arg1, i32 arg2, i32 arg3, i32 arg4, f32 arg5)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, i32, i32, i32, f32>>(0x447AF0, this, arg1, arg2, arg3, arg4, arg5);
}

bool sdlPoly::SetQuad(i32 arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Vector3 const& arg4,
    class Vector3 const& arg5)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&>>(0x447850, this, arg1, arg2, arg3, arg4, arg5);
}

bool sdlPoly::SetQuad(i32 arg1, i32 arg2, f32 arg3, i32 arg4, f32 arg5, i32 arg6, f32 arg7, i32 arg8, f32 arg9)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, i32, f32, i32, f32, i32, f32, i32, f32>>(
        0x447470, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

bool sdlPoly::SetTri(i32 arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4479D0, this, arg1, arg2, arg3, arg4);
}

bool sdlPoly::SetWall(i32 arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, class Vector3 const&, class Vector3 const&, f32, f32>>(
        0x447D50, this, arg1, arg2, arg3, arg4, arg5);
}

bool sdlPoly::SetWall(i32 arg1, i32 arg2, i32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, i32, i32, f32, f32>>(0x447C70, this, arg1, arg2, arg3, arg4, arg5);
}

bool sdlPoly::InitNoArea(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<bool, sdlPoly*, i32, i32, i32, i32, i32>>(0x447300, this, arg1, arg2, arg3, arg4, arg5);
}

void sdlPolyCached::InitFromPoly(class sdlPoly const* arg1)
{
    return stub<thiscall_t<void, sdlPolyCached*, class sdlPoly const*>>(0x447ED0, this, arg1);
}

sdlCommon::sdlCommon()
{
    unimplemented();
}

sdlCommon::~sdlCommon()
{
    unimplemented();
}

char* sdlCommon::AllocateState()
{
    return stub<thiscall_t<char*, sdlCommon*>>(0x448310, this);
}

bool sdlCommon::CollideAIPoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, sdlCommon*, class lvlSegment&, class lvlIntersectionPoint*>>(
        0x448300, this, arg1, arg2);
}

i32 sdlCommon::CollideEdgePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, sdlCommon*, class lvlSegment&, class lvlIntersectionPoint*, i32>>(
        0x4482E0, this, arg1, arg2, arg3);
}

bool sdlCommon::CollideProbePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, sdlCommon*, class lvlSegment&, class lvlIntersectionPoint*, f32>>(
        0x4482F0, this, arg1, arg2, arg3);
}

bool sdlCommon::BACKFACE(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&>>(0x45CBC0, arg1, arg2);
}

void sdlCommon::UpdateLighting()
{
    return stub<cdecl_t<void>>(0x448090);
}

sdlPage16::sdlPage16(i32 arg1, i32 arg2)
{
    unimplemented();
}

void sdlPage16::ArcMap(f32* arg1, u16 const* arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, sdlPage16*, f32*, u16 const*, i32, i32, i32>>(
        0x45A560, this, arg1, arg2, arg3, arg4, arg5);
}

i32 sdlPage16::Collect(class Vector4 const* arg1, class sdlPoly* arg2, i32 arg3, i32& arg4)
{
    return stub<thiscall_t<i32, sdlPage16*, class Vector4 const*, class sdlPoly*, i32, i32&>>(
        0x455830, this, arg1, arg2, arg3, arg4);
}

bool sdlPage16::CollideSegment(
    class Vector4 const* arg1, class lvlSegment& arg2, class lvlIntersection& arg3, f32 arg4, f32 arg5)
{
    return stub<
        thiscall_t<bool, sdlPage16*, class Vector4 const*, class lvlSegment&, class lvlIntersection&, f32, f32>>(
        0x45AE90, this, arg1, arg2, arg3, arg4, arg5);
}

void sdlPage16::ComputeBoundSphere(class Vector4& arg1)
{
    return stub<thiscall_t<void, sdlPage16*, class Vector4&>>(0x45ADF0, this, arg1);
}

void sdlPage16::Draw(i32 arg1, u32 arg2)
{
    return stub<thiscall_t<void, sdlPage16*, i32, u32>>(0x448330, this, arg1, arg2);
}

void sdlPage16::GetCentroid(class Vector3& arg1)
{
    return stub<thiscall_t<void, sdlPage16*, class Vector3&>>(0x45A9F0, this, arg1);
}

class Vector3 const& sdlPage16::GetCodedVertex(i32 arg1)
{
    return stub<thiscall_t<class Vector3 const&, sdlPage16*, i32>>(0x45D140, this, arg1);
}

i32 sdlPage16::GetDrawnSDLPrims(i32 arg1, i32* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, sdlPage16*, i32, i32*, i32>>(0x450930, this, arg1, arg2, arg3);
}

f32 sdlPage16::GetFloat(i32 arg1)
{
    return stub<thiscall_t<f32, sdlPage16*, i32>>(0x45D160, this, arg1);
}

i32 sdlPage16::GetPerimeterCount()
{
    return stub<thiscall_t<i32, sdlPage16*>>(0x45D110, this);
}

i32 sdlPage16::GetPerimeterVertexIndex(i32 arg1)
{
    return stub<thiscall_t<i32, sdlPage16*, i32>>(0x45D120, this, arg1);
}

class gfxTexture* sdlPage16::GetTexture(i32 arg1)
{
    return stub<thiscall_t<class gfxTexture*, sdlPage16*, i32>>(0x45D170, this, arg1);
}

bool sdlPage16::PointInPerimeter(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<bool, sdlPage16*, f32, f32>>(0x45A900, this, arg1, arg2);
}

void sdlPage16::WallMap(f32* arg1, u16 const* arg2, f32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, sdlPage16*, f32*, u16 const*, f32, i32, i32>>(
        0x45A760, this, arg1, arg2, arg3, arg4, arg5);
}

void sdlPage16::FindBoundingIsoParams(
    class Vector4 const* arg1, class Vector3 const* arg2, u16 const* arg3, i32 arg4, i32 arg5, i32& arg6, i32& arg7)
{
    return stub<cdecl_t<void, class Vector4 const*, class Vector3 const*, u16 const*, i32, i32, i32&, i32&>>(
        0x45AB40, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

class sdlPage16* sdlPage16::LoadBinary(class Stream* arg1)
{
    return stub<cdecl_t<class sdlPage16*, class Stream*>>(0x45BF90, arg1);
}

lvlSDL::lvlSDL()
{
    unimplemented();
}

lvlSDL::~lvlSDL()
{
    unimplemented();
}

bool lvlSDL::CollideAI(class lvlSegment& arg1, class lvlIntersection* arg2, i32* arg3, i32 arg4)
{
    return stub<thiscall_t<bool, lvlSDL*, class lvlSegment&, class lvlIntersection*, i32*, i32>>(
        0x45BE40, this, arg1, arg2, arg3, arg4);
}

i32 lvlSDL::CollideEdge(class lvlSegment& arg1, class lvlIntersection* arg2, i32 arg3, i32* arg4, i32 arg5)
{
    return stub<thiscall_t<i32, lvlSDL*, class lvlSegment&, class lvlIntersection*, i32, i32*, i32>>(
        0x45BBA0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 lvlSDL::CollidePolyToLevel(class phBoundPolygonal const* arg1, i32* arg2, i32 arg3, class phColliderBase* arg4,
    class Matrix34 const* arg5, class Matrix34 const* arg6, class lvlIntersection* arg7, i32 arg8, i32* arg9,
    bool arg10)
{
    return stub<thiscall_t<i32, lvlSDL*, class phBoundPolygonal const*, i32*, i32, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class lvlIntersection*, i32, i32*, bool>>(
        0x45B060, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

bool lvlSDL::CollideProbe(class lvlSegment& arg1, class lvlIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, lvlSDL*, class lvlSegment&, class lvlIntersection*, f32>>(
        0x45BBB0, this, arg1, arg2, arg3);
}

void lvlSDL::Enumerate(i32 arg1, void (*arg2)(class lvlSDL const&, i32, i32, i32, u16 const*, void*), void* arg3)
{
    return stub<thiscall_t<void, lvlSDL*, i32, void (*)(class lvlSDL const&, i32, i32, i32, u16 const*, void*), void*>>(
        0x45BE50, this, arg1, arg2, arg3);
}

class Vector3 const& lvlSDL::GetVertex(i32 arg1)
{
    return stub<thiscall_t<class Vector3 const&, lvlSDL*, i32>>(0x45CB90, this, arg1);
}

bool lvlSDL::LoadBinary(char const* arg1)
{
    return stub<thiscall_t<bool, lvlSDL*, char const*>>(0x45C040, this, arg1);
}

void lvlSDL::Propulate(class lvlSDL const& arg1, i32 arg2, i32 arg3, i32 arg4, u16 const* arg5, void* arg6)
{
    return stub<cdecl_t<void, class lvlSDL const&, i32, i32, i32, u16 const*, void*>>(
        0x45C660, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool lvlSDL::IsoLerp(class Vector3& arg1, i32& arg2, class Vector3 const* arg3, i32 arg4, u16 const* arg5, i32 arg6,
    f32 arg7, bool arg8, bool arg9)
{
    return stub<cdecl_t<bool, class Vector3&, i32&, class Vector3 const*, i32, u16 const*, i32, f32, bool, bool>>(
        0x45C540, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

f32 Lerp(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<f32, f32, f32, f32>>(0x45CC30, arg1, arg2, arg3);
}

f32 Max(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x45CC10, arg1, arg2);
}

void vglTexCoord2f(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<void, f32, f32>>(0x45CFD0, arg1, arg2);
}

void vglVertex3f(class Vector3 arg1)
{
    return stub<cdecl_t<void, class Vector3>>(0x45D080, arg1);
}

void vglVertex3f(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x45CFF0, arg1, arg2, arg3);
}

Vector2::Vector2()
{
    unimplemented();
}

f32 Vector2::Mag()
{
    return stub<thiscall_t<f32, Vector2*>>(0x45CC60, this);
}

f32 Vector2::Mag2()
{
    return stub<thiscall_t<f32, Vector2*>>(0x45CC80, this);
}

define_dummy_symbol(city_psdl);
