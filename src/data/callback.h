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
    Base* _class {nullptr};
    uintptr_t _callback {0};
    void* _parameter {nullptr};

public:
    datCallback() = default;

    datCallback(void (Base::*callback)(void), Base* this_param);
    datCallback(void (Base::*callback)(void*), Base* this_param, void* void_param);
    datCallback(void (Base::*callback)(void*, void*), Base* this_param, void* void_param);
    datCallback(void (*callback)(void));
    datCallback(void (*callback)(void*), void* void_param);
    datCallback(void (*callback)(void*, void*), void* void_param);

    void Call(void* parameter);
};

inline extern_var(0x6A3D10, datCallback, NullCallback);
