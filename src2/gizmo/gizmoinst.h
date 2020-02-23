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
    gizmo:gizmoinst

    0x579DB0 | public: __thiscall gizInstance::gizInstance(void) | ??0gizInstance@@QAE@XZ
    0x579E10 | public: __thiscall gizInstance::~gizInstance(void) | ??1gizInstance@@QAE@XZ
    0x579E30 | public: virtual class Vector3 const & __thiscall gizInstance::GetPosition(void) | ?GetPosition@gizInstance@@UAEABVVector3@@XZ
    0x579E40 | public: virtual class Matrix34 const & __thiscall gizInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@gizInstance@@UAEABVMatrix34@@AAV2@@Z
    0x579E60 | public: virtual void __thiscall gizInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@gizInstance@@UAEXABVMatrix34@@@Z
    0x579E90 | public: void __thiscall gizInstance::Init(char *,int) | ?Init@gizInstance@@QAEXPADH@Z
    0x579F30 | public: virtual void __thiscall gizInstance::Draw(int) | ?Draw@gizInstance@@UAEXH@Z
    0x5B6278 | const gizInstance::`vftable' | ??_7gizInstance@@6B@
*/

struct gizInstance : lvlInstance
{
public:
    // gizInstance::`vftable' @ 0x5B6278

    // 0x579DB0 | ??0gizInstance@@QAE@XZ
    inline gizInstance()
    {
        stub<member_func_t<void, gizInstance>>(0x579DB0, this);
    }

    // 0x579E10 | ??1gizInstance@@QAE@XZ
    inline ~gizInstance()
    {
        stub<member_func_t<void, gizInstance>>(0x579E10, this);
    }

    // 0x579E90 | ?Init@gizInstance@@QAEXPADH@Z
    inline void Init(char* arg1, i32 arg2)
    {
        return stub<member_func_t<void, gizInstance, char*, i32>>(0x579E90, this, arg1, arg2);
    }

    // 0x579E30 | ?GetPosition@gizInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, gizInstance>>(0x579E30, this);
    }

    // 0x579E40 | ?GetMatrix@gizInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, gizInstance, class Matrix34&>>(0x579E40, this, arg1);
    }

    // 0x579E60 | ?SetMatrix@gizInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, gizInstance, class Matrix34 const&>>(0x579E60, this, arg1);
    }

    // 0x579F30 | ?Draw@gizInstance@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, gizInstance, i32>>(0x579F30, this, arg1);
    }
};
