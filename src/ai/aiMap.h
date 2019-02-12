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

// #include "hooking.h"
