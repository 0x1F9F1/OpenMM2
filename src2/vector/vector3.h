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
    vector:vector3

    0x4BFEB0 | public: void __thiscall Vector3::Print(void) const | ?Print@Vector3@@QBEXXZ
    0x4BFEE0 | public: void __thiscall Vector3::Print(char const *) const | ?Print@Vector3@@QBEXPBD@Z
    0x4BFF20 | public: bool __thiscall Vector3::Approach(class Vector3 const &,float,float) | ?Approach@Vector3@@QAE_NABV1@MM@Z
    0x4C0020 | public: void __thiscall Vector3::RotateAboutAxis(float,int) | ?RotateAboutAxis@Vector3@@QAEXMH@Z
    0x4C00C0 | public: void __thiscall Vector3::GetVector2(int,class Vector2 &) const | ?GetVector2@Vector3@@QBEXHAAVVector2@@@Z
    0x4C0160 | public: void __thiscall Vector3::RGBtoHSV(void) | ?RGBtoHSV@Vector3@@QAEXXZ
    0x4C0270 | public: void __thiscall Vector3::HSVtoRGB(void) | ?HSVtoRGB@Vector3@@QAEXXZ
    0x4C0390 | public: void __thiscall Vector3::RotateX(float) | ?RotateX@Vector3@@QAEXM@Z
    0x4C03D0 | public: void __thiscall Vector3::RotateY(float) | ?RotateY@Vector3@@QAEXM@Z
    0x4C0400 | public: void __thiscall Vector3::RotateZ(float) | ?RotateZ@Vector3@@QAEXM@Z
    0x4C0430 | public: float __thiscall Vector3::Angle(class Vector3 const &) const | ?Angle@Vector3@@QBEMABV1@@Z
    0x4C0500 | public: float __thiscall Vector3::FastAngle(class Vector3 const &) const | ?FastAngle@Vector3@@QBEMABV1@@Z
    0x4C0530 | public: void __thiscall Vector3::GetPolar(class Vector3 const &,class Vector4 *,class Vector3 *) const | ?GetPolar@Vector3@@QBEXABV1@PAVVector4@@PAV1@@Z
    0x4C05D0 | public: void __thiscall Vector3::Extend(float) | ?Extend@Vector3@@QAEXM@Z
    0x4C0620 | public: void __thiscall Vector3::Extend(class Vector3 const &,float) | ?Extend@Vector3@@QAEXABV1@M@Z
    class Vector3 ORIGIN | ?ORIGIN@@3VVector3@@A
    class Vector3 XAXIS | ?XAXIS@@3VVector3@@A
    class Vector3 YAXIS | ?YAXIS@@3VVector3@@A
    class Vector3 ZAXIS | ?ZAXIS@@3VVector3@@A
*/

class Vector3
{
public:
    // 0x45CCA0 | ??0Vector3@@QAE@XZ
    inline Vector3()
    {
        stub<member_func_t<void, Vector3>>(0x45CCA0, this);
    }

    // 0x42EB40 | ?Scale@Vector3@@QAEXM@Z
    inline void Scale(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x42EB40, this, arg1);
    }

    // 0x43BBB0 | ?Dot@Vector3@@QAEXABV1@ABVMatrix34@@@Z
    inline void Dot(class Vector3 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, class Matrix34 const&>>(
            0x43BBB0, this, arg1, arg2);
    }

    // 0x45CE40 | ?Scale@Vector3@@QAEXABV1@M@Z
    inline void Scale(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, float>>(0x45CE40, this, arg1, arg2);
    }

    // 0x43DD30 | ??0Vector3@@QAE@MMM@Z
    inline Vector3(float arg1, float arg2, float arg3)
    {
        stub<member_func_t<void, Vector3, float, float, float>>(0x43DD30, this, arg1, arg2, arg3);
    }

    // 0x480AA0 | ?Set@Vector3@@QAEXABV1@@Z
    inline void Set(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x480AA0, this, arg1);
    }

    // 0x45CE00 | ?Add@Vector3@@QAEXABV1@@Z
    inline void Add(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x45CE00, this, arg1);
    }

    // 0x4429C0 | ?Cross@Vector3@@QAEXABV1@0@Z
    inline void Cross(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, class Vector3 const&>>(
            0x4429C0, this, arg1, arg2);
    }

    // 0x45CCB0 | ?Set@Vector3@@QAEXMMM@Z
    inline void Set(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Vector3, float, float, float>>(0x45CCB0, this, arg1, arg2, arg3);
    }

    // 0x45CD30 | ?Subtract@Vector3@@QAEXABV1@@Z
    inline void Subtract(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x45CD30, this, arg1);
    }

    // 0x45CD60 | ?Normalize@Vector3@@QAEXXZ
    inline void Normalize()
    {
        return stub<member_func_t<void, Vector3>>(0x45CD60, this);
    }

    // 0x45CDC0 | ?InvMag@Vector3@@QBEMXZ
    inline float InvMag()
    {
        return stub<member_func_t<float, Vector3>>(0x45CDC0, this);
    }

    // 0x45CE80 | ?Cross@Vector3@@QAEXABV1@@Z
    inline void Cross(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x45CE80, this, arg1);
    }

    // 0x45CEC0 | ?Dist@Vector3@@QBEMABV1@@Z
    inline float Dist(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, class Vector3 const&>>(0x45CEC0, this, arg1);
    }

    // 0x45CF00 | ?FlatDist@Vector3@@QBEMABV1@@Z
    inline float FlatDist(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, class Vector3 const&>>(0x45CF00, this, arg1);
    }

    // 0x466470 | ?Dot@Vector3@@QBEMABV1@@Z
    inline float Dot(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, class Vector3 const&>>(0x466470, this, arg1);
    }

    // 0x466490 | ?Mag@Vector3@@QBEMXZ
    inline float Mag()
    {
        return stub<member_func_t<float, Vector3>>(0x466490, this);
    }

    // 0x45CCD0 | ??YVector3@@QAEXABV0@@Z
    inline void operator+=(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x45CCD0, this, arg1);
    }

    // 0x46C990 | ?Mag2@Vector3@@QBEMXZ
    inline float Mag2()
    {
        return stub<member_func_t<float, Vector3>>(0x46C990, this);
    }

    // 0x45CD00 | ??ZVector3@@QAEXABV0@@Z
    inline void operator-=(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x45CD00, this, arg1);
    }

    // 0x474000 | ?SubtractScaled@Vector3@@QAEXABV1@M@Z
    inline void SubtractScaled(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, float>>(0x474000, this, arg1, arg2);
    }

    // 0x479560 | ?Dot3x3@Vector3@@QAEXABVMatrix34@@@Z
    inline void Dot3x3(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Matrix34 const&>>(0x479560, this, arg1);
    }

    // 0x4795C0 | ?Dot3x3Transpose@Vector3@@QAEXABVMatrix34@@@Z
    inline void Dot3x3Transpose(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Matrix34 const&>>(0x4795C0, this, arg1);
    }

    // 0x480AC0 | ?Negate@Vector3@@QAEXABV1@@Z
    inline void Negate(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&>>(0x480AC0, this, arg1);
    }

    // 0x484420 | ?AddScaled@Vector3@@QAEXABV1@0M@Z
    inline void AddScaled(class Vector3 const& arg1, class Vector3 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, class Vector3 const&, float>>(
            0x484420, this, arg1, arg2, arg3);
    }

    // 0x491860 | ??GVector3@@QBE?AV0@ABV0@@Z
    inline class Vector3 operator-(class Vector3 const& arg1)
    {
        return stub<member_func_t<class Vector3, Vector3, class Vector3 const&>>(0x491860, this, arg1);
    }

    // 0x4918A0 | ??KVector3@@QBE?AV0@M@Z
    inline class Vector3 operator/(float arg1)
    {
        return stub<member_func_t<class Vector3, Vector3, float>>(0x4918A0, this, arg1);
    }

    // 0x494C00 | ?Lerp@Vector3@@QAEXMABV1@0@Z
    inline void Lerp(float arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, Vector3, float, class Vector3 const&, class Vector3 const&>>(
            0x494C00, this, arg1, arg2, arg3);
    }

    // 0x4BFEB0 | ?Print@Vector3@@QBEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, Vector3>>(0x4BFEB0, this);
    }

    // 0x4BFEE0 | ?Print@Vector3@@QBEXPBD@Z
    inline void Print(char const* arg1)
    {
        return stub<member_func_t<void, Vector3, char const*>>(0x4BFEE0, this, arg1);
    }

    // 0x4BFF20 | ?Approach@Vector3@@QAE_NABV1@MM@Z
    inline bool Approach(class Vector3 const& arg1, float arg2, float arg3)
    {
        return stub<member_func_t<bool, Vector3, class Vector3 const&, float, float>>(0x4BFF20, this, arg1, arg2, arg3);
    }

    // 0x4C0020 | ?RotateAboutAxis@Vector3@@QAEXMH@Z
    inline void RotateAboutAxis(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, Vector3, float, int32_t>>(0x4C0020, this, arg1, arg2);
    }

    // 0x4C00C0 | ?GetVector2@Vector3@@QBEXHAAVVector2@@@Z
    inline void GetVector2(int32_t arg1, class Vector2& arg2)
    {
        return stub<member_func_t<void, Vector3, int32_t, class Vector2&>>(0x4C00C0, this, arg1, arg2);
    }

    // 0x4C0160 | ?RGBtoHSV@Vector3@@QAEXXZ
    inline void RGBtoHSV()
    {
        return stub<member_func_t<void, Vector3>>(0x4C0160, this);
    }

    // 0x4C0270 | ?HSVtoRGB@Vector3@@QAEXXZ
    inline void HSVtoRGB()
    {
        return stub<member_func_t<void, Vector3>>(0x4C0270, this);
    }

    // 0x4C0390 | ?RotateX@Vector3@@QAEXM@Z
    inline void RotateX(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x4C0390, this, arg1);
    }

    // 0x4C03D0 | ?RotateY@Vector3@@QAEXM@Z
    inline void RotateY(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x4C03D0, this, arg1);
    }

    // 0x4C0400 | ?RotateZ@Vector3@@QAEXM@Z
    inline void RotateZ(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x4C0400, this, arg1);
    }

    // 0x4C0430 | ?Angle@Vector3@@QBEMABV1@@Z
    inline float Angle(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, class Vector3 const&>>(0x4C0430, this, arg1);
    }

    // 0x4C0500 | ?FastAngle@Vector3@@QBEMABV1@@Z
    inline float FastAngle(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, class Vector3 const&>>(0x4C0500, this, arg1);
    }

    // 0x4C0530 | ?GetPolar@Vector3@@QBEXABV1@PAVVector4@@PAV1@@Z
    inline void GetPolar(class Vector3 const& arg1, class Vector4* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, class Vector4*, class Vector3*>>(
            0x4C0530, this, arg1, arg2, arg3);
    }

    // 0x4C05D0 | ?Extend@Vector3@@QAEXM@Z
    inline void Extend(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x4C05D0, this, arg1);
    }

    // 0x4C0620 | ?Extend@Vector3@@QAEXABV1@M@Z
    inline void Extend(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, class Vector3 const&, float>>(0x4C0620, this, arg1, arg2);
    }

    // 0x522B80 | ?IsEqual@Vector3@@QBE_NABV1@@Z
    inline bool IsEqual(class Vector3 const& arg1)
    {
        return stub<member_func_t<bool, Vector3, class Vector3 const&>>(0x522B80, this, arg1);
    }

    // 0x541770 | ??LVector3@@QBE?AV0@ABV0@@Z
    inline class Vector3 operator%(class Vector3 const& arg1)
    {
        return stub<member_func_t<class Vector3, Vector3, class Vector3 const&>>(0x541770, this, arg1);
    }

    // 0x595B70 | ?InvScale@Vector3@@QAEXM@Z
    inline void InvScale(float arg1)
    {
        return stub<member_func_t<void, Vector3, float>>(0x595B70, this, arg1);
    }
};
