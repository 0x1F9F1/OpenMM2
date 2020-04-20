/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x4C7A50 | ??0datCallback@@QAE@P8Base@@AEXXZPAV1@@Z

// 0x4C7A80 | ??0datCallback@@QAE@P8Base@@AEXPAX@ZPAV1@0@Z

// 0x4C7AA0 | ??0datCallback@@QAE@P8Base@@AEXPAX0@ZPAV1@0@Z

// 0x6A3D10 | ?NullCallback@@3VdatCallback@@A
inline extern_var(0x6A3D10, class datCallback, NullCallback);

class datCallback
{
public:
    // 0x4C7A40 | ??0datCallback@@QAE@XZ
    inline datCallback()
    {
        stub<member_func_t<void, datCallback>>(0x4C7A40, this);
    }

    // 0x4C7AC0 | ??0datCallback@@QAE@P6AXXZ@Z
    inline datCallback(void(__cdecl* arg1)(void))
    {
        stub<member_func_t<void, datCallback, void(__cdecl*)(void)>>(0x4C7AC0, this, arg1);
    }

    // 0x4C7AF0 | ??0datCallback@@QAE@P6AXPAX@Z0@Z
    inline datCallback(void(__cdecl* arg1)(void*), void* arg2)
    {
        stub<member_func_t<void, datCallback, void(__cdecl*)(void*), void*>>(0x4C7AF0, this, arg1, arg2);
    }

    // 0x4C7B20 | ??0datCallback@@QAE@P6AXPAX0@Z0@Z
    inline datCallback(void(__cdecl* arg1)(void*, void*), void* arg2)
    {
        stub<member_func_t<void, datCallback, void(__cdecl*)(void*, void*), void*>>(0x4C7B20, this, arg1, arg2);
    }

    // 0x4C7B50 | ?Call@datCallback@@QAEXPAX@Z
    inline void Call(void* arg1)
    {
        return stub<member_func_t<void, datCallback, void*>>(0x4C7B50, this, arg1);
    }
};
