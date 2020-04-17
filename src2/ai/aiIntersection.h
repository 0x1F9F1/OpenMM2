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

class aiIntersection
{
public:
    // 0x53C000 | ?Road@aiIntersection@@QAEPAVaiPath@@H@Z
    class aiPath* Road(i32 arg1)
    {
        return stub<member_func_t<class aiPath*, aiIntersection, i32>>(0x53C000, this, arg1);
    }

    // 0x5499E0 | ??0aiIntersection@@QAE@H@Z
    aiIntersection(i32 arg1)
    {
        stub<member_func_t<void, aiIntersection, i32>>(0x5499E0, this, arg1);
    }

    // 0x549A00 | ??1aiIntersection@@QAE@XZ
    ~aiIntersection()
    {
        stub<member_func_t<void, aiIntersection>>(0x549A00, this);
    }

    // 0x549A40 | ?Init@aiIntersection@@QAEXXZ
    void Init()
    {
        return stub<member_func_t<void, aiIntersection>>(0x549A40, this);
    }

    // 0x549B20 | ?Reset@aiIntersection@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, aiIntersection>>(0x549B20, this);
    }

    // 0x549B40 | ?AddRoad@aiIntersection@@QAEXPAVaiPath@@@Z
    void AddRoad(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiPath*>>(0x549B40, this, arg1);
    }

    // 0x549BB0 | ?SaveBinary@aiIntersection@@QAEXPAVStream@@@Z
    void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class Stream*>>(0x549BB0, this, arg1);
    }

    // 0x549C20 | ?ReadBinary@aiIntersection@@QAEXPAVStream@@@Z
    void ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class Stream*>>(0x549C20, this, arg1);
    }

    // 0x549D60 | ?NumSources@aiIntersection@@QAEHXZ
    i32 NumSources()
    {
        return stub<member_func_t<i32, aiIntersection>>(0x549D60, this);
    }

    // 0x549D90 | ?NumSinks@aiIntersection@@QAEHXZ
    i32 NumSinks()
    {
        return stub<member_func_t<i32, aiIntersection>>(0x549D90, this);
    }

    // 0x549DD0 | ?SetFourWay@aiIntersection@@QAEXXZ
    void SetFourWay()
    {
        return stub<member_func_t<void, aiIntersection>>(0x549DD0, this);
    }

    // 0x549DF0 | ?Dump@aiIntersection@@QAEXXZ
    void Dump()
    {
        return stub<member_func_t<void, aiIntersection>>(0x549DF0, this);
    }

    // 0x549E40 | ?CreateRoadMap@aiIntersection@@QAEXXZ
    void CreateRoadMap()
    {
        return stub<member_func_t<void, aiIntersection>>(0x549E40, this);
    }

    // 0x54A010 | ?NumOneWays@aiIntersection@@QAEHXZ
    i32 NumOneWays()
    {
        return stub<member_func_t<i32, aiIntersection>>(0x54A010, this);
    }

    // 0x54A030 | ?Path@aiIntersection@@QAEPAVaiPath@@H@Z
    class aiPath* Path(i32 arg1)
    {
        return stub<member_func_t<class aiPath*, aiIntersection, i32>>(0x54A030, this, arg1);
    }

    // 0x54A060 | ?NumAvailSinks@aiIntersection@@QAEHPAVaiPath@@@Z
    i32 NumAvailSinks(class aiPath* arg1)
    {
        return stub<member_func_t<i32, aiIntersection, class aiPath*>>(0x54A060, this, arg1);
    }

    // 0x54A0B0 | ?AddVehicle@aiIntersection@@QAEXPAVaiObstacle@@@Z
    void AddVehicle(class aiObstacle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiObstacle*>>(0x54A0B0, this, arg1);
    }

    // 0x54A0D0 | ?RemoveVehicle@aiIntersection@@QAEXPAVaiObstacle@@@Z
    void RemoveVehicle(class aiObstacle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiObstacle*>>(0x54A0D0, this, arg1);
    }

    // 0x54A110 | ?AddBanger@aiIntersection@@QAEXPAVaiObstacle@@@Z
    void AddBanger(class aiObstacle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiObstacle*>>(0x54A110, this, arg1);
    }

    // 0x54A130 | ?RemoveBanger@aiIntersection@@QAEXPAVaiObstacle@@@Z
    void RemoveBanger(class aiObstacle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiObstacle*>>(0x54A130, this, arg1);
    }

    // 0x54A170 | ?AddBangersToObsMap@aiIntersection@@QAEXXZ
    void AddBangersToObsMap()
    {
        return stub<member_func_t<void, aiIntersection>>(0x54A170, this);
    }

    // 0x54A220 | ?IsCableCarStart@aiIntersection@@QAE_NPAHPAF@Z
    bool IsCableCarStart(i32* arg1, i16* arg2)
    {
        return stub<member_func_t<bool, aiIntersection, i32*, i16*>>(0x54A220, this, arg1, arg2);
    }

    // 0x54A2B0 | ?IsSubwayStart@aiIntersection@@QAE_NPAH00@Z
    bool IsSubwayStart(i32* arg1, i32* arg2, i32* arg3)
    {
        return stub<member_func_t<bool, aiIntersection, i32*, i32*, i32*>>(0x54A2B0, this, arg1, arg2, arg3);
    }

    // 0x54A340 | ?IsSubwayEnd@aiIntersection@@QAE_NPAH@Z
    bool IsSubwayEnd(i32* arg1)
    {
        return stub<member_func_t<bool, aiIntersection, i32*>>(0x54A340, this, arg1);
    }

    // 0x54A3C0 | ?AddToStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    void AddToStopSignCntl(class aiVehicle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiVehicle*>>(0x54A3C0, this, arg1);
    }

    // 0x54A400 | ?RemoveFromStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    void RemoveFromStopSignCntl(class aiVehicle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiVehicle*>>(0x54A400, this, arg1);
    }

    // 0x54A460 | ?RemoveTotalFromStopSignCntl@aiIntersection@@QAEXPAVaiVehicle@@@Z
    void RemoveTotalFromStopSignCntl(class aiVehicle* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiVehicle*>>(0x54A460, this, arg1);
    }

    // 0x54A4E0 | ?StopSignOkayToGo@aiIntersection@@QAE_NPAVaiVehicle@@@Z
    bool StopSignOkayToGo(class aiVehicle* arg1)
    {
        return stub<member_func_t<bool, aiIntersection, class aiVehicle*>>(0x54A4E0, this, arg1);
    }

    // 0x54A5A0 | ?StopSources@aiIntersection@@QAEXH@Z
    void StopSources(i32 arg1)
    {
        return stub<member_func_t<void, aiIntersection, i32>>(0x54A5A0, this, arg1);
    }
};
