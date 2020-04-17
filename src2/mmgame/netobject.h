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
    mmgame:netobject

    0x43BC10 | public: int __thiscall mmAccelCompute::Init(class Vector3,class Vector3) | ?Init@mmAccelCompute@@QAEHVVector3@@0@Z
    0x43BC60 | public: void __thiscall mmAccelCompute::SetLatest(class Vector3,float) | ?SetLatest@mmAccelCompute@@QAEXVVector3@@M@Z
    0x43BD70 | public: __thiscall mmNetPath::mmNetPath(void) | ??0mmNetPath@@QAE@XZ
    0x43BDB0 | public: __thiscall mmNetPath::~mmNetPath(void) | ??1mmNetPath@@QAE@XZ
    0x43BDC0 | public: void __thiscall mmNetPath::Reset(void) | ?Reset@mmNetPath@@QAEXXZ
    0x43BDF0 | public: void __thiscall mmNetPath::Compute(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?Compute@mmNetPath@@QAEXAAVVector3@@000@Z
    0x43BFE0 | public: void __thiscall mmNetPath::Solve(class Vector3 &,class Vector3 &,float) | ?Solve@mmNetPath@@QAEXAAVVector3@@0M@Z
    0x43C080 | public: __thiscall mmNetObject::mmNetObject(void) | ??0mmNetObject@@QAE@XZ
    0x43C240 | public: virtual __thiscall mmNetObject::~mmNetObject(void) | ??1mmNetObject@@UAE@XZ
    0x43C260 | public: void __thiscall mmNetObject::ResetValues(void) | ?ResetValues@mmNetObject@@QAEXXZ
    0x43C370 | public: void __thiscall mmNetObject::Clear(void) | ?Clear@mmNetObject@@QAEXXZ
    0x43C480 | public: void __thiscall mmNetObject::Activate(void) | ?Activate@mmNetObject@@QAEXXZ
    0x43C4B0 | public: void __thiscall mmNetObject::Deactivate(void) | ?Deactivate@mmNetObject@@QAEXXZ
    0x43C4E0 | public: void __thiscall mmNetObject::Init(class vehCar *,char *,float,int,unsigned long,char *,bool) | ?Init@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    0x43C5D0 | public: void __thiscall mmNetObject::ReInit(class vehCar *,char *,float,int,unsigned long,char *,bool) | ?ReInit@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    0x43C740 | public: void __thiscall mmNetObject::SetCar(class vehCar *) | ?SetCar@mmNetObject@@QAEXPAVvehCar@@@Z
    0x43C750 | public: void __thiscall mmNetObject::Set(int) | ?Set@mmNetObject@@QAEXH@Z
    0x43C760 | public: void __thiscall mmNetObject::SetActive(int) | ?SetActive@mmNetObject@@QAEXH@Z
    0x43C780 | public: void __thiscall mmNetObject::SetScore(int) | ?SetScore@mmNetObject@@QAEXH@Z
    0x43C790 | public: void __thiscall mmNetObject::SetInputData(void) | ?SetInputData@mmNetObject@@QAEXXZ
    0x43C820 | public: int __thiscall mmNetObject::SetPositionData(unsigned long) | ?SetPositionData@mmNetObject@@QAEHK@Z
    0x43CC90 | public: void __thiscall mmNetObject::InputUpdate(struct NET_INPUTDATA *,float) | ?InputUpdate@mmNetObject@@QAEXPAUNET_INPUTDATA@@M@Z
    0x43CD10 | public: void __thiscall mmNetObject::PositionUpdate(struct NET_POSDATA *,float) | ?PositionUpdate@mmNetObject@@QAEXPAUNET_POSDATA@@M@Z
    0x43D700 | public: float __thiscall mmNetObject::GetPositionApproach(class Vector3 const &,class Vector3 const &) | ?GetPositionApproach@mmNetObject@@QAEMABVVector3@@0@Z
    0x43D750 | public: float __thiscall mmNetObject::GetAngleApproach(float,float) | ?GetAngleApproach@mmNetObject@@QAEMMM@Z
    0x43D760 | public: void __thiscall mmNetObject::Predict(void) | ?Predict@mmNetObject@@QAEXXZ
    0x43D850 | public: virtual void __thiscall mmNetObject::Update(void) | ?Update@mmNetObject@@UAEXXZ
    0x43D980 | public: virtual void __thiscall mmNetObject::Cull(void) | ?Cull@mmNetObject@@UAEXXZ
    public: virtual void __thiscall mmNetObject::AddWidgets(class bkBank &) | ?AddWidgets@mmNetObject@@UAEXAAVbkBank@@@Z
    0x43DD00 | public: virtual void * __thiscall mmNetObject::`scalar deleting destructor'(unsigned int) | ??_GmmNetObject@@UAEPAXI@Z
    public: virtual void * __thiscall mmNetObject::`vector deleting destructor'(unsigned int) | ??_EmmNetObject@@UAEPAXI@Z
    0x45CE40 | public: void __thiscall Vector3::Scale(class Vector3 const &,float) | ?Scale@Vector3@@QAEXABV1@M@Z
    public: class Vector3 __thiscall Vector3::operator*(float) const | ??DVector3@@QBE?AV0@M@Z
    0x43DD80 | public: void __thiscall Vector4::Set(float,float,float,float) | ?Set@Vector4@@QAEXMMMM@Z
    0x43DDA0 | public: float __thiscall Vector4::Dot(class Vector4 const &) const | ?Dot@Vector4@@QBEMABV1@@Z
    public: __thiscall Matrix34::Matrix34(void) | ??0Matrix34@@QAE@XZ
    public: __thiscall QuantVector3::QuantVector3(void) | ??0QuantVector3@@QAE@XZ
    public: __thiscall mmAccelCompute::~mmAccelCompute(void) | ??1mmAccelCompute@@QAE@XZ
    0x5B1138 | const mmNetObject::`vftable' | ??_7mmNetObject@@6B@
    int use_velocity | ?use_velocity@@3HA
*/

class mmNetObject : asNetObject
{
public:
    // mmNetObject::`vftable' @ 0x5B1138

    // 0x43C080 | ??0mmNetObject@@QAE@XZ
    mmNetObject()
    {
        stub<member_func_t<void, mmNetObject>>(0x43C080, this);
    }

    // 0x43C260 | ?ResetValues@mmNetObject@@QAEXXZ
    void ResetValues()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43C260, this);
    }

    // 0x43C370 | ?Clear@mmNetObject@@QAEXXZ
    void Clear()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43C370, this);
    }

    // 0x43C480 | ?Activate@mmNetObject@@QAEXXZ
    void Activate()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43C480, this);
    }

    // 0x43C4B0 | ?Deactivate@mmNetObject@@QAEXXZ
    void Deactivate()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43C4B0, this);
    }

    // 0x43C4E0 | ?Init@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    void Init(class vehCar* arg1, char* arg2, f32 arg3, i32 arg4, u32 arg5, char* arg6, bool arg7)
    {
        return stub<member_func_t<void, mmNetObject, class vehCar*, char*, f32, i32, u32, char*, bool>>(
            0x43C4E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x43C5D0 | ?ReInit@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    void ReInit(class vehCar* arg1, char* arg2, f32 arg3, i32 arg4, u32 arg5, char* arg6, bool arg7)
    {
        return stub<member_func_t<void, mmNetObject, class vehCar*, char*, f32, i32, u32, char*, bool>>(
            0x43C5D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x43C740 | ?SetCar@mmNetObject@@QAEXPAVvehCar@@@Z
    void SetCar(class vehCar* arg1)
    {
        return stub<member_func_t<void, mmNetObject, class vehCar*>>(0x43C740, this, arg1);
    }

    // 0x43C750 | ?Set@mmNetObject@@QAEXH@Z
    void Set(i32 arg1)
    {
        return stub<member_func_t<void, mmNetObject, i32>>(0x43C750, this, arg1);
    }

    // 0x43C760 | ?SetActive@mmNetObject@@QAEXH@Z
    void SetActive(i32 arg1)
    {
        return stub<member_func_t<void, mmNetObject, i32>>(0x43C760, this, arg1);
    }

    // 0x43C780 | ?SetScore@mmNetObject@@QAEXH@Z
    void SetScore(i32 arg1)
    {
        return stub<member_func_t<void, mmNetObject, i32>>(0x43C780, this, arg1);
    }

    // 0x43C790 | ?SetInputData@mmNetObject@@QAEXXZ
    void SetInputData()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43C790, this);
    }

    // 0x43C820 | ?SetPositionData@mmNetObject@@QAEHK@Z
    i32 SetPositionData(u32 arg1)
    {
        return stub<member_func_t<i32, mmNetObject, u32>>(0x43C820, this, arg1);
    }

    // 0x43CC90 | ?InputUpdate@mmNetObject@@QAEXPAUNET_INPUTDATA@@M@Z
    void InputUpdate(struct NET_INPUTDATA* arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmNetObject, struct NET_INPUTDATA*, f32>>(0x43CC90, this, arg1, arg2);
    }

    // 0x43CD10 | ?PositionUpdate@mmNetObject@@QAEXPAUNET_POSDATA@@M@Z
    void PositionUpdate(struct NET_POSDATA* arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmNetObject, struct NET_POSDATA*, f32>>(0x43CD10, this, arg1, arg2);
    }

    // 0x43D700 | ?GetPositionApproach@mmNetObject@@QAEMABVVector3@@0@Z
    f32 GetPositionApproach(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<f32, mmNetObject, class Vector3 const&, class Vector3 const&>>(
            0x43D700, this, arg1, arg2);
    }

    // 0x43D750 | ?GetAngleApproach@mmNetObject@@QAEMMM@Z
    f32 GetAngleApproach(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<f32, mmNetObject, f32, f32>>(0x43D750, this, arg1, arg2);
    }

    // 0x43D760 | ?Predict@mmNetObject@@QAEXXZ
    void Predict()
    {
        return stub<member_func_t<void, mmNetObject>>(0x43D760, this);
    }

    // 0x43C240 | ??1mmNetObject@@UAE@XZ
    ~mmNetObject() override
    {
        stub<member_func_t<void, mmNetObject>>(0x43C240, this);
    }

    // 0x43D980 | ?Cull@mmNetObject@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmNetObject>>(0x43D980, this);
    }

    // 0x43D850 | ?Update@mmNetObject@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmNetObject>>(0x43D850, this);
    }
};

struct mmAccelCompute
{
public:
    // 0x43BC10 | ?Init@mmAccelCompute@@QAEHVVector3@@0@Z
    i32 Init(class Vector3 arg1, class Vector3 arg2)
    {
        return stub<member_func_t<i32, mmAccelCompute, class Vector3, class Vector3>>(0x43BC10, this, arg1, arg2);
    }

    // 0x43BC60 | ?SetLatest@mmAccelCompute@@QAEXVVector3@@M@Z
    void SetLatest(class Vector3 arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmAccelCompute, class Vector3, f32>>(0x43BC60, this, arg1, arg2);
    }
};

struct mmNetPath
{
public:
    // 0x43BD70 | ??0mmNetPath@@QAE@XZ
    mmNetPath()
    {
        stub<member_func_t<void, mmNetPath>>(0x43BD70, this);
    }

    // 0x43BDB0 | ??1mmNetPath@@QAE@XZ
    ~mmNetPath()
    {
        stub<member_func_t<void, mmNetPath>>(0x43BDB0, this);
    }

    // 0x43BDC0 | ?Reset@mmNetPath@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, mmNetPath>>(0x43BDC0, this);
    }

    // 0x43BDF0 | ?Compute@mmNetPath@@QAEXAAVVector3@@000@Z
    void Compute(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, mmNetPath, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x43BDF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x43BFE0 | ?Solve@mmNetPath@@QAEXAAVVector3@@0M@Z
    void Solve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmNetPath, class Vector3&, class Vector3&, f32>>(
            0x43BFE0, this, arg1, arg2, arg3);
    }
};
