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

// 0x57DC00 | ?sAcquireBuffer@@YAPAMH@Z
inline f32* sAcquireBuffer(i32 arg1)
{
    return stub<cdecl_t<f32*, i32>>(0x57DC00, arg1);
}

// 0x57DC50 | ?sIsBuffer@@YA_NPAM@Z
inline bool sIsBuffer(f32* arg1)
{
    return stub<cdecl_t<bool, f32*>>(0x57DC50, arg1);
}

class crAnimFrame
{
public:
    // 0x57DB90 | ??_EcrAnimFrame@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x57DC80 | ?AllocateBuffers@crAnimFrame@@SAXHH@Z
    static inline void AllocateBuffers(i32 arg1, i32 arg2)
    {
        return stub<cdecl_t<void, i32, i32>>(0x57DC80, arg1, arg2);
    }

    // 0x57DD00 | ?DeallocateBuffers@crAnimFrame@@SAXXZ
    static inline void DeallocateBuffers()
    {
        return stub<cdecl_t<void>>(0x57DD00);
    }

    // 0x57DDA0 | ??0crAnimFrame@@QAE@_N@Z
    crAnimFrame(bool arg1)
    {
        stub<member_func_t<void, crAnimFrame, bool>>(0x57DDA0, this, arg1);
    }

    // 0x57DDE0 | ??0crAnimFrame@@QAE@ABV0@@Z
    crAnimFrame(class crAnimFrame const& arg1)
    {
        stub<member_func_t<void, crAnimFrame, class crAnimFrame const&>>(0x57DDE0, this, arg1);
    }

    // 0x57DE10 | ??1crAnimFrame@@QAE@XZ
    ~crAnimFrame()
    {
        stub<member_func_t<void, crAnimFrame>>(0x57DE10, this);
    }

    // 0x57DE70 | ??4crAnimFrame@@QAEABV0@ABV0@@Z
    class crAnimFrame const& operator=(class crAnimFrame const& arg1)
    {
        return stub<member_func_t<class crAnimFrame const&, crAnimFrame, class crAnimFrame const&>>(
            0x57DE70, this, arg1);
    }

    // 0x57DE90 | ?Copy@crAnimFrame@@AAEXABV1@@Z
    void Copy(class crAnimFrame const& arg1)
    {
        return stub<member_func_t<void, crAnimFrame, class crAnimFrame const&>>(0x57DE90, this, arg1);
    }

    // 0x57DED0 | ?Init@crAnimFrame@@QAEXH@Z
    void Init(i32 arg1)
    {
        return stub<member_func_t<void, crAnimFrame, i32>>(0x57DED0, this, arg1);
    }

    // 0x57DF10 | ?LoadBin@crAnimFrame@@QAEXPAVStream@@H@Z
    void LoadBin(class Stream* arg1, i32 arg2)
    {
        return stub<member_func_t<void, crAnimFrame, class Stream*, i32>>(0x57DF10, this, arg1, arg2);
    }

    // 0x57DF40 | ?SaveBin@crAnimFrame@@QAEXPAVStream@@@Z
    void SaveBin(class Stream* arg1)
    {
        return stub<member_func_t<void, crAnimFrame, class Stream*>>(0x57DF40, this, arg1);
    }

    // 0x57DF60 | ?LoadAscii@crAnimFrame@@QAEXAAVdatTokenizer@@H@Z
    void LoadAscii(class datTokenizer& arg1, i32 arg2)
    {
        return stub<member_func_t<void, crAnimFrame, class datTokenizer&, i32>>(0x57DF60, this, arg1, arg2);
    }

    // 0x57DFA0 | ?Print@crAnimFrame@@QAEXXZ
    void Print()
    {
        return stub<member_func_t<void, crAnimFrame>>(0x57DFA0, this);
    }

    // 0x57E010 | ?Mirror@crAnimFrame@@QAEXPBVcrSkeletonData@@@Z
    void Mirror(class crSkeletonData const* arg1)
    {
        return stub<member_func_t<void, crAnimFrame, class crSkeletonData const*>>(0x57E010, this, arg1);
    }

    // 0x57E100 | ?Flip@crAnimFrame@@QAEXXZ
    void Flip()
    {
        return stub<member_func_t<void, crAnimFrame>>(0x57E100, this);
    }

    // 0x57E110 | ?Blend@crAnimFrame@@QAEXMABV1@0HH@Z
    void Blend(f32 arg1, class crAnimFrame const& arg2, class crAnimFrame const& arg3, i32 arg4, i32 arg5)
    {
        return stub<
            member_func_t<void, crAnimFrame, f32, class crAnimFrame const&, class crAnimFrame const&, i32, i32>>(
            0x57E110, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x57E1B0 | ?Add@crAnimFrame@@QAEXABV1@HH@Z
    void Add(class crAnimFrame const& arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, crAnimFrame, class crAnimFrame const&, i32, i32>>(
            0x57E1B0, this, arg1, arg2, arg3);
    }

    // 0x57E200 | ?AddScaled@crAnimFrame@@QAEXABV1@MHH@Z
    void AddScaled(class crAnimFrame const& arg1, f32 arg2, i32 arg3, i32 arg4)
    {
        return stub<member_func_t<void, crAnimFrame, class crAnimFrame const&, f32, i32, i32>>(
            0x57E200, this, arg1, arg2, arg3, arg4);
    }

    // 0x57E250 | ?Merge@crAnimFrame@@QAEXABV1@M@Z
    void Merge(class crAnimFrame const& arg1, f32 arg2)
    {
        return stub<member_func_t<void, crAnimFrame, class crAnimFrame const&, f32>>(0x57E250, this, arg1, arg2);
    }

    // 0x57E2E0 | ?Zero@crAnimFrame@@QAEXXZ
    void Zero()
    {
        return stub<member_func_t<void, crAnimFrame>>(0x57E2E0, this);
    }

    // 0x57E300 | ?Pose@crAnimFrame@@QAEXAAVcrSkeleton@@_N@Z
    void Pose(class crSkeleton& arg1, bool arg2)
    {
        return stub<member_func_t<void, crAnimFrame, class crSkeleton&, bool>>(0x57E300, this, arg1, arg2);
    }
};
