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
    ai:aiMap

    0x534850 | public: class aiPath * __thiscall aiMap::Path(int) | ?Path@aiMap@@QAEPAVaiPath@@H@Z
    0x534880 | public: class aiIntersection * __thiscall aiMap::Intersection(int) | ?Intersection@aiMap@@QAEPAVaiIntersection@@H@Z
    0x5348B0 | public: class aiVehicleAmbient * __thiscall aiMap::Vehicle(int) | ?Vehicle@aiMap@@QAEPAVaiVehicleAmbient@@H@Z
    0x5348F0 | public: class aiPoliceOfficer * __thiscall aiMap::Police(int) | ?Police@aiMap@@QAEPAVaiPoliceOfficer@@H@Z
    0x534940 | public: class aiRouteRacer * __thiscall aiMap::Opponent(int) | ?Opponent@aiMap@@QAEPAVaiRouteRacer@@H@Z
    0x534990 | public: class aiCTFRacer * __thiscall aiMap::CTFOpponent(int) | ?CTFOpponent@aiMap@@QAEPAVaiCTFRacer@@H@Z
    0x5349E0 | public: class mcHookman * __thiscall aiMap::Hookman(int) | ?Hookman@aiMap@@QAEPAVmcHookman@@H@Z
    0x534A30 | public: class aiCableCar * __thiscall aiMap::CableCar(int) | ?CableCar@aiMap@@QAEPAVaiCableCar@@H@Z
    0x534A70 | public: class aiSubway * __thiscall aiMap::Subway(int) | ?Subway@aiMap@@QAEPAVaiSubway@@H@Z
    0x534AB0 | public: class aiPedestrian * __thiscall aiMap::Pedestrian(int) | ?Pedestrian@aiMap@@QAEPAVaiPedestrian@@H@Z
    0x534AF0 | public: class aiVehiclePlayer * __thiscall aiMap::Player(int) | ?Player@aiMap@@QAEPAVaiVehiclePlayer@@H@Z
    0x534B30 | public: __thiscall aiMap::aiMap(void) | ??0aiMap@@QAE@XZ
    0x534BB0 | public: virtual __thiscall aiMap::~aiMap(void) | ??1aiMap@@UAE@XZ
    0x534C10 | public: void __thiscall aiMap::Clean(void) | ?Clean@aiMap@@QAEXXZ
    0x534F60 | public: void __thiscall aiMap::InitRouting(void) | ?InitRouting@aiMap@@QAEXXZ
    0x534FC0 | public: void __thiscall aiMap::Init(char *,char *,char *,struct dgStatePack const &,int,class vehCar * *,bool) | ?Init@aiMap@@QAEXPAD00ABUdgStatePack@@HPAPAVvehCar@@_N@Z
    0x535DF0 | public: void __thiscall aiMap::SaveBinary(char *,char *) | ?SaveBinary@aiMap@@QAEXPAD0@Z
    0x535EE0 | public: void __thiscall aiMap::ReadBinary(char *,char *) | ?ReadBinary@aiMap@@QAEXPAD0@Z
    0x5364A0 | private: void __thiscall aiMap::MapRoadToRooms(class aiPath *,enum aiMapCompTypes) | ?MapRoadToRooms@aiMap@@AAEXPAVaiPath@@W4aiMapCompTypes@@@Z
    0x536A30 | public: virtual void __thiscall aiMap::Reset(void) | ?Reset@aiMap@@UAEXXZ
    0x536E50 | public: virtual void __thiscall aiMap::Update(void) | ?Update@aiMap@@UAEXXZ
    0x537410 | private: void __thiscall aiMap::StopRoadTraffic(bool) | ?StopRoadTraffic@aiMap@@AAEX_N@Z
    0x5374E0 | public: virtual void __thiscall aiMap::UpdatePaused(void) | ?UpdatePaused@aiMap@@UAEXXZ
    0x5374F0 | public: virtual void __thiscall aiMap::Cull(void) | ?Cull@aiMap@@UAEXXZ
    0x537500 | public: void __thiscall aiMap::DrawNextVisibleAmbient(void) | ?DrawNextVisibleAmbient@aiMap@@QAEXXZ
    0x537510 | public: void __thiscall aiMap::DrawX(class Vector3 &) | ?DrawX@aiMap@@QAEXAAVVector3@@@Z
    0x537520 | public: void __thiscall aiMap::AllwaysGreen(void) | ?AllwaysGreen@aiMap@@QAEXXZ
    0x537560 | public: void __thiscall aiMap::AllwaysRed(void) | ?AllwaysRed@aiMap@@QAEXXZ
    0x5375A0 | public: void __thiscall aiMap::DrawAppRoads(void) | ?DrawAppRoads@aiMap@@QAEXXZ
    0x5375C0 | public: void __thiscall aiMap::DrawMap(void) | ?DrawMap@aiMap@@QAEXXZ
    0x5375E0 | public: void __thiscall aiMap::DrawPathIds(void) | ?DrawPathIds@aiMap@@QAEXXZ
    0x537600 | public: int __thiscall aiMap::MapComponentType(int,int *) | ?MapComponentType@aiMap@@QAEHHPAH@Z
    0x537680 | public: int __thiscall aiMap::MapComponent(class Vector3 const &,short *,short *,short) | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1F@Z
    0x5377B0 | public: int __thiscall aiMap::PositionToAIMapComp(class Vector3 const &,short *,short *,short *,short) | ?PositionToAIMapComp@aiMap@@QAEHABVVector3@@PAF11F@Z
    0x537AA0 | public: int __thiscall aiMap::MapComponent(class Vector3 const &,short *,short *,short,short) | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    0x537C70 | public: int __thiscall aiMap::CoreMapComponent(class Vector3 const &,short *,short *,short,short) | ?CoreMapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    0x537E00 | public: int __thiscall aiMap::DetermineRoadPosInfo(class Matrix34 const &,class aiRailSet *,short *,float *,short *,float *,int,int) | ?DetermineRoadPosInfo@aiMap@@QAEHABVMatrix34@@PAVaiRailSet@@PAFPAM23HH@Z
    0x537F30 | public: int __thiscall aiMap::FindAmbAppRoad(int) | ?FindAmbAppRoad@aiMap@@QAEHH@Z
    0x537F60 | public: int __thiscall aiMap::FindPedAppRoad(int) | ?FindPedAppRoad@aiMap@@QAEHH@Z
    0x537F90 | public: class aiPath * __thiscall aiMap::PredictIntersectionPath(int,class Matrix34 const &,int,bool *) | ?PredictIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@HPA_N@Z
    0x538280 | public: class aiPath * __thiscall aiMap::GetPathFromID(int) | ?GetPathFromID@aiMap@@QAEPAVaiPath@@H@Z
    0x5382C0 | public: class aiPath * __thiscall aiMap::PredictAmbIntersectionPath(int,class Matrix34 const &) | ?PredictAmbIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    0x538530 | public: class aiPath * __thiscall aiMap::PredictAmbFreewayIntersectionPath(int,class Matrix34 const &) | ?PredictAmbFreewayIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    0x538840 | public: void __thiscall aiMap::Dump(void) | ?Dump@aiMap@@QAEXXZ
    0x538960 | private: int __thiscall aiMap::NumCars(int,float,float) | ?NumCars@aiMap@@AAEHHMM@Z
    0x538990 | private: int __thiscall aiMap::FindRoad(class CArrayList *,int) | ?FindRoad@aiMap@@AAEHPAVCArrayList@@H@Z
    0x5389D0 | private: int __thiscall aiMap::FindInt(short *,int,int) | ?FindInt@aiMap@@AAEHPAFHH@Z
    0x538A10 | public: int __thiscall aiMap::ChooseNextRandomLink(class aiRailSet *) | ?ChooseNextRandomLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538BD0 | public: int __thiscall aiMap::ChooseNextLeftStraightLink(class aiRailSet *) | ?ChooseNextLeftStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538EC0 | public: int __thiscall aiMap::ChooseNextRightLink(class aiRailSet *) | ?ChooseNextRightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538FA0 | public: int __thiscall aiMap::ChooseNextRightStraightLink(class aiRailSet *) | ?ChooseNextRightStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5392B0 | public: int __thiscall aiMap::ChooseNextStraightLink(class aiRailSet *) | ?ChooseNextStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5396A0 | public: int __thiscall aiMap::ChooseStraightLinkAt4Way(class aiRailSet *) | ?ChooseStraightLinkAt4Way@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539750 | public: int __thiscall aiMap::ChooseNextLaneLink(class aiRailSet *) | ?ChooseNextLaneLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539870 | public: int __thiscall aiMap::ChooseNextFreewayLink(class aiRailSet *) | ?ChooseNextFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5399A0 | public: int __thiscall aiMap::ChooseNextRightStraightFreewayLink(class aiRailSet *) | ?ChooseNextRightStraightFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539A20 | private: void __thiscall aiMap::AdjustPedestrians(int,int,int) | ?AdjustPedestrians@aiMap@@AAEXHHH@Z
    0x539CF0 | public: void __thiscall aiMap::ClearPeds(class aiPath *) | ?ClearPeds@aiMap@@QAEXPAVaiPath@@@Z
    0x539D30 | public: void __thiscall aiMap::AddPedestrian(class aiPedestrian *) | ?AddPedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    0x539D70 | public: void __thiscall aiMap::RemovePedestrian(class aiPedestrian *) | ?RemovePedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    0x539DD0 | private: void __thiscall aiMap::AdjustAmbients(int,int,int) | ?AdjustAmbients@aiMap@@AAEXHHH@Z
    0x53A5B0 | public: void __thiscall aiMap::AddAmbient(class aiVehicleSpline *) | ?AddAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    0x53A600 | public: void __thiscall aiMap::RemoveAmbient(class aiVehicleSpline *) | ?RemoveAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    0x53A680 | public: class aiPath * __thiscall aiMap::DetRdSegBetweenInts(class aiIntersection *,class aiIntersection *,bool *) | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@PAVaiIntersection@@0PA_N@Z
    0x53A730 | public: class aiPath * __thiscall aiMap::DetRdSegBetweenInts(int,int) | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@HH@Z
    0x53A760 | public: int __thiscall aiMap::GoodRoadForCopStartPos(int) | ?GoodRoadForCopStartPos@aiMap@@QAEHH@Z
    0x53A7A0 | public: void __thiscall aiMap::CalcRoute(class Matrix34 const &,class Vector3 const &,class Vector3 const &,short *,short *,short,short,bool) | ?CalcRoute@aiMap@@QAEXABVMatrix34@@ABVVector3@@1PAF2FF_N@Z
    0x53B560 | public: void __thiscall aiMap::AddRoutingNode(int) | ?AddRoutingNode@aiMap@@QAEXH@Z
    0x53B5D0 | public: void __thiscall aiMap::RemoveRoutingNode(int) | ?RemoveRoutingNode@aiMap@@QAEXH@Z
    0x53B640 | public: int __thiscall aiMap::AddPlayer(class vehCar *) | ?AddPlayer@aiMap@@QAEHPAVvehCar@@@Z
    0x53B700 | public: int __thiscall aiMap::RemovePlayer(class vehCar *) | ?RemovePlayer@aiMap@@QAEHPAVvehCar@@@Z
    0x53B7B0 | public: void __thiscall aiMap::SetWaypoints(class Vector4 *,int,int) | ?SetWaypoints@aiMap@@QAEXPAVVector4@@HH@Z
    0x53B860 | public: void __thiscall aiMap::DrawFinalCheckPoint(void) | ?DrawFinalCheckPoint@aiMap@@QAEXXZ
    0x53B870 | public: void __thiscall aiMap::TestProbes(int) | ?TestProbes@aiMap@@QAEXH@Z
    public: virtual void __thiscall aiMap::Stats(void) | ?Stats@aiMap@@UAEXXZ
    public: virtual void __thiscall aiMap::AddWidgets(class bkBank &) | ?AddWidgets@aiMap@@UAEXAAVbkBank@@@Z
    0x53BC70 | public: virtual void * __thiscall aiMap::`scalar deleting destructor'(unsigned int) | ??_GaiMap@@UAEPAXI@Z
    public: virtual void * __thiscall aiMap::`vector deleting destructor'(unsigned int) | ??_EaiMap@@UAEPAXI@Z
    0x53BCA0 | public: void * __thiscall aiVehicleAmbient::`vector deleting destructor'(unsigned int) | ??_EaiVehicleAmbient@@QAEPAXI@Z
    0x53BD00 | public: void * __thiscall aiPoliceOfficer::`vector deleting destructor'(unsigned int) | ??_EaiPoliceOfficer@@QAEPAXI@Z
    0x53BD60 | public: void * __thiscall aiRouteRacer::`vector deleting destructor'(unsigned int) | ??_EaiRouteRacer@@QAEPAXI@Z
    0x53BDC0 | public: void * __thiscall aiPedestrian::`vector deleting destructor'(unsigned int) | ??_EaiPedestrian@@QAEPAXI@Z
    0x53BE20 | public: void * __thiscall mcHookman::`vector deleting destructor'(unsigned int) | ??_EmcHookman@@QAEPAXI@Z
    0x53BE80 | public: void * __thiscall CArrayList::`vector deleting destructor'(unsigned int) | ??_ECArrayList@@QAEPAXI@Z
    0x53BEE0 | public: void * __thiscall aiSubway::`vector deleting destructor'(unsigned int) | ??_EaiSubway@@QAEPAXI@Z
    0x53BF40 | public: void * __thiscall aiCableCar::`vector deleting destructor'(unsigned int) | ??_EaiCableCar@@QAEPAXI@Z
    0x53BFA0 | public: virtual void * __thiscall aiCTFRacer::`vector deleting destructor'(unsigned int) | ??_EaiCTFRacer@@UAEPAXI@Z
    public: class Vector3 __thiscall Vector3::operator-(void) const | ??GVector3@@QBE?AV0@XZ
    public: class Vector3 * __thiscall aiPath::CenterVertice(int) | ?CenterVertice@aiPath@@QAEPAVVector3@@H@Z
    0x53C000 | public: class aiPath * __thiscall aiIntersection::Road(int) | ?Road@aiIntersection@@QAEPAVaiPath@@H@Z
    0x53C030 | public: __thiscall CArrayList::CArrayList(void) | ??0CArrayList@@QAE@XZ
    0x5B5460 | const aiMap::`vftable' | ??_7aiMap@@6B@
    float _fSubwayUpdate | ?_fSubwayUpdate@@3MA
    0x6B4BEC | float _fCableCarUpdate | ?_fCableCarUpdate@@3MA
    float _fCTFOppUpdate | ?_fCTFOppUpdate@@3MA
    float _fPedUpdate | ?_fPedUpdate@@3MA
    float _fAmbientUpdate | ?_fAmbientUpdate@@3MA
    0x6AFFE0 | float _fCopUpdate | ?_fCopUpdate@@3MA
    int _nPedQty | ?_nPedQty@@3HA
    0x6B2E10 | class aiMap AIMAP | ?AIMAP@@3VaiMap@@A
    float _fOppUpdate | ?_fOppUpdate@@3MA
    int _nAmbientQty | ?_nAmbientQty@@3HA
    float _fTotUpdate | ?_fTotUpdate@@3MA
*/

// 0x6B4BEC | ?_fCableCarUpdate@@3MA
inline extern_var(0x6B4BEC, float, _fCableCarUpdate);

// 0x6AFFE0 | ?_fCopUpdate@@3MA
inline extern_var(0x6AFFE0, float, _fCopUpdate);

// 0x6B2E10 | ?AIMAP@@3VaiMap@@A
inline extern_var(0x6B2E10, class aiMap, AIMAP);

class aiMap : asNode
{
public:
    // aiMap::`vftable' @ 0x5B5460

    // 0x534850 | ?Path@aiMap@@QAEPAVaiPath@@H@Z
    class aiPath* Path(i32 arg1)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32>>(0x534850, this, arg1);
    }

    // 0x534880 | ?Intersection@aiMap@@QAEPAVaiIntersection@@H@Z
    class aiIntersection* Intersection(i32 arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, i32>>(0x534880, this, arg1);
    }

    // 0x5348B0 | ?Vehicle@aiMap@@QAEPAVaiVehicleAmbient@@H@Z
    class aiVehicleAmbient* Vehicle(i32 arg1)
    {
        return stub<member_func_t<class aiVehicleAmbient*, aiMap, i32>>(0x5348B0, this, arg1);
    }

    // 0x5348F0 | ?Police@aiMap@@QAEPAVaiPoliceOfficer@@H@Z
    class aiPoliceOfficer* Police(i32 arg1)
    {
        return stub<member_func_t<class aiPoliceOfficer*, aiMap, i32>>(0x5348F0, this, arg1);
    }

    // 0x534940 | ?Opponent@aiMap@@QAEPAVaiRouteRacer@@H@Z
    class aiRouteRacer* Opponent(i32 arg1)
    {
        return stub<member_func_t<class aiRouteRacer*, aiMap, i32>>(0x534940, this, arg1);
    }

    // 0x534990 | ?CTFOpponent@aiMap@@QAEPAVaiCTFRacer@@H@Z
    class aiCTFRacer* CTFOpponent(i32 arg1)
    {
        return stub<member_func_t<class aiCTFRacer*, aiMap, i32>>(0x534990, this, arg1);
    }

    // 0x5349E0 | ?Hookman@aiMap@@QAEPAVmcHookman@@H@Z
    class mcHookman* Hookman(i32 arg1)
    {
        return stub<member_func_t<class mcHookman*, aiMap, i32>>(0x5349E0, this, arg1);
    }

    // 0x534A30 | ?CableCar@aiMap@@QAEPAVaiCableCar@@H@Z
    class aiCableCar* CableCar(i32 arg1)
    {
        return stub<member_func_t<class aiCableCar*, aiMap, i32>>(0x534A30, this, arg1);
    }

    // 0x534A70 | ?Subway@aiMap@@QAEPAVaiSubway@@H@Z
    class aiSubway* Subway(i32 arg1)
    {
        return stub<member_func_t<class aiSubway*, aiMap, i32>>(0x534A70, this, arg1);
    }

    // 0x534AB0 | ?Pedestrian@aiMap@@QAEPAVaiPedestrian@@H@Z
    class aiPedestrian* Pedestrian(i32 arg1)
    {
        return stub<member_func_t<class aiPedestrian*, aiMap, i32>>(0x534AB0, this, arg1);
    }

    // 0x534AF0 | ?Player@aiMap@@QAEPAVaiVehiclePlayer@@H@Z
    class aiVehiclePlayer* Player(i32 arg1)
    {
        return stub<member_func_t<class aiVehiclePlayer*, aiMap, i32>>(0x534AF0, this, arg1);
    }

    // 0x534B30 | ??0aiMap@@QAE@XZ
    aiMap()
    {
        stub<member_func_t<void, aiMap>>(0x534B30, this);
    }

    // 0x534C10 | ?Clean@aiMap@@QAEXXZ
    void Clean()
    {
        return stub<member_func_t<void, aiMap>>(0x534C10, this);
    }

    // 0x534F60 | ?InitRouting@aiMap@@QAEXXZ
    void InitRouting()
    {
        return stub<member_func_t<void, aiMap>>(0x534F60, this);
    }

    // 0x534FC0 | ?Init@aiMap@@QAEXPAD00ABUdgStatePack@@HPAPAVvehCar@@_N@Z
    void Init(
        char* arg1, char* arg2, char* arg3, struct dgStatePack const& arg4, i32 arg5, class vehCar** arg6, bool arg7)
    {
        return stub<
            member_func_t<void, aiMap, char*, char*, char*, struct dgStatePack const&, i32, class vehCar**, bool>>(
            0x534FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x535DF0 | ?SaveBinary@aiMap@@QAEXPAD0@Z
    void SaveBinary(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, aiMap, char*, char*>>(0x535DF0, this, arg1, arg2);
    }

    // 0x535EE0 | ?ReadBinary@aiMap@@QAEXPAD0@Z
    void ReadBinary(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, aiMap, char*, char*>>(0x535EE0, this, arg1, arg2);
    }

    // 0x5364A0 | ?MapRoadToRooms@aiMap@@AAEXPAVaiPath@@W4aiMapCompTypes@@@Z
    void MapRoadToRooms(class aiPath* arg1, enum aiMapCompTypes arg2)
    {
        return stub<member_func_t<void, aiMap, class aiPath*, enum aiMapCompTypes>>(0x5364A0, this, arg1, arg2);
    }

    // 0x537410 | ?StopRoadTraffic@aiMap@@AAEX_N@Z
    void StopRoadTraffic(bool arg1)
    {
        return stub<member_func_t<void, aiMap, bool>>(0x537410, this, arg1);
    }

    // 0x537500 | ?DrawNextVisibleAmbient@aiMap@@QAEXXZ
    void DrawNextVisibleAmbient()
    {
        return stub<member_func_t<void, aiMap>>(0x537500, this);
    }

    // 0x537510 | ?DrawX@aiMap@@QAEXAAVVector3@@@Z
    void DrawX(class Vector3& arg1)
    {
        return stub<member_func_t<void, aiMap, class Vector3&>>(0x537510, this, arg1);
    }

    // 0x537520 | ?AllwaysGreen@aiMap@@QAEXXZ
    void AllwaysGreen()
    {
        return stub<member_func_t<void, aiMap>>(0x537520, this);
    }

    // 0x537560 | ?AllwaysRed@aiMap@@QAEXXZ
    void AllwaysRed()
    {
        return stub<member_func_t<void, aiMap>>(0x537560, this);
    }

    // 0x5375A0 | ?DrawAppRoads@aiMap@@QAEXXZ
    void DrawAppRoads()
    {
        return stub<member_func_t<void, aiMap>>(0x5375A0, this);
    }

    // 0x5375C0 | ?DrawMap@aiMap@@QAEXXZ
    void DrawMap()
    {
        return stub<member_func_t<void, aiMap>>(0x5375C0, this);
    }

    // 0x5375E0 | ?DrawPathIds@aiMap@@QAEXXZ
    void DrawPathIds()
    {
        return stub<member_func_t<void, aiMap>>(0x5375E0, this);
    }

    // 0x537600 | ?MapComponentType@aiMap@@QAEHHPAH@Z
    i32 MapComponentType(i32 arg1, i32* arg2)
    {
        return stub<member_func_t<i32, aiMap, i32, i32*>>(0x537600, this, arg1, arg2);
    }

    // 0x537680 | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1F@Z
    i32 MapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4)
    {
        return stub<member_func_t<i32, aiMap, class Vector3 const&, i16*, i16*, i16>>(
            0x537680, this, arg1, arg2, arg3, arg4);
    }

    // 0x5377B0 | ?PositionToAIMapComp@aiMap@@QAEHABVVector3@@PAF11F@Z
    i32 PositionToAIMapComp(class Vector3 const& arg1, i16* arg2, i16* arg3, i16* arg4, i16 arg5)
    {
        return stub<member_func_t<i32, aiMap, class Vector3 const&, i16*, i16*, i16*, i16>>(
            0x5377B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537AA0 | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    i32 MapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4, i16 arg5)
    {
        return stub<member_func_t<i32, aiMap, class Vector3 const&, i16*, i16*, i16, i16>>(
            0x537AA0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537C70 | ?CoreMapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    i32 CoreMapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4, i16 arg5)
    {
        return stub<member_func_t<i32, aiMap, class Vector3 const&, i16*, i16*, i16, i16>>(
            0x537C70, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537E00 | ?DetermineRoadPosInfo@aiMap@@QAEHABVMatrix34@@PAVaiRailSet@@PAFPAM23HH@Z
    i32 DetermineRoadPosInfo(class Matrix34 const& arg1, class aiRailSet* arg2, i16* arg3, f32* arg4, i16* arg5,
        f32* arg6, i32 arg7, i32 arg8)
    {
        return stub<
            member_func_t<i32, aiMap, class Matrix34 const&, class aiRailSet*, i16*, f32*, i16*, f32*, i32, i32>>(
            0x537E00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x537F30 | ?FindAmbAppRoad@aiMap@@QAEHH@Z
    i32 FindAmbAppRoad(i32 arg1)
    {
        return stub<member_func_t<i32, aiMap, i32>>(0x537F30, this, arg1);
    }

    // 0x537F60 | ?FindPedAppRoad@aiMap@@QAEHH@Z
    i32 FindPedAppRoad(i32 arg1)
    {
        return stub<member_func_t<i32, aiMap, i32>>(0x537F60, this, arg1);
    }

    // 0x537F90 | ?PredictIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@HPA_N@Z
    class aiPath* PredictIntersectionPath(i32 arg1, class Matrix34 const& arg2, i32 arg3, bool* arg4)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32, class Matrix34 const&, i32, bool*>>(
            0x537F90, this, arg1, arg2, arg3, arg4);
    }

    // 0x538280 | ?GetPathFromID@aiMap@@QAEPAVaiPath@@H@Z
    class aiPath* GetPathFromID(i32 arg1)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32>>(0x538280, this, arg1);
    }

    // 0x5382C0 | ?PredictAmbIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    class aiPath* PredictAmbIntersectionPath(i32 arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32, class Matrix34 const&>>(0x5382C0, this, arg1, arg2);
    }

    // 0x538530 | ?PredictAmbFreewayIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    class aiPath* PredictAmbFreewayIntersectionPath(i32 arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32, class Matrix34 const&>>(0x538530, this, arg1, arg2);
    }

    // 0x538840 | ?Dump@aiMap@@QAEXXZ
    void Dump()
    {
        return stub<member_func_t<void, aiMap>>(0x538840, this);
    }

    // 0x538960 | ?NumCars@aiMap@@AAEHHMM@Z
    i32 NumCars(i32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<i32, aiMap, i32, f32, f32>>(0x538960, this, arg1, arg2, arg3);
    }

    // 0x538990 | ?FindRoad@aiMap@@AAEHPAVCArrayList@@H@Z
    i32 FindRoad(class CArrayList* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, aiMap, class CArrayList*, i32>>(0x538990, this, arg1, arg2);
    }

    // 0x5389D0 | ?FindInt@aiMap@@AAEHPAFHH@Z
    i32 FindInt(i16* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<i32, aiMap, i16*, i32, i32>>(0x5389D0, this, arg1, arg2, arg3);
    }

    // 0x538A10 | ?ChooseNextRandomLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextRandomLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x538A10, this, arg1);
    }

    // 0x538BD0 | ?ChooseNextLeftStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextLeftStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x538BD0, this, arg1);
    }

    // 0x538EC0 | ?ChooseNextRightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextRightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x538EC0, this, arg1);
    }

    // 0x538FA0 | ?ChooseNextRightStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextRightStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x538FA0, this, arg1);
    }

    // 0x5392B0 | ?ChooseNextStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x5392B0, this, arg1);
    }

    // 0x5396A0 | ?ChooseStraightLinkAt4Way@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseStraightLinkAt4Way(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x5396A0, this, arg1);
    }

    // 0x539750 | ?ChooseNextLaneLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextLaneLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x539750, this, arg1);
    }

    // 0x539870 | ?ChooseNextFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x539870, this, arg1);
    }

    // 0x5399A0 | ?ChooseNextRightStraightFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    i32 ChooseNextRightStraightFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<i32, aiMap, class aiRailSet*>>(0x5399A0, this, arg1);
    }

    // 0x539A20 | ?AdjustPedestrians@aiMap@@AAEXHHH@Z
    void AdjustPedestrians(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, aiMap, i32, i32, i32>>(0x539A20, this, arg1, arg2, arg3);
    }

    // 0x539CF0 | ?ClearPeds@aiMap@@QAEXPAVaiPath@@@Z
    void ClearPeds(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPath*>>(0x539CF0, this, arg1);
    }

    // 0x539D30 | ?AddPedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    void AddPedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x539D30, this, arg1);
    }

    // 0x539D70 | ?RemovePedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    void RemovePedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x539D70, this, arg1);
    }

    // 0x539DD0 | ?AdjustAmbients@aiMap@@AAEXHHH@Z
    void AdjustAmbients(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, aiMap, i32, i32, i32>>(0x539DD0, this, arg1, arg2, arg3);
    }

    // 0x53A5B0 | ?AddAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    void AddAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x53A5B0, this, arg1);
    }

    // 0x53A600 | ?RemoveAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    void RemoveAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x53A600, this, arg1);
    }

    // 0x53A680 | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@PAVaiIntersection@@0PA_N@Z
    class aiPath* DetRdSegBetweenInts(class aiIntersection* arg1, class aiIntersection* arg2, bool* arg3)
    {
        return stub<member_func_t<class aiPath*, aiMap, class aiIntersection*, class aiIntersection*, bool*>>(
            0x53A680, this, arg1, arg2, arg3);
    }

    // 0x53A730 | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@HH@Z
    class aiPath* DetRdSegBetweenInts(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, i32, i32>>(0x53A730, this, arg1, arg2);
    }

    // 0x53A760 | ?GoodRoadForCopStartPos@aiMap@@QAEHH@Z
    i32 GoodRoadForCopStartPos(i32 arg1)
    {
        return stub<member_func_t<i32, aiMap, i32>>(0x53A760, this, arg1);
    }

    // 0x53A7A0 | ?CalcRoute@aiMap@@QAEXABVMatrix34@@ABVVector3@@1PAF2FF_N@Z
    void CalcRoute(class Matrix34 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, i16* arg4,
        i16* arg5, i16 arg6, i16 arg7, bool arg8)
    {
        return stub<member_func_t<void, aiMap, class Matrix34 const&, class Vector3 const&, class Vector3 const&, i16*,
            i16*, i16, i16, bool>>(0x53A7A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x53B560 | ?AddRoutingNode@aiMap@@QAEXH@Z
    void AddRoutingNode(i32 arg1)
    {
        return stub<member_func_t<void, aiMap, i32>>(0x53B560, this, arg1);
    }

    // 0x53B5D0 | ?RemoveRoutingNode@aiMap@@QAEXH@Z
    void RemoveRoutingNode(i32 arg1)
    {
        return stub<member_func_t<void, aiMap, i32>>(0x53B5D0, this, arg1);
    }

    // 0x53B640 | ?AddPlayer@aiMap@@QAEHPAVvehCar@@@Z
    i32 AddPlayer(class vehCar* arg1)
    {
        return stub<member_func_t<i32, aiMap, class vehCar*>>(0x53B640, this, arg1);
    }

    // 0x53B700 | ?RemovePlayer@aiMap@@QAEHPAVvehCar@@@Z
    i32 RemovePlayer(class vehCar* arg1)
    {
        return stub<member_func_t<i32, aiMap, class vehCar*>>(0x53B700, this, arg1);
    }

    // 0x53B7B0 | ?SetWaypoints@aiMap@@QAEXPAVVector4@@HH@Z
    void SetWaypoints(class Vector4* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, aiMap, class Vector4*, i32, i32>>(0x53B7B0, this, arg1, arg2, arg3);
    }

    // 0x53B860 | ?DrawFinalCheckPoint@aiMap@@QAEXXZ
    void DrawFinalCheckPoint()
    {
        return stub<member_func_t<void, aiMap>>(0x53B860, this);
    }

    // 0x53B870 | ?TestProbes@aiMap@@QAEXH@Z
    void TestProbes(i32 arg1)
    {
        return stub<member_func_t<void, aiMap, i32>>(0x53B870, this, arg1);
    }

    // 0x534BB0 | ??1aiMap@@UAE@XZ
    ~aiMap() override
    {
        stub<member_func_t<void, aiMap>>(0x534BB0, this);
    }

    // 0x5374F0 | ?Cull@aiMap@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, aiMap>>(0x5374F0, this);
    }

    // 0x536E50 | ?Update@aiMap@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, aiMap>>(0x536E50, this);
    }

    // 0x536A30 | ?Reset@aiMap@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, aiMap>>(0x536A30, this);
    }

    // 0x5374E0 | ?UpdatePaused@aiMap@@UAEXXZ
    void UpdatePaused() override
    {
        return stub<member_func_t<void, aiMap>>(0x5374E0, this);
    }
};
