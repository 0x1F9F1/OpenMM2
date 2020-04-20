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
    effects:card2d

    0x5928B0 | public: __thiscall Card2D::Card2D(void) | ??0Card2D@@QAE@XZ
    0x5928D0 | public: void __thiscall Card2D::Init(class asCamera *,float,float,float,float,float) | ?Init@Card2D@@QAEXPAVasCamera@@MMMMM@Z
    0x592910 | public: void __thiscall Card2D::SetDimensions(float,float,float,float) | ?SetDimensions@Card2D@@QAEXMMMM@Z
    0x592A00 | public: void __thiscall Card2D::SetPosition(float,float) | ?SetPosition@Card2D@@QAEXMM@Z
    0x592A20 | public: void __thiscall Card2D::SetAlpha(float) | ?SetAlpha@Card2D@@QAEXM@Z
    0x592A80 | public: virtual void __thiscall Card2D::Update(void) | ?Update@Card2D@@UAEXXZ
    0x592A90 | private: virtual void __thiscall Card2D::Cull(void) | ?Cull@Card2D@@EAEXXZ
    private: virtual void __thiscall Card2D::AddWidgets(class bkBank &) | ?AddWidgets@Card2D@@EAEXAAVbkBank@@@Z
    public: virtual void * __thiscall Card2D::`vector deleting destructor'(unsigned int) | ??_ECard2D@@UAEPAXI@Z
    0x592C50 | public: virtual void * __thiscall Card2D::`scalar deleting destructor'(unsigned int) | ??_GCard2D@@UAEPAXI@Z
    0x592C80 | public: virtual __thiscall Card2D::~Card2D(void) | ??1Card2D@@UAE@XZ
    0x5B8600 | const Card2D::`vftable' | ??_7Card2D@@6B@
*/

struct Card2D : asNode
{
public:
    // Card2D::`vftable' @ 0x5B8600

    // 0x5928B0 | ??0Card2D@@QAE@XZ
    inline Card2D()
    {
        stub<member_func_t<void, Card2D>>(0x5928B0, this);
    }

    // 0x5928D0 | ?Init@Card2D@@QAEXPAVasCamera@@MMMMM@Z
    inline void Init(class asCamera* arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
    {
        return stub<member_func_t<void, Card2D, class asCamera*, float, float, float, float, float>>(
            0x5928D0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x592910 | ?SetDimensions@Card2D@@QAEXMMMM@Z
    inline void SetDimensions(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Card2D, float, float, float, float>>(0x592910, this, arg1, arg2, arg3, arg4);
    }

    // 0x592A00 | ?SetPosition@Card2D@@QAEXMM@Z
    inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, Card2D, float, float>>(0x592A00, this, arg1, arg2);
    }

    // 0x592A20 | ?SetAlpha@Card2D@@QAEXM@Z
    inline void SetAlpha(float arg1)
    {
        return stub<member_func_t<void, Card2D, float>>(0x592A20, this, arg1);
    }

    // 0x592C80 | ??1Card2D@@UAE@XZ
    inline ~Card2D() override
    {
        stub<member_func_t<void, Card2D>>(0x592C80, this);
    }

    // 0x592A90 | ?Cull@Card2D@@EAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, Card2D>>(0x592A90, this);
    }

    // 0x592A80 | ?Update@Card2D@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, Card2D>>(0x592A80, this);
    }
};
