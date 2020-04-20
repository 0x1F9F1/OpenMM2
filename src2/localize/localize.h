/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    localize:localize

    0x534600 | char * __cdecl GetLocTime(float) | ?GetLocTime@@YAPADM@Z
    0x5346B0 | int __stdcall MyLoadStringA(struct HINSTANCE__ *,unsigned int,char *,int) | ?MyLoadStringA@@YGHPAUHINSTANCE__@@IPADH@Z
    0x534790 | struct LocString * __cdecl AngelReadString(unsigned int) | ?AngelReadString@@YAPAULocString@@I@Z
*/

// 0x534600 | ?GetLocTime@@YAPADM@Z
inline char* GetLocTime(float arg1)
{
    return stub<cdecl_t<char*, float>>(0x534600, arg1);
}

// 0x5346B0 | ?MyLoadStringA@@YGHPAUHINSTANCE__@@IPADH@Z
inline int32_t __stdcall MyLoadStringA(struct HINSTANCE__* arg1, uint32_t arg2, char* arg3, int32_t arg4)
{
    return stub<stdcall_t<int32_t, struct HINSTANCE__*, uint32_t, char*, int32_t>>(0x5346B0, arg1, arg2, arg3, arg4);
}

// 0x534790 | ?AngelReadString@@YAPAULocString@@I@Z
inline struct LocString* AngelReadString(uint32_t arg1)
{
    return stub<cdecl_t<struct LocString*, uint32_t>>(0x534790, arg1);
}
