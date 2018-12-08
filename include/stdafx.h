#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>

#include <mem/mem.h>
#include <mem/platform.h>
#include <mem/init_function.h>

#include <memory>
#include <algorithm>
#include <functional>

#define DIRECTX_VERSION 0x0700

#define DIRECT3D_VERSION DIRECTX_VERSION
#define DIRECTDRAW_VERSION DIRECTX_VERSION
#define DIRECTINPUT_VERSION DIRECTX_VERSION
#define DIRECTSOUND_VERSION DIRECTX_VERSION

#include <type_traits>

#define declvar(type, name) extern std::add_lvalue_reference_t<type> name
#define declstatic(type, name) static std::add_lvalue_reference_t<type> name
#define defnvar(address, name) decltype(name) name = mem::pointer(address).as<decltype(name)>()
#define instvar(address, type, name) std::add_lvalue_reference_t<type> name = mem::pointer(address).as<decltype(name)>()

#define check_size(type, size) static_assert(sizeof(type) == size, "Type "#type" has invalid size");

#define PASTE_HELPER(a,b) a ## b
#define PASTE(a,b) PASTE_HELPER(a,b)

#define run_once(body) static mem::init_function PASTE(RunOnce, __LINE__)(body);

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
