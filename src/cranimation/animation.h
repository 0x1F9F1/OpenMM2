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
    cranimation:animation

    0x57CE60 | public: __thiscall crAnimation::crAnimation(int,int) | ??0crAnimation@@QAE@HH@Z
    0x57CF20 | private: __thiscall crAnimation::crAnimation(void) | ??0crAnimation@@AAE@XZ
    0x57CF50 | public: virtual __thiscall crAnimation::~crAnimation(void) | ??1crAnimation@@UAE@XZ
    0x57D010 | private: static void __cdecl crAnimation::DeleteAnimTable(void) | ?DeleteAnimTable@crAnimation@@CAXXZ
    0x57D070 | private: static void __cdecl crAnimation::DeleteChanTable(void) | ?DeleteChanTable@crAnimation@@CAXXZ
    0x57D0D0 | public: static bool __cdecl crAnimation::AnimExists(char const *) | ?AnimExists@crAnimation@@SA_NPBD@Z
    0x57D0F0 | public: static void __cdecl crAnimation::OutputAnimationList(void) | ?OutputAnimationList@crAnimation@@SAXXZ
    0x57D150 | public: static void __cdecl crAnimation::InitHashTables(void) | ?InitHashTables@crAnimation@@SAXXZ
    0x57D210 | public: static class crAnimation * __cdecl crAnimation::GetAnimation(char const *,bool,bool,class crAnimFrame *,bool) | ?GetAnimation@crAnimation@@SAPAV1@PBD_N1PAVcrAnimFrame@@1@Z
    0x57D300 | public: static class crAnimation * __cdecl crAnimation::GetChanAnimation(char const *,bool) | ?GetChanAnimation@crAnimation@@SAPAV1@PBD_N@Z
    0x57D3D0 | private: bool __thiscall crAnimation::LoadAnim(char const *,bool) | ?LoadAnim@crAnimation@@AAE_NPBD_N@Z
    0x57D590 | public: bool __thiscall crAnimation::SaveAnim(char const *) | ?SaveAnim@crAnimation@@QAE_NPBD@Z
    0x57D670 | private: bool __thiscall crAnimation::LoadChanAnim(char const *) | ?LoadChanAnim@crAnimation@@AAE_NPBD@Z
    0x57D7B0 | public: void __thiscall crAnimation::Normalize(bool) | ?Normalize@crAnimation@@QAEX_N@Z
    0x57D810 | public: void __thiscall crAnimation::NormalizeX(void) | ?NormalizeX@crAnimation@@QAEXXZ
    0x57D860 | public: void __thiscall crAnimation::NormalizeY(void) | ?NormalizeY@crAnimation@@QAEXXZ
    0x57D8C0 | public: void __thiscall crAnimation::ZeroX(void) | ?ZeroX@crAnimation@@QAEXXZ
    0x57D8F0 | public: void __thiscall crAnimation::ZeroY(void) | ?ZeroY@crAnimation@@QAEXXZ
    0x57D920 | public: void __thiscall crAnimation::ZeroYSeg(int,int) | ?ZeroYSeg@crAnimation@@QAEXHH@Z
    0x57D960 | public: void __thiscall crAnimation::Subtract(class crAnimFrame &) | ?Subtract@crAnimation@@QAEXAAVcrAnimFrame@@@Z
    0x57D9A0 | public: void __thiscall crAnimation::CopyAnim(class crAnimation *,int,int) | ?CopyAnim@crAnimation@@QAEXPAV1@HH@Z
    0x57DA90 | public: void __thiscall crAnimation::Flip(void) | ?Flip@crAnimation@@QAEXXZ
    0x57DAC0 | public: void __thiscall crAnimation::GetBlendFrame(class crAnimFrame &,float) const | ?GetBlendFrame@crAnimation@@QBEXAAVcrAnimFrame@@M@Z
    0x57DB60 | public: virtual void * __thiscall crAnimation::`scalar deleting destructor'(unsigned int) | ??_GcrAnimation@@UAEPAXI@Z
    public: virtual void * __thiscall crAnimation::`vector deleting destructor'(unsigned int) | ??_EcrAnimation@@UAEPAXI@Z
    0x57DB90 | public: void * __thiscall crAnimFrame::`vector deleting destructor'(unsigned int) | ??_EcrAnimFrame@@QAEPAXI@Z
    0x57DBF0 | public: void __thiscall crAnimFrame::`default constructor closure'(void) | ??_FcrAnimFrame@@QAEXXZ
    0x5B63D0 | const crAnimation::`vftable' | ??_7crAnimation@@6B@
*/

// #include "hooking.h"
