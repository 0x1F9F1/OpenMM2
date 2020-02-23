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
    ped:ped

    0x57A7A0 | public: int __thiscall pedAnimation::LookupSequence(char *) | ?LookupSequence@pedAnimation@@QAEHPAD@Z
    0x57A800 | public: void __thiscall pedAnimation::Load(char *,class Stream *) | ?Load@pedAnimation@@QAEXPADPAVStream@@@Z
    0x57AB40 | public: static void __cdecl pedAnimation::Init(void) | ?Init@pedAnimation@@SAXXZ
    0x57AB60 | public: void __thiscall pedAnimation::DrawSkeleton(int,class crSkeleton *) | ?DrawSkeleton@pedAnimation@@QAEXHPAVcrSkeleton@@@Z
    public: void __thiscall pedAnimation::Save(void) | ?Save@pedAnimation@@QAEXXZ
    public: void __thiscall pedAnimation::ChangeCurrent(void) | ?ChangeCurrent@pedAnimation@@QAEXXZ
    public: void __thiscall pedAnimation::ChangeVariant(int) | ?ChangeVariant@pedAnimation@@QAEXH@Z
    public: void __thiscall pedAnimation::AddWidgets(class bkBank &) | ?AddWidgets@pedAnimation@@QAEXAAVbkBank@@@Z
    0x57ADB0 | public: void __thiscall pedAnimationInstance::Init(char *) | ?Init@pedAnimationInstance@@QAEXPAD@Z
    0x57B270 | public: void __thiscall pedAnimationInstance::PreUpdate(float) | ?PreUpdate@pedAnimationInstance@@QAEXM@Z
    0x57B2C0 | public: void __thiscall pedAnimationInstance::Reset(void) | ?Reset@pedAnimationInstance@@QAEXXZ
    0x57B2F0 | public: void __thiscall pedAnimationInstance::Update(void) | ?Update@pedAnimationInstance@@QAEXXZ
    0x57B370 | public: void __thiscall pedAnimationInstance::Draw(bool) | ?Draw@pedAnimationInstance@@QAEX_N@Z
    0x57B510 | public: void __thiscall pedAnimationInstance::DrawShadow(void) | ?DrawShadow@pedAnimationInstance@@QAEXXZ
    0x57B520 | public: void __thiscall pedAnimationInstance::VerifySeq(int) | ?VerifySeq@pedAnimationInstance@@QAEXH@Z
    0x57B550 | public: void __thiscall pedAnimationInstance::Start(int) | ?Start@pedAnimationInstance@@QAEXH@Z
    public: void __thiscall pedAnimationInstance::AddWidgets(class bkBank &) | ?AddWidgets@pedAnimationInstance@@QAEXAAVbkBank@@@Z
    0x6B4720 | private: static int pedAnimationInstance::FrameDelta | ?FrameDelta@pedAnimationInstance@@0HA
    0x6B4724 | private: static float pedAnimationInstance::FrameFraction | ?FrameFraction@pedAnimationInstance@@0MA
    int accumTriPEDS | ?accumTriPEDS@@3HA
    unsigned int accumTimePEDS | ?accumTimePEDS@@3IA
*/

struct pedAnimation
{
public:
    // 0x57A7A0 | ?LookupSequence@pedAnimation@@QAEHPAD@Z
    inline i32 LookupSequence(char* arg1)
    {
        return stub<member_func_t<i32, pedAnimation, char*>>(0x57A7A0, this, arg1);
    }

    // 0x57A800 | ?Load@pedAnimation@@QAEXPADPAVStream@@@Z
    inline void Load(char* arg1, class Stream* arg2)
    {
        return stub<member_func_t<void, pedAnimation, char*, class Stream*>>(0x57A800, this, arg1, arg2);
    }

    // 0x57AB40 | ?Init@pedAnimation@@SAXXZ
    static inline void Init()
    {
        return stub<cdecl_t<void>>(0x57AB40);
    }

    // 0x57AB60 | ?DrawSkeleton@pedAnimation@@QAEXHPAVcrSkeleton@@@Z
    inline void DrawSkeleton(i32 arg1, class crSkeleton* arg2)
    {
        return stub<member_func_t<void, pedAnimation, i32, class crSkeleton*>>(0x57AB60, this, arg1, arg2);
    }
};

struct pedAnimationInstance
{
public:
    // 0x57ADB0 | ?Init@pedAnimationInstance@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, pedAnimationInstance, char*>>(0x57ADB0, this, arg1);
    }

    // 0x57B270 | ?PreUpdate@pedAnimationInstance@@QAEXM@Z
    inline void PreUpdate(f32 arg1)
    {
        return stub<member_func_t<void, pedAnimationInstance, f32>>(0x57B270, this, arg1);
    }

    // 0x57B2C0 | ?Reset@pedAnimationInstance@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, pedAnimationInstance>>(0x57B2C0, this);
    }

    // 0x57B2F0 | ?Update@pedAnimationInstance@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, pedAnimationInstance>>(0x57B2F0, this);
    }

    // 0x57B370 | ?Draw@pedAnimationInstance@@QAEX_N@Z
    inline void Draw(bool arg1)
    {
        return stub<member_func_t<void, pedAnimationInstance, bool>>(0x57B370, this, arg1);
    }

    // 0x57B510 | ?DrawShadow@pedAnimationInstance@@QAEXXZ
    inline void DrawShadow()
    {
        return stub<member_func_t<void, pedAnimationInstance>>(0x57B510, this);
    }

    // 0x57B520 | ?VerifySeq@pedAnimationInstance@@QAEXH@Z
    inline void VerifySeq(i32 arg1)
    {
        return stub<member_func_t<void, pedAnimationInstance, i32>>(0x57B520, this, arg1);
    }

    // 0x57B550 | ?Start@pedAnimationInstance@@QAEXH@Z
    inline void Start(i32 arg1)
    {
        return stub<member_func_t<void, pedAnimationInstance, i32>>(0x57B550, this, arg1);
    }

    // 0x6B4720 | ?FrameDelta@pedAnimationInstance@@0HA
    inline extern_var(0x6B4720, int32_t, FrameDelta);

    // 0x6B4724 | ?FrameFraction@pedAnimationInstance@@0MA
    inline extern_var(0x6B4724, float, FrameFraction);
};
