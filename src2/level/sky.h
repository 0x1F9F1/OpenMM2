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

#include "node/cullable.h"

/*
    level:sky

    0x464C00 | public: __thiscall lvlSky::lvlSky(void) | ??0lvlSky@@QAE@XZ
    0x464C90 | public: virtual void __thiscall lvlSky::Reset(void) | ?Reset@lvlSky@@UAEXXZ
    0x464CA0 | public: virtual __thiscall lvlSky::~lvlSky(void) | ??1lvlSky@@UAE@XZ
    0x464CB0 | public: void __thiscall lvlSky::AutoInit(char const *,char const *,int) | ?AutoInit@lvlSky@@QAEXPBD0H@Z
    private: void __thiscall lvlSky::Save(void) | ?Save@lvlSky@@AAEXXZ
    0x464E90 | public: void __thiscall lvlSky::Init(char const *,float,float,float,int) | ?Init@lvlSky@@QAEXPBDMMMH@Z
    0x464F90 | public: virtual void __thiscall lvlSky::Update(void) | ?Update@lvlSky@@UAEXXZ
    0x464FB0 | public: virtual void __thiscall lvlSky::Draw(void) | ?Draw@lvlSky@@UAEXXZ
    0x4650B0 | public: virtual void __thiscall lvlSky::DrawWithNoZState(void) | ?DrawWithNoZState@lvlSky@@UAEXXZ
    0x465140 | public: virtual void __thiscall lvlSky::DrawHat(void) | ?DrawHat@lvlSky@@UAEXXZ
    0x465270 | public: void __thiscall lvlSky::SetupFog(float) | ?SetupFog@lvlSky@@QAEXM@Z
    public: void __thiscall lvlSky::AddWidgets(class bkBank &) | ?AddWidgets@lvlSky@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall lvlSky::`vector deleting destructor'(unsigned int) | ??_ElvlSky@@UAEPAXI@Z
    0x465340 | public: virtual void * __thiscall lvlSky::`scalar deleting destructor'(unsigned int) | ??_GlvlSky@@UAEPAXI@Z
    0x5B19F4 | const lvlSky::`vftable' | ??_7lvlSky@@6B@
    0x5C684C | char * * time_weather_variants | ?time_weather_variants@@3PAPADA
    0x655788 | private: static unsigned int lvlSky::sm_ClearColor | ?sm_ClearColor@lvlSky@@0IA
*/

class lvlSky : public asCullable
{
    // const lvlSky::`vftable' @ 0x5B19F4

public:
    // 0x464C00 | ??0lvlSky@@QAE@XZ
    lvlSky();

    // 0x465340 | ??_GlvlSky@@UAEPAXI@Z
    // 0x464CA0 | ??1lvlSky@@UAE@XZ
    ~lvlSky() override;

    // 0x464CB0 | ?AutoInit@lvlSky@@QAEXPBD0H@Z
    void AutoInit(char const* arg1, char const* arg2, i32 arg3);

    // 0x464E90 | ?Init@lvlSky@@QAEXPBDMMMH@Z
    void Init(char const* arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5);

    // 0x465270 | ?SetupFog@lvlSky@@QAEXM@Z
    void SetupFog(f32 arg1);

    // 0x464C90 | ?Reset@lvlSky@@UAEXXZ
    virtual void Reset();

    // 0x464F90 | ?Update@lvlSky@@UAEXXZ
    virtual void Update();

    // 0x464FB0 | ?Draw@lvlSky@@UAEXXZ
    virtual void Draw();

    // 0x4650B0 | ?DrawWithNoZState@lvlSky@@UAEXXZ
    virtual void DrawWithNoZState();

    // 0x465140 | ?DrawHat@lvlSky@@UAEXXZ
    virtual void DrawHat();

private:
    // 0x655788 | ?sm_ClearColor@lvlSky@@0IA
    static inline extern_var(0x655788, u32, sm_ClearColor);
};

check_size(lvlSky, 0x0);

// 0x5C684C | ?time_weather_variants@@3PAPADA
inline extern_var(0x5C684C, char**, time_weather_variants);
