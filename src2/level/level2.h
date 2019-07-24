/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    level:level2

    0x4656D0 | char const * __cdecl CleanName(char const *) | ?CleanName@@YAPBDPBD@Z
    0x4656F0 | public: virtual bool __thiscall lvlLevel::LoadInstances(char const *,char const *) | ?LoadInstances@lvlLevel@@UAE_NPBD0@Z
    0x465E50 | public: void __thiscall lvlLevel::ResetInstances(void) | ?ResetInstances@lvlLevel@@QAEXXZ
    0x465EB0 | public: virtual bool __thiscall lvlLandmark::IsCollidable(void) | ?IsCollidable@lvlLandmark@@UAE_NXZ
    0x5B1A88 | const lvlLandmark::`vftable' | ??_7lvlLandmark@@6B@
*/

// 0x4656D0 | ?CleanName@@YAPBDPBD@Z
inline char const* CleanName(char const* arg1)
{
    return stub<cdecl_t<char const*, char const*>>(0x4656D0, arg1);
}
