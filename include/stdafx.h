#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>

#include <mem/mem.h>
#include <mem/platform.h>
#include <mem/init_function.h>
#include <mem/macros.h>

#include <memory>
#include <algorithm>
#include <functional>

#define DIRECTX_VERSION 0x0700

#define DIRECT3D_VERSION DIRECTX_VERSION
#define DIRECTDRAW_VERSION DIRECTX_VERSION
#define DIRECTINPUT_VERSION DIRECTX_VERSION
#define DIRECTSOUND_VERSION DIRECTX_VERSION

#define unimplemented Quitf("Error calling unimplemented function %s in %s (%i)", __FUNCTION__, __FILE__, __LINE__)

using namespace mem::conventions;

template <typename Func, typename... Args>
static constexpr inline decltype(auto) stub(mem::pointer address, Args&&... args)
{
    return std::invoke(address.as<Func>(), std::forward<Args>(args)...);
}

#include "Hooking.h"
#include "Logging.h"
