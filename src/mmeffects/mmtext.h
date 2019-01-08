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
    mmeffects:mmtext

    0x532190 | void __cdecl ddGDIFlip(void) | ?ddGDIFlip@@YAXXZ
    0x5321A0 | public: __thiscall mmText::mmText(void) | ??0mmText@@QAE@XZ
    0x5321B0 | public: __thiscall mmText::~mmText(void) | ??1mmText@@QAE@XZ
    0x5321C0 | public: static void * __cdecl mmText::CreateLocFont(struct LocString const *,int) | ?CreateLocFont@mmText@@SAPAXPBULocString@@H@Z
    0x532280 | public: static void * __cdecl mmText::CreateFont(char const *,int) | ?CreateFont@mmText@@SAPAXPBDH@Z
    0x5322B0 | public: static void __cdecl mmText::DeleteFont(void *) | ?DeleteFont@mmText@@SAXPAX@Z
    0x5322C0 | public: static void * __cdecl mmText::GetDC(class gfxBitmap *) | ?GetDC@mmText@@SAPAXPAVgfxBitmap@@@Z
    0x5322F0 | public: static void __cdecl mmText::ReleaseDC(void) | ?ReleaseDC@mmText@@SAXXZ
    0x532310 | public: static class gfxBitmap * __cdecl mmText::CreateFitBitmap(char const *,void const *,int,int) | ?CreateFitBitmap@mmText@@SAPAVgfxBitmap@@PBDPBXHH@Z
    0x5324F0 | public: void __thiscall mmText::Draw(class gfxBitmap *,float,float,char const *,void const *) | ?Draw@mmText@@QAEXPAVgfxBitmap@@MMPBDPBX@Z
    0x532580 | public: void __thiscall mmText::Draw2(class gfxBitmap *,float,float,char const *,void const *,unsigned int) | ?Draw2@mmText@@QAEXPAVgfxBitmap@@MMPBDPBXI@Z
    0x532670 | public: __thiscall mmTextNode::mmTextNode(void) | ??0mmTextNode@@QAE@XZ
    0x5326C0 | public: virtual __thiscall mmTextNode::~mmTextNode(void) | ??1mmTextNode@@UAE@XZ
    0x532750 | public: void __thiscall mmTextNode::Init(int,int,int,int,int,int) | ?Init@mmTextNode@@QAEXHHHHHH@Z
    0x532840 | public: void __thiscall mmTextNode::Init(float,float,float,float,int,int) | ?Init@mmTextNode@@QAEXMMMMHH@Z
    0x532970 | public: void __thiscall mmTextNode::SetBGColor(class Vector4 &) | ?SetBGColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x5329E0 | public: void __thiscall mmTextNode::SetFGColor(class Vector4 &) | ?SetFGColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x532A40 | public: void __thiscall mmTextNode::SetHlColor(class Vector4 &) | ?SetHlColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x532AA0 | public: unsigned int __thiscall mmTextNode::GetFGColor(void) | ?GetFGColor@mmTextNode@@QAEIXZ
    0x532AB0 | public: void __thiscall mmTextNode::SetEffects(int,int) | ?SetEffects@mmTextNode@@QAEXHH@Z
    0x532AE0 | public: int __thiscall mmTextNode::GetEffects(int) | ?GetEffects@mmTextNode@@QAEHH@Z
    0x532B10 | public: void __thiscall mmTextNode::GetTextDimensions(void const *,struct LocString const *,float &,float &) | ?GetTextDimensions@mmTextNode@@QAEXPBXPBULocString@@AAM2@Z
    0x532C20 | public: void __thiscall mmTextNode::SetTextPosition(int,float,float) | ?SetTextPosition@mmTextNode@@QAEXHMM@Z
    0x532C70 | public: int __thiscall mmTextNode::AddText(void const *,struct LocString const *,int,float,float) | ?AddText@mmTextNode@@QAEHPBXPBULocString@@HMM@Z
    0x532D50 | public: void __thiscall mmTextNode::SetString(int,struct LocString const *) | ?SetString@mmTextNode@@QAEXHPBULocString@@@Z
    0x532DB0 | public: void __thiscall mmTextNode::SetPosition(int,float,float) | ?SetPosition@mmTextNode@@QAEXHMM@Z
    0x532E20 | public: void __cdecl mmTextNode::Printf(char const *,...) | ?Printf@mmTextNode@@QAAXPBDZZ
    0x532E50 | public: virtual void __thiscall mmTextNode::Update(void) | ?Update@mmTextNode@@UAEXXZ
    0x532E80 | public: void __thiscall mmTextNode::RenderText(class gfxBitmap *,struct mmTextData *,int,unsigned int) | ?RenderText@mmTextNode@@QAEXPAVgfxBitmap@@PAUmmTextData@@HI@Z
    0x533170 | public: virtual void __thiscall mmTextNode::Cull(void) | ?Cull@mmTextNode@@UAEXXZ
    0x533280 | public: virtual void * __thiscall mmTextNode::`scalar deleting destructor'(unsigned int) | ??_GmmTextNode@@UAEPAXI@Z
    0x5B52F0 | const mmTextNode::`vftable' | ??_7mmTextNode@@6B@
*/

#include "hooking.h"
