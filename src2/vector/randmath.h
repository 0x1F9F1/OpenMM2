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
    vector:randmath

    0x4BBD50 | void __cdecl DisableGlobalSeed(void) | ?DisableGlobalSeed@@YAXXZ
    0x4BBD80 | void __cdecl EnableGlobalSeed(void) | ?EnableGlobalSeed@@YAXXZ
    0x4BBDB0 | void __cdecl ResetRandomSeed(void) | ?ResetRandomSeed@@YAXXZ
    0x4BBDC0 | int __cdecl irand(int) | ?irand@@YAHH@Z
    0x4BBDF0 | int __cdecl irand(void) | ?irand@@YAHXZ
    0x4BBE30 | float __cdecl frand(void) | ?frand@@YAMXZ
    0x4BBE50 | float __cdecl frand(int) | ?frand@@YAMH@Z
    0x4BBE70 | _rand
    _srand
    0x6A3AB0 | void (__cdecl* LogRandomCalls)(void) | ?LogRandomCalls@@3P6AXXZA
    0x6A3AB4 | int saveSeed | ?saveSeed@@3HA
    0x6A3AB8 | void (__cdecl* oldLog)(void) | ?oldLog@@3P6AXXZA
    0x6A3ABC | int secondarySeed | ?secondarySeed@@3HA
    0x6A3AC0 | int gRandSeed | ?gRandSeed@@3HA
*/

// 0x4BBD50 | ?DisableGlobalSeed@@YAXXZ
void DisableGlobalSeed();

// 0x4BBD80 | ?EnableGlobalSeed@@YAXXZ
void EnableGlobalSeed();

// 0x4BBDB0 | ?ResetRandomSeed@@YAXXZ
void ResetRandomSeed();

// 0x4BBE30 | ?frand@@YAMXZ
f32 frand();

// 0x4BBE50 | ?frand@@YAMH@Z
f32 frand(i32 arg1);

// 0x4BBDF0 | ?irand@@YAHXZ
i32 irand();

// 0x4BBDC0 | ?irand@@YAHH@Z
i32 irand(i32 arg1);

// 0x6A3AB0 | ?LogRandomCalls@@3P6AXXZA
inline extern_var(0x6A3AB0, void (*)(void), LogRandomCalls);

// 0x4BBE70 | _rand (Skipped: void)

// 0x6A3AC0 | ?gRandSeed@@3HA
inline extern_var(0x6A3AC0, i32, gRandSeed);

// 0x6A3AB8 | ?oldLog@@3P6AXXZA
inline extern_var(0x6A3AB8, void (*)(void), oldLog);

// 0x6A3AB4 | ?saveSeed@@3HA
inline extern_var(0x6A3AB4, i32, saveSeed);

// 0x6A3ABC | ?secondarySeed@@3HA
inline extern_var(0x6A3ABC, i32, secondarySeed);
