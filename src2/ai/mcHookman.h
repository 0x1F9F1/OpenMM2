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

#include "aiVehiclePhysics.h"

/*
    ai:mcHookman

    0x54A600 | public: __thiscall mcHookman::mcHookman(void) | ??0mcHookman@@QAE@XZ
    0x54A610 | public: __thiscall mcHookman::~mcHookman(void) | ??1mcHookman@@QAE@XZ
    0x54A620 | public: void __thiscall mcHookman::Init(int,char *) | ?Init@mcHookman@@QAEXHPAD@Z
    0x54A9F0 | public: void __thiscall mcHookman::Reset(void) | ?Reset@mcHookman@@QAEXXZ
    0x54AA10 | public: void __thiscall mcHookman::Update(void) | ?Update@mcHookman@@QAEXXZ
    0x54AB40 | private: void __thiscall mcHookman::DriveCircuit(void) | ?DriveCircuit@mcHookman@@AAEXXZ
    0x54AC80 | private: void __thiscall mcHookman::DriveToHideout(void) | ?DriveToHideout@mcHookman@@AAEXXZ
    0x54AE10 | private: void __thiscall mcHookman::ReturnToCircuit(void) | ?ReturnToCircuit@mcHookman@@AAEXXZ
    0x54AF70 | public: void __thiscall mcHookman::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@mcHookman@@QAEXXZ
    public: void __thiscall mcHookman::AddWidgets(class bkBank *) | ?AddWidgets@mcHookman@@QAEXPAVbkBank@@@Z
*/

class mcHookman : public aiVehiclePhysics
{
public:
    // 0x54A600 | ??0mcHookman@@QAE@XZ
    mcHookman();

    // 0x54A610 | ??1mcHookman@@QAE@XZ
    // 0x53BE20 | ??_EmcHookman@@QAEPAXI@Z
    ~mcHookman();

    // 0x54AF70 | ?DrawRouteThroughTraffic@mcHookman@@QAEXXZ
    void DrawRouteThroughTraffic();

    // 0x54A620 | ?Init@mcHookman@@QAEXHPAD@Z
    void Init(i32 arg1, char* arg2);

    // 0x54A9F0 | ?Reset@mcHookman@@QAEXXZ
    void Reset();

    // 0x54AA10 | ?Update@mcHookman@@QAEXXZ
    void Update();

private:
    // 0x54AB40 | ?DriveCircuit@mcHookman@@AAEXXZ
    void DriveCircuit();

    // 0x54AC80 | ?DriveToHideout@mcHookman@@AAEXXZ
    void DriveToHideout();

    // 0x54AE10 | ?ReturnToCircuit@mcHookman@@AAEXXZ
    void ReturnToCircuit();
};

check_size(mcHookman, 0x9870);
