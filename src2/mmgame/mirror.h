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
    mmgame:mirror

    0x42B750 | public: __thiscall mmMirror::mmMirror(void) | ??0mmMirror@@QAE@XZ
    0x42B7A0 | public: virtual __thiscall mmMirror::~mmMirror(void) | ??1mmMirror@@UAE@XZ
    0x42B7C0 | public: void __thiscall mmMirror::Init(void) | ?Init@mmMirror@@QAEXXZ
    0x42B840 | public: virtual void __thiscall mmMirror::Reset(void) | ?Reset@mmMirror@@UAEXXZ
    0x42B8B0 | public: virtual void __thiscall mmMirror::Update(void) | ?Update@mmMirror@@UAEXXZ
    0x42B8C0 | public: virtual void __thiscall mmMirror::Cull(void) | ?Cull@mmMirror@@UAEXXZ
    public: void __thiscall mmMirror::AddWidgets(class bkBank *) | ?AddWidgets@mmMirror@@QAEXPAVbkBank@@@Z
    0x42B9E0 | public: virtual void __thiscall mmMirror::FileIO(class datParser &) | ?FileIO@mmMirror@@UAEXAAVdatParser@@@Z
    0x42BAB0 | public: __thiscall vehCar::vehCar(int) | ??0vehCar@@QAE@H@Z
    0x42BCC0 | public: virtual __thiscall vehCar::~vehCar(void) | ??1vehCar@@UAE@XZ
    0x42BE10 | public: void __thiscall vehCar::Init(char const *,int,int,bool) | ?Init@vehCar@@QAEXPBDHH_N@Z
    0x42C1D0 | public: void __thiscall vehCar::SetColliderID(int) | ?SetColliderID@vehCar@@QAEXH@Z
    0x42C1E0 | public: void __thiscall vehCar::SetAudio(class vehCarAudioContainer *) | ?SetAudio@vehCar@@QAEXPAVvehCarAudioContainer@@@Z
    0x42C1F0 | public: void __thiscall vehCar::InitAudio(char const *,int) | ?InitAudio@vehCar@@QAEXPBDH@Z
    0x42C290 | public: void __thiscall vehCar::SetInput(class vehInput *) | ?SetInput@vehCar@@QAEXPAVvehInput@@@Z
    0x42C2A0 | public: class vehInput * __thiscall vehCar::GetInput(void) | ?GetInput@vehCar@@QAEPAVvehInput@@XZ
    0x42C2B0 | public: void __thiscall vehCar::SetDriver(class vehDriver *) | ?SetDriver@vehCar@@QAEXPAVvehDriver@@@Z
    0x42C2C0 | public: void __thiscall vehCar::SetDrivable(int,int) | ?SetDrivable@vehCar@@QAEXHH@Z
    0x42C330 | public: void __thiscall vehCar::Reset(void) | ?Reset@vehCar@@QAEXXZ
    0x42C450 | public: void __thiscall vehCar::ClearDamage(void) | ?ClearDamage@vehCar@@QAEXXZ
    0x42C480 | public: virtual void __thiscall vehCar::PreUpdate(void) | ?PreUpdate@vehCar@@UAEXXZ
    0x42C570 | private: void __thiscall vehCar::UpdateTrack(class lvlTrackManager &,class vehWheel const &) | ?UpdateTrack@vehCar@@AAEXAAVlvlTrackManager@@ABVvehWheel@@@Z
    0x42C5E0 | public: void __thiscall vehCar::DrawTracks(void) | ?DrawTracks@vehCar@@QAEXXZ
    0x42C690 | public: virtual void __thiscall vehCar::Update(void) | ?Update@vehCar@@UAEXXZ
    0x42C890 | public: int __thiscall vehCar::IsPlayer(void) | ?IsPlayer@vehCar@@QAEHXZ
    0x42C8B0 | public: virtual void __thiscall vehCar::PostUpdate(void) | ?PostUpdate@vehCar@@UAEXXZ
    0x42CA70 | public: virtual class phInertialCS * __thiscall vehCar::GetICS(void) | ?GetICS@vehCar@@UAEPAVphInertialCS@@XZ
    0x42CA80 | public: virtual class lvlInstance * __thiscall vehCar::GetInst(void) | ?GetInst@vehCar@@UAEPAVlvlInstance@@XZ
    0x42CA90 | public: virtual bool __thiscall vehCar::RequiresTerrainCollision(void) | ?RequiresTerrainCollision@vehCar@@UAE_NXZ
    public: void __thiscall vehCar::DrivableCB(void) | ?DrivableCB@vehCar@@QAEXXZ
    public: void __thiscall vehCar::AddWidgets(class bkBank &) | ?AddWidgets@vehCar@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall mmMirror::`vector deleting destructor'(unsigned int) | ??_EmmMirror@@UAEPAXI@Z
    0x42CBA0 | public: virtual void * __thiscall mmMirror::`scalar deleting destructor'(unsigned int) | ??_GmmMirror@@UAEPAXI@Z
    [thunk]: __thiscall `vcall'{16,{flat}}' }' | ??_9@$BBA@AE
    0x42CBD0 | public: virtual char * __thiscall mmMirror::GetClassName(void) | ?GetClassName@mmMirror@@UAEPADXZ
    public: virtual void * __thiscall Base::`vector deleting destructor'(unsigned int) | ??_EBase@@UAEPAXI@Z
    0x41AAF0 | public: virtual void * __thiscall Base::`scalar deleting destructor'(unsigned int) | ??_GBase@@UAEPAXI@Z
    0x42CBE0 | public: virtual void __thiscall dgPhysEntity::PreUpdate(void) | ?PreUpdate@dgPhysEntity@@UAEXXZ
    0x42CBF0 | public: virtual class phCollider * __thiscall dgPhysEntity::GetCollider(void) | ?GetCollider@dgPhysEntity@@UAEPAVphCollider@@XZ
    0x42CC00 | public: virtual void __thiscall dgPhysEntity::DetachMe(void) | ?DetachMe@dgPhysEntity@@UAEXXZ
    0x42CC10 | public: virtual bool __thiscall dgPhysEntity::RequiresTerrainCollision(void) | ?RequiresTerrainCollision@dgPhysEntity@@UAE_NXZ
    0x42CC20 | public: virtual void __thiscall dgPhysEntity::FirstImpactCallback(void) | ?FirstImpactCallback@dgPhysEntity@@UAEXXZ
    0x42CC30 | public: virtual void * __thiscall vehCar::`scalar deleting destructor'(unsigned int) | ??_GvehCar@@UAEPAXI@Z
    public: virtual void * __thiscall vehCar::`vector deleting destructor'(unsigned int) | ??_EvehCar@@UAEPAXI@Z
    0x42CC60 | public: virtual __thiscall dgPhysEntity::~dgPhysEntity(void) | ??1dgPhysEntity@@UAE@XZ
    0x42CC70 | public: virtual void * __thiscall dgPhysEntity::`scalar deleting destructor'(unsigned int) | ??_GdgPhysEntity@@UAEPAXI@Z
    public: virtual void * __thiscall dgPhysEntity::`vector deleting destructor'(unsigned int) | ??_EdgPhysEntity@@UAEPAXI@Z
    0x42CCA0 | public: static class lvlMaterialMgr & __cdecl lvlMaterialMgr::GetInstance(void) | ?GetInstance@lvlMaterialMgr@@SAAAV1@XZ
    [thunk]: __thiscall `vcall'{4,{flat}}' }' | ??_9@$B3AE
    0x5B0B7C | const mmMirror::`vftable' | ??_7mmMirror@@6B@
    0x5B0BB0 | const vehCar::`vftable' | ??_7vehCar@@6B@
    0x5B0BD8 | const dgPhysEntity::`vftable' | ??_7dgPhysEntity@@6B@
    0x5B063C | const Base::`vftable' | ??_7Base@@6B@
    public: static float vehCar::sm_SampleStep | ?sm_SampleStep@vehCar@@2MA
    public: static int vehCar::sm_MaxSamples | ?sm_MaxSamples@vehCar@@2HA
    private: static bool vehCar::bHeadlights | ?bHeadlights@vehCar@@0_NA
    0x62751C | class mmMirror * MIRROR | ?MIRROR@@3PAVmmMirror@@A
*/

// 0x62751C | ?MIRROR@@3PAVmmMirror@@A
inline extern_var(0x62751C, class mmMirror*, MIRROR);

class dgPhysEntity : Base
{
public:
    // dgPhysEntity::`vftable' @ 0x5B0BD8

    // 0x42CC60 | ??1dgPhysEntity@@UAE@XZ
    inline ~dgPhysEntity() override
    {
        stub<member_func_t<void, dgPhysEntity>>(0x42CC60, this);
    }

    // 0x42CBE0 | ?PreUpdate@dgPhysEntity@@UAEXXZ
    virtual inline void PreUpdate()
    {
        return stub<member_func_t<void, dgPhysEntity>>(0x42CBE0, this);
    }

    // 0x46A120 | ?Update@dgPhysEntity@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, dgPhysEntity>>(0x46A120, this);
    }

    // 0x582519 | __purecall
    virtual inline void PostUpdate()
    {
        return stub<member_func_t<void, dgPhysEntity>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline class phInertialCS* GetICS()
    {
        return stub<member_func_t<class phInertialCS*, dgPhysEntity>>(0x582519, this);
    }

    // 0x42CBF0 | ?GetCollider@dgPhysEntity@@UAEPAVphCollider@@XZ
    virtual inline class phCollider* GetCollider()
    {
        return stub<member_func_t<class phCollider*, dgPhysEntity>>(0x42CBF0, this);
    }

    // 0x582519 | __purecall
    virtual inline class lvlInstance* GetInst()
    {
        return stub<member_func_t<class lvlInstance*, dgPhysEntity>>(0x582519, this);
    }

    // 0x42CC00 | ?DetachMe@dgPhysEntity@@UAEXXZ
    virtual inline void DetachMe()
    {
        return stub<member_func_t<void, dgPhysEntity>>(0x42CC00, this);
    }

    // 0x42CC10 | ?RequiresTerrainCollision@dgPhysEntity@@UAE_NXZ
    virtual inline bool RequiresTerrainCollision()
    {
        return stub<member_func_t<bool, dgPhysEntity>>(0x42CC10, this);
    }

    // 0x42CC20 | ?FirstImpactCallback@dgPhysEntity@@UAEXXZ
    virtual inline void FirstImpactCallback()
    {
        return stub<member_func_t<void, dgPhysEntity>>(0x42CC20, this);
    }
};

class vehCar : dgPhysEntity
{
public:
    // vehCar::`vftable' @ 0x5B0BB0

    // 0x42BAB0 | ??0vehCar@@QAE@H@Z
    inline vehCar(int32_t arg1)
    {
        stub<member_func_t<void, vehCar, int32_t>>(0x42BAB0, this, arg1);
    }

    // 0x42BE10 | ?Init@vehCar@@QAEXPBDHH_N@Z
    inline void Init(char const* arg1, int32_t arg2, int32_t arg3, bool arg4)
    {
        return stub<member_func_t<void, vehCar, char const*, int32_t, int32_t, bool>>(
            0x42BE10, this, arg1, arg2, arg3, arg4);
    }

    // 0x42C1D0 | ?SetColliderID@vehCar@@QAEXH@Z
    inline void SetColliderID(int32_t arg1)
    {
        return stub<member_func_t<void, vehCar, int32_t>>(0x42C1D0, this, arg1);
    }

    // 0x42C1E0 | ?SetAudio@vehCar@@QAEXPAVvehCarAudioContainer@@@Z
    inline void SetAudio(class vehCarAudioContainer* arg1)
    {
        return stub<member_func_t<void, vehCar, class vehCarAudioContainer*>>(0x42C1E0, this, arg1);
    }

    // 0x42C1F0 | ?InitAudio@vehCar@@QAEXPBDH@Z
    inline void InitAudio(char const* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, vehCar, char const*, int32_t>>(0x42C1F0, this, arg1, arg2);
    }

    // 0x42C290 | ?SetInput@vehCar@@QAEXPAVvehInput@@@Z
    inline void SetInput(class vehInput* arg1)
    {
        return stub<member_func_t<void, vehCar, class vehInput*>>(0x42C290, this, arg1);
    }

    // 0x42C2A0 | ?GetInput@vehCar@@QAEPAVvehInput@@XZ
    inline class vehInput* GetInput()
    {
        return stub<member_func_t<class vehInput*, vehCar>>(0x42C2A0, this);
    }

    // 0x42C2B0 | ?SetDriver@vehCar@@QAEXPAVvehDriver@@@Z
    inline void SetDriver(class vehDriver* arg1)
    {
        return stub<member_func_t<void, vehCar, class vehDriver*>>(0x42C2B0, this, arg1);
    }

    // 0x42C2C0 | ?SetDrivable@vehCar@@QAEXHH@Z
    inline void SetDrivable(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, vehCar, int32_t, int32_t>>(0x42C2C0, this, arg1, arg2);
    }

    // 0x42C330 | ?Reset@vehCar@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, vehCar>>(0x42C330, this);
    }

    // 0x42C450 | ?ClearDamage@vehCar@@QAEXXZ
    inline void ClearDamage()
    {
        return stub<member_func_t<void, vehCar>>(0x42C450, this);
    }

    // 0x42C570 | ?UpdateTrack@vehCar@@AAEXAAVlvlTrackManager@@ABVvehWheel@@@Z
    inline void UpdateTrack(class lvlTrackManager& arg1, class vehWheel const& arg2)
    {
        return stub<member_func_t<void, vehCar, class lvlTrackManager&, class vehWheel const&>>(
            0x42C570, this, arg1, arg2);
    }

    // 0x42C5E0 | ?DrawTracks@vehCar@@QAEXXZ
    inline void DrawTracks()
    {
        return stub<member_func_t<void, vehCar>>(0x42C5E0, this);
    }

    // 0x42C890 | ?IsPlayer@vehCar@@QAEHXZ
    inline int32_t IsPlayer()
    {
        return stub<member_func_t<int32_t, vehCar>>(0x42C890, this);
    }

    // 0x42BCC0 | ??1vehCar@@UAE@XZ
    inline ~vehCar() override
    {
        stub<member_func_t<void, vehCar>>(0x42BCC0, this);
    }

    // 0x42C480 | ?PreUpdate@vehCar@@UAEXXZ
    inline void PreUpdate() override
    {
        return stub<member_func_t<void, vehCar>>(0x42C480, this);
    }

    // 0x42C690 | ?Update@vehCar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehCar>>(0x42C690, this);
    }

    // 0x42C8B0 | ?PostUpdate@vehCar@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, vehCar>>(0x42C8B0, this);
    }

    // 0x42CA70 | ?GetICS@vehCar@@UAEPAVphInertialCS@@XZ
    inline class phInertialCS* GetICS() override
    {
        return stub<member_func_t<class phInertialCS*, vehCar>>(0x42CA70, this);
    }

    // 0x42CA80 | ?GetInst@vehCar@@UAEPAVlvlInstance@@XZ
    inline class lvlInstance* GetInst() override
    {
        return stub<member_func_t<class lvlInstance*, vehCar>>(0x42CA80, this);
    }

    // 0x42CA90 | ?RequiresTerrainCollision@vehCar@@UAE_NXZ
    inline bool RequiresTerrainCollision() override
    {
        return stub<member_func_t<bool, vehCar>>(0x42CA90, this);
    }
};

class mmMirror : asNode
{
public:
    // mmMirror::`vftable' @ 0x5B0B7C

    // 0x42B750 | ??0mmMirror@@QAE@XZ
    inline mmMirror()
    {
        stub<member_func_t<void, mmMirror>>(0x42B750, this);
    }

    // 0x42B7C0 | ?Init@mmMirror@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmMirror>>(0x42B7C0, this);
    }

    // 0x42B7A0 | ??1mmMirror@@UAE@XZ
    inline ~mmMirror() override
    {
        stub<member_func_t<void, mmMirror>>(0x42B7A0, this);
    }

    // 0x42B8C0 | ?Cull@mmMirror@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmMirror>>(0x42B8C0, this);
    }

    // 0x42B8B0 | ?Update@mmMirror@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmMirror>>(0x42B8B0, this);
    }

    // 0x42B840 | ?Reset@mmMirror@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMirror>>(0x42B840, this);
    }

    // 0x42B9E0 | ?FileIO@mmMirror@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, mmMirror, class datParser&>>(0x42B9E0, this, arg1);
    }

    // 0x42CBD0 | ?GetClassName@mmMirror@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, mmMirror>>(0x42CBD0, this);
    }
};

struct Base
{
public:
    // Base::`vftable' @ 0x5B063C

    // 0x4C8200 | ??1Base@@UAE@XZ
    virtual inline ~Base()
    {
        stub<member_func_t<void, Base>>(0x4C8200, this);
    }
};
