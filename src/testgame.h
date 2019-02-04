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
    testgame

    int __cdecl TrialTimeExpired(void) | ?TrialTimeExpired@@YAHXZ
    0x401010 | void __cdecl ProgressRect(int,int,int,int,unsigned int) | ?ProgressRect@@YAXHHHHI@Z
    0x4010F0 | void __cdecl ProgressCB(char const *,int) | ?ProgressCB@@YAXPBDH@Z
    0x4011E0 | int __cdecl Main(void) | ?Main@@YAHXZ
    0x4022B0 | int __cdecl ExceptMain(void) | ?ExceptMain@@YAHXZ
    0x402340 | void __cdecl ArchInit(int,char * *) | ?ArchInit@@YAXHPAPAD@Z
    0x402350 | void __cdecl ageProcessEvents(void) | ?ageProcessEvents@@YAXXZ
    0x402360 | _main
    0x402600 | void __stdcall `vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void *)) | ??_H@YGXPAXIHP6EX0@Z@Z
    int page_override | ?page_override@@3HA
    0x5C28D4 | char * APPTITLE | ?APPTITLE@@3PADA
    0x5C28D8 | char * DEFAULT_CITY | ?DEFAULT_CITY@@3PADA
    0x5C28DC | char * VERSION_STRING | ?VERSION_STRING@@3PADA
    char const * const szMagicName | ?szMagicName@@3PBDB
    0x5E0CC4 | int (__cdecl* __VtResumeSampling)(void) | ?__VtResumeSampling@@3P6AHXZA
    0x5E0CD8 | int (__cdecl* __VtPauseSampling)(void) | ?__VtPauseSampling@@3P6AHXZA
    int AllCars | ?AllCars@@3HA
    int HostCarVerify | ?HostCarVerify@@3HA
    0x5E0CF8 | bool NeedStartup | ?NeedStartup@@3_NA
    0x5E0CF9 | bool ZoneStartup | ?ZoneStartup@@3_NA
    0x5E0CFA | unsigned char GraphicsChange | ?GraphicsChange@@3EA
    0x5E0CFB | unsigned char GraphicsPreviousMenu | ?GraphicsPreviousMenu@@3EA
*/

#include "hooking.h"

class gfxBitmap;

void ProgressCB(const char *message, signed int progress);

inline extern_var(0x5E0CCC, gfxBitmap*, LoadingScreenBitmap);
inline extern_var(0x5E0CE0, gfxBitmap*, RestoringScreenBitmap);

inline extern_var(0x5E0CF8, bool, NeedStartup);
inline extern_var(0x5E0CF9, bool, ZoneStartup);

inline extern_var(0x5C28D4, char*, APPTITLE);
inline extern_var(0x5C28D8, char*, DEFAULT_CITY);
inline extern_var(0x5C28DC, char*, VERSION_STRING);

int ExceptMain();
