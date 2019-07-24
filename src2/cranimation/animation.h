/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

class crAnimation : datRefCount
{
public:
    // crAnimation::`vftable' @ 0x5B63D0

    // 0x57CE60 | ??0crAnimation@@QAE@HH@Z
    inline crAnimation(int32_t arg1, int32_t arg2)
    {
        stub<member_func_t<void, crAnimation, int32_t, int32_t>>(0x57CE60, this, arg1, arg2);
    }

    // 0x57CF20 | ??0crAnimation@@AAE@XZ
    inline crAnimation()
    {
        stub<member_func_t<void, crAnimation>>(0x57CF20, this);
    }

    // 0x57D010 | ?DeleteAnimTable@crAnimation@@CAXXZ
    static inline void DeleteAnimTable()
    {
        return stub<cdecl_t<void>>(0x57D010);
    }

    // 0x57D070 | ?DeleteChanTable@crAnimation@@CAXXZ
    static inline void DeleteChanTable()
    {
        return stub<cdecl_t<void>>(0x57D070);
    }

    // 0x57D0D0 | ?AnimExists@crAnimation@@SA_NPBD@Z
    static inline bool AnimExists(char const* arg1)
    {
        return stub<cdecl_t<bool, char const*>>(0x57D0D0, arg1);
    }

    // 0x57D0F0 | ?OutputAnimationList@crAnimation@@SAXXZ
    static inline void OutputAnimationList()
    {
        return stub<cdecl_t<void>>(0x57D0F0);
    }

    // 0x57D150 | ?InitHashTables@crAnimation@@SAXXZ
    static inline void InitHashTables()
    {
        return stub<cdecl_t<void>>(0x57D150);
    }

    // 0x57D210 | ?GetAnimation@crAnimation@@SAPAV1@PBD_N1PAVcrAnimFrame@@1@Z
    static inline class crAnimation* GetAnimation(
        char const* arg1, bool arg2, bool arg3, class crAnimFrame* arg4, bool arg5)
    {
        return stub<cdecl_t<class crAnimation*, char const*, bool, bool, class crAnimFrame*, bool>>(
            0x57D210, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x57D300 | ?GetChanAnimation@crAnimation@@SAPAV1@PBD_N@Z
    static inline class crAnimation* GetChanAnimation(char const* arg1, bool arg2)
    {
        return stub<cdecl_t<class crAnimation*, char const*, bool>>(0x57D300, arg1, arg2);
    }

    // 0x57D3D0 | ?LoadAnim@crAnimation@@AAE_NPBD_N@Z
    inline bool LoadAnim(char const* arg1, bool arg2)
    {
        return stub<member_func_t<bool, crAnimation, char const*, bool>>(0x57D3D0, this, arg1, arg2);
    }

    // 0x57D590 | ?SaveAnim@crAnimation@@QAE_NPBD@Z
    inline bool SaveAnim(char const* arg1)
    {
        return stub<member_func_t<bool, crAnimation, char const*>>(0x57D590, this, arg1);
    }

    // 0x57D670 | ?LoadChanAnim@crAnimation@@AAE_NPBD@Z
    inline bool LoadChanAnim(char const* arg1)
    {
        return stub<member_func_t<bool, crAnimation, char const*>>(0x57D670, this, arg1);
    }

    // 0x57D7B0 | ?Normalize@crAnimation@@QAEX_N@Z
    inline void Normalize(bool arg1)
    {
        return stub<member_func_t<void, crAnimation, bool>>(0x57D7B0, this, arg1);
    }

    // 0x57D810 | ?NormalizeX@crAnimation@@QAEXXZ
    inline void NormalizeX()
    {
        return stub<member_func_t<void, crAnimation>>(0x57D810, this);
    }

    // 0x57D860 | ?NormalizeY@crAnimation@@QAEXXZ
    inline void NormalizeY()
    {
        return stub<member_func_t<void, crAnimation>>(0x57D860, this);
    }

    // 0x57D8C0 | ?ZeroX@crAnimation@@QAEXXZ
    inline void ZeroX()
    {
        return stub<member_func_t<void, crAnimation>>(0x57D8C0, this);
    }

    // 0x57D8F0 | ?ZeroY@crAnimation@@QAEXXZ
    inline void ZeroY()
    {
        return stub<member_func_t<void, crAnimation>>(0x57D8F0, this);
    }

    // 0x57D920 | ?ZeroYSeg@crAnimation@@QAEXHH@Z
    inline void ZeroYSeg(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, crAnimation, int32_t, int32_t>>(0x57D920, this, arg1, arg2);
    }

    // 0x57D960 | ?Subtract@crAnimation@@QAEXAAVcrAnimFrame@@@Z
    inline void Subtract(class crAnimFrame& arg1)
    {
        return stub<member_func_t<void, crAnimation, class crAnimFrame&>>(0x57D960, this, arg1);
    }

    // 0x57D9A0 | ?CopyAnim@crAnimation@@QAEXPAV1@HH@Z
    inline void CopyAnim(class crAnimation* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, crAnimation, class crAnimation*, int32_t, int32_t>>(
            0x57D9A0, this, arg1, arg2, arg3);
    }

    // 0x57DA90 | ?Flip@crAnimation@@QAEXXZ
    inline void Flip()
    {
        return stub<member_func_t<void, crAnimation>>(0x57DA90, this);
    }

    // 0x57DAC0 | ?GetBlendFrame@crAnimation@@QBEXAAVcrAnimFrame@@M@Z
    inline void GetBlendFrame(class crAnimFrame& arg1, float arg2)
    {
        return stub<member_func_t<void, crAnimation, class crAnimFrame&, float>>(0x57DAC0, this, arg1, arg2);
    }

    // 0x57CF50 | ??1crAnimation@@UAE@XZ
    inline ~crAnimation() override
    {
        stub<member_func_t<void, crAnimation>>(0x57CF50, this);
    }
};
