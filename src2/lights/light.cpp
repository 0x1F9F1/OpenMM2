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

#include "light.h"

ltLight::ltLight()
{
    unimplemented();
}

ltLight::~ltLight()
{
    unimplemented();
}

f32 ltLight::ComputeDistance(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, ltLight*, class Vector3 const&>>(0x59BB70, this, arg1);
}

f32 ltLight::ComputeIntensity(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<f32, ltLight*, class Vector3 const&, f32>>(0x59BA50, this, arg1, arg2);
}

void ltLight::Default()
{
    return stub<thiscall_t<void, ltLight*>>(0x59ABF0, this);
}

void ltLight::Draw(f32 arg1)
{
    return stub<thiscall_t<void, ltLight*, f32>>(0x59ACB0, this, arg1);
}

void ltLight::DrawGlow(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, ltLight*, class Vector3 const&>>(0x59AD90, this, arg1);
}

void ltLight::DrawHighlight(class Vector3 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, ltLight*, class Vector3 const&, class Matrix34 const&>>(0x59AFB0, this, arg1, arg2);
}

void ltLight::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, ltLight*, class datParser&>>(0x59BCA0, this, arg1);
}

void ltLight::Illuminate(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3)
{
    return stub<thiscall_t<void, ltLight*, class Vector3&, class Vector3&, class Vector3&>>(
        0x59B990, this, arg1, arg2, arg3);
}

void ltLight::Random()
{
    return stub<thiscall_t<void, ltLight*>>(0x59AC40, this);
}

bool ltLight::SetGfxLight(struct gfxLight& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<bool, ltLight*, struct gfxLight&, class Vector3 const&>>(0x59B740, this, arg1, arg2);
}

void ltLight::SetUpGfxLight()
{
    return stub<thiscall_t<void, ltLight*>>(0x59B5B0, this);
}

void ltLight::SetUpProjection(class ltProjection& arg1)
{
    return stub<thiscall_t<void, ltLight*, class ltProjection&>>(0x59BBB0, this, arg1);
}

void ltLight::DrawGlowBegin()
{
    return stub<cdecl_t<void>>(0x59AE30);
}

void ltLight::DrawGlowEnd()
{
    return stub<cdecl_t<void>>(0x59AEF0);
}

class ltLight* ltLight::GetClosestLight()
{
    return stub<cdecl_t<class ltLight*>>(0x59B410);
}

i32 ltLight::GetNumPointLights()
{
    return stub<cdecl_t<i32>>(0x59B3E0);
}

class ltLight* ltLight::GetPointLight(i32 arg1)
{
    return stub<cdecl_t<class ltLight*, i32>>(0x59B3F0, arg1);
}

void ltLight::SetUpGfxLightBegin(class Vector3 const& arg1)
{
    return stub<cdecl_t<void, class Vector3 const&>>(0x59B390, arg1);
}

void ltLight::SetUpGfxLightEnd()
{
    return stub<cdecl_t<void>>(0x59B460);
}

void ltLight::ShutdownLights()
{
    return stub<cdecl_t<void>>(0x59ABD0);
}

define_dummy_symbol(lights_light);
