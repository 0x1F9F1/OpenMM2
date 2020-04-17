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
    vehicle:breakable

    0x4D8530 | public: __thiscall vehBreakable::vehBreakable(class modStatic * *,class Matrix34 &,int,int,int) | ??0vehBreakable@@QAE@PAPAVmodStatic@@AAVMatrix34@@HHH@Z
    0x4D8580 | public: __thiscall vehBreakableMgr::vehBreakableMgr(void) | ??0vehBreakableMgr@@QAE@XZ
    0x4D85B0 | public: __thiscall vehBreakableMgr::~vehBreakableMgr(void) | ??1vehBreakableMgr@@QAE@XZ
    0x4D85E0 | public: bool __thiscall vehBreakableMgr::Init(class Matrix34 *) | ?Init@vehBreakableMgr@@QAE_NPAVMatrix34@@@Z
    0x4D8600 | public: class vehBreakable * __thiscall vehBreakableMgr::Create(char const *,char const *,class modStatic * *,int,int) | ?Create@vehBreakableMgr@@QAEPAVvehBreakable@@PBD0PAPAVmodStatic@@HH@Z
    0x4D86A0 | public: void __thiscall vehBreakableMgr::Add(char const *,char const *,class modStatic * *,int,int) | ?Add@vehBreakableMgr@@QAEXPBD0PAPAVmodStatic@@HH@Z
    0x4D86F0 | public: class vehBreakable * __thiscall vehBreakableMgr::Get(int) | ?Get@vehBreakableMgr@@QAEPAVvehBreakable@@H@Z
    0x4D8710 | public: void __thiscall vehBreakableMgr::Reset(void) | ?Reset@vehBreakableMgr@@QAEXXZ
    0x4D8770 | public: void __thiscall vehBreakableMgr::Update(void) | ?Update@vehBreakableMgr@@QAEXXZ
    0x4D8780 | public: void __thiscall vehBreakableMgr::Draw(class Matrix34 const &,class modShader *,int) | ?Draw@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    0x4D8890 | public: void __thiscall vehBreakableMgr::DrawCityLit(class Matrix34 const &,class modShader *,int) | ?DrawCityLit@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    0x4D88A0 | public: void __thiscall vehBreakableMgr::Impact(float,class Vector3 const &,int) | ?Impact@vehBreakableMgr@@QAEXMABVVector3@@H@Z
    0x4D8940 | public: void __thiscall vehBreakableMgr::Eject(class vehBreakable *,int) | ?Eject@vehBreakableMgr@@QAEXPAVvehBreakable@@H@Z
    0x4D8BB0 | public: void __thiscall vehBreakableMgr::EjectAll(int) | ?EjectAll@vehBreakableMgr@@QAEXH@Z
    public: void __thiscall vehBreakableMgr::AddWidgets(class bkBank *) | ?AddWidgets@vehBreakableMgr@@QAEXPAVbkBank@@@Z
    0x4D8BE0 | public: void __thiscall vehBreakable::Add(class vehBreakable *) | ?Add@vehBreakable@@QAEXPAV1@@Z
*/

class vehBreakable
{
public:
    // 0x4D8530 | ??0vehBreakable@@QAE@PAPAVmodStatic@@AAVMatrix34@@HHH@Z
    vehBreakable(class modStatic** arg1, class Matrix34& arg2, i32 arg3, i32 arg4, i32 arg5)
    {
        stub<member_func_t<void, vehBreakable, class modStatic**, class Matrix34&, i32, i32, i32>>(
            0x4D8530, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4D8BE0 | ?Add@vehBreakable@@QAEXPAV1@@Z
    void Add(class vehBreakable* arg1)
    {
        return stub<member_func_t<void, vehBreakable, class vehBreakable*>>(0x4D8BE0, this, arg1);
    }
};

class vehBreakableMgr
{
public:
    // 0x4D8580 | ??0vehBreakableMgr@@QAE@XZ
    vehBreakableMgr()
    {
        stub<member_func_t<void, vehBreakableMgr>>(0x4D8580, this);
    }

    // 0x4D85B0 | ??1vehBreakableMgr@@QAE@XZ
    ~vehBreakableMgr()
    {
        stub<member_func_t<void, vehBreakableMgr>>(0x4D85B0, this);
    }

    // 0x4D85E0 | ?Init@vehBreakableMgr@@QAE_NPAVMatrix34@@@Z
    bool Init(class Matrix34* arg1)
    {
        return stub<member_func_t<bool, vehBreakableMgr, class Matrix34*>>(0x4D85E0, this, arg1);
    }

    // 0x4D8600 | ?Create@vehBreakableMgr@@QAEPAVvehBreakable@@PBD0PAPAVmodStatic@@HH@Z
    class vehBreakable* Create(char const* arg1, char const* arg2, class modStatic** arg3, i32 arg4, i32 arg5)
    {
        return stub<
            member_func_t<class vehBreakable*, vehBreakableMgr, char const*, char const*, class modStatic**, i32, i32>>(
            0x4D8600, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4D86A0 | ?Add@vehBreakableMgr@@QAEXPBD0PAPAVmodStatic@@HH@Z
    void Add(char const* arg1, char const* arg2, class modStatic** arg3, i32 arg4, i32 arg5)
    {
        return stub<member_func_t<void, vehBreakableMgr, char const*, char const*, class modStatic**, i32, i32>>(
            0x4D86A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4D86F0 | ?Get@vehBreakableMgr@@QAEPAVvehBreakable@@H@Z
    class vehBreakable* Get(i32 arg1)
    {
        return stub<member_func_t<class vehBreakable*, vehBreakableMgr, i32>>(0x4D86F0, this, arg1);
    }

    // 0x4D8710 | ?Reset@vehBreakableMgr@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, vehBreakableMgr>>(0x4D8710, this);
    }

    // 0x4D8770 | ?Update@vehBreakableMgr@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, vehBreakableMgr>>(0x4D8770, this);
    }

    // 0x4D8780 | ?Draw@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    void Draw(class Matrix34 const& arg1, class modShader* arg2, i32 arg3)
    {
        return stub<member_func_t<void, vehBreakableMgr, class Matrix34 const&, class modShader*, i32>>(
            0x4D8780, this, arg1, arg2, arg3);
    }

    // 0x4D8890 | ?DrawCityLit@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    void DrawCityLit(class Matrix34 const& arg1, class modShader* arg2, i32 arg3)
    {
        return stub<member_func_t<void, vehBreakableMgr, class Matrix34 const&, class modShader*, i32>>(
            0x4D8890, this, arg1, arg2, arg3);
    }

    // 0x4D88A0 | ?Impact@vehBreakableMgr@@QAEXMABVVector3@@H@Z
    void Impact(f32 arg1, class Vector3 const& arg2, i32 arg3)
    {
        return stub<member_func_t<void, vehBreakableMgr, f32, class Vector3 const&, i32>>(
            0x4D88A0, this, arg1, arg2, arg3);
    }

    // 0x4D8940 | ?Eject@vehBreakableMgr@@QAEXPAVvehBreakable@@H@Z
    void Eject(class vehBreakable* arg1, i32 arg2)
    {
        return stub<member_func_t<void, vehBreakableMgr, class vehBreakable*, i32>>(0x4D8940, this, arg1, arg2);
    }

    // 0x4D8BB0 | ?EjectAll@vehBreakableMgr@@QAEXH@Z
    void EjectAll(i32 arg1)
    {
        return stub<member_func_t<void, vehBreakableMgr, i32>>(0x4D8BB0, this, arg1);
    }
};
