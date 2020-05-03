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

#include "carcs.h"

/*
    camera:trackcs

    0x51D770 | public: __thiscall camTrackCS::camTrackCS(void) | ??0camTrackCS@@QAE@XZ
    0x51DA80 | public: virtual __thiscall camTrackCS::~camTrackCS(void) | ??1camTrackCS@@UAE@XZ
    0x51DAE0 | public: virtual void __thiscall camTrackCS::MakeActive(void) | ?MakeActive@camTrackCS@@UAEXXZ
    0x51DAF0 | public: virtual void __thiscall camTrackCS::AfterLoad(void) | ?AfterLoad@camTrackCS@@UAEXXZ
    0x51DB00 | public: virtual void __thiscall camTrackCS::Reset(void) | ?Reset@camTrackCS@@UAEXXZ
    0x51DB50 | public: virtual void __thiscall camTrackCS::Update(void) | ?Update@camTrackCS@@UAEXXZ
    0x51DC60 | public: virtual void __thiscall camTrackCS::UpdateInput(void) | ?UpdateInput@camTrackCS@@UAEXXZ
    0x51DC70 | private: void __thiscall camTrackCS::UpdateCar(void) | ?UpdateCar@camTrackCS@@AAEXXZ
    0x51DEE0 | private: void __thiscall camTrackCS::UpdateHill(void) | ?UpdateHill@camTrackCS@@AAEXXZ
    0x51E400 | private: void __thiscall camTrackCS::UpdateTrack(void) | ?UpdateTrack@camTrackCS@@AAEXXZ
    0x51EB30 | private: void __thiscall camTrackCS::UpdateSwing(void) | ?UpdateSwing@camTrackCS@@AAEXXZ
    0x51EB40 | private: void __thiscall camTrackCS::PreApproach(void) | ?PreApproach@camTrackCS@@AAEXXZ
    0x51ECC0 | private: void __thiscall camTrackCS::MinMax(class Matrix34) | ?MinMax@camTrackCS@@AAEXVMatrix34@@@Z
    0x51EED0 | private: void __thiscall camTrackCS::Collide(class Vector3) | ?Collide@camTrackCS@@AAEXVVector3@@@Z
    0x51F920 | public: void __thiscall camTrackCS::SwingToRear(void) | ?SwingToRear@camTrackCS@@QAEXXZ
    0x51F980 | private: void __thiscall camTrackCS::Front(float) | ?Front@camTrackCS@@AAEXM@Z
    0x51FA00 | private: void __thiscall camTrackCS::Rear(float) | ?Rear@camTrackCS@@AAEXM@Z
    public: virtual void __thiscall camTrackCS::AddWidgets(class bkBank &) | ?AddWidgets@camTrackCS@@UAEXAAVbkBank@@@Z
    0x51FA80 | public: virtual void __thiscall camTrackCS::FileIO(class datParser &) | ?FileIO@camTrackCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camTrackCS::`vector deleting destructor'(unsigned int) | ??_EcamTrackCS@@UAEPAXI@Z
    0x51FD20 | public: virtual void * __thiscall camTrackCS::`scalar deleting destructor'(unsigned int) | ??_GcamTrackCS@@UAEPAXI@Z
    0x51FD50 | public: virtual __thiscall Spline::~Spline(void) | ??1Spline@@UAE@XZ
    0x51FD60 | public: virtual char * __thiscall camTrackCS::GetClassName(void) | ?GetClassName@camTrackCS@@UAEPADXZ
    0x5B4EC4 | const camTrackCS::`vftable' | ??_7camTrackCS@@6B@
*/

class camTrackCS : public camCarCS
{
    // const camTrackCS::`vftable' @ 0x5B4EC4

public:
    // 0x51D770 | ??0camTrackCS@@QAE@XZ
    camTrackCS();

    // 0x51FD20 | ??_GcamTrackCS@@UAEPAXI@Z
    // 0x51DA80 | ??1camTrackCS@@UAE@XZ
    ~camTrackCS() override;

    // 0x51DAF0 | ?AfterLoad@camTrackCS@@UAEXXZ
    void AfterLoad() override;

    // 0x51FA80 | ?FileIO@camTrackCS@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x51FD60 | ?GetClassName@camTrackCS@@UAEPADXZ
    char* GetClassName() override;

    // 0x51DAE0 | ?MakeActive@camTrackCS@@UAEXXZ
    void MakeActive() override;

    // 0x51DB00 | ?Reset@camTrackCS@@UAEXXZ
    void Reset() override;

    // 0x51F920 | ?SwingToRear@camTrackCS@@QAEXXZ
    void SwingToRear();

    // 0x51DB50 | ?Update@camTrackCS@@UAEXXZ
    void Update() override;

    // 0x51DC60 | ?UpdateInput@camTrackCS@@UAEXXZ
    void UpdateInput() override;

private:
    // 0x51EED0 | ?Collide@camTrackCS@@AAEXVVector3@@@Z
    void Collide(class Vector3 arg1);

    // 0x51F980 | ?Front@camTrackCS@@AAEXM@Z
    void Front(f32 arg1);

    // 0x51ECC0 | ?MinMax@camTrackCS@@AAEXVMatrix34@@@Z
    void MinMax(class Matrix34 arg1);

    // 0x51EB40 | ?PreApproach@camTrackCS@@AAEXXZ
    void PreApproach();

    // 0x51FA00 | ?Rear@camTrackCS@@AAEXM@Z
    void Rear(f32 arg1);

    // 0x51DC70 | ?UpdateCar@camTrackCS@@AAEXXZ
    void UpdateCar();

    // 0x51DEE0 | ?UpdateHill@camTrackCS@@AAEXXZ
    void UpdateHill();

    // 0x51EB30 | ?UpdateSwing@camTrackCS@@AAEXXZ
    void UpdateSwing();

    // 0x51E400 | ?UpdateTrack@camTrackCS@@AAEXXZ
    void UpdateTrack();
};

check_size(camTrackCS, 0x0);
