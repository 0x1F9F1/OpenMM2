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
    ageaudio:aud3dobject

    0x511AB0 | public: __thiscall Aud3DObject::Aud3DObject(void) | ??0Aud3DObject@@QAE@XZ
    0x511B20 | public: virtual __thiscall Aud3DObject::~Aud3DObject(void) | ??1Aud3DObject@@UAE@XZ
    0x511B80 | public: void __thiscall Aud3DObject::SetPositionPtr(class Vector3 *) | ?SetPositionPtr@Aud3DObject@@QAEXPAVVector3@@@Z
    0x511BB0 | public: void __thiscall Aud3DObject::Reset(void) | ?Reset@Aud3DObject@@QAEXXZ
    0x511C10 | public: void __thiscall Aud3DObject::CalcDistToClosestHeads2(void) | ?CalcDistToClosestHeads2@Aud3DObject@@QAEXXZ
    0x511E10 | private: float __thiscall Aud3DObject::CalcDistToClosestHead2(class Matrix34 * *,class Vector3 *,int) | ?CalcDistToClosestHead2@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    0x511E90 | private: float __thiscall Aud3DObject::CalcDistToHead2(class Matrix34 *,class Vector3 *) | ?CalcDistToHead2@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    0x511ED0 | private: float __thiscall Aud3DObject::CalcPercentToMaxDist2(float) | ?CalcPercentToMaxDist2@Aud3DObject@@AAEMM@Z
    0x511F30 | public: void __thiscall Aud3DObject::CalcMultiPlayerPan(void) | ?CalcMultiPlayerPan@Aud3DObject@@QAEXXZ
    0x511F40 | public: void __thiscall Aud3DObject::CalcSinglePlayerPan(void) | ?CalcSinglePlayerPan@Aud3DObject@@QAEXXZ
    0x512000 | public: float __thiscall Aud3DObject::CalculateDoppler(float) | ?CalculateDoppler@Aud3DObject@@QAEMM@Z
    0x512040 | public: class Vector3 * __thiscall Aud3DObject::GetLeftPositionPtr(void) | ?GetLeftPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    0x512050 | public: class Vector3 * __thiscall Aud3DObject::GetRightPositionPtr(void) | ?GetRightPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    0x512060 | public: void __thiscall Aud3DObject::SetDropOffs(float,float) | ?SetDropOffs@Aud3DObject@@QAEXMM@Z
    0x512090 | public: bool __thiscall Aud3DObject::PastMaxDistance(void) | ?PastMaxDistance@Aud3DObject@@QAE_NXZ
    0x512130 | public: bool __thiscall Aud3DObject::WithinMaxDistance(void) | ?WithinMaxDistance@Aud3DObject@@QAE_NXZ
    0x5121C0 | public: bool __thiscall Aud3DObject::WithinMaxDistance(float) | ?WithinMaxDistance@Aud3DObject@@QAE_NM@Z
    0x512200 | public: float __thiscall Aud3DObject::GetDistToClosestHead2(void) | ?GetDistToClosestHead2@Aud3DObject@@QAEMXZ
    0x512230 | public: void __thiscall Aud3DObject::AddTo3DMgr(void) | ?AddTo3DMgr@Aud3DObject@@QAEXXZ
    0x512250 | public: void __thiscall Aud3DObject::RemoveFrom3DMgr(void) | ?RemoveFrom3DMgr@Aud3DObject@@QAEXXZ
    0x512280 | public: float __thiscall Aud3DObject::CalculateAttenuation(void) | ?CalculateAttenuation@Aud3DObject@@QAEMXZ
    0x5122C0 | public: float __thiscall Aud3DObject::CalculatePan(void) | ?CalculatePan@Aud3DObject@@QAEMXZ
    0x5122F0 | public: virtual void __thiscall Aud3DObject::AssignSounds(void) | ?AssignSounds@Aud3DObject@@UAEXXZ
    0x512300 | public: virtual void __thiscall Aud3DObject::UnAssignSounds(int) | ?UnAssignSounds@Aud3DObject@@UAEXH@Z
    0x512310 | public: virtual void __thiscall Aud3DObject::UpdateAudio(void) | ?UpdateAudio@Aud3DObject@@UAEXXZ
    0x512320 | public: void __thiscall Aud3DObject::Set3D(bool) | ?Set3D@Aud3DObject@@QAEX_N@Z
    0x512360 | public: virtual void __thiscall Aud3DObject::SetNon3DParams(void) | ?SetNon3DParams@Aud3DObject@@UAEXXZ
    0x512370 | public: virtual void __thiscall Aud3DObject::Set3DParams(void) | ?Set3DParams@Aud3DObject@@UAEXXZ
    0x512380 | public: int __thiscall Aud3DObject::GetPriority(void) | ?GetPriority@Aud3DObject@@QAEHXZ
    0x512390 | public: virtual void __thiscall Aud3DObject::Update(void) | ?Update@Aud3DObject@@UAEXXZ
    0x5123D0 | public: void __thiscall Aud3DObject::UpdateNonVirtual(void) | ?UpdateNonVirtual@Aud3DObject@@QAEXXZ
    0x512400 | public: bool __thiscall Aud3DObject::ReadVectorPoints(class Stream *) | ?ReadVectorPoints@Aud3DObject@@QAE_NPAVStream@@@Z
    0x512550 | private: void __thiscall Aud3DObject::SetClosestPositionPtr(void) | ?SetClosestPositionPtr@Aud3DObject@@AAEXXZ
    0x5125A0 | private: class Vector3 * __thiscall Aud3DObject::GetClosestPositionPtr(class Matrix34 * *,int) | ?GetClosestPositionPtr@Aud3DObject@@AAEPAVVector3@@PAPAVMatrix34@@H@Z
    0x512620 | private: float __thiscall Aud3DObject::CalcPseudoDistToClosestHead(class Matrix34 * *,class Vector3 *,int) | ?CalcPseudoDistToClosestHead@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    0x5126A0 | private: float __thiscall Aud3DObject::CalcPseudoDistToHead(class Matrix34 *,class Vector3 *) | ?CalcPseudoDistToHead@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    public: virtual void * __thiscall Aud3DObject::`vector deleting destructor'(unsigned int) | ??_EAud3DObject@@UAEPAXI@Z
    public: virtual void * __thiscall Aud3DObject::`scalar deleting destructor'(unsigned int) | ??_GAud3DObject@@UAEPAXI@Z
    0x5B4CCC | const Aud3DObject::`vftable' | ??_7Aud3DObject@@6B@
*/

class Aud3DObject
{
public:
    // Aud3DObject::`vftable' @ 0x5B4CCC

    // 0x511AB0 | ??0Aud3DObject@@QAE@XZ
    inline Aud3DObject()
    {
        stub<member_func_t<void, Aud3DObject>>(0x511AB0, this);
    }

    // 0x511B80 | ?SetPositionPtr@Aud3DObject@@QAEXPAVVector3@@@Z
    inline void SetPositionPtr(class Vector3* arg1)
    {
        return stub<member_func_t<void, Aud3DObject, class Vector3*>>(0x511B80, this, arg1);
    }

    // 0x511BB0 | ?Reset@Aud3DObject@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x511BB0, this);
    }

    // 0x511C10 | ?CalcDistToClosestHeads2@Aud3DObject@@QAEXXZ
    inline void CalcDistToClosestHeads2()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x511C10, this);
    }

    // 0x511E10 | ?CalcDistToClosestHead2@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    inline float CalcDistToClosestHead2(class Matrix34** arg1, class Vector3* arg2, int32_t arg3)
    {
        return stub<member_func_t<float, Aud3DObject, class Matrix34**, class Vector3*, int32_t>>(
            0x511E10, this, arg1, arg2, arg3);
    }

    // 0x511E90 | ?CalcDistToHead2@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    inline float CalcDistToHead2(class Matrix34* arg1, class Vector3* arg2)
    {
        return stub<member_func_t<float, Aud3DObject, class Matrix34*, class Vector3*>>(0x511E90, this, arg1, arg2);
    }

    // 0x511ED0 | ?CalcPercentToMaxDist2@Aud3DObject@@AAEMM@Z
    inline float CalcPercentToMaxDist2(float arg1)
    {
        return stub<member_func_t<float, Aud3DObject, float>>(0x511ED0, this, arg1);
    }

    // 0x511F30 | ?CalcMultiPlayerPan@Aud3DObject@@QAEXXZ
    inline void CalcMultiPlayerPan()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x511F30, this);
    }

    // 0x511F40 | ?CalcSinglePlayerPan@Aud3DObject@@QAEXXZ
    inline void CalcSinglePlayerPan()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x511F40, this);
    }

    // 0x512000 | ?CalculateDoppler@Aud3DObject@@QAEMM@Z
    inline float CalculateDoppler(float arg1)
    {
        return stub<member_func_t<float, Aud3DObject, float>>(0x512000, this, arg1);
    }

    // 0x512040 | ?GetLeftPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    inline class Vector3* GetLeftPositionPtr()
    {
        return stub<member_func_t<class Vector3*, Aud3DObject>>(0x512040, this);
    }

    // 0x512050 | ?GetRightPositionPtr@Aud3DObject@@QAEPAVVector3@@XZ
    inline class Vector3* GetRightPositionPtr()
    {
        return stub<member_func_t<class Vector3*, Aud3DObject>>(0x512050, this);
    }

    // 0x512060 | ?SetDropOffs@Aud3DObject@@QAEXMM@Z
    inline void SetDropOffs(float arg1, float arg2)
    {
        return stub<member_func_t<void, Aud3DObject, float, float>>(0x512060, this, arg1, arg2);
    }

    // 0x512090 | ?PastMaxDistance@Aud3DObject@@QAE_NXZ
    inline bool PastMaxDistance()
    {
        return stub<member_func_t<bool, Aud3DObject>>(0x512090, this);
    }

    // 0x512130 | ?WithinMaxDistance@Aud3DObject@@QAE_NXZ
    inline bool WithinMaxDistance()
    {
        return stub<member_func_t<bool, Aud3DObject>>(0x512130, this);
    }

    // 0x5121C0 | ?WithinMaxDistance@Aud3DObject@@QAE_NM@Z
    inline bool WithinMaxDistance(float arg1)
    {
        return stub<member_func_t<bool, Aud3DObject, float>>(0x5121C0, this, arg1);
    }

    // 0x512200 | ?GetDistToClosestHead2@Aud3DObject@@QAEMXZ
    inline float GetDistToClosestHead2()
    {
        return stub<member_func_t<float, Aud3DObject>>(0x512200, this);
    }

    // 0x512230 | ?AddTo3DMgr@Aud3DObject@@QAEXXZ
    inline void AddTo3DMgr()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512230, this);
    }

    // 0x512250 | ?RemoveFrom3DMgr@Aud3DObject@@QAEXXZ
    inline void RemoveFrom3DMgr()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512250, this);
    }

    // 0x512280 | ?CalculateAttenuation@Aud3DObject@@QAEMXZ
    inline float CalculateAttenuation()
    {
        return stub<member_func_t<float, Aud3DObject>>(0x512280, this);
    }

    // 0x5122C0 | ?CalculatePan@Aud3DObject@@QAEMXZ
    inline float CalculatePan()
    {
        return stub<member_func_t<float, Aud3DObject>>(0x5122C0, this);
    }

    // 0x512320 | ?Set3D@Aud3DObject@@QAEX_N@Z
    inline void Set3D(bool arg1)
    {
        return stub<member_func_t<void, Aud3DObject, bool>>(0x512320, this, arg1);
    }

    // 0x512380 | ?GetPriority@Aud3DObject@@QAEHXZ
    inline int32_t GetPriority()
    {
        return stub<member_func_t<int32_t, Aud3DObject>>(0x512380, this);
    }

    // 0x5123D0 | ?UpdateNonVirtual@Aud3DObject@@QAEXXZ
    inline void UpdateNonVirtual()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x5123D0, this);
    }

    // 0x512400 | ?ReadVectorPoints@Aud3DObject@@QAE_NPAVStream@@@Z
    inline bool ReadVectorPoints(class Stream* arg1)
    {
        return stub<member_func_t<bool, Aud3DObject, class Stream*>>(0x512400, this, arg1);
    }

    // 0x512550 | ?SetClosestPositionPtr@Aud3DObject@@AAEXXZ
    inline void SetClosestPositionPtr()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512550, this);
    }

    // 0x5125A0 | ?GetClosestPositionPtr@Aud3DObject@@AAEPAVVector3@@PAPAVMatrix34@@H@Z
    inline class Vector3* GetClosestPositionPtr(class Matrix34** arg1, int32_t arg2)
    {
        return stub<member_func_t<class Vector3*, Aud3DObject, class Matrix34**, int32_t>>(0x5125A0, this, arg1, arg2);
    }

    // 0x512620 | ?CalcPseudoDistToClosestHead@Aud3DObject@@AAEMPAPAVMatrix34@@PAVVector3@@H@Z
    inline float CalcPseudoDistToClosestHead(class Matrix34** arg1, class Vector3* arg2, int32_t arg3)
    {
        return stub<member_func_t<float, Aud3DObject, class Matrix34**, class Vector3*, int32_t>>(
            0x512620, this, arg1, arg2, arg3);
    }

    // 0x5126A0 | ?CalcPseudoDistToHead@Aud3DObject@@AAEMPAVMatrix34@@PAVVector3@@@Z
    inline float CalcPseudoDistToHead(class Matrix34* arg1, class Vector3* arg2)
    {
        return stub<member_func_t<float, Aud3DObject, class Matrix34*, class Vector3*>>(0x5126A0, this, arg1, arg2);
    }

    // 0x5122F0 | ?AssignSounds@Aud3DObject@@UAEXXZ
    virtual inline void AssignSounds()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x5122F0, this);
    }

    // 0x512300 | ?UnAssignSounds@Aud3DObject@@UAEXH@Z
    virtual inline void UnAssignSounds(int32_t arg1)
    {
        return stub<member_func_t<void, Aud3DObject, int32_t>>(0x512300, this, arg1);
    }

    // 0x512310 | ?UpdateAudio@Aud3DObject@@UAEXXZ
    virtual inline void UpdateAudio()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512310, this);
    }

    // 0x512390 | ?Update@Aud3DObject@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512390, this);
    }

    // 0x512360 | ?SetNon3DParams@Aud3DObject@@UAEXXZ
    virtual inline void SetNon3DParams()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512360, this);
    }

    // 0x512370 | ?Set3DParams@Aud3DObject@@UAEXXZ
    virtual inline void Set3DParams()
    {
        return stub<member_func_t<void, Aud3DObject>>(0x512370, this);
    }
};
