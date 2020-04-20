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
    mmgame:multicr

    0x4236E0 | public: __thiscall mmMultiCR::mmMultiCR(void) | ??0mmMultiCR@@QAE@XZ
    0x4237C0 | public: virtual __thiscall mmMultiCR::~mmMultiCR(void) | ??1mmMultiCR@@UAE@XZ
    0x423870 | public: virtual int __thiscall mmMultiCR::Init(void) | ?Init@mmMultiCR@@UAEHXZ
    0x4239F0 | public: virtual void __thiscall mmMultiCR::InitMyPlayer(void) | ?InitMyPlayer@mmMultiCR@@UAEXXZ
    0x423B00 | public: virtual void __thiscall mmMultiCR::InitHUD(void) | ?InitHUD@mmMultiCR@@UAEXXZ
    0x423C80 | public: virtual void __thiscall mmMultiCR::InitGameObjects(void) | ?InitGameObjects@mmMultiCR@@UAEXXZ
    0x424090 | public: virtual void __thiscall mmMultiCR::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiCR@@UAEXXZ
    0x424440 | public: virtual void __thiscall mmMultiCR::Reset(void) | ?Reset@mmMultiCR@@UAEXXZ
    0x424640 | public: int __thiscall mmMultiCR::LoadSets(char *) | ?LoadSets@mmMultiCR@@QAEHPAD@Z
    0x424880 | public: int __thiscall mmMultiCR::LoadCSV(char *) | ?LoadCSV@mmMultiCR@@QAEHPAD@Z
    0x424900 | public: void __thiscall mmMultiCR::ImpactCallback(void *,void *) | ?ImpactCallback@mmMultiCR@@QAEXPAX0@Z
    0x424A00 | public: void __thiscall mmMultiCR::FondleCarMass(class vehCar *,float) | ?FondleCarMass@mmMultiCR@@QAEXPAVvehCar@@M@Z
    0x424AD0 | private: void __thiscall mmMultiCR::GetNewSet(void) | ?GetNewSet@mmMultiCR@@AAEXXZ
    0x424BF0 | private: void __thiscall mmMultiCR::GetRandomPoints(class Vector3 &,class Vector3 &,class Vector3 &) | ?GetRandomPoints@mmMultiCR@@AAEXAAVVector3@@00@Z
    0x424E20 | private: int __thiscall mmMultiCR::GetRandomIndex(void) | ?GetRandomIndex@mmMultiCR@@AAEHXZ
    0x424E40 | public: void __thiscall mmMultiCR::ResetPositions(int) | ?ResetPositions@mmMultiCR@@QAEXH@Z
    0x424F70 | private: int __thiscall mmMultiCR::SelectTeams(void) | ?SelectTeams@mmMultiCR@@AAEHXZ
    0x424F80 | public: virtual void __thiscall mmMultiCR::UpdateGameInput(int) | ?UpdateGameInput@mmMultiCR@@UAEXH@Z
    0x424F90 | public: virtual void __thiscall mmMultiCR::UpdateGame(void) | ?UpdateGame@mmMultiCR@@UAEXXZ
    0x425390 | public: virtual void __thiscall mmMultiCR::SwitchState(int) | ?SwitchState@mmMultiCR@@UAEXH@Z
    0x4253A0 | public: virtual void __thiscall mmMultiCR::HitWaterHandler(void) | ?HitWaterHandler@mmMultiCR@@UAEXXZ
    0x425460 | public: virtual void __thiscall mmMultiCR::DropThruCityHandler(void) | ?DropThruCityHandler@mmMultiCR@@UAEXXZ
    0x425520 | private: void __thiscall mmMultiCR::StealGold(class vehCar *) | ?StealGold@mmMultiCR@@AAEXPAVvehCar@@@Z
    0x425560 | private: void __thiscall mmMultiCR::OppStealGold(int) | ?OppStealGold@mmMultiCR@@AAEXH@Z
    0x4255D0 | private: void __thiscall mmMultiCR::FindGround(class Vector3,class Vector3 &) | ?FindGround@mmMultiCR@@AAEXVVector3@@AAV2@@Z
    0x4256A0 | private: void __thiscall mmMultiCR::DropGold(class Vector3,int,int) | ?DropGold@mmMultiCR@@AAEXVVector3@@HH@Z
    0x425830 | private: void __thiscall mmMultiCR::UpdateGold(void) | ?UpdateGold@mmMultiCR@@AAEXXZ
    0x425A50 | private: void __thiscall mmMultiCR::UpdateHideout(void) | ?UpdateHideout@mmMultiCR@@AAEXXZ
    0x425BA0 | private: void __thiscall mmMultiCR::UpdateBank(void) | ?UpdateBank@mmMultiCR@@AAEXXZ
    0x425CF0 | private: void __thiscall mmMultiCR::UpdateLimit(void) | ?UpdateLimit@mmMultiCR@@AAEXXZ
    0x425EE0 | private: void __thiscall mmMultiCR::FillResults(void) | ?FillResults@mmMultiCR@@AAEXXZ
    0x4261B0 | public: virtual void __thiscall mmMultiCR::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiCR@@UAEXPAUNETSYS_MSG@@@Z
    0x426340 | public: virtual void __thiscall mmMultiCR::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiCR@@UAEXPAUNET_RCXHEAD@@@Z
    0x426D10 | private: void __thiscall mmMultiCR::UpdateTimeWarning(void) | ?UpdateTimeWarning@mmMultiCR@@AAEXXZ
    0x426E80 | private: void __thiscall mmMultiCR::DisplayTimeWarning(int) | ?DisplayTimeWarning@mmMultiCR@@AAEXH@Z
    0x426F10 | private: void __thiscall mmMultiCR::SendGameState(unsigned long) | ?SendGameState@mmMultiCR@@AAEXK@Z
    0x426FF0 | private: void __thiscall mmMultiCR::SendSetup(unsigned long) | ?SendSetup@mmMultiCR@@AAEXK@Z
    0x427000 | private: void __thiscall mmMultiCR::SendGoldDrop(class Vector3) | ?SendGoldDrop@mmMultiCR@@AAEXVVector3@@@Z
    0x427040 | private: void __thiscall mmMultiCR::SendGoldAck(unsigned long) | ?SendGoldAck@mmMultiCR@@AAEXK@Z
    0x427080 | private: void __thiscall mmMultiCR::SendGoldDeliver(void) | ?SendGoldDeliver@mmMultiCR@@AAEXXZ
    0x4270A0 | private: void __thiscall mmMultiCR::SendChangeSet(int) | ?SendChangeSet@mmMultiCR@@AAEXH@Z
    0x427120 | private: void __thiscall mmMultiCR::SendLimitReached(int) | ?SendLimitReached@mmMultiCR@@AAEXH@Z
    0x427150 | private: void __thiscall mmMultiCR::SendTimeWarning(int) | ?SendTimeWarning@mmMultiCR@@AAEXH@Z
    0x427180 | private: void __thiscall mmMultiCR::UpdateHUD(void) | ?UpdateHUD@mmMultiCR@@AAEXXZ
    0x4272A0 | private: void __thiscall mmMultiCR::Score(int) | ?Score@mmMultiCR@@AAEXH@Z
    0x4272D0 | public: virtual void __thiscall mmMultiCR::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmMultiCR@@UAEXH@Z
    0x4272E0 | private: void __thiscall mmMultiCR::CycleInterest(int) | ?CycleInterest@mmMultiCR@@AAEXH@Z
    0x427340 | public: void __thiscall mmMultiCR::SendLobbyResults(unsigned long,int,int) | ?SendLobbyResults@mmMultiCR@@QAEXKHH@Z
    0x4274E0 | public: virtual void * __thiscall mmMultiCR::`scalar deleting destructor'(unsigned int) | ??_GmmMultiCR@@UAEPAXI@Z
    public: virtual void * __thiscall mmMultiCR::`vector deleting destructor'(unsigned int) | ??_EmmMultiCR@@UAEPAXI@Z
    0x427510 | public: virtual class mmWaypoints * __thiscall mmMultiCR::GetWaypoints(void) | ?GetWaypoints@mmMultiCR@@UAEPAVmmWaypoints@@XZ
    0x427520 | public: __thiscall netScoreInfo::~netScoreInfo(void) | ??1netScoreInfo@@QAE@XZ
    0x5B0980 | const mmMultiCR::`vftable' | ??_7mmMultiCR@@6B@
    int TwoPlayers | ?TwoPlayers@@3HA
    class Vector3 DefaultVec | ?DefaultVec@@3VVector3@@A
*/

struct mmMultiCR : mmGameMulti
{
public:
    // mmMultiCR::`vftable' @ 0x5B0980

    // 0x4236E0 | ??0mmMultiCR@@QAE@XZ
    inline mmMultiCR()
    {
        stub<member_func_t<void, mmMultiCR>>(0x4236E0, this);
    }

    // 0x424640 | ?LoadSets@mmMultiCR@@QAEHPAD@Z
    inline int32_t LoadSets(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMultiCR, char*>>(0x424640, this, arg1);
    }

    // 0x424880 | ?LoadCSV@mmMultiCR@@QAEHPAD@Z
    inline int32_t LoadCSV(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMultiCR, char*>>(0x424880, this, arg1);
    }

    // 0x424900 | ?ImpactCallback@mmMultiCR@@QAEXPAX0@Z
    inline void ImpactCallback(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmMultiCR, void*, void*>>(0x424900, this, arg1, arg2);
    }

    // 0x424A00 | ?FondleCarMass@mmMultiCR@@QAEXPAVvehCar@@M@Z
    inline void FondleCarMass(class vehCar* arg1, float arg2)
    {
        return stub<member_func_t<void, mmMultiCR, class vehCar*, float>>(0x424A00, this, arg1, arg2);
    }

    // 0x424AD0 | ?GetNewSet@mmMultiCR@@AAEXXZ
    inline void GetNewSet()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x424AD0, this);
    }

    // 0x424BF0 | ?GetRandomPoints@mmMultiCR@@AAEXAAVVector3@@00@Z
    inline void GetRandomPoints(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3&, class Vector3&, class Vector3&>>(
            0x424BF0, this, arg1, arg2, arg3);
    }

    // 0x424E20 | ?GetRandomIndex@mmMultiCR@@AAEHXZ
    inline int32_t GetRandomIndex()
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x424E20, this);
    }

    // 0x424E40 | ?ResetPositions@mmMultiCR@@QAEXH@Z
    inline void ResetPositions(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x424E40, this, arg1);
    }

    // 0x424F70 | ?SelectTeams@mmMultiCR@@AAEHXZ
    inline int32_t SelectTeams()
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x424F70, this);
    }

    // 0x425520 | ?StealGold@mmMultiCR@@AAEXPAVvehCar@@@Z
    inline void StealGold(class vehCar* arg1)
    {
        return stub<member_func_t<void, mmMultiCR, class vehCar*>>(0x425520, this, arg1);
    }

    // 0x425560 | ?OppStealGold@mmMultiCR@@AAEXH@Z
    inline void OppStealGold(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x425560, this, arg1);
    }

    // 0x4255D0 | ?FindGround@mmMultiCR@@AAEXVVector3@@AAV2@@Z
    inline void FindGround(class Vector3 arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3, class Vector3&>>(0x4255D0, this, arg1, arg2);
    }

    // 0x4256A0 | ?DropGold@mmMultiCR@@AAEXVVector3@@HH@Z
    inline void DropGold(class Vector3 arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3, int32_t, int32_t>>(0x4256A0, this, arg1, arg2, arg3);
    }

    // 0x425830 | ?UpdateGold@mmMultiCR@@AAEXXZ
    inline void UpdateGold()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425830, this);
    }

    // 0x425A50 | ?UpdateHideout@mmMultiCR@@AAEXXZ
    inline void UpdateHideout()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425A50, this);
    }

    // 0x425BA0 | ?UpdateBank@mmMultiCR@@AAEXXZ
    inline void UpdateBank()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425BA0, this);
    }

    // 0x425CF0 | ?UpdateLimit@mmMultiCR@@AAEXXZ
    inline void UpdateLimit()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425CF0, this);
    }

    // 0x425EE0 | ?FillResults@mmMultiCR@@AAEXXZ
    inline void FillResults()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425EE0, this);
    }

    // 0x426D10 | ?UpdateTimeWarning@mmMultiCR@@AAEXXZ
    inline void UpdateTimeWarning()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x426D10, this);
    }

    // 0x426E80 | ?DisplayTimeWarning@mmMultiCR@@AAEXH@Z
    inline void DisplayTimeWarning(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x426E80, this, arg1);
    }

    // 0x426F10 | ?SendGameState@mmMultiCR@@AAEXK@Z
    inline void SendGameState(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x426F10, this, arg1);
    }

    // 0x426FF0 | ?SendSetup@mmMultiCR@@AAEXK@Z
    inline void SendSetup(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x426FF0, this, arg1);
    }

    // 0x427000 | ?SendGoldDrop@mmMultiCR@@AAEXVVector3@@@Z
    inline void SendGoldDrop(class Vector3 arg1)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3>>(0x427000, this, arg1);
    }

    // 0x427040 | ?SendGoldAck@mmMultiCR@@AAEXK@Z
    inline void SendGoldAck(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x427040, this, arg1);
    }

    // 0x427080 | ?SendGoldDeliver@mmMultiCR@@AAEXXZ
    inline void SendGoldDeliver()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x427080, this);
    }

    // 0x4270A0 | ?SendChangeSet@mmMultiCR@@AAEXH@Z
    inline void SendChangeSet(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4270A0, this, arg1);
    }

    // 0x427120 | ?SendLimitReached@mmMultiCR@@AAEXH@Z
    inline void SendLimitReached(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x427120, this, arg1);
    }

    // 0x427150 | ?SendTimeWarning@mmMultiCR@@AAEXH@Z
    inline void SendTimeWarning(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x427150, this, arg1);
    }

    // 0x427180 | ?UpdateHUD@mmMultiCR@@AAEXXZ
    inline void UpdateHUD()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x427180, this);
    }

    // 0x4272A0 | ?Score@mmMultiCR@@AAEXH@Z
    inline void Score(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4272A0, this, arg1);
    }

    // 0x4272E0 | ?CycleInterest@mmMultiCR@@AAEXH@Z
    inline void CycleInterest(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4272E0, this, arg1);
    }

    // 0x427340 | ?SendLobbyResults@mmMultiCR@@QAEXKHH@Z
    inline void SendLobbyResults(uint32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t, int32_t, int32_t>>(0x427340, this, arg1, arg2, arg3);
    }

    // 0x4237C0 | ??1mmMultiCR@@UAE@XZ
    inline ~mmMultiCR() override
    {
        stub<member_func_t<void, mmMultiCR>>(0x4237C0, this);
    }

    // 0x424440 | ?Reset@mmMultiCR@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x424440, this);
    }

    // 0x423870 | ?Init@mmMultiCR@@UAEHXZ
    inline int32_t Init() override
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x423870, this);
    }

    // 0x4239F0 | ?InitMyPlayer@mmMultiCR@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x4239F0, this);
    }

    // 0x423C80 | ?InitGameObjects@mmMultiCR@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x423C80, this);
    }

    // 0x423B00 | ?InitHUD@mmMultiCR@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x423B00, this);
    }

    // 0x424F80 | ?UpdateGameInput@mmMultiCR@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x424F80, this, arg1);
    }

    // 0x4272D0 | ?UpdateDebugKeyInput@mmMultiCR@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4272D0, this, arg1);
    }

    // 0x424F90 | ?UpdateGame@mmMultiCR@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x424F90, this);
    }

    // 0x4253A0 | ?HitWaterHandler@mmMultiCR@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x4253A0, this);
    }

    // 0x425460 | ?DropThruCityHandler@mmMultiCR@@UAEXXZ
    inline void DropThruCityHandler() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x425460, this);
    }

    // 0x425390 | ?SwitchState@mmMultiCR@@UAEXH@Z
    inline void SwitchState(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x425390, this, arg1);
    }

    // 0x427510 | ?GetWaypoints@mmMultiCR@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiCR>>(0x427510, this);
    }

    // 0x424090 | ?InitNetworkPlayers@mmMultiCR@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x424090, this);
    }

    // 0x4261B0 | ?SystemMessage@mmMultiCR@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, struct NETSYS_MSG*>>(0x4261B0, this, arg1);
    }

    // 0x426340 | ?GameMessage@mmMultiCR@@UAEXPAUNET_RCXHEAD@@@Z
    inline void GameMessage(struct NET_RCXHEAD* arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, struct NET_RCXHEAD*>>(0x426340, this, arg1);
    }
};

struct netScoreInfo
{
public:
    // 0x427520 | ??1netScoreInfo@@QAE@XZ
    inline ~netScoreInfo()
    {
        stub<member_func_t<void, netScoreInfo>>(0x427520, this);
    }

    // 0x572990 | ??0netScoreInfo@@QAE@XZ
    inline netScoreInfo()
    {
        stub<member_func_t<void, netScoreInfo>>(0x572990, this);
    }
};
