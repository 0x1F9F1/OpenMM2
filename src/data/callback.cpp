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

#include "callback.h"

#include "core/output.h"

enum : uintptr_t
{
    datCallback_ParamCount0 = 0x1,
    datCallback_ParamCount1 = 0x2,
    datCallback_ParamCount2 = 0x3,
    datCallback_ParamCountFlags = 0x3,
};

template <typename T>
static inline uintptr_t TaggedCallback(T value, uintptr_t flag)
{
    uintptr_t address = mem::bit_cast<uintptr_t>(value);

    if ((address & datCallback_ParamCountFlags) != 0)
    {
        Quitf("Misaligned callback");
    }

    return address | flag;
}

datCallback::datCallback(void (Base::*callback)(void), Base* this_param)
    : _class(this_param)
    , _callback(TaggedCallback(callback, datCallback_ParamCount0))
    , _parameter(nullptr)
{}

datCallback::datCallback(void (Base::*callback)(void*), Base* this_param, void* void_param)
    : _class(this_param)
    , _callback(TaggedCallback(callback, datCallback_ParamCount1))
    , _parameter(void_param)
{}

datCallback::datCallback(void (Base::*callback)(void*, void*), Base* this_param, void* void_param)
    : _class(this_param)
    , _callback(TaggedCallback(callback, datCallback_ParamCount2))
    , _parameter(void_param)
{}

datCallback::datCallback(void (*callback)(void))
    : _class(nullptr)
    , _callback(TaggedCallback(callback, datCallback_ParamCount0))
    , _parameter(nullptr)
{}

datCallback::datCallback(void (*callback)(void*), void* void_param)
    : _class(nullptr)
    , _callback(TaggedCallback(callback, datCallback_ParamCount1))
    , _parameter(void_param)
{}

datCallback::datCallback(void (*callback)(void*, void*), void* void_param)
    : _class(nullptr)
    , _callback(TaggedCallback(callback, datCallback_ParamCount2))
    , _parameter(void_param)
{}

void datCallback::Call(void* parameter)
{
    uintptr_t flags = _callback & datCallback_ParamCountFlags;
    uintptr_t callback = _callback & ~datCallback_ParamCountFlags;

    if (flags)
    {
        if (_class)
        {
            switch (flags)
            {
                case datCallback_ParamCount0: return (_class->*mem::bit_cast<void (Base::*)()>(callback))();
                case datCallback_ParamCount1:
                    return (_class->*mem::bit_cast<void (Base::*)(void*)>(callback))(_parameter);
                case datCallback_ParamCount2:
                    return (_class->*mem::bit_cast<void (Base::*)(void*, void*)>(callback))(_parameter, parameter);
            }
        }
        else
        {
            switch (flags)
            {
                case datCallback_ParamCount0: return reinterpret_cast<void (*)()>(callback)();
                case datCallback_ParamCount1: return reinterpret_cast<void (*)(void*)>(callback)(_parameter);
                case datCallback_ParamCount2:
                    return reinterpret_cast<void (*)(void*, void*)>(callback)(_parameter, parameter);
            }
        }
    }
}

run_once([] {
    auto_hook_ctor(0x4C7A40, datCallback);
    auto_hook_ctor(0x4C7A50, datCallback, void (Base::*)(void), class Base*);
    auto_hook_ctor(0x4C7A80, datCallback, void (Base::*)(void*), class Base*, void*);
    auto_hook_ctor(0x4C7AA0, datCallback, void (Base::*)(void*, void*), class Base*, void*);
    auto_hook_ctor(0x4C7AC0, datCallback, void (*)(void));
    auto_hook_ctor(0x4C7AF0, datCallback, void (*)(void*), void*);
    auto_hook_ctor(0x4C7B20, datCallback, void (*)(void*, void*), void*);

    auto_hook(0x4C7B50, datCallback::Call);
});
