#pragma once

#include "Base.h"

class datCallback
{
protected:
    enum Flags : uint32_t
    {
        ParamCount0 = 0x40000000,
        ParamCount1 = 0x80000000,
        ParamCount2 = 0xC0000000,
        ParamCountFlags = ParamCount0 | ParamCount1 | ParamCount2
    };

    Base* _class;
    uint32_t _callback;
    void* _parameter;

    unsigned int _get_flags()
    {
        return _callback & ParamCountFlags;
    }

    unsigned int _get_callback()
    {
        return _callback & ~ParamCountFlags;
    }

    unsigned int _combine_callback(void* callback, unsigned int flags)
    {
        return reinterpret_cast<unsigned int&>(callback) | flags;
    }

    template <typename ...Args>
    void virtual_callback(uint32_t callback, Args ...args) const {
        return stub<member_func_t<void, Base, Args...>>(callback, _class, args...);
    }

    template <typename ...Args>
    void method_callback(uint32_t callback, Args ...args) const {
        return stub<cdecl_t<void, Args...>>(callback, args...);
    }

public:
    inline unsigned int ptr() const {
        return _callback & ~ParamCountFlags;
    }

    datCallback();
    datCallback(void(*callback)());
    datCallback(void(__stdcall *callback)(void*), void* parameter);
    datCallback(void(__stdcall *callback)());
    datCallback(void(__stdcall *callback)(void*, void*), void* parameter);

    void Call(void* parameter);
};

static_var(0x6A3D10, datCallback, NullCallback);