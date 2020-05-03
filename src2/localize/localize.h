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

#pragma once

/*
    localize:localize

    0x534600 | char * __cdecl GetLocTime(float) | ?GetLocTime@@YAPADM@Z
    0x5346B0 | int __stdcall MyLoadStringA(struct HINSTANCE__ *,unsigned int,char *,int) | ?MyLoadStringA@@YGHPAUHINSTANCE__@@IPADH@Z
    0x534790 | struct LocString * __cdecl AngelReadString(unsigned int) | ?AngelReadString@@YAPAULocString@@I@Z
*/

// 0x534790 | ?AngelReadString@@YAPAULocString@@I@Z
struct LocString* AngelReadString(u32 arg1);

// 0x534600 | ?GetLocTime@@YAPADM@Z
char* GetLocTime(f32 arg1);

// 0x5346B0 | ?MyLoadStringA@@YGHPAUHINSTANCE__@@IPADH@Z
i32 __stdcall MyLoadStringA(struct HINSTANCE__* arg1, u32 arg2, char* arg3, i32 arg4);
