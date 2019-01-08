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

#pragma once

/*
    level:fixed

    0x467300 | public: __thiscall lvlFixedAny::lvlFixedAny(void) | ??0lvlFixedAny@@QAE@XZ
    0x467320 | public: virtual void __thiscall lvlFixedAny::DrawReflectedParts(int) | ?DrawReflectedParts@lvlFixedAny@@UAEXH@Z
    0x467420 | public: virtual void __thiscall lvlFixedAny::Draw(int) | ?Draw@lvlFixedAny@@UAEXH@Z
    0x467540 | public: virtual void __thiscall lvlFixedAny::SetVariant(int) | ?SetVariant@lvlFixedAny@@UAEXH@Z
    0x467580 | public: virtual int __thiscall lvlFixedAny::Init(char const *,class Matrix34 const &,int) | ?Init@lvlFixedAny@@UAEHPBDABVMatrix34@@H@Z
    0x467740 | public: virtual void __thiscall lvlFixedAny::DrawShadowMap(void) | ?DrawShadowMap@lvlFixedAny@@UAEXXZ
    0x4677E0 | public: virtual void __thiscall lvlFixedAny::DrawShadow(void) | ?DrawShadow@lvlFixedAny@@UAEXXZ
    0x467910 | public: __thiscall lvlFixedRotY::lvlFixedRotY(void) | ??0lvlFixedRotY@@QAE@XZ
    0x467930 | public: virtual unsigned int __thiscall lvlFixedRotY::SizeOf(void) | ?SizeOf@lvlFixedRotY@@UAEIXZ
    0x467940 | public: virtual class Vector3 const & __thiscall lvlFixedRotY::GetPosition(void) | ?GetPosition@lvlFixedRotY@@UAEABVVector3@@XZ
    0x467950 | public: virtual int __thiscall lvlFixedRotY::IsVisible(class gfxViewport const &) | ?IsVisible@lvlFixedRotY@@UAEHABVgfxViewport@@@Z
    0x4679A0 | public: virtual class Matrix34 const & __thiscall lvlFixedRotY::GetMatrix(class Matrix34 &) | ?GetMatrix@lvlFixedRotY@@UAEABVMatrix34@@AAV2@@Z
    0x4679F0 | public: virtual void __thiscall lvlFixedRotY::SetMatrix(class Matrix34 const &) | ?SetMatrix@lvlFixedRotY@@UAEXABVMatrix34@@@Z
    0x467A20 | public: __thiscall lvlFixedMatrix::lvlFixedMatrix(void) | ??0lvlFixedMatrix@@QAE@XZ
    0x467A40 | public: virtual unsigned int __thiscall lvlFixedMatrix::SizeOf(void) | ?SizeOf@lvlFixedMatrix@@UAEIXZ
    0x467A50 | public: virtual class Vector3 const & __thiscall lvlFixedMatrix::GetPosition(void) | ?GetPosition@lvlFixedMatrix@@UAEABVVector3@@XZ
    0x467A60 | public: virtual int __thiscall lvlFixedMatrix::IsVisible(class gfxViewport const &) | ?IsVisible@lvlFixedMatrix@@UAEHABVgfxViewport@@@Z
    0x467AB0 | public: virtual class Matrix34 const & __thiscall lvlFixedMatrix::GetMatrix(class Matrix34 &) | ?GetMatrix@lvlFixedMatrix@@UAEABVMatrix34@@AAV2@@Z
    0x467AC0 | public: virtual void __thiscall lvlFixedMatrix::SetMatrix(class Matrix34 const &) | ?SetMatrix@lvlFixedMatrix@@UAEXABVMatrix34@@@Z
    0x5B1B10 | const lvlFixedAny::`vftable' | ??_7lvlFixedAny@@6B@
    0x5B1B78 | const lvlFixedRotY::`vftable' | ??_7lvlFixedRotY@@6B@
    0x5B1BE0 | const lvlFixedMatrix::`vftable' | ??_7lvlFixedMatrix@@6B@
    public: static bool lvlFixedAny::sm_EnableBackfacing | ?sm_EnableBackfacing@lvlFixedAny@@2_NA
*/

#include "hooking.h"
