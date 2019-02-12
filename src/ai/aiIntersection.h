/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    ai:aiIntersection

    0x5499E0 | public: __thiscall aiIntersection::aiIntersection(int) | ??0aiIntersection@@QAE@H@Z
    0x549A00 | public: __thiscall aiIntersection::~aiIntersection(void) | ??1aiIntersection@@QAE@XZ
    0x549A40 | public: void __thiscall aiIntersection::Init(void) | ?Init@aiIntersection@@QAEXXZ
    0x549B20 | public: void __thiscall aiIntersection::Reset(void) | ?Reset@aiIntersection@@QAEXXZ
    0x549B40 | public: void __thiscall aiIntersection::AddRoad(class aiPath *) | ?AddRoad@aiIntersection@@QAEXPAVaiPath@@@Z
    0x549BB0 | public: void __thiscall aiIntersection::SaveBinary(class Stream *) | ?SaveBinary@aiIntersection@@QAEXPAVStream@@@Z
    0x549C20 | public: void __thiscall aiIntersection::ReadBinary(class Stream *) | ?ReadBinary@aiIntersection@@QAEXPAVStream@@@Z
    0x549D60 | public: int __thiscall aiIntersection::NumSources(void) | ?NumSources@aiIntersection@@QAEHXZ
    0x549D90 | public: int __thiscall aiIntersection::NumSinks(void) | ?NumSinks@aiIntersection@@QAEHXZ
    0x549DD0 | public: void __thiscall aiIntersection::SetFourWay(void) | ?SetFourWay@aiIntersection@@QAEXXZ
    public: void __thiscall aiIntersection::DrawPaths(void) | ?DrawPaths@aiIntersection@@QAEXXZ
    public: void __thiscall aiIntersection::DrawId(void) | ?DrawId@aiIntersection@@QAEXXZ
    public: void __thiscall aiIntersection::DrawBangers(void) | ?DrawBangers@aiIntersection@@QAEXXZ
    0x549DF0 | public: void __thiscall aiIntersection::Dump(void) | ?Dump@aiIntersection@@QAEXXZ
    0x549E40 | public: void __thiscall aiIntersection::CreateRoadMap(void) | ?CreateRoadMap@aiIntersection@@QAEXXZ
    0x54A010 | public: int __thiscall aiIntersection::NumOneWays(void) | ?NumOneWays@aiIntersection@@QAEHXZ
    0x54A030 | public: class aiPath * __thiscall aiIntersection::Path(int) | ?Path@aiIntersection@@QAEPAVaiPath@@H@Z
    0x54A060 | public: int __thiscall aiIntersection::NumAvailSinks(class aiPath *) | ?NumAvailSinks@aiIntersection@@QAEHPAVaiPath@@@Z
    0x54A0B0 | public: void __thiscall aiIntersection::AddVehicle(class aiObstacle *) | ?AddVehicle@aiIntersection@@QAEXPAVaiObstacle@@@Z
    0x54A0D0 | public: void __thiscall aiIntersection::RemoveVehicle(class aiObstacle *) | ?RemoveVehicle@aiIntersection@@QAEXPAVaiObstacle@@@Z
    0x54A110 | public: void __thiscall aiIntersection::AddBanger(class aiObstacle *) | ?AddBanger@aiIntersection@@QAEXPAVaiObstacle@@@Z
    0x54A130 | public: void __thiscall aiIntersection::RemoveBanger(class aiObstacle *) | ?RemoveBanger@aiIntersection@@QAEXPAVaiObstacle@@@Z
    0x54A170 | public: void __thiscall aiIntersection::AddBangersToObsMap(void) | ?AddBangersToObsMap@aiIntersection@@QAEXXZ
    0x54A220 | public: bool __thiscall aiIntersection::IsCableCarStart(int *,short *) | ?IsCableCarStart@aiIntersection@@QAE_NPAHPAF@Z
    0x54A2B0 | public: bool __thiscall aiIntersection::IsSubwayStart(int *,int *,int *) | ?IsSubwayStart@aiIntersection@@QAE_NPAH00@Z
    0x54A340 | public: bool __thiscall aiIntersection::IsSubwayEnd(int *) | ?IsSubwayEnd@aiIntersection@@QAE_NPAH@Z
    0x54A3C0 | public: void __thiscall aiIntersection::AddToStopSignCntl(class aiVehicle *) | ?AddToStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    0x54A400 | public: void __thiscall aiIntersection::RemoveFromStopSignCntl(class aiVehicle *) | ?RemoveFromStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    0x54A460 | public: void __thiscall aiIntersection::RemoveTotalFromStopSignCntl(class aiVehicle *) | ?RemoveTotalFromStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    0x54A4E0 | public: bool __thiscall aiIntersection::StopSignOkayToGo(class aiVehicle *) | ?StopSignOkayToGo@aiIntersection@@QAE_NPAVaiVehicle@@@Z
    0x54A5A0 | public: void __thiscall aiIntersection::StopSources(int) | ?StopSources@aiIntersection@@QAEXH@Z
*/

// #include "hooking.h"
