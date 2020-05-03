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

#include "banger/banger.h"
#include "node/node.h"

/*
    gizmo:train

    0x5788A0 | public: __thiscall gizTrainCar::gizTrainCar(void) | ??0gizTrainCar@@QAE@XZ
    0x5788C0 | public: __thiscall gizTrainCar::~gizTrainCar(void) | ??1gizTrainCar@@QAE@XZ
    0x578930 | public: void __thiscall gizTrainCar::Reset(int) | ?Reset@gizTrainCar@@QAEXH@Z
    0x578970 | public: void __thiscall gizTrainCar::Init(char *,class dgPath *,float) | ?Init@gizTrainCar@@QAEXPADPAVdgPath@@M@Z
    0x578A30 | public: void __thiscall gizTrainCar::Update(float) | ?Update@gizTrainCar@@QAEXM@Z
    0x578B20 | public: bool __thiscall gizTrainCar::IsFirstStop(void) | ?IsFirstStop@gizTrainCar@@QAE_NXZ
    0x578B30 | public: bool __thiscall gizTrainCar::IsLastStop(void) | ?IsLastStop@gizTrainCar@@QAE_NXZ
    0x578B50 | public: __thiscall gizTrain::gizTrain(void) | ??0gizTrain@@QAE@XZ
    0x578BC0 | public: __thiscall gizTrain::~gizTrain(void) | ??1gizTrain@@QAE@XZ
    0x578C20 | public: void __thiscall gizTrain::Reset(void) | ?Reset@gizTrain@@QAEXXZ
    0x578C60 | public: void __thiscall gizTrain::Init(char *,class dgPath *) | ?Init@gizTrain@@QAEXPADPAVdgPath@@@Z
    0x578CC0 | public: void __thiscall gizTrain::CalcTrainAccel(void) | ?CalcTrainAccel@gizTrain@@QAEXXZ
    0x578CD0 | public: void __thiscall gizTrain::Update(void) | ?Update@gizTrain@@QAEXXZ
    0x578EF0 | public: bool __thiscall gizTrain::InStation(void) | ?InStation@gizTrain@@QAE_NXZ
    0x578F10 | public: __thiscall gizTrainMgr::gizTrainMgr(void) | ??0gizTrainMgr@@QAE@XZ
    0x578F60 | public: virtual __thiscall gizTrainMgr::~gizTrainMgr(void) | ??1gizTrainMgr@@UAE@XZ
    0x578FF0 | public: virtual void __thiscall gizTrainMgr::Reset(void) | ?Reset@gizTrainMgr@@UAEXXZ
    0x579020 | public: bool __thiscall gizTrainMgr::Init(char *,char *,char *) | ?Init@gizTrainMgr@@QAE_NPAD00@Z
    0x579170 | public: virtual void __thiscall gizTrainMgr::Update(void) | ?Update@gizTrainMgr@@UAEXXZ
    0x5791B0 | private: void __thiscall gizTrainMgr::ApplyTuning(void) | ?ApplyTuning@gizTrainMgr@@AAEXXZ
    public: void __thiscall gizTrainMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizTrainMgr@@QAEXPAVbkBank@@@Z
    public: __thiscall dgUnhitMtxBangerInstance::~dgUnhitMtxBangerInstance(void) | ??1dgUnhitMtxBangerInstance@@QAE@XZ
    0x5791C0 | public: virtual void * __thiscall gizTrainMgr::`scalar deleting destructor'(unsigned int) | ??_GgizTrainMgr@@UAEPAXI@Z
    public: virtual void * __thiscall gizTrainMgr::`vector deleting destructor'(unsigned int) | ??_EgizTrainMgr@@UAEPAXI@Z
    0x5791F0 | public: void * __thiscall gizTrain::`vector deleting destructor'(unsigned int) | ??_EgizTrain@@QAEPAXI@Z
    0x579250 | public: virtual unsigned int __thiscall gizTrainCar::SizeOf(void) | ?SizeOf@gizTrainCar@@UAEIXZ
    0x5B60D4 | const gizTrainCar::`vftable' | ??_7gizTrainCar@@6B@
    0x5B614C | const gizTrainMgr::`vftable' | ??_7gizTrainMgr@@6B@
    0x5DC058 | float LagTime | ?LagTime@@3MA
    0x5DC05C | float MaxSpeed | ?MaxSpeed@@3MA
    0x5DC060 | float RestTime | ?RestTime@@3MA
    0x5DC064 | float TrainAccel | ?TrainAccel@@3MA
    float HeightApproach | ?HeightApproach@@3MA
*/

class gizTrainCar : public dgUnhitMtxBangerInstance
{
    // const gizTrainCar::`vftable' @ 0x5B60D4

public:
    // 0x5788A0 | ??0gizTrainCar@@QAE@XZ
    gizTrainCar();

    // 0x5788C0 | ??1gizTrainCar@@QAE@XZ
    ~gizTrainCar();

    // 0x578970 | ?Init@gizTrainCar@@QAEXPADPAVdgPath@@M@Z
    void Init(char* arg1, class dgPath* arg2, f32 arg3);

    // 0x578B20 | ?IsFirstStop@gizTrainCar@@QAE_NXZ
    bool IsFirstStop();

    // 0x578B30 | ?IsLastStop@gizTrainCar@@QAE_NXZ
    bool IsLastStop();

    // 0x578930 | ?Reset@gizTrainCar@@QAEXH@Z
    void Reset(i32 arg1);

    // 0x579250 | ?SizeOf@gizTrainCar@@UAEIXZ
    u32 SizeOf() override;

    // 0x578A30 | ?Update@gizTrainCar@@QAEXM@Z
    void Update(f32 arg1);
};

check_size(gizTrainCar, 0x60);

struct gizTrain
{
public:
    // 0x578B50 | ??0gizTrain@@QAE@XZ
    gizTrain();

    // 0x578BC0 | ??1gizTrain@@QAE@XZ
    // 0x5791F0 | ??_EgizTrain@@QAEPAXI@Z
    ~gizTrain();

    // 0x578CC0 | ?CalcTrainAccel@gizTrain@@QAEXXZ
    void CalcTrainAccel();

    // 0x578EF0 | ?InStation@gizTrain@@QAE_NXZ
    bool InStation();

    // 0x578C60 | ?Init@gizTrain@@QAEXPADPAVdgPath@@@Z
    void Init(char* arg1, class dgPath* arg2);

    // 0x578C20 | ?Reset@gizTrain@@QAEXXZ
    void Reset();

    // 0x578CD0 | ?Update@gizTrain@@QAEXXZ
    void Update();
};

check_size(gizTrain, 0x1B4);

class gizTrainMgr : public asNode
{
    // const gizTrainMgr::`vftable' @ 0x5B614C

public:
    // 0x578F10 | ??0gizTrainMgr@@QAE@XZ
    gizTrainMgr();

    // 0x5791C0 | ??_GgizTrainMgr@@UAEPAXI@Z
    // 0x578F60 | ??1gizTrainMgr@@UAE@XZ
    ~gizTrainMgr() override;

    // 0x579020 | ?Init@gizTrainMgr@@QAE_NPAD00@Z
    bool Init(char* arg1, char* arg2, char* arg3);

    // 0x578FF0 | ?Reset@gizTrainMgr@@UAEXXZ
    void Reset() override;

    // 0x579170 | ?Update@gizTrainMgr@@UAEXXZ
    void Update() override;

private:
    // 0x5791B0 | ?ApplyTuning@gizTrainMgr@@AAEXXZ
    void ApplyTuning();
};

check_size(gizTrainMgr, 0x24);

// 0x5DC058 | ?LagTime@@3MA
inline extern_var(0x5DC058, f32, LagTime);

// 0x5DC05C | ?MaxSpeed@@3MA
inline extern_var(0x5DC05C, f32, MaxSpeed);

// 0x5DC060 | ?RestTime@@3MA
inline extern_var(0x5DC060, f32, RestTime);

// 0x5DC064 | ?TrainAccel@@3MA
inline extern_var(0x5DC064, f32, TrainAccel);
