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
    lights:project

    0x59C510 | public: __thiscall ltProjection::ltProjection(int) | ??0ltProjection@@QAE@H@Z
    0x59C580 | public: __thiscall ltProjection::~ltProjection(void) | ??1ltProjection@@QAE@XZ
    0x59C5B0 | public: void __thiscall ltProjection::MakeOrthoMatrix(class Vector3 const &,class Vector3 const &,class Vector3 const &,float) | ?MakeOrthoMatrix@ltProjection@@QAEXABVVector3@@00M@Z
    0x59C770 | public: void __thiscall ltProjection::DrawBegin(class Matrix34 const &) | ?DrawBegin@ltProjection@@QAEXABVMatrix34@@@Z
    0x59C950 | public: void __thiscall ltProjection::DrawEnd(void) | ?DrawEnd@ltProjection@@QAEXXZ
    0x59C9C0 | public: void __thiscall ltProjection::DrawMultiStageBegin(int,class Matrix34 const &) | ?DrawMultiStageBegin@ltProjection@@QAEXHABVMatrix34@@@Z
    0x59CB20 | public: void __thiscall ltProjection::DrawMultiStageEnd(int) | ?DrawMultiStageEnd@ltProjection@@QAEXH@Z
    0x59CB80 | public: void __thiscall ltProjection::OffScreenBegin(bool) | ?OffScreenBegin@ltProjection@@QAEX_N@Z
    0x59CE10 | public: void __thiscall ltProjection::OffScreenEnd(void) | ?OffScreenEnd@ltProjection@@QAEXXZ
    0x59D030 | public: void __thiscall ltProjection::DrawAmbient(class Vector3 const &) | ?DrawAmbient@ltProjection@@QAEXABVVector3@@@Z
    0x59D230 | public: void __thiscall ltProjection::DrawDebug(void) | ?DrawDebug@ltProjection@@QAEXXZ
    public: void __thiscall ltProjection::AddWidgets(class bkBank &) | ?AddWidgets@ltProjection@@QAEXAAVbkBank@@@Z
    private: static int ltProjection::ShadowRes | ?ShadowRes@ltProjection@@0HA
    private: static class gfxTexture * ltProjection::ShadowMap | ?ShadowMap@ltProjection@@0PAVgfxTexture@@A
    private: static class gfxViewport * ltProjection::ShadowViewport | ?ShadowViewport@ltProjection@@0PAVgfxViewport@@A
*/

class ltProjection
{
public:
    // 0x59C510 | ??0ltProjection@@QAE@H@Z
    inline ltProjection(i32 arg1)
    {
        stub<member_func_t<void, ltProjection, i32>>(0x59C510, this, arg1);
    }

    // 0x59C580 | ??1ltProjection@@QAE@XZ
    inline ~ltProjection()
    {
        stub<member_func_t<void, ltProjection>>(0x59C580, this);
    }

    // 0x59C5B0 | ?MakeOrthoMatrix@ltProjection@@QAEXABVVector3@@00M@Z
    inline void MakeOrthoMatrix(
        class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4)
    {
        return stub<
            member_func_t<void, ltProjection, class Vector3 const&, class Vector3 const&, class Vector3 const&, f32>>(
            0x59C5B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59C770 | ?DrawBegin@ltProjection@@QAEXABVMatrix34@@@Z
    inline void DrawBegin(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, ltProjection, class Matrix34 const&>>(0x59C770, this, arg1);
    }

    // 0x59C950 | ?DrawEnd@ltProjection@@QAEXXZ
    inline void DrawEnd()
    {
        return stub<member_func_t<void, ltProjection>>(0x59C950, this);
    }

    // 0x59C9C0 | ?DrawMultiStageBegin@ltProjection@@QAEXHABVMatrix34@@@Z
    inline void DrawMultiStageBegin(i32 arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, ltProjection, i32, class Matrix34 const&>>(0x59C9C0, this, arg1, arg2);
    }

    // 0x59CB20 | ?DrawMultiStageEnd@ltProjection@@QAEXH@Z
    inline void DrawMultiStageEnd(i32 arg1)
    {
        return stub<member_func_t<void, ltProjection, i32>>(0x59CB20, this, arg1);
    }

    // 0x59CB80 | ?OffScreenBegin@ltProjection@@QAEX_N@Z
    inline void OffScreenBegin(bool arg1)
    {
        return stub<member_func_t<void, ltProjection, bool>>(0x59CB80, this, arg1);
    }

    // 0x59CE10 | ?OffScreenEnd@ltProjection@@QAEXXZ
    inline void OffScreenEnd()
    {
        return stub<member_func_t<void, ltProjection>>(0x59CE10, this);
    }

    // 0x59D030 | ?DrawAmbient@ltProjection@@QAEXABVVector3@@@Z
    inline void DrawAmbient(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, ltProjection, class Vector3 const&>>(0x59D030, this, arg1);
    }

    // 0x59D230 | ?DrawDebug@ltProjection@@QAEXXZ
    inline void DrawDebug()
    {
        return stub<member_func_t<void, ltProjection>>(0x59D230, this);
    }
};
