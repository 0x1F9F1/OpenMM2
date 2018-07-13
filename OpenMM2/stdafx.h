#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define MEM_WINDOWS 32
#include "mem/mem.h"

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

#define call_once(func) namespace { static mem::static_function CallOnce(func); }

#define unimplemented Quitf("Error calling unimplemented function %s in %s (%i)", __FUNCTION__, __FILE__, __LINE__)

using namespace mem::conventions;

template <typename Func, typename... Args>
constexpr decltype(auto) stub(mem::pointer address, Args&&... args)
{
    return address.invoke<Func>(std::forward<Args>(args)...);
}

#include "Hooking.h"
#include "Logging.h"
