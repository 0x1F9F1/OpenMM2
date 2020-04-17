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

// 0x532190 | ?ddGDIFlip@@YAXXZ
inline void ddGDIFlip()
{
    return stub<cdecl_t<void>>(0x532190);
}

class mmTextNode : asNode
{
public:
    // mmTextNode::`vftable' @ 0x5B52F0

    // 0x532670 | ??0mmTextNode@@QAE@XZ
    mmTextNode()
    {
        stub<member_func_t<void, mmTextNode>>(0x532670, this);
    }

    // 0x532750 | ?Init@mmTextNode@@QAEXHHHHHH@Z
    void Init(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6)
    {
        return stub<member_func_t<void, mmTextNode, i32, i32, i32, i32, i32, i32>>(
            0x532750, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x532840 | ?Init@mmTextNode@@QAEXMMMMHH@Z
    void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5, i32 arg6)
    {
        return stub<member_func_t<void, mmTextNode, f32, f32, f32, f32, i32, i32>>(
            0x532840, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x532970 | ?SetBGColor@mmTextNode@@QAEXAAVVector4@@@Z
    void SetBGColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x532970, this, arg1);
    }

    // 0x5329E0 | ?SetFGColor@mmTextNode@@QAEXAAVVector4@@@Z
    void SetFGColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x5329E0, this, arg1);
    }

    // 0x532A40 | ?SetHlColor@mmTextNode@@QAEXAAVVector4@@@Z
    void SetHlColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x532A40, this, arg1);
    }

    // 0x532AA0 | ?GetFGColor@mmTextNode@@QAEIXZ
    u32 GetFGColor()
    {
        return stub<member_func_t<u32, mmTextNode>>(0x532AA0, this);
    }

    // 0x532AB0 | ?SetEffects@mmTextNode@@QAEXHH@Z
    void SetEffects(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmTextNode, i32, i32>>(0x532AB0, this, arg1, arg2);
    }

    // 0x532AE0 | ?GetEffects@mmTextNode@@QAEHH@Z
    i32 GetEffects(i32 arg1)
    {
        return stub<member_func_t<i32, mmTextNode, i32>>(0x532AE0, this, arg1);
    }

    // 0x532B10 | ?GetTextDimensions@mmTextNode@@QAEXPBXPBULocString@@AAM2@Z
    void GetTextDimensions(void const* arg1, struct LocString const* arg2, f32& arg3, f32& arg4)
    {
        return stub<member_func_t<void, mmTextNode, void const*, struct LocString const*, f32&, f32&>>(
            0x532B10, this, arg1, arg2, arg3, arg4);
    }

    // 0x532C20 | ?SetTextPosition@mmTextNode@@QAEXHMM@Z
    void SetTextPosition(i32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmTextNode, i32, f32, f32>>(0x532C20, this, arg1, arg2, arg3);
    }

    // 0x532C70 | ?AddText@mmTextNode@@QAEHPBXPBULocString@@HMM@Z
    i32 AddText(void const* arg1, struct LocString const* arg2, i32 arg3, f32 arg4, f32 arg5)
    {
        return stub<member_func_t<i32, mmTextNode, void const*, struct LocString const*, i32, f32, f32>>(
            0x532C70, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x532D50 | ?SetString@mmTextNode@@QAEXHPBULocString@@@Z
    void SetString(i32 arg1, struct LocString const* arg2)
    {
        return stub<member_func_t<void, mmTextNode, i32, struct LocString const*>>(0x532D50, this, arg1, arg2);
    }

    // 0x532DB0 | ?SetPosition@mmTextNode@@QAEXHMM@Z
    void SetPosition(i32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmTextNode, i32, f32, f32>>(0x532DB0, this, arg1, arg2, arg3);
    }

    // 0x532E20 | ?Printf@mmTextNode@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x532E80 | ?RenderText@mmTextNode@@QAEXPAVgfxBitmap@@PAUmmTextData@@HI@Z
    void RenderText(class gfxBitmap* arg1, struct mmTextData* arg2, i32 arg3, u32 arg4)
    {
        return stub<member_func_t<void, mmTextNode, class gfxBitmap*, struct mmTextData*, i32, u32>>(
            0x532E80, this, arg1, arg2, arg3, arg4);
    }

    // 0x5326C0 | ??1mmTextNode@@UAE@XZ
    ~mmTextNode() override
    {
        stub<member_func_t<void, mmTextNode>>(0x5326C0, this);
    }

    // 0x533170 | ?Cull@mmTextNode@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmTextNode>>(0x533170, this);
    }

    // 0x532E50 | ?Update@mmTextNode@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmTextNode>>(0x532E50, this);
    }
};

struct mmText
{
public:
    // 0x5321A0 | ??0mmText@@QAE@XZ
    mmText()
    {
        stub<member_func_t<void, mmText>>(0x5321A0, this);
    }

    // 0x5321B0 | ??1mmText@@QAE@XZ
    ~mmText()
    {
        stub<member_func_t<void, mmText>>(0x5321B0, this);
    }

    // 0x5321C0 | ?CreateLocFont@mmText@@SAPAXPBULocString@@H@Z
    static inline void* CreateLocFont(struct LocString const* arg1, i32 arg2)
    {
        return stub<cdecl_t<void*, struct LocString const*, i32>>(0x5321C0, arg1, arg2);
    }

    // 0x532280 | ?CreateFont@mmText@@SAPAXPBDH@Z
    static inline void* CreateFont(char const* arg1, i32 arg2)
    {
        return stub<cdecl_t<void*, char const*, i32>>(0x532280, arg1, arg2);
    }

    // 0x5322B0 | ?DeleteFont@mmText@@SAXPAX@Z
    static inline void DeleteFont(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x5322B0, arg1);
    }

    // 0x5322C0 | ?GetDC@mmText@@SAPAXPAVgfxBitmap@@@Z
    static inline void* GetDC(class gfxBitmap* arg1)
    {
        return stub<cdecl_t<void*, class gfxBitmap*>>(0x5322C0, arg1);
    }

    // 0x5322F0 | ?ReleaseDC@mmText@@SAXXZ
    static inline void ReleaseDC()
    {
        return stub<cdecl_t<void>>(0x5322F0);
    }

    // 0x532310 | ?CreateFitBitmap@mmText@@SAPAVgfxBitmap@@PBDPBXHH@Z
    static inline class gfxBitmap* CreateFitBitmap(char const* arg1, void const* arg2, i32 arg3, i32 arg4)
    {
        return stub<cdecl_t<class gfxBitmap*, char const*, void const*, i32, i32>>(0x532310, arg1, arg2, arg3, arg4);
    }

    // 0x5324F0 | ?Draw@mmText@@QAEXPAVgfxBitmap@@MMPBDPBX@Z
    void Draw(class gfxBitmap* arg1, f32 arg2, f32 arg3, char const* arg4, void const* arg5)
    {
        return stub<member_func_t<void, mmText, class gfxBitmap*, f32, f32, char const*, void const*>>(
            0x5324F0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x532580 | ?Draw2@mmText@@QAEXPAVgfxBitmap@@MMPBDPBXI@Z
    void Draw2(class gfxBitmap* arg1, f32 arg2, f32 arg3, char const* arg4, void const* arg5, u32 arg6)
    {
        return stub<member_func_t<void, mmText, class gfxBitmap*, f32, f32, char const*, void const*, u32>>(
            0x532580, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
