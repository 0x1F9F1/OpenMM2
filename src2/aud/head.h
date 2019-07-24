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
    aud:head

    0x5A6500 | public: class audHead * __thiscall audHead::Create(class audManager *) | ?Create@audHead@@QAEPAV1@PAVaudManager@@@Z
    0x5A6530 | public: void __thiscall audHead::Init(void) | ?Init@audHead@@QAEXXZ
    0x5A65A0 | public: void __thiscall audHead::Destroy(void) | ?Destroy@audHead@@QAEXXZ
    0x5A65B0 | public: void __thiscall audHead::SetHandle(int) | ?SetHandle@audHead@@QAEXH@Z
    0x5A65C0 | public: int __thiscall audHead::GetHandle(void) | ?GetHandle@audHead@@QAEHXZ
    0x5A65D0 | public: void __thiscall audHead::SetHeadPosition(struct _audvector3_ *) | ?SetHeadPosition@audHead@@QAEXPAU_audvector3_@@@Z
    0x5A65F0 | public: struct _audvector3_ * __thiscall audHead::GetHeadPosition(void) | ?GetHeadPosition@audHead@@QAEPAU_audvector3_@@XZ
    0x5A6600 | public: void __thiscall audHead::SetHeadVelocity(struct _audvector3_ *) | ?SetHeadVelocity@audHead@@QAEXPAU_audvector3_@@@Z
    0x5A6620 | public: struct _audvector3_ * __thiscall audHead::GetHeadVelocity(void) | ?GetHeadVelocity@audHead@@QAEPAU_audvector3_@@XZ
    0x5A6630 | public: void __thiscall audHead::SetHeadFacingDir(struct _audvector3_ *,bool) | ?SetHeadFacingDir@audHead@@QAEXPAU_audvector3_@@_N@Z
    0x5A6660 | public: struct _audvector3_ * __thiscall audHead::GetHeadFacingDir(void) | ?GetHeadFacingDir@audHead@@QAEPAU_audvector3_@@XZ
    0x5A6670 | public: void __thiscall audHead::SetHeadTF(struct _audvector3_ *,struct _audvector3_ *) | ?SetHeadTF@audHead@@QAEXPAU_audvector3_@@0@Z
    0x5A66A0 | public: void __thiscall audHead::SetHeadLimits(struct _audvector3_ *,struct _audvector3_ *) | ?SetHeadLimits@audHead@@QAEXPAU_audvector3_@@0@Z
    0x5A6740 | public: void __thiscall audHead::SetHeadMinLimit(float) | ?SetHeadMinLimit@audHead@@QAEXM@Z
    0x5A6750 | public: bool __thiscall audHead::GetHeadVolumePanPitch(struct _audvector3_ *,struct _audvector3_ *,float *,float *,float *) | ?GetHeadVolumePanPitch@audHead@@QAE_NPAU_audvector3_@@0PAM11@Z
*/

class audHead
{
public:
    // 0x5A6500 | ?Create@audHead@@QAEPAV1@PAVaudManager@@@Z
    inline class audHead* Create(class audManager* arg1)
    {
        return stub<member_func_t<class audHead*, audHead, class audManager*>>(0x5A6500, this, arg1);
    }

    // 0x5A6530 | ?Init@audHead@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audHead>>(0x5A6530, this);
    }

    // 0x5A65A0 | ?Destroy@audHead@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audHead>>(0x5A65A0, this);
    }

    // 0x5A65B0 | ?SetHandle@audHead@@QAEXH@Z
    inline void SetHandle(int32_t arg1)
    {
        return stub<member_func_t<void, audHead, int32_t>>(0x5A65B0, this, arg1);
    }

    // 0x5A65C0 | ?GetHandle@audHead@@QAEHXZ
    inline int32_t GetHandle()
    {
        return stub<member_func_t<int32_t, audHead>>(0x5A65C0, this);
    }

    // 0x5A65D0 | ?SetHeadPosition@audHead@@QAEXPAU_audvector3_@@@Z
    inline void SetHeadPosition(struct _audvector3_* arg1)
    {
        return stub<member_func_t<void, audHead, struct _audvector3_*>>(0x5A65D0, this, arg1);
    }

    // 0x5A65F0 | ?GetHeadPosition@audHead@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* GetHeadPosition()
    {
        return stub<member_func_t<struct _audvector3_*, audHead>>(0x5A65F0, this);
    }

    // 0x5A6600 | ?SetHeadVelocity@audHead@@QAEXPAU_audvector3_@@@Z
    inline void SetHeadVelocity(struct _audvector3_* arg1)
    {
        return stub<member_func_t<void, audHead, struct _audvector3_*>>(0x5A6600, this, arg1);
    }

    // 0x5A6620 | ?GetHeadVelocity@audHead@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* GetHeadVelocity()
    {
        return stub<member_func_t<struct _audvector3_*, audHead>>(0x5A6620, this);
    }

    // 0x5A6630 | ?SetHeadFacingDir@audHead@@QAEXPAU_audvector3_@@_N@Z
    inline void SetHeadFacingDir(struct _audvector3_* arg1, bool arg2)
    {
        return stub<member_func_t<void, audHead, struct _audvector3_*, bool>>(0x5A6630, this, arg1, arg2);
    }

    // 0x5A6660 | ?GetHeadFacingDir@audHead@@QAEPAU_audvector3_@@XZ
    inline struct _audvector3_* GetHeadFacingDir()
    {
        return stub<member_func_t<struct _audvector3_*, audHead>>(0x5A6660, this);
    }

    // 0x5A6670 | ?SetHeadTF@audHead@@QAEXPAU_audvector3_@@0@Z
    inline void SetHeadTF(struct _audvector3_* arg1, struct _audvector3_* arg2)
    {
        return stub<member_func_t<void, audHead, struct _audvector3_*, struct _audvector3_*>>(
            0x5A6670, this, arg1, arg2);
    }

    // 0x5A66A0 | ?SetHeadLimits@audHead@@QAEXPAU_audvector3_@@0@Z
    inline void SetHeadLimits(struct _audvector3_* arg1, struct _audvector3_* arg2)
    {
        return stub<member_func_t<void, audHead, struct _audvector3_*, struct _audvector3_*>>(
            0x5A66A0, this, arg1, arg2);
    }

    // 0x5A6740 | ?SetHeadMinLimit@audHead@@QAEXM@Z
    inline void SetHeadMinLimit(float arg1)
    {
        return stub<member_func_t<void, audHead, float>>(0x5A6740, this, arg1);
    }

    // 0x5A6750 | ?GetHeadVolumePanPitch@audHead@@QAE_NPAU_audvector3_@@0PAM11@Z
    inline bool GetHeadVolumePanPitch(
        struct _audvector3_* arg1, struct _audvector3_* arg2, float* arg3, float* arg4, float* arg5)
    {
        return stub<member_func_t<bool, audHead, struct _audvector3_*, struct _audvector3_*, float*, float*, float*>>(
            0x5A6750, this, arg1, arg2, arg3, arg4, arg5);
    }
};
