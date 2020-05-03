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
    phinertia:inertia

    0x475CB0 | public: static void __cdecl phInertialCS::InitArray(class phInertialCS * const,int) | ?InitArray@phInertialCS@@SAXQAV1@H@Z
    0x475D40 | public: __thiscall phInertialCS::phInertialCS(void) | ??0phInertialCS@@QAE@XZ
    0x475DE0 | public: void __thiscall phInertialCS::Zero(void) | ?Zero@phInertialCS@@QAEXXZ
    0x475E10 | public: void __thiscall phInertialCS::Reset(void) | ?Reset@phInertialCS@@QAEXXZ
    0x475E20 | public: void __thiscall phInertialCS::Freeze(void) | ?Freeze@phInertialCS@@QAEXXZ
    0x475E60 | public: void __thiscall phInertialCS::ZeroForces(void) | ?ZeroForces@phInertialCS@@QAEXXZ
    0x475FC0 | public: void __thiscall phInertialCS::Init(float,float,float,float) | ?Init@phInertialCS@@QAEXMMMM@Z
    0x476080 | public: void __thiscall phInertialCS::InitFromValues(float,float,class Vector3 const &,class Vector3 const &) | ?InitFromValues@phInertialCS@@QAEXMMABVVector3@@0@Z
    0x4760D0 | public: void __thiscall phInertialCS::InitBoxMass(float,float,float,float) | ?InitBoxMass@phInertialCS@@QAEXMMMM@Z
    0x476140 | public: void __thiscall phInertialCS::InitBoxDensity(float,float,float,float) | ?InitBoxDensity@phInertialCS@@QAEXMMMM@Z
    0x476170 | public: void __thiscall phInertialCS::InitSphereMass(float,float) | ?InitSphereMass@phInertialCS@@QAEXMM@Z
    0x4761A0 | public: void __thiscall phInertialCS::InitSphereDensity(float,float) | ?InitSphereDensity@phInertialCS@@QAEXMM@Z
    0x4761D0 | public: void __thiscall phInertialCS::InitCylinderMass(float,float,float,char) | ?InitCylinderMass@phInertialCS@@QAEXMMMD@Z
    0x476260 | public: void __thiscall phInertialCS::InitCylinderDensity(float,float,float,char) | ?InitCylinderDensity@phInertialCS@@QAEXMMMD@Z
    0x476290 | public: void __thiscall phInertialCS::InitHotdogMass(float,float,float,char) | ?InitHotdogMass@phInertialCS@@QAEXMMMD@Z
    0x476400 | public: void __thiscall phInertialCS::InitHotdogDensity(float,float,float,char) | ?InitHotdogDensity@phInertialCS@@QAEXMMMD@Z
    0x476440 | public: void __thiscall phInertialCS::InitFromGeometry(float,class Vector3 const *,class phPolygon const *,int,class Matrix34 *) | ?InitFromGeometry@phInertialCS@@QAEXMPBVVector3@@PBVphPolygon@@HPAVMatrix34@@@Z
    0x476780 | public: void __thiscall phInertialCS::TetrahedronAngInertia(class Vector3 *,float *,float *,float *,float *,float *,float *) | ?TetrahedronAngInertia@phInertialCS@@QAEXPAVVector3@@PAM11111@Z
    0x476A00 | public: void __thiscall phInertialCS::Rotate(class Vector3 const &) | ?Rotate@phInertialCS@@QAEXABVVector3@@@Z
    0x476A80 | public: void __thiscall phInertialCS::GetForce(float,class Vector3 *) | ?GetForce@phInertialCS@@QAEXMPAVVector3@@@Z
    0x476AD0 | public: void __thiscall phInertialCS::GetTorque(float,class Vector3 *) | ?GetTorque@phInertialCS@@QAEXMPAVVector3@@@Z
    0x476B20 | public: void __thiscall phInertialCS::ClearInertialValues(void) | ?ClearInertialValues@phInertialCS@@QAEXXZ
    0x476B40 | public: class Matrix34 __thiscall phInertialCS::AddInertia(float,class Vector3 const &,class Vector3 const &) | ?AddInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0@Z
    0x476DD0 | public: class Matrix34 __thiscall phInertialCS::AddInertia(float,class Vector3 const &,class Matrix34 const &) | ?AddInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@@Z
    0x4770C0 | public: class Matrix34 __thiscall phInertialCS::SubtractInertia(float,class Vector3 const &,class Vector3 const &) | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0@Z
    0x477120 | public: class Matrix34 __thiscall phInertialCS::SubtractInertia(float,class Vector3 const &,class Matrix34 const &) | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@@Z
    0x477180 | public: class Matrix34 __thiscall phInertialCS::SubtractInertia(float,class Vector3 const &,class Vector3 const &,class phInertialCS *) | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0PAV1@@Z
    0x4772B0 | public: class Matrix34 __thiscall phInertialCS::SubtractInertia(float,class Vector3 const &,class Matrix34 const &,class phInertialCS *) | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@PAV1@@Z
    0x4773E0 | public: class Matrix34 __thiscall phInertialCS::FindPrincipalAxes(float,float,float) | ?FindPrincipalAxes@phInertialCS@@QAE?AVMatrix34@@MMM@Z
    0x477D60 | public: class Vector3 __thiscall phInertialCS::PrincipalAxis(float,float,float,float) | ?PrincipalAxis@phInertialCS@@QAE?AVVector3@@MMMM@Z
    0x477DF0 | public: void __thiscall phInertialCS::Update(void) | ?Update@phInertialCS@@QAEXXZ
    0x477F40 | public: void __thiscall phInertialCS::UpdateOversample(float) | ?UpdateOversample@phInertialCS@@QAEXM@Z
    0x478040 | public: void __thiscall phInertialCS::UpdateOversampleDone(void) | ?UpdateOversampleDone@phInertialCS@@QAEXXZ
    0x478060 | private: void __thiscall phInertialCS::Update(float) | ?Update@phInertialCS@@AAEXM@Z
    0x478680 | public: void __thiscall phInertialCS::MoveICS(void) | ?MoveICS@phInertialCS@@QAEXXZ
    public: void __thiscall phInertialCS::UpdateTerrainContacts(void) | ?UpdateTerrainContacts@phInertialCS@@QAEXXZ
    public: void __thiscall phInertialCS::CalculateOneTerrainContact(struct phInertialCS::TerrainContact * *,class Vector3 const * *,class Vector3 *,class Vector3 *) | ?CalculateOneTerrainContact@phInertialCS@@QAEXPAPAUTerrainContact@1@PAPBVVector3@@PAV3@2@Z
    public: void __thiscall phInertialCS::CalculateTwoTerrainContacts(struct phInertialCS::TerrainContact * *,class Vector3 const * *,class Vector3 *,class Vector3 *) | ?CalculateTwoTerrainContacts@phInertialCS@@QAEXPAPAUTerrainContact@1@PAPBVVector3@@PAV3@2@Z
    public: void __thiscall phInertialCS::CalculateThreePlusTerrainContacts(int,struct phInertialCS::TerrainContact * *,class Vector3 const * *,class Vector3 *,class Vector3 *) | ?CalculateThreePlusTerrainContacts@phInertialCS@@QAEXHPAPAUTerrainContact@1@PAPBVVector3@@PAV3@2@Z
    public: bool const __thiscall phInertialCS::AddNewTerrainContactPoint(class phImpactBase const *,bool) | ?AddNewTerrainContactPoint@phInertialCS@@QAE?B_NPBVphImpactBase@@_N@Z
    0x478700 | public: void __thiscall phInertialCS::CalcNetPush(class Vector3 const &) | ?CalcNetPush@phInertialCS@@QAEXABVVector3@@@Z
    0x478820 | public: void __thiscall phInertialCS::CalcNetTurn(class Vector3 const &) | ?CalcNetTurn@phInertialCS@@QAEXABVVector3@@@Z
    0x478940 | public: void __thiscall phInertialCS::ApplyContactForce(class Vector3 const &,class Vector3 const &,class Matrix34 const &) | ?ApplyContactForce@phInertialCS@@QAEXABVVector3@@0ABVMatrix34@@@Z
    0x478B30 | public: void __thiscall phInertialCS::GetInertiaMatrix(class Matrix34 *) const | ?GetInertiaMatrix@phInertialCS@@QBEXPAVMatrix34@@@Z
    0x478BA0 | public: void __thiscall phInertialCS::GetInertiaMatrix(class Vector3 const &,class Matrix34 *) const | ?GetInertiaMatrix@phInertialCS@@QBEXABVVector3@@PAVMatrix34@@@Z
    0x478C40 | public: void __thiscall phInertialCS::GetInverseInertiaMatrix(class Matrix34 *) const | ?GetInverseInertiaMatrix@phInertialCS@@QBEXPAVMatrix34@@@Z
    0x478CD0 | public: void __thiscall phInertialCS::GetInvMassMatrix(class Vector3 const &,class Matrix34 &) const | ?GetInvMassMatrix@phInertialCS@@QBEXABVVector3@@AAVMatrix34@@@Z
    0x478DC0 | public: void __thiscall phInertialCS::GetInvMassMatrix(class Vector3 const &,class Vector3 const &,class Matrix34 &) const | ?GetInvMassMatrix@phInertialCS@@QBEXABVVector3@@0AAVMatrix34@@@Z
    0x478F40 | public: void __thiscall phInertialCS::GetLocalVelocity(class Vector3 const &,class Vector3 &) const | ?GetLocalVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x478FD0 | public: void __thiscall phInertialCS::GetLocalFilteredVelocity(class Vector3 const &,class Vector3 &) const | ?GetLocalFilteredVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x479020 | public: void __thiscall phInertialCS::GetOffsetVelocity(class Vector3 const &,class Vector3 &) const | ?GetOffsetVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x4790F0 | public: void __thiscall phInertialCS::GetLocalFilteredVelocity2(class Vector3 const &,class Vector3 &) const | ?GetLocalFilteredVelocity2@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x4791B0 | public: void __thiscall phInertialCS::GetLocalDisp(class Vector3 const &,class Vector3 &) const | ?GetLocalDisp@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x4791E0 | public: void __thiscall phInertialCS::GetLocalFilteredDisp(class Vector3 const &,class Vector3 &) const | ?GetLocalFilteredDisp@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    0x479240 | public: void __thiscall phInertialCS::GetCMFilteredVelocity(class Vector3 &) const | ?GetCMFilteredVelocity@phInertialCS@@QBEXAAVVector3@@@Z
    0x4792A0 | public: void __thiscall phInertialCS::GetCMDisp(class Vector3 &) const | ?GetCMDisp@phInertialCS@@QBEXAAVVector3@@@Z
    0x4792F0 | public: void __thiscall phInertialCS::GetLocalAcceleration(class Vector3 const &,class Vector3 &) const | ?GetLocalAcceleration@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    public: void __thiscall phInertialCS::AddWidgets(class bkBank *) | ?AddWidgets@phInertialCS@@QAEXPAVbkBank@@@Z
    public: void __thiscall phInertialCS::DebugReplay(void) | ?DebugReplay@phInertialCS@@QAEXXZ
    0x479550 | public: __thiscall phInertialCS::TerrainContact::TerrainContact(void) | ??0TerrainContact@phInertialCS@@QAE@XZ
    0x479560 | public: void __thiscall Vector3::Dot3x3(class Matrix34 const &) | ?Dot3x3@Vector3@@QAEXABVMatrix34@@@Z
    0x4795C0 | public: void __thiscall Vector3::Dot3x3Transpose(class Matrix34 const &) | ?Dot3x3Transpose@Vector3@@QAEXABVMatrix34@@@Z
*/

class phInertialCS
{
public:
    // 0x475D40 | ??0phInertialCS@@QAE@XZ
    phInertialCS();

    // 0x476DD0 | ?AddInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@@Z
    class Matrix34 AddInertia(f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3);

    // 0x476B40 | ?AddInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0@Z
    class Matrix34 AddInertia(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3);

    // 0x478940 | ?ApplyContactForce@phInertialCS@@QAEXABVVector3@@0ABVMatrix34@@@Z
    void ApplyContactForce(class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34 const& arg3);

    // 0x478700 | ?CalcNetPush@phInertialCS@@QAEXABVVector3@@@Z
    void CalcNetPush(class Vector3 const& arg1);

    // 0x478820 | ?CalcNetTurn@phInertialCS@@QAEXABVVector3@@@Z
    void CalcNetTurn(class Vector3 const& arg1);

    // 0x476B20 | ?ClearInertialValues@phInertialCS@@QAEXXZ
    void ClearInertialValues();

    // 0x4773E0 | ?FindPrincipalAxes@phInertialCS@@QAE?AVMatrix34@@MMM@Z
    class Matrix34 FindPrincipalAxes(f32 arg1, f32 arg2, f32 arg3);

    // 0x475E20 | ?Freeze@phInertialCS@@QAEXXZ
    void Freeze();

    // 0x4792A0 | ?GetCMDisp@phInertialCS@@QBEXAAVVector3@@@Z
    void GetCMDisp(class Vector3& arg1);

    // 0x479240 | ?GetCMFilteredVelocity@phInertialCS@@QBEXAAVVector3@@@Z
    void GetCMFilteredVelocity(class Vector3& arg1);

    // 0x476A80 | ?GetForce@phInertialCS@@QAEXMPAVVector3@@@Z
    void GetForce(f32 arg1, class Vector3* arg2);

    // 0x478B30 | ?GetInertiaMatrix@phInertialCS@@QBEXPAVMatrix34@@@Z
    void GetInertiaMatrix(class Matrix34* arg1);

    // 0x478BA0 | ?GetInertiaMatrix@phInertialCS@@QBEXABVVector3@@PAVMatrix34@@@Z
    void GetInertiaMatrix(class Vector3 const& arg1, class Matrix34* arg2);

    // 0x478CD0 | ?GetInvMassMatrix@phInertialCS@@QBEXABVVector3@@AAVMatrix34@@@Z
    void GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2);

    // 0x478DC0 | ?GetInvMassMatrix@phInertialCS@@QBEXABVVector3@@0AAVMatrix34@@@Z
    void GetInvMassMatrix(class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3);

    // 0x478C40 | ?GetInverseInertiaMatrix@phInertialCS@@QBEXPAVMatrix34@@@Z
    void GetInverseInertiaMatrix(class Matrix34* arg1);

    // 0x4792F0 | ?GetLocalAcceleration@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalAcceleration(class Vector3 const& arg1, class Vector3& arg2);

    // 0x4791B0 | ?GetLocalDisp@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalDisp(class Vector3 const& arg1, class Vector3& arg2);

    // 0x4791E0 | ?GetLocalFilteredDisp@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalFilteredDisp(class Vector3 const& arg1, class Vector3& arg2);

    // 0x478FD0 | ?GetLocalFilteredVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalFilteredVelocity(class Vector3 const& arg1, class Vector3& arg2);

    // 0x4790F0 | ?GetLocalFilteredVelocity2@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalFilteredVelocity2(class Vector3 const& arg1, class Vector3& arg2);

    // 0x478F40 | ?GetLocalVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetLocalVelocity(class Vector3 const& arg1, class Vector3& arg2);

    // 0x479020 | ?GetOffsetVelocity@phInertialCS@@QBEXABVVector3@@AAV2@@Z
    void GetOffsetVelocity(class Vector3 const& arg1, class Vector3& arg2);

    // 0x476AD0 | ?GetTorque@phInertialCS@@QAEXMPAVVector3@@@Z
    void GetTorque(f32 arg1, class Vector3* arg2);

    // 0x475FC0 | ?Init@phInertialCS@@QAEXMMMM@Z
    void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x476140 | ?InitBoxDensity@phInertialCS@@QAEXMMMM@Z
    void InitBoxDensity(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x4760D0 | ?InitBoxMass@phInertialCS@@QAEXMMMM@Z
    void InitBoxMass(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x476260 | ?InitCylinderDensity@phInertialCS@@QAEXMMMD@Z
    void InitCylinderDensity(f32 arg1, f32 arg2, f32 arg3, char arg4);

    // 0x4761D0 | ?InitCylinderMass@phInertialCS@@QAEXMMMD@Z
    void InitCylinderMass(f32 arg1, f32 arg2, f32 arg3, char arg4);

    // 0x476440 | ?InitFromGeometry@phInertialCS@@QAEXMPBVVector3@@PBVphPolygon@@HPAVMatrix34@@@Z
    void InitFromGeometry(
        f32 arg1, class Vector3 const* arg2, class phPolygon const* arg3, i32 arg4, class Matrix34* arg5);

    // 0x476080 | ?InitFromValues@phInertialCS@@QAEXMMABVVector3@@0@Z
    void InitFromValues(f32 arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4);

    // 0x476400 | ?InitHotdogDensity@phInertialCS@@QAEXMMMD@Z
    void InitHotdogDensity(f32 arg1, f32 arg2, f32 arg3, char arg4);

    // 0x476290 | ?InitHotdogMass@phInertialCS@@QAEXMMMD@Z
    void InitHotdogMass(f32 arg1, f32 arg2, f32 arg3, char arg4);

    // 0x4761A0 | ?InitSphereDensity@phInertialCS@@QAEXMM@Z
    void InitSphereDensity(f32 arg1, f32 arg2);

    // 0x476170 | ?InitSphereMass@phInertialCS@@QAEXMM@Z
    void InitSphereMass(f32 arg1, f32 arg2);

    // 0x478680 | ?MoveICS@phInertialCS@@QAEXXZ
    void MoveICS();

    // 0x477D60 | ?PrincipalAxis@phInertialCS@@QAE?AVVector3@@MMMM@Z
    class Vector3 PrincipalAxis(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x475E10 | ?Reset@phInertialCS@@QAEXXZ
    void Reset();

    // 0x476A00 | ?Rotate@phInertialCS@@QAEXABVVector3@@@Z
    void Rotate(class Vector3 const& arg1);

    // 0x477120 | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@@Z
    class Matrix34 SubtractInertia(f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3);

    // 0x4770C0 | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0@Z
    class Matrix34 SubtractInertia(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3);

    // 0x4772B0 | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@ABV2@PAV1@@Z
    class Matrix34 SubtractInertia(
        f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3, class phInertialCS* arg4);

    // 0x477180 | ?SubtractInertia@phInertialCS@@QAE?AVMatrix34@@MABVVector3@@0PAV1@@Z
    class Matrix34 SubtractInertia(
        f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3, class phInertialCS* arg4);

    // 0x476780 | ?TetrahedronAngInertia@phInertialCS@@QAEXPAVVector3@@PAM11111@Z
    void TetrahedronAngInertia(class Vector3* arg1, f32* arg2, f32* arg3, f32* arg4, f32* arg5, f32* arg6, f32* arg7);

    // 0x477DF0 | ?Update@phInertialCS@@QAEXXZ
    void Update();

    // 0x477F40 | ?UpdateOversample@phInertialCS@@QAEXM@Z
    void UpdateOversample(f32 arg1);

    // 0x478040 | ?UpdateOversampleDone@phInertialCS@@QAEXXZ
    void UpdateOversampleDone();

    // 0x475DE0 | ?Zero@phInertialCS@@QAEXXZ
    void Zero();

    // 0x475E60 | ?ZeroForces@phInertialCS@@QAEXXZ
    void ZeroForces();

    // 0x475CB0 | ?InitArray@phInertialCS@@SAXQAV1@H@Z
    static void InitArray(class phInertialCS* const arg1, i32 arg2);

private:
    // 0x478060 | ?Update@phInertialCS@@AAEXM@Z
    void Update(f32 arg1);
};

check_size(phInertialCS, 0x1B4);

struct phInertialCS::TerrainContact
{
public:
    // 0x479550 | ??0TerrainContact@phInertialCS@@QAE@XZ
    TerrainContact();
};

check_size(phInertialCS::TerrainContact, 0x0);
