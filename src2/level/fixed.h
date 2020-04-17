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
    level:fixed

    0x467300 | public: __thiscall lvlFixedAny::lvlFixedAny(void) | ??0lvlFixedAny@@QAE@XZ
    0x467320 | public: virtual void __thiscall lvlFixedAny::DrawReflectedParts(int) | ?DrawReflectedParts@lvlFixedAny@@UAEXH@Z
    0x467420 | public: virtual void __thiscall lvlFixedAny::Draw(int) | ?Draw@lvlFixedAny@@UAEXH@Z
    0x467540 | public: virtual void __thiscall lvlFixedAny::SetVariant(int) | ?SetVariant@lvlFixedAny@@UAEXH@Z
    0x467580 | public: virtual int __thiscall lvlFixedAny::Init(char const *,class Matrix34 const &,int) | ?Init@lvlFixedAny@@UAEHPBDABVMatrix34@@H@Z
    0x467740 | public: virtual void __thiscall lvlFixedAny::DrawShadowMap(void) | ?DrawShadowMap@lvlFixedAny@@UAEXXZ
    0x4677E0 | public: virtual void __thiscall lvlFixedAny::DrawShadow(void) | ?DrawShadow@lvlFixedAny@@UAEXXZ
    0x467910 | public: __thiscall lvlFixedRotY::lvlFixedRotY(void) | ??0lvlFixedRotY@@QAE@XZ
    0x467930 | public: virtual unsigned int __thiscall lvlFixedRotY::SizeOf(void) | ?SizeOf@lvlFixedRotY@@UAEIXZ
    0x467940 | public: virtual class Vector3 const & __thiscall lvlFixedRotY::GetPosition(void) | ?GetPosition@lvlFixedRotY@@UAEABVVector3@@XZ
    0x467950 | public: virtual int __thiscall lvlFixedRotY::IsVisible(class gfxViewport const &) | ?IsVisible@lvlFixedRotY@@UAEHABVgfxViewport@@@Z
    0x4679A0 | public: virtual class Matrix34 const & __thiscall lvlFixedRotY::GetMatrix(class Matrix34 &) | ?GetMatrix@lvlFixedRotY@@UAEABVMatrix34@@AAV2@@Z
    0x4679F0 | public: virtual void __thiscall lvlFixedRotY::SetMatrix(class Matrix34 const &) | ?SetMatrix@lvlFixedRotY@@UAEXABVMatrix34@@@Z
    0x467A20 | public: __thiscall lvlFixedMatrix::lvlFixedMatrix(void) | ??0lvlFixedMatrix@@QAE@XZ
    0x467A40 | public: virtual unsigned int __thiscall lvlFixedMatrix::SizeOf(void) | ?SizeOf@lvlFixedMatrix@@UAEIXZ
    0x467A50 | public: virtual class Vector3 const & __thiscall lvlFixedMatrix::GetPosition(void) | ?GetPosition@lvlFixedMatrix@@UAEABVVector3@@XZ
    0x467A60 | public: virtual int __thiscall lvlFixedMatrix::IsVisible(class gfxViewport const &) | ?IsVisible@lvlFixedMatrix@@UAEHABVgfxViewport@@@Z
    0x467AB0 | public: virtual class Matrix34 const & __thiscall lvlFixedMatrix::GetMatrix(class Matrix34 &) | ?GetMatrix@lvlFixedMatrix@@UAEABVMatrix34@@AAV2@@Z
    0x467AC0 | public: virtual void __thiscall lvlFixedMatrix::SetMatrix(class Matrix34 const &) | ?SetMatrix@lvlFixedMatrix@@UAEXABVMatrix34@@@Z
    0x5B1B10 | const lvlFixedAny::`vftable' | ??_7lvlFixedAny@@6B@
    0x5B1B78 | const lvlFixedRotY::`vftable' | ??_7lvlFixedRotY@@6B@
    0x5B1BE0 | const lvlFixedMatrix::`vftable' | ??_7lvlFixedMatrix@@6B@
    public: static bool lvlFixedAny::sm_EnableBackfacing | ?sm_EnableBackfacing@lvlFixedAny@@2_NA
*/

struct lvlFixedAny : lvlInstance
{
public:
    // lvlFixedAny::`vftable' @ 0x5B1B10

    // 0x467300 | ??0lvlFixedAny@@QAE@XZ
    lvlFixedAny()
    {
        stub<member_func_t<void, lvlFixedAny>>(0x467300, this);
    }

    // 0x467540 | ?SetVariant@lvlFixedAny@@UAEXH@Z
    void SetVariant(i32 arg1) override
    {
        return stub<member_func_t<void, lvlFixedAny, i32>>(0x467540, this, arg1);
    }

    // 0x467420 | ?Draw@lvlFixedAny@@UAEXH@Z
    void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, lvlFixedAny, i32>>(0x467420, this, arg1);
    }

    // 0x4677E0 | ?DrawShadow@lvlFixedAny@@UAEXXZ
    void DrawShadow() override
    {
        return stub<member_func_t<void, lvlFixedAny>>(0x4677E0, this);
    }

    // 0x467740 | ?DrawShadowMap@lvlFixedAny@@UAEXXZ
    void DrawShadowMap() override
    {
        return stub<member_func_t<void, lvlFixedAny>>(0x467740, this);
    }

    // 0x467320 | ?DrawReflectedParts@lvlFixedAny@@UAEXH@Z
    void DrawReflectedParts(i32 arg1) override
    {
        return stub<member_func_t<void, lvlFixedAny, i32>>(0x467320, this, arg1);
    }

    // 0x467580 | ?Init@lvlFixedAny@@UAEHPBDABVMatrix34@@H@Z
    i32 Init(char const* arg1, class Matrix34 const& arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, lvlFixedAny, char const*, class Matrix34 const&, i32>>(
            0x467580, this, arg1, arg2, arg3);
    }
};

struct lvlFixedRotY : lvlFixedAny
{
public:
    // lvlFixedRotY::`vftable' @ 0x5B1B78

    // 0x467910 | ??0lvlFixedRotY@@QAE@XZ
    lvlFixedRotY()
    {
        stub<member_func_t<void, lvlFixedRotY>>(0x467910, this);
    }

    // 0x467940 | ?GetPosition@lvlFixedRotY@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, lvlFixedRotY>>(0x467940, this);
    }

    // 0x467950 | ?IsVisible@lvlFixedRotY@@UAEHABVgfxViewport@@@Z
    i32 IsVisible(class gfxViewport const& arg1) override
    {
        return stub<member_func_t<i32, lvlFixedRotY, class gfxViewport const&>>(0x467950, this, arg1);
    }

    // 0x4679A0 | ?GetMatrix@lvlFixedRotY@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, lvlFixedRotY, class Matrix34&>>(0x4679A0, this, arg1);
    }

    // 0x4679F0 | ?SetMatrix@lvlFixedRotY@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, lvlFixedRotY, class Matrix34 const&>>(0x4679F0, this, arg1);
    }

    // 0x467930 | ?SizeOf@lvlFixedRotY@@UAEIXZ
    u32 SizeOf() override
    {
        return stub<member_func_t<u32, lvlFixedRotY>>(0x467930, this);
    }
};

struct lvlFixedMatrix : lvlFixedAny
{
public:
    // lvlFixedMatrix::`vftable' @ 0x5B1BE0

    // 0x467A20 | ??0lvlFixedMatrix@@QAE@XZ
    lvlFixedMatrix()
    {
        stub<member_func_t<void, lvlFixedMatrix>>(0x467A20, this);
    }

    // 0x467A50 | ?GetPosition@lvlFixedMatrix@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, lvlFixedMatrix>>(0x467A50, this);
    }

    // 0x467A60 | ?IsVisible@lvlFixedMatrix@@UAEHABVgfxViewport@@@Z
    i32 IsVisible(class gfxViewport const& arg1) override
    {
        return stub<member_func_t<i32, lvlFixedMatrix, class gfxViewport const&>>(0x467A60, this, arg1);
    }

    // 0x467AB0 | ?GetMatrix@lvlFixedMatrix@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, lvlFixedMatrix, class Matrix34&>>(0x467AB0, this, arg1);
    }

    // 0x467AC0 | ?SetMatrix@lvlFixedMatrix@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, lvlFixedMatrix, class Matrix34 const&>>(0x467AC0, this, arg1);
    }

    // 0x467A40 | ?SizeOf@lvlFixedMatrix@@UAEIXZ
    u32 SizeOf() override
    {
        return stub<member_func_t<u32, lvlFixedMatrix>>(0x467A40, this);
    }
};
