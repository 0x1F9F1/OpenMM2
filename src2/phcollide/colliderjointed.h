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
    phcollide:colliderjointed

    0x46D3E0 | public: __thiscall phColliderJointed::phColliderJointed(void) | ??0phColliderJointed@@QAE@XZ
    0x46D410 | public: static void __cdecl phColliderJointed::InitArray(class phColliderJointed * const,int) | ?InitArray@phColliderJointed@@SAXQAV1@H@Z
    0x46D4D0 | public: void __thiscall phColliderJointed::Attach(class phJoint const *) | ?Attach@phColliderJointed@@QAEXPBVphJoint@@@Z
    0x46D4E0 | public: virtual void __thiscall phColliderJointed::Impact(class phImpactBase const *,class Vector3 const &,class Vector3 const &) | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@1@Z
    0x46D500 | public: virtual void __thiscall phColliderJointed::Impact(class phImpactBase const *,class Vector3 const &) | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@@Z
    0x46D520 | public: virtual void __thiscall phColliderJointed::Contact(class phImpactBase const *,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Matrix34 const &) | ?Contact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@11ABVMatrix34@@@Z
    0x46D540 | public: virtual void __thiscall phColliderJointed::Contact(class Vector3 const &,class phContact const *,class Matrix34 const &) | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@ABVMatrix34@@@Z
    0x46D560 | public: virtual void __thiscall phColliderJointed::Contact(class Vector3 const &,class phContact const *) | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@@Z
    0x46D580 | public: virtual void __thiscall phColliderJointed::GetInvMassMatrix(class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@AAVMatrix34@@H@Z
    0x46D5F0 | public: virtual void __thiscall phColliderJointed::GetInvMassMatrix(class Vector3 const &,class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@0AAVMatrix34@@H@Z
    0x5B1E8C | const phColliderJointed::`vftable' | ??_7phColliderJointed@@6B@
*/

class phColliderJointed : phColliderBase
{
public:
    // phColliderJointed::`vftable' @ 0x5B1E8C

    // 0x46D3E0 | ??0phColliderJointed@@QAE@XZ
    inline phColliderJointed()
    {
        stub<member_func_t<void, phColliderJointed>>(0x46D3E0, this);
    }

    // 0x46D410 | ?InitArray@phColliderJointed@@SAXQAV1@H@Z
    static inline void InitArray(class phColliderJointed* const arg1, i32 arg2)
    {
        return stub<cdecl_t<void, class phColliderJointed* const, i32>>(0x46D410, arg1, arg2);
    }

    // 0x46D4D0 | ?Attach@phColliderJointed@@QAEXPBVphJoint@@@Z
    inline void Attach(class phJoint const* arg1)
    {
        return stub<member_func_t<void, phColliderJointed, class phJoint const*>>(0x46D4D0, this, arg1);
    }

    // 0x46D5F0 | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@0AAVMatrix34@@H@Z
    inline void GetInvMassMatrix(
        class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3, i32 arg4) override
    {
        return stub<
            member_func_t<void, phColliderJointed, class Vector3 const&, class Vector3 const&, class Matrix34&, i32>>(
            0x46D5F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46D580 | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@AAVMatrix34@@H@Z
    inline void GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2, i32 arg3) override
    {
        return stub<member_func_t<void, phColliderJointed, class Vector3 const&, class Matrix34&, i32>>(
            0x46D580, this, arg1, arg2, arg3);
    }

    // 0x46D500 | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@@Z
    inline void Impact(class phImpactBase const* arg1, class Vector3 const& arg2) override
    {
        return stub<member_func_t<void, phColliderJointed, class phImpactBase const*, class Vector3 const&>>(
            0x46D500, this, arg1, arg2);
    }

    // 0x46D4E0 | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@1@Z
    inline void Impact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3) override
    {
        return stub<member_func_t<void, phColliderJointed, class phImpactBase const*, class Vector3 const&,
            class Vector3 const&>>(0x46D4E0, this, arg1, arg2, arg3);
    }

    // 0x46D560 | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@@Z
    inline void Contact(class Vector3 const& arg1, class phContact const* arg2) override
    {
        return stub<member_func_t<void, phColliderJointed, class Vector3 const&, class phContact const*>>(
            0x46D560, this, arg1, arg2);
    }

    // 0x46D540 | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@ABVMatrix34@@@Z
    inline void Contact(class Vector3 const& arg1, class phContact const* arg2, class Matrix34 const& arg3) override
    {
        return stub<member_func_t<void, phColliderJointed, class Vector3 const&, class phContact const*,
            class Matrix34 const&>>(0x46D540, this, arg1, arg2, arg3);
    }

    // 0x46D520 | ?Contact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@11ABVMatrix34@@@Z
    inline void Contact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, class Matrix34 const& arg5) override
    {
        return stub<member_func_t<void, phColliderJointed, class phImpactBase const*, class Vector3 const&,
            class Vector3 const&, class Vector3 const&, class Matrix34 const&>>(
            0x46D520, this, arg1, arg2, arg3, arg4, arg5);
    }
};
