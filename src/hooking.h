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

#include <mem/mem.h>
#include <mem/init_function.h>
#include <mem/macros.h>

#include <functional>
#include <utility>

#define DIRECTX_VERSION 0x0700

#define DIRECT3D_VERSION DIRECTX_VERSION
#define DIRECTDRAW_VERSION DIRECTX_VERSION
#define DIRECTINPUT_VERSION DIRECTX_VERSION
#define DIRECTSOUND_VERSION DIRECTX_VERSION

#define unimplemented Quitf("Error calling unimplemented function %s in %s (%i)", __FUNCTION__, __FILE__, __LINE__)

using namespace mem::conventions;

template <typename Func, typename... Args>
static MEM_STRONG_INLINE decltype(auto) stub(mem::pointer address, Args&&... args)
{
    return std::invoke(address.as<Func>(), std::forward<Args>(args)...);
}

enum class hook_type
{
    jmp,
    call,

    count
};

void create_hook(const char* name, const char* description, mem::pointer target, mem::pointer detour, hook_type type = hook_type::jmp);
void create_patch(const char* name, const char* description, mem::pointer dest, mem::pointer src, size_t size);
