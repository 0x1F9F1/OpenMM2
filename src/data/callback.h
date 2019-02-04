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
    data:callback

    0x4C7A40 | public: __thiscall datCallback::datCallback(void) | ??0datCallback@@QAE@XZ
    0x4C7A50 | public: __thiscall datCallback::datCallback(void (__thiscall Base::*)(void),class Base *) | ??0datCallback@@QAE@P8Base@@AEXXZPAV1@@Z
    0x4C7A80 | public: __thiscall datCallback::datCallback(void (__thiscall Base::*)(void *),class Base *,void *) | ??0datCallback@@QAE@P8Base@@AEXPAX@ZPAV1@0@Z
    0x4C7AA0 | public: __thiscall datCallback::datCallback(void (__thiscall Base::*)(void *,void *),class Base *,void *) | ??0datCallback@@QAE@P8Base@@AEXPAX0@ZPAV1@0@Z
    0x4C7AC0 | public: __thiscall datCallback::datCallback(void (__cdecl*)(void)) | ??0datCallback@@QAE@P6AXXZ@Z
    0x4C7AF0 | public: __thiscall datCallback::datCallback(void (__cdecl*)(void *),void *) | ??0datCallback@@QAE@P6AXPAX@Z0@Z
    0x4C7B20 | public: __thiscall datCallback::datCallback(void (__cdecl*)(void *,void *),void *) | ??0datCallback@@QAE@P6AXPAX0@Z0@Z
    0x4C7B50 | public: void __thiscall datCallback::Call(void *) | ?Call@datCallback@@QAEXPAX@Z
    0x6A3D10 | class datCallback NullCallback | ?NullCallback@@3VdatCallback@@A
*/

#include "hooking.h"

#include "data/base.h"

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

inline extern_var(0x6A3D10, datCallback, NullCallback);
