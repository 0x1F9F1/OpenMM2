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
    level:landmark

    0x467FF0 | public: virtual bool __thiscall lvlLandmark::IsLandmark(void) | ?IsLandmark@lvlLandmark@@UAE_NXZ
    0x468000 | public: virtual unsigned int __thiscall lvlLandmark::SizeOf(void) | ?SizeOf@lvlLandmark@@UAEIXZ
    0x468010 | public: virtual int __thiscall lvlLandmark::Init(char const *,class Matrix34 const &,int) | ?Init@lvlLandmark@@UAEHPBDABVMatrix34@@H@Z
    0x468030 | public: virtual int __thiscall lvlLandmark::IsVisible(class gfxViewport const &) | ?IsVisible@lvlLandmark@@UAEHABVgfxViewport@@@Z
*/

#include "hooking.h"
