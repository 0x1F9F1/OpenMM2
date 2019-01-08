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
    cranimation:frame

    0x57DC00 | float * __cdecl sAcquireBuffer(int) | ?sAcquireBuffer@@YAPAMH@Z
    0x57DC50 | bool __cdecl sIsBuffer(float *) | ?sIsBuffer@@YA_NPAM@Z
    0x57DC80 | public: static void __cdecl crAnimFrame::AllocateBuffers(int,int) | ?AllocateBuffers@crAnimFrame@@SAXHH@Z
    0x57DD00 | public: static void __cdecl crAnimFrame::DeallocateBuffers(void) | ?DeallocateBuffers@crAnimFrame@@SAXXZ
    0x57DDA0 | public: __thiscall crAnimFrame::crAnimFrame(bool) | ??0crAnimFrame@@QAE@_N@Z
    0x57DDE0 | public: __thiscall crAnimFrame::crAnimFrame(class crAnimFrame const &) | ??0crAnimFrame@@QAE@ABV0@@Z
    0x57DE10 | public: __thiscall crAnimFrame::~crAnimFrame(void) | ??1crAnimFrame@@QAE@XZ
    0x57DE70 | public: class crAnimFrame const & __thiscall crAnimFrame::operator=(class crAnimFrame const &) | ??4crAnimFrame@@QAEABV0@ABV0@@Z
    0x57DE90 | private: void __thiscall crAnimFrame::Copy(class crAnimFrame const &) | ?Copy@crAnimFrame@@AAEXABV1@@Z
    0x57DED0 | public: void __thiscall crAnimFrame::Init(int) | ?Init@crAnimFrame@@QAEXH@Z
    0x57DF10 | public: void __thiscall crAnimFrame::LoadBin(class Stream *,int) | ?LoadBin@crAnimFrame@@QAEXPAVStream@@H@Z
    0x57DF40 | public: void __thiscall crAnimFrame::SaveBin(class Stream *) | ?SaveBin@crAnimFrame@@QAEXPAVStream@@@Z
    0x57DF60 | public: void __thiscall crAnimFrame::LoadAscii(class datTokenizer &,int) | ?LoadAscii@crAnimFrame@@QAEXAAVdatTokenizer@@H@Z
    0x57DFA0 | public: void __thiscall crAnimFrame::Print(void) | ?Print@crAnimFrame@@QAEXXZ
    0x57E010 | public: void __thiscall crAnimFrame::Mirror(class crSkeletonData const *) | ?Mirror@crAnimFrame@@QAEXPBVcrSkeletonData@@@Z
    0x57E100 | public: void __thiscall crAnimFrame::Flip(void) | ?Flip@crAnimFrame@@QAEXXZ
    0x57E110 | public: void __thiscall crAnimFrame::Blend(float,class crAnimFrame const &,class crAnimFrame const &,int,int) | ?Blend@crAnimFrame@@QAEXMABV1@0HH@Z
    0x57E1B0 | public: void __thiscall crAnimFrame::Add(class crAnimFrame const &,int,int) | ?Add@crAnimFrame@@QAEXABV1@HH@Z
    0x57E200 | public: void __thiscall crAnimFrame::AddScaled(class crAnimFrame const &,float,int,int) | ?AddScaled@crAnimFrame@@QAEXABV1@MHH@Z
    0x57E250 | public: void __thiscall crAnimFrame::Merge(class crAnimFrame const &,float) | ?Merge@crAnimFrame@@QAEXABV1@M@Z
    0x57E2E0 | public: void __thiscall crAnimFrame::Zero(void) | ?Zero@crAnimFrame@@QAEXXZ
    0x57E300 | public: void __thiscall crAnimFrame::Pose(class crSkeleton &,bool) | ?Pose@crAnimFrame@@QAEXAAVcrSkeleton@@_N@Z
*/

#include "hooking.h"
