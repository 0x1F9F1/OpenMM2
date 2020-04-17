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
    private: static unsigned int lvlSky::sm_ClearColor | ?sm_ClearColor@lvlSky@@0IA
*/

// 0x5C684C | ?time_weather_variants@@3PAPADA
inline extern_var(0x5C684C, char**, time_weather_variants);

struct lvlSky : asCullable
{
public:
    // lvlSky::`vftable' @ 0x5B19F4

    // 0x464C00 | ??0lvlSky@@QAE@XZ
    lvlSky()
    {
        stub<member_func_t<void, lvlSky>>(0x464C00, this);
    }

    // 0x464CB0 | ?AutoInit@lvlSky@@QAEXPBD0H@Z
    void AutoInit(char const* arg1, char const* arg2, i32 arg3)
    {
        return stub<member_func_t<void, lvlSky, char const*, char const*, i32>>(0x464CB0, this, arg1, arg2, arg3);
    }

    // 0x464E90 | ?Init@lvlSky@@QAEXPBDMMMH@Z
    void Init(char const* arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5)
    {
        return stub<member_func_t<void, lvlSky, char const*, f32, f32, f32, i32>>(
            0x464E90, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x465270 | ?SetupFog@lvlSky@@QAEXM@Z
    void SetupFog(f32 arg1)
    {
        return stub<member_func_t<void, lvlSky, f32>>(0x465270, this, arg1);
    }

    // 0x464CA0 | ??1lvlSky@@UAE@XZ
    virtual ~lvlSky()
    {
        stub<member_func_t<void, lvlSky>>(0x464CA0, this);
    }

    // 0x464C90 | ?Reset@lvlSky@@UAEXXZ
    virtual void Reset()
    {
        return stub<member_func_t<void, lvlSky>>(0x464C90, this);
    }

    // 0x464F90 | ?Update@lvlSky@@UAEXXZ
    virtual void Update()
    {
        return stub<member_func_t<void, lvlSky>>(0x464F90, this);
    }

    // 0x464FB0 | ?Draw@lvlSky@@UAEXXZ
    virtual void Draw()
    {
        return stub<member_func_t<void, lvlSky>>(0x464FB0, this);
    }

    // 0x4650B0 | ?DrawWithNoZState@lvlSky@@UAEXXZ
    virtual void DrawWithNoZState()
    {
        return stub<member_func_t<void, lvlSky>>(0x4650B0, this);
    }

    // 0x465140 | ?DrawHat@lvlSky@@UAEXXZ
    virtual void DrawHat()
    {
        return stub<member_func_t<void, lvlSky>>(0x465140, this);
    }
};
