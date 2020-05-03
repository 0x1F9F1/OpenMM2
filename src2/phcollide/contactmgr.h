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
    phcollide:contactmgr

    0x4701B0 | public: __thiscall phContactMgr::phContactMgr(void) | ??0phContactMgr@@QAE@XZ
    0x470220 | public: __thiscall phContactMgr::~phContactMgr(void) | ??1phContactMgr@@QAE@XZ
    0x470240 | public: void __thiscall phContactMgr::Reset(void) | ?Reset@phContactMgr@@QAEXXZ
    0x470270 | private: void __thiscall phContactMgr::ClearContactList(void) | ?ClearContactList@phContactMgr@@AAEXXZ
    0x4702B0 | public: void __thiscall phContactMgr::Resize(void) | ?Resize@phContactMgr@@QAEXXZ
    0x470460 | public: long __thiscall phContactMgr::AllocNewContact(long) | ?AllocNewContact@phContactMgr@@QAEJJ@Z
    0x470500 | public: void __thiscall phContactMgr::RemoveContact(long) | ?RemoveContact@phContactMgr@@QAEXJ@Z
    0x470630 | public: long __thiscall phContactMgr::SeekContact(long,class phImpact const &) | ?SeekContact@phContactMgr@@QAEJJABVphImpact@@@Z
    0x4706A0 | public: void __thiscall phContactMgr::CalcHeldContacts(class phColliderBase *,class phColliderBase *,int) | ?CalcHeldContacts@phContactMgr@@QAEXPAVphColliderBase@@0H@Z
    0x470860 | public: void __thiscall phContactMgr::CalcNextOverSamples(void) | ?CalcNextOverSamples@phContactMgr@@QAEXXZ
    0x4709F0 | public: void __thiscall phContactMgr::Update(void) | ?Update@phContactMgr@@QAEXXZ
    0x470AE0 | public: bool __thiscall phContactMgr::CalcContact(class phImpact &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,class Matrix34 *) | ?CalcContact@phContactMgr@@QAE_NAAVphImpact@@ABVVector3@@111PAV3@PAVMatrix34@@@Z
    0x470D20 | public: bool __thiscall phContactMgr::TestHeldContact(class phColliderBase const *,class phColliderBase const *,int *) | ?TestHeldContact@phContactMgr@@QAE_NPBVphColliderBase@@0PAH@Z
    0x470E50 | private: static float __cdecl phContactMgr::EstMaxMoved(class Matrix34 const &,class phColliderBase const *,class phColliderBase const *) | ?EstMaxMoved@phContactMgr@@CAMABVMatrix34@@PBVphColliderBase@@1@Z
    0x470F20 | public: int __thiscall phContactMgr::SeekHeldContact(long,long,int) | ?SeekHeldContact@phContactMgr@@QAEHJJH@Z
    0x470F70 | private: void __thiscall phContactMgr::ClearHeldContactTable(void) | ?ClearHeldContactTable@phContactMgr@@AAEXXZ
    0x470FA0 | private: void __thiscall phContactMgr::RemoveHeldContact(int) | ?RemoveHeldContact@phContactMgr@@AAEXH@Z
    0x4710B0 | private: int __thiscall phContactMgr::AddHeldContact(class phColliderBase const *,class phColliderBase const *) | ?AddHeldContact@phContactMgr@@AAEHPBVphColliderBase@@0@Z
    0x4711A0 | private: bool __thiscall phContactMgr::AddHCEntry(int,long) | ?AddHCEntry@phContactMgr@@AAE_NHJ@Z
    0x471210 | private: bool __thiscall phContactMgr::HCContactGone(class phHeldContact *) | ?HCContactGone@phContactMgr@@AAE_NPAVphHeldContact@@@Z
    0x471240 | public: void __thiscall phContactMgr::CalcHeldContact(int,long &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,class Matrix34 *) | ?CalcHeldContact@phContactMgr@@QAEXHAAJABVVector3@@11PAV2@PAVMatrix34@@@Z
    0x4712D0 | private: void __thiscall phContactMgr::HeldContactResize(void) | ?HeldContactResize@phContactMgr@@AAEXXZ
    0x4713D0 | private: bool __thiscall phContactMgr::GetNextHeldContact(int,int *,long *,bool *) | ?GetNextHeldContact@phContactMgr@@AAE_NHPAHPAJPA_N@Z
    0x471420 | public: bool __thiscall phContactMgr::SearchContact(long,long *) | ?SearchContact@phContactMgr@@QAE_NJPAJ@Z
    0x471470 | public: bool __thiscall phContactMgr::FindNextContact(long,long *,long *) | ?FindNextContact@phContactMgr@@QAE_NJPAJ0@Z
    0x4714E0 | public: void __thiscall phContactMgr::CalcImpact(class phImpact *,float) | ?CalcImpact@phContactMgr@@QAEXPAVphImpact@@M@Z
    0x471620 | public: void __thiscall phContactMgr::CullImpactList(int *,class phImpact *) | ?CullImpactList@phContactMgr@@QAEXPAHPAVphImpact@@@Z
    0x471AB0 | public: void __thiscall phContactMgr::Calc2Impacts(class phImpact *) | ?Calc2Impacts@phContactMgr@@QAEXPAVphImpact@@@Z
    0x472790 | public: void __thiscall phContactMgr::Calc2ImpactsFixed(class phImpact *,bool) | ?Calc2ImpactsFixed@phContactMgr@@QAEXPAVphImpact@@_N@Z
    0x472E20 | public: void __thiscall phContactMgr::Calc3Impacts(int,class phImpact *) | ?Calc3Impacts@phContactMgr@@QAEXHPAVphImpact@@@Z
    0x473310 | public: void __thiscall phContactMgr::ResolveThreePlusImpacts(int,class phImpact *,class Vector3 const &,class Vector3 const &,class Vector3 const &,bool) | ?ResolveThreePlusImpacts@phContactMgr@@QAEXHPAVphImpact@@ABVVector3@@11_N@Z
    0x4737B0 | public: void __thiscall phContactMgr::Calc3ImpactsFixed(int,class phImpact *,bool) | ?Calc3ImpactsFixed@phContactMgr@@QAEXHPAVphImpact@@_N@Z
    0x4738D0 | public: void __thiscall phContactMgr::ApplyImpact(class phImpact *,class Vector3 const &) | ?ApplyImpact@phContactMgr@@QAEXPAVphImpact@@ABVVector3@@@Z
    0x473EA0 | public: float __thiscall phContactMgr::GetCMSeconds(void) const | ?GetCMSeconds@phContactMgr@@QBEMXZ
    0x473ED0 | public: float __thiscall phContactMgr::GetCMInvSeconds(void) const | ?GetCMInvSeconds@phContactMgr@@QBEMXZ
    0x473F00 | public: void __thiscall phContactMgr::SetCMOversampleTime(float) | ?SetCMOversampleTime@phContactMgr@@QAEXM@Z
    0x473F20 | public: long __thiscall phContactMgr::CalcContactHash(int,int,int,long,long) | ?CalcContactHash@phContactMgr@@QAEJHHHJJ@Z
    0x474000 | public: void __thiscall Vector3::SubtractScaled(class Vector3 const &,float) | ?SubtractScaled@Vector3@@QAEXABV1@M@Z
    public: void __thiscall Matrix34::Transform3x3(class Vector3 const &,class Vector3 &) const | ?Transform3x3@Matrix34@@QBEXABVVector3@@AAV2@@Z
    public: static float phContactMgr::LastSecs | ?LastSecs@phContactMgr@@2MA
    public: static float phContactMgr::LastOverSampleSecs | ?LastOverSampleSecs@phContactMgr@@2MA
*/

struct phContactMgr
{
public:
    // 0x4701B0 | ??0phContactMgr@@QAE@XZ
    phContactMgr();

    // 0x470220 | ??1phContactMgr@@QAE@XZ
    ~phContactMgr();

    // 0x470460 | ?AllocNewContact@phContactMgr@@QAEJJ@Z
    i32 AllocNewContact(i32 arg1);

    // 0x4738D0 | ?ApplyImpact@phContactMgr@@QAEXPAVphImpact@@ABVVector3@@@Z
    void ApplyImpact(class phImpact* arg1, class Vector3 const& arg2);

    // 0x471AB0 | ?Calc2Impacts@phContactMgr@@QAEXPAVphImpact@@@Z
    void Calc2Impacts(class phImpact* arg1);

    // 0x472790 | ?Calc2ImpactsFixed@phContactMgr@@QAEXPAVphImpact@@_N@Z
    void Calc2ImpactsFixed(class phImpact* arg1, bool arg2);

    // 0x472E20 | ?Calc3Impacts@phContactMgr@@QAEXHPAVphImpact@@@Z
    void Calc3Impacts(i32 arg1, class phImpact* arg2);

    // 0x4737B0 | ?Calc3ImpactsFixed@phContactMgr@@QAEXHPAVphImpact@@_N@Z
    void Calc3ImpactsFixed(i32 arg1, class phImpact* arg2, bool arg3);

    // 0x470AE0 | ?CalcContact@phContactMgr@@QAE_NAAVphImpact@@ABVVector3@@111PAV3@PAVMatrix34@@@Z
    bool CalcContact(class phImpact& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, class Vector3 const& arg5, class Vector3* arg6, class Matrix34* arg7);

    // 0x473F20 | ?CalcContactHash@phContactMgr@@QAEJHHHJJ@Z
    i32 CalcContactHash(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5);

    // 0x471240 | ?CalcHeldContact@phContactMgr@@QAEXHAAJABVVector3@@11PAV2@PAVMatrix34@@@Z
    void CalcHeldContact(i32 arg1, i32& arg2, class Vector3 const& arg3, class Vector3 const& arg4,
        class Vector3 const& arg5, class Vector3* arg6, class Matrix34* arg7);

    // 0x4706A0 | ?CalcHeldContacts@phContactMgr@@QAEXPAVphColliderBase@@0H@Z
    void CalcHeldContacts(class phColliderBase* arg1, class phColliderBase* arg2, i32 arg3);

    // 0x4714E0 | ?CalcImpact@phContactMgr@@QAEXPAVphImpact@@M@Z
    void CalcImpact(class phImpact* arg1, f32 arg2);

    // 0x470860 | ?CalcNextOverSamples@phContactMgr@@QAEXXZ
    void CalcNextOverSamples();

    // 0x471620 | ?CullImpactList@phContactMgr@@QAEXPAHPAVphImpact@@@Z
    void CullImpactList(i32* arg1, class phImpact* arg2);

    // 0x471470 | ?FindNextContact@phContactMgr@@QAE_NJPAJ0@Z
    bool FindNextContact(i32 arg1, i32* arg2, i32* arg3);

    // 0x473ED0 | ?GetCMInvSeconds@phContactMgr@@QBEMXZ
    f32 GetCMInvSeconds();

    // 0x473EA0 | ?GetCMSeconds@phContactMgr@@QBEMXZ
    f32 GetCMSeconds();

    // 0x470500 | ?RemoveContact@phContactMgr@@QAEXJ@Z
    void RemoveContact(i32 arg1);

    // 0x470240 | ?Reset@phContactMgr@@QAEXXZ
    void Reset();

    // 0x4702B0 | ?Resize@phContactMgr@@QAEXXZ
    void Resize();

    // 0x473310 | ?ResolveThreePlusImpacts@phContactMgr@@QAEXHPAVphImpact@@ABVVector3@@11_N@Z
    void ResolveThreePlusImpacts(i32 arg1, class phImpact* arg2, class Vector3 const& arg3, class Vector3 const& arg4,
        class Vector3 const& arg5, bool arg6);

    // 0x471420 | ?SearchContact@phContactMgr@@QAE_NJPAJ@Z
    bool SearchContact(i32 arg1, i32* arg2);

    // 0x470630 | ?SeekContact@phContactMgr@@QAEJJABVphImpact@@@Z
    i32 SeekContact(i32 arg1, class phImpact const& arg2);

    // 0x470F20 | ?SeekHeldContact@phContactMgr@@QAEHJJH@Z
    i32 SeekHeldContact(i32 arg1, i32 arg2, i32 arg3);

    // 0x473F00 | ?SetCMOversampleTime@phContactMgr@@QAEXM@Z
    void SetCMOversampleTime(f32 arg1);

    // 0x470D20 | ?TestHeldContact@phContactMgr@@QAE_NPBVphColliderBase@@0PAH@Z
    bool TestHeldContact(class phColliderBase const* arg1, class phColliderBase const* arg2, i32* arg3);

    // 0x4709F0 | ?Update@phContactMgr@@QAEXXZ
    void Update();

private:
    // 0x4711A0 | ?AddHCEntry@phContactMgr@@AAE_NHJ@Z
    bool AddHCEntry(i32 arg1, i32 arg2);

    // 0x4710B0 | ?AddHeldContact@phContactMgr@@AAEHPBVphColliderBase@@0@Z
    i32 AddHeldContact(class phColliderBase const* arg1, class phColliderBase const* arg2);

    // 0x470270 | ?ClearContactList@phContactMgr@@AAEXXZ
    void ClearContactList();

    // 0x470F70 | ?ClearHeldContactTable@phContactMgr@@AAEXXZ
    void ClearHeldContactTable();

    // 0x4713D0 | ?GetNextHeldContact@phContactMgr@@AAE_NHPAHPAJPA_N@Z
    bool GetNextHeldContact(i32 arg1, i32* arg2, i32* arg3, bool* arg4);

    // 0x471210 | ?HCContactGone@phContactMgr@@AAE_NPAVphHeldContact@@@Z
    bool HCContactGone(class phHeldContact* arg1);

    // 0x4712D0 | ?HeldContactResize@phContactMgr@@AAEXXZ
    void HeldContactResize();

    // 0x470FA0 | ?RemoveHeldContact@phContactMgr@@AAEXH@Z
    void RemoveHeldContact(i32 arg1);

    // 0x470E50 | ?EstMaxMoved@phContactMgr@@CAMABVMatrix34@@PBVphColliderBase@@1@Z
    static f32 EstMaxMoved(
        class Matrix34 const& arg1, class phColliderBase const* arg2, class phColliderBase const* arg3);
};

check_size(phContactMgr, 0x34);
