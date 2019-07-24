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
    ai:aiPedestrian

    0x54AFA0 | public: __thiscall aiPedestrian::aiPedestrian(void) | ??0aiPedestrian@@QAE@XZ
    0x54B0C0 | public: __thiscall aiPedestrian::~aiPedestrian(void) | ??1aiPedestrian@@QAE@XZ
    0x54B0D0 | public: void __thiscall aiPedestrian::Init(char *,int,int) | ?Init@aiPedestrian@@QAEXPADHH@Z
    0x54B5C0 | public: void __thiscall aiPedestrian::Reset(class aiPath *,int) | ?Reset@aiPedestrian@@QAEXPAVaiPath@@H@Z
    0x54B9C0 | public: void __thiscall aiPedestrian::Update(void) | ?Update@aiPedestrian@@QAEXXZ
    0x54BFA0 | private: void __thiscall aiPedestrian::PreCrossStreet(void) | ?PreCrossStreet@aiPedestrian@@AAEXXZ
    0x54C4F0 | private: void __thiscall aiPedestrian::CrossStreet(void) | ?CrossStreet@aiPedestrian@@AAEXXZ
    0x54C6F0 | private: void __thiscall aiPedestrian::WaitCrossStreet(void) | ?WaitCrossStreet@aiPedestrian@@AAEXXZ
    0x54CCC0 | private: int __thiscall aiPedestrian::Accident(void) | ?Accident@aiPedestrian@@AAEHXZ
    0x54CDB0 | private: void __thiscall aiPedestrian::Wander(void) | ?Wander@aiPedestrian@@AAEXXZ
    0x54D100 | private: void __thiscall aiPedestrian::Anticipate(void) | ?Anticipate@aiPedestrian@@AAEXXZ
    0x54D8D0 | private: void __thiscall aiPedestrian::Avoid(float *) | ?Avoid@aiPedestrian@@AAEXPAM@Z
    0x54E650 | private: float __thiscall aiPedestrian::TimeToCollision(float) | ?TimeToCollision@aiPedestrian@@AAEMM@Z
    0x54E680 | private: int __thiscall aiPedestrian::DetectPlayerForwardCollision(float *,float *) | ?DetectPlayerForwardCollision@aiPedestrian@@AAEHPAM0@Z
    0x54E8C0 | private: int __thiscall aiPedestrian::DetectPlayerAnticipate(float *,float *) | ?DetectPlayerAnticipate@aiPedestrian@@AAEHPAM0@Z
    0x54EAE0 | private: float __thiscall aiPedestrian::RoadDistance(void) | ?RoadDistance@aiPedestrian@@AAEMXZ
    0x54F1D0 | private: void __thiscall aiPedestrian::SolveRoadSegment(float) | ?SolveRoadSegment@aiPedestrian@@AAEXM@Z
    0x54F310 | private: class aiPath * __thiscall aiPedestrian::SetNextRoad(void) | ?SetNextRoad@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F340 | private: int __thiscall aiPedestrian::UpcomingAccident(void) | ?UpcomingAccident@aiPedestrian@@AAEHXZ
    0x54F390 | private: class aiPath * __thiscall aiPedestrian::PickNextRdSeg(void) | ?PickNextRdSeg@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F620 | private: class aiPath * __thiscall aiPedestrian::GetRoadToRight(void) | ?GetRoadToRight@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F6A0 | private: class aiPath * __thiscall aiPedestrian::GetRoadToLeft(void) | ?GetRoadToLeft@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F720 | private: int __thiscall aiPedestrian::DetectPlayerCollision(float *) | ?DetectPlayerCollision@aiPedestrian@@AAEHPAM@Z
    0x54F800 | private: int __thiscall aiPedestrian::DetectBangerCollision(class lvlInstance * *,float *) | ?DetectBangerCollision@aiPedestrian@@AAEHPAPAVlvlInstance@@PAM@Z
    0x54FA00 | private: int __thiscall aiPedestrian::DetectPedCollision(float,class aiPedestrian * *,float *) | ?DetectPedCollision@aiPedestrian@@AAEHMPAPAV1@PAM@Z
    0x54FDE0 | private: void __thiscall aiPedestrian::AvoidPlayer(class Vector3 &,float) | ?AvoidPlayer@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x54FE50 | private: void __thiscall aiPedestrian::AvoidBanger(class lvlInstance *,float) | ?AvoidBanger@aiPedestrian@@AAEXPAVlvlInstance@@M@Z
    0x54FEC0 | private: void __thiscall aiPedestrian::AvoidPedCollision(class aiPedestrian *,float) | ?AvoidPedCollision@aiPedestrian@@AAEXPAV1@M@Z
    0x54FF90 | private: void __thiscall aiPedestrian::AvoidObstacle(class Vector3 const &,float) | ?AvoidObstacle@aiPedestrian@@AAEXABVVector3@@M@Z
    0x550400 | private: void __thiscall aiPedestrian::SolveTargetPoint(float) | ?SolveTargetPoint@aiPedestrian@@AAEXM@Z
    0x5504A0 | private: void __thiscall aiPedestrian::CalcCurve(int,int,float) | ?CalcCurve@aiPedestrian@@AAEXHHM@Z
    0x5509D0 | private: void __thiscall aiPedestrian::ComputeCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeCurve@aiPedestrian@@AAEXAAVVector3@@000@Z
    0x550BA0 | private: void __thiscall aiPedestrian::SolvePosition(class Vector3 &,float) | ?SolvePosition@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x550BF0 | public: void __thiscall aiPedestrian::Reset(void) | ?Reset@aiPedestrian@@QAEXXZ
    0x550C00 | public: void __thiscall aiPedestrian::Stop(void) | ?Stop@aiPedestrian@@QAEXXZ
    0x550C20 | public: void __thiscall aiPedestrian::Go(void) | ?Go@aiPedestrian@@QAEXXZ
    0x550C40 | public: void __thiscall aiPedestrian::Dump(void) | ?Dump@aiPedestrian@@QAEXXZ
    0x550DE0 | public: void __thiscall aiPedestrian::QuickDump(void) | ?QuickDump@aiPedestrian@@QAEXXZ
    0x550EA0 | public: void __thiscall aiPedestrian::ReplayDebug(void) | ?ReplayDebug@aiPedestrian@@QAEXXZ
    0x550EB0 | public: void __thiscall aiPedestrian::DrawDebug(void) | ?DrawDebug@aiPedestrian@@QAEXXZ
*/

class aiPedestrian
{
public:
    // 0x53BDC0 | ??_EaiPedestrian@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x54AFA0 | ??0aiPedestrian@@QAE@XZ
    inline aiPedestrian()
    {
        stub<member_func_t<void, aiPedestrian>>(0x54AFA0, this);
    }

    // 0x54B0C0 | ??1aiPedestrian@@QAE@XZ
    inline ~aiPedestrian()
    {
        stub<member_func_t<void, aiPedestrian>>(0x54B0C0, this);
    }

    // 0x54B0D0 | ?Init@aiPedestrian@@QAEXPADHH@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPedestrian, char*, int32_t, int32_t>>(0x54B0D0, this, arg1, arg2, arg3);
    }

    // 0x54B5C0 | ?Reset@aiPedestrian@@QAEXPAVaiPath@@H@Z
    inline void Reset(class aiPath* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class aiPath*, int32_t>>(0x54B5C0, this, arg1, arg2);
    }

    // 0x54B9C0 | ?Update@aiPedestrian@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54B9C0, this);
    }

    // 0x54BFA0 | ?PreCrossStreet@aiPedestrian@@AAEXXZ
    inline void PreCrossStreet()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54BFA0, this);
    }

    // 0x54C4F0 | ?CrossStreet@aiPedestrian@@AAEXXZ
    inline void CrossStreet()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54C4F0, this);
    }

    // 0x54C6F0 | ?WaitCrossStreet@aiPedestrian@@AAEXXZ
    inline void WaitCrossStreet()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54C6F0, this);
    }

    // 0x54CCC0 | ?Accident@aiPedestrian@@AAEHXZ
    inline int32_t Accident()
    {
        return stub<member_func_t<int32_t, aiPedestrian>>(0x54CCC0, this);
    }

    // 0x54CDB0 | ?Wander@aiPedestrian@@AAEXXZ
    inline void Wander()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54CDB0, this);
    }

    // 0x54D100 | ?Anticipate@aiPedestrian@@AAEXXZ
    inline void Anticipate()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x54D100, this);
    }

    // 0x54D8D0 | ?Avoid@aiPedestrian@@AAEXPAM@Z
    inline void Avoid(float* arg1)
    {
        return stub<member_func_t<void, aiPedestrian, float*>>(0x54D8D0, this, arg1);
    }

    // 0x54E650 | ?TimeToCollision@aiPedestrian@@AAEMM@Z
    inline float TimeToCollision(float arg1)
    {
        return stub<member_func_t<float, aiPedestrian, float>>(0x54E650, this, arg1);
    }

    // 0x54E680 | ?DetectPlayerForwardCollision@aiPedestrian@@AAEHPAM0@Z
    inline int32_t DetectPlayerForwardCollision(float* arg1, float* arg2)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*, float*>>(0x54E680, this, arg1, arg2);
    }

    // 0x54E8C0 | ?DetectPlayerAnticipate@aiPedestrian@@AAEHPAM0@Z
    inline int32_t DetectPlayerAnticipate(float* arg1, float* arg2)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*, float*>>(0x54E8C0, this, arg1, arg2);
    }

    // 0x54EAE0 | ?RoadDistance@aiPedestrian@@AAEMXZ
    inline float RoadDistance()
    {
        return stub<member_func_t<float, aiPedestrian>>(0x54EAE0, this);
    }

    // 0x54F1D0 | ?SolveRoadSegment@aiPedestrian@@AAEXM@Z
    inline void SolveRoadSegment(float arg1)
    {
        return stub<member_func_t<void, aiPedestrian, float>>(0x54F1D0, this, arg1);
    }

    // 0x54F310 | ?SetNextRoad@aiPedestrian@@AAEPAVaiPath@@XZ
    inline class aiPath* SetNextRoad()
    {
        return stub<member_func_t<class aiPath*, aiPedestrian>>(0x54F310, this);
    }

    // 0x54F340 | ?UpcomingAccident@aiPedestrian@@AAEHXZ
    inline int32_t UpcomingAccident()
    {
        return stub<member_func_t<int32_t, aiPedestrian>>(0x54F340, this);
    }

    // 0x54F390 | ?PickNextRdSeg@aiPedestrian@@AAEPAVaiPath@@XZ
    inline class aiPath* PickNextRdSeg()
    {
        return stub<member_func_t<class aiPath*, aiPedestrian>>(0x54F390, this);
    }

    // 0x54F620 | ?GetRoadToRight@aiPedestrian@@AAEPAVaiPath@@XZ
    inline class aiPath* GetRoadToRight()
    {
        return stub<member_func_t<class aiPath*, aiPedestrian>>(0x54F620, this);
    }

    // 0x54F6A0 | ?GetRoadToLeft@aiPedestrian@@AAEPAVaiPath@@XZ
    inline class aiPath* GetRoadToLeft()
    {
        return stub<member_func_t<class aiPath*, aiPedestrian>>(0x54F6A0, this);
    }

    // 0x54F720 | ?DetectPlayerCollision@aiPedestrian@@AAEHPAM@Z
    inline int32_t DetectPlayerCollision(float* arg1)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*>>(0x54F720, this, arg1);
    }

    // 0x54F800 | ?DetectBangerCollision@aiPedestrian@@AAEHPAPAVlvlInstance@@PAM@Z
    inline int32_t DetectBangerCollision(class lvlInstance** arg1, float* arg2)
    {
        return stub<member_func_t<int32_t, aiPedestrian, class lvlInstance**, float*>>(0x54F800, this, arg1, arg2);
    }

    // 0x54FA00 | ?DetectPedCollision@aiPedestrian@@AAEHMPAPAV1@PAM@Z
    inline int32_t DetectPedCollision(float arg1, class aiPedestrian** arg2, float* arg3)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float, class aiPedestrian**, float*>>(
            0x54FA00, this, arg1, arg2, arg3);
    }

    // 0x54FDE0 | ?AvoidPlayer@aiPedestrian@@AAEXAAVVector3@@M@Z
    inline void AvoidPlayer(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, float>>(0x54FDE0, this, arg1, arg2);
    }

    // 0x54FE50 | ?AvoidBanger@aiPedestrian@@AAEXPAVlvlInstance@@M@Z
    inline void AvoidBanger(class lvlInstance* arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class lvlInstance*, float>>(0x54FE50, this, arg1, arg2);
    }

    // 0x54FEC0 | ?AvoidPedCollision@aiPedestrian@@AAEXPAV1@M@Z
    inline void AvoidPedCollision(class aiPedestrian* arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class aiPedestrian*, float>>(0x54FEC0, this, arg1, arg2);
    }

    // 0x54FF90 | ?AvoidObstacle@aiPedestrian@@AAEXABVVector3@@M@Z
    inline void AvoidObstacle(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3 const&, float>>(0x54FF90, this, arg1, arg2);
    }

    // 0x550400 | ?SolveTargetPoint@aiPedestrian@@AAEXM@Z
    inline void SolveTargetPoint(float arg1)
    {
        return stub<member_func_t<void, aiPedestrian, float>>(0x550400, this, arg1);
    }

    // 0x5504A0 | ?CalcCurve@aiPedestrian@@AAEXHHM@Z
    inline void CalcCurve(int32_t arg1, int32_t arg2, float arg3)
    {
        return stub<member_func_t<void, aiPedestrian, int32_t, int32_t, float>>(0x5504A0, this, arg1, arg2, arg3);
    }

    // 0x5509D0 | ?ComputeCurve@aiPedestrian@@AAEXAAVVector3@@000@Z
    inline void ComputeCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x5509D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x550BA0 | ?SolvePosition@aiPedestrian@@AAEXAAVVector3@@M@Z
    inline void SolvePosition(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, float>>(0x550BA0, this, arg1, arg2);
    }

    // 0x550BF0 | ?Reset@aiPedestrian@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550BF0, this);
    }

    // 0x550C00 | ?Stop@aiPedestrian@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550C00, this);
    }

    // 0x550C20 | ?Go@aiPedestrian@@QAEXXZ
    inline void Go()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550C20, this);
    }

    // 0x550C40 | ?Dump@aiPedestrian@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550C40, this);
    }

    // 0x550DE0 | ?QuickDump@aiPedestrian@@QAEXXZ
    inline void QuickDump()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550DE0, this);
    }

    // 0x550EA0 | ?ReplayDebug@aiPedestrian@@QAEXXZ
    inline void ReplayDebug()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550EA0, this);
    }

    // 0x550EB0 | ?DrawDebug@aiPedestrian@@QAEXXZ
    inline void DrawDebug()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x550EB0, this);
    }
};
