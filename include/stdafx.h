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

namespace mem
{
    namespace conventions
    {
        template <typename Result, typename... Args>
        using func_t = Result(*)(Args...);

        template <typename Result, typename Class, typename... Args>
        using thiscall_t = Result(Class::*)(Args...);

#if defined(_WIN32)
        template <typename Result, typename... Args>
        using cdecl_t = Result(__cdecl*)(Args...);

        template <typename Result, typename... Args>
        using stdcall_t = Result(__stdcall*)(Args...);

        template <typename Result, typename... Args>
        using fastcall_t = Result(__fastcall*)(Args...);
#endif // MEM_WINDOWS
    }
}

using namespace mem::conventions;

template <typename Func, typename... Args>
constexpr decltype(auto) stub(mem::pointer address, Args&&... args)
{
    return std::invoke(address.as<Func>(), std::forward<Args>(args)... );
}

#include "Hooking.h"
#include "Logging.h"
