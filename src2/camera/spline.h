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
    camera:spline

    0x522BC0 | public: __thiscall Spline::Spline(void) | ??0Spline@@QAE@XZ
    0x522BF0 | public: void __thiscall Spline::Init(float *,int) | ?Init@Spline@@QAEXPAMH@Z
    0x522D00 | public: int __thiscall Spline::InRange(void) | ?InRange@Spline@@QAEHXZ
    0x522D50 | public: void __thiscall Spline::CalcCoeff(void) | ?CalcCoeff@Spline@@QAEXXZ
    0x522E60 | public: void __thiscall Spline::SetValue(float *) | ?SetValue@Spline@@QAEXPAM@Z
    0x522ED0 | public: void __thiscall Spline::SetGoal(float *,float) | ?SetGoal@Spline@@QAEXPAMM@Z
    0x522FB0 | public: void __thiscall Spline::Solve(float) | ?Solve@Spline@@QAEXM@Z
    0x5230E0 | public: void __thiscall Spline::Print(int) | ?Print@Spline@@QAEXH@Z
    0x5231E0 | public: void __thiscall Spline::FixTimeStop(void) | ?FixTimeStop@Spline@@QAEXXZ
    0x523210 | public: virtual void __thiscall Spline::Update(void) | ?Update@Spline@@UAEXXZ
    public: virtual void __thiscall Spline::AddWidgets(class bkBank &) | ?AddWidgets@Spline@@UAEXAAVbkBank@@@Z
    0x523260 | public: virtual void * __thiscall Spline::`scalar deleting destructor'(unsigned int) | ??_GSpline@@UAEPAXI@Z
    public: virtual void * __thiscall Spline::`vector deleting destructor'(unsigned int) | ??_ESpline@@UAEPAXI@Z
    0x5B51B8 | const Spline::`vftable' | ??_7Spline@@6B@
*/

struct Spline : asNode
{
public:
    // Spline::`vftable' @ 0x5B51B8

    // 0x522BC0 | ??0Spline@@QAE@XZ
    Spline()
    {
        stub<member_func_t<void, Spline>>(0x522BC0, this);
    }

    // 0x522BF0 | ?Init@Spline@@QAEXPAMH@Z
    void Init(f32* arg1, i32 arg2)
    {
        return stub<member_func_t<void, Spline, f32*, i32>>(0x522BF0, this, arg1, arg2);
    }

    // 0x522D00 | ?InRange@Spline@@QAEHXZ
    i32 InRange()
    {
        return stub<member_func_t<i32, Spline>>(0x522D00, this);
    }

    // 0x522D50 | ?CalcCoeff@Spline@@QAEXXZ
    void CalcCoeff()
    {
        return stub<member_func_t<void, Spline>>(0x522D50, this);
    }

    // 0x522E60 | ?SetValue@Spline@@QAEXPAM@Z
    void SetValue(f32* arg1)
    {
        return stub<member_func_t<void, Spline, f32*>>(0x522E60, this, arg1);
    }

    // 0x522ED0 | ?SetGoal@Spline@@QAEXPAMM@Z
    void SetGoal(f32* arg1, f32 arg2)
    {
        return stub<member_func_t<void, Spline, f32*, f32>>(0x522ED0, this, arg1, arg2);
    }

    // 0x522FB0 | ?Solve@Spline@@QAEXM@Z
    void Solve(f32 arg1)
    {
        return stub<member_func_t<void, Spline, f32>>(0x522FB0, this, arg1);
    }

    // 0x5230E0 | ?Print@Spline@@QAEXH@Z
    void Print(i32 arg1)
    {
        return stub<member_func_t<void, Spline, i32>>(0x5230E0, this, arg1);
    }

    // 0x5231E0 | ?FixTimeStop@Spline@@QAEXXZ
    void FixTimeStop()
    {
        return stub<member_func_t<void, Spline>>(0x5231E0, this);
    }

    // 0x51FD50 | ??1Spline@@UAE@XZ
    ~Spline() override
    {
        stub<member_func_t<void, Spline>>(0x51FD50, this);
    }

    // 0x523210 | ?Update@Spline@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, Spline>>(0x523210, this);
    }
};
