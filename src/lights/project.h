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

// #include "hooking.h"
