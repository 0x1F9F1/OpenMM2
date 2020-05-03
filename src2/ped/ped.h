/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    // 0x57AB60 | ?DrawSkeleton@pedAnimation@@QAEXHPAVcrSkeleton@@@Z
    void DrawSkeleton(i32 arg1, class crSkeleton* arg2);

    // 0x57A800 | ?Load@pedAnimation@@QAEXPADPAVStream@@@Z
    void Load(char* arg1, class Stream* arg2);

    // 0x57A7A0 | ?LookupSequence@pedAnimation@@QAEHPAD@Z
    i32 LookupSequence(char* arg1);

    // 0x57AB40 | ?Init@pedAnimation@@SAXXZ
    static void Init();
};

check_size(pedAnimation, 0x0);

struct pedAnimationInstance
{
public:
    // 0x57B370 | ?Draw@pedAnimationInstance@@QAEX_N@Z
    void Draw(bool arg1);

    // 0x57B510 | ?DrawShadow@pedAnimationInstance@@QAEXXZ
    void DrawShadow();

    // 0x57ADB0 | ?Init@pedAnimationInstance@@QAEXPAD@Z
    void Init(char* arg1);

    // 0x57B270 | ?PreUpdate@pedAnimationInstance@@QAEXM@Z
    void PreUpdate(f32 arg1);

    // 0x57B2C0 | ?Reset@pedAnimationInstance@@QAEXXZ
    void Reset();

    // 0x57B550 | ?Start@pedAnimationInstance@@QAEXH@Z
    void Start(i32 arg1);

    // 0x57B2F0 | ?Update@pedAnimationInstance@@QAEXXZ
    void Update();

    // 0x57B520 | ?VerifySeq@pedAnimationInstance@@QAEXH@Z
    void VerifySeq(i32 arg1);

private:
    // 0x6B4720 | ?FrameDelta@pedAnimationInstance@@0HA
    static inline extern_var(0x6B4720, i32, FrameDelta);

    // 0x6B4724 | ?FrameFraction@pedAnimationInstance@@0MA
    static inline extern_var(0x6B4724, f32, FrameFraction);
};

check_size(pedAnimationInstance, 0x0);
