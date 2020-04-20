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
    vehicle:carsim

    0x4CB660 | public: __thiscall vehCarSim::vehCarSim(void) | ??0vehCarSim@@QAE@XZ
    0x4CB8E0 | public: virtual __thiscall vehCarSim::~vehCarSim(void) | ??1vehCarSim@@UAE@XZ
    0x4CBA70 | public: virtual void __thiscall vehCarSim::Reset(void) | ?Reset@vehCarSim@@UAEXXZ
    0x4CBAF0 | public: virtual char const * __thiscall vehCarSim::GetDirName(void) | ?GetDirName@vehCarSim@@UAEPBDXZ
    0x4CBB00 | public: int __thiscall vehCarSim::OnGround(void) | ?OnGround@vehCarSim@@QAEHXZ
    0x4CBB40 | public: int __thiscall vehCarSim::BottomedOut(void) | ?BottomedOut@vehCarSim@@QAEHXZ
    0x4CBB80 | public: void __thiscall vehCarSim::Init(char const *,class phColliderJointed *,class lvlInstance *) | ?Init@vehCarSim@@QAEXPBDPAVphColliderJointed@@PAVlvlInstance@@@Z
    0x4CBF50 | public: void __thiscall vehCarSim::SetWorldMatrix(void) | ?SetWorldMatrix@vehCarSim@@QAEXXZ
    0x4CC050 | public: void __thiscall vehCarSim::RestoreImpactParams(void) | ?RestoreImpactParams@vehCarSim@@QAEXXZ
    0x4CC080 | public: void __thiscall vehCarSim::SetHackedImpactParams(void) | ?SetHackedImpactParams@vehCarSim@@QAEXXZ
    0x4CC0B0 | public: void __thiscall vehCarSim::ReconfigureDrivetrain(void) | ?ReconfigureDrivetrain@vehCarSim@@QAEXXZ
    0x4CC0D0 | public: void __thiscall vehCarSim::ConfigureDrivetrain(void) | ?ConfigureDrivetrain@vehCarSim@@QAEXXZ
    0x4CC4E0 | public: void __thiscall vehCarSim::UnconfigureDrivetrain(void) | ?UnconfigureDrivetrain@vehCarSim@@QAEXXZ
    0x4CC830 | public: void __thiscall vehCarSim::SetResetPos(class Vector3 const &) | ?SetResetPos@vehCarSim@@QAEXABVVector3@@@Z
    0x4CC880 | public: void __thiscall vehCarSim::ClearDamage(void) | ?ClearDamage@vehCarSim@@QAEXXZ
    0x4CC890 | public: float __thiscall vehCarSim::GetSSSFactor(float) | ?GetSSSFactor@vehCarSim@@QAEMM@Z
    0x4CC8E0 | public: virtual void __thiscall vehCarSim::Update(void) | ?Update@vehCarSim@@UAEXXZ
    0x4CCAB0 | public: void __thiscall vehCarSim::PlaybackReplay(void) | ?PlaybackReplay@vehCarSim@@QAEXXZ
    0x4CCB30 | public: void __thiscall vehCarSim::RecordReplay(void) | ?RecordReplay@vehCarSim@@QAEXXZ
    public: void __thiscall vehCarSim::SetFricElas(void) | ?SetFricElas@vehCarSim@@QAEXXZ
    public: void __thiscall vehCarSim::UpdateICSParams(void) | ?UpdateICSParams@vehCarSim@@QAEXXZ
    public: virtual void __thiscall vehCarSim::AddWidgets(class bkBank &) | ?AddWidgets@vehCarSim@@UAEXAAVbkBank@@@Z
    0x4CCC70 | public: virtual void __thiscall vehCarSim::FileIO(class datParser &) | ?FileIO@vehCarSim@@UAEXAAVdatParser@@@Z
    0x4CCE80 | public: virtual void * __thiscall vehCarSim::`scalar deleting destructor'(unsigned int) | ??_GvehCarSim@@UAEPAXI@Z
    public: virtual void * __thiscall vehCarSim::`vector deleting destructor'(unsigned int) | ??_EvehCarSim@@UAEPAXI@Z
    0x4CCEB0 | public: virtual __thiscall vehTransmission::~vehTransmission(void) | ??1vehTransmission@@UAE@XZ
    0x4CCEE0 | public: virtual __thiscall vehAxle::~vehAxle(void) | ??1vehAxle@@UAE@XZ
    0x4CCEF0 | public: virtual __thiscall vehSuspension::~vehSuspension(void) | ??1vehSuspension@@UAE@XZ
    0x4CCF00 | public: virtual __thiscall vehAero::~vehAero(void) | ??1vehAero@@UAE@XZ
    0x4CCF10 | public: virtual char * __thiscall vehCarSim::GetClassName(void) | ?GetClassName@vehCarSim@@UAEPADXZ
    0x5B2C74 | const vehCarSim::`vftable' | ??_7vehCarSim@@6B@
    float MetricFactor | ?MetricFactor@@3MA
*/

class vehCarSim : asNode
{
public:
    // vehCarSim::`vftable' @ 0x5B2C74

    // 0x4CB660 | ??0vehCarSim@@QAE@XZ
    inline vehCarSim()
    {
        stub<member_func_t<void, vehCarSim>>(0x4CB660, this);
    }

    // 0x4CBB00 | ?OnGround@vehCarSim@@QAEHXZ
    inline int32_t OnGround()
    {
        return stub<member_func_t<int32_t, vehCarSim>>(0x4CBB00, this);
    }

    // 0x4CBB40 | ?BottomedOut@vehCarSim@@QAEHXZ
    inline int32_t BottomedOut()
    {
        return stub<member_func_t<int32_t, vehCarSim>>(0x4CBB40, this);
    }

    // 0x4CBB80 | ?Init@vehCarSim@@QAEXPBDPAVphColliderJointed@@PAVlvlInstance@@@Z
    inline void Init(char const* arg1, class phColliderJointed* arg2, class lvlInstance* arg3)
    {
        return stub<member_func_t<void, vehCarSim, char const*, class phColliderJointed*, class lvlInstance*>>(
            0x4CBB80, this, arg1, arg2, arg3);
    }

    // 0x4CBF50 | ?SetWorldMatrix@vehCarSim@@QAEXXZ
    inline void SetWorldMatrix()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CBF50, this);
    }

    // 0x4CC050 | ?RestoreImpactParams@vehCarSim@@QAEXXZ
    inline void RestoreImpactParams()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC050, this);
    }

    // 0x4CC080 | ?SetHackedImpactParams@vehCarSim@@QAEXXZ
    inline void SetHackedImpactParams()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC080, this);
    }

    // 0x4CC0B0 | ?ReconfigureDrivetrain@vehCarSim@@QAEXXZ
    inline void ReconfigureDrivetrain()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC0B0, this);
    }

    // 0x4CC0D0 | ?ConfigureDrivetrain@vehCarSim@@QAEXXZ
    inline void ConfigureDrivetrain()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC0D0, this);
    }

    // 0x4CC4E0 | ?UnconfigureDrivetrain@vehCarSim@@QAEXXZ
    inline void UnconfigureDrivetrain()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC4E0, this);
    }

    // 0x4CC830 | ?SetResetPos@vehCarSim@@QAEXABVVector3@@@Z
    inline void SetResetPos(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, vehCarSim, class Vector3 const&>>(0x4CC830, this, arg1);
    }

    // 0x4CC880 | ?ClearDamage@vehCarSim@@QAEXXZ
    inline void ClearDamage()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC880, this);
    }

    // 0x4CC890 | ?GetSSSFactor@vehCarSim@@QAEMM@Z
    inline float GetSSSFactor(float arg1)
    {
        return stub<member_func_t<float, vehCarSim, float>>(0x4CC890, this, arg1);
    }

    // 0x4CCAB0 | ?PlaybackReplay@vehCarSim@@QAEXXZ
    inline void PlaybackReplay()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CCAB0, this);
    }

    // 0x4CCB30 | ?RecordReplay@vehCarSim@@QAEXXZ
    inline void RecordReplay()
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CCB30, this);
    }

    // 0x4CB8E0 | ??1vehCarSim@@UAE@XZ
    inline ~vehCarSim() override
    {
        stub<member_func_t<void, vehCarSim>>(0x4CB8E0, this);
    }

    // 0x4CC8E0 | ?Update@vehCarSim@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CC8E0, this);
    }

    // 0x4CBA70 | ?Reset@vehCarSim@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehCarSim>>(0x4CBA70, this);
    }

    // 0x4CCC70 | ?FileIO@vehCarSim@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehCarSim, class datParser&>>(0x4CCC70, this, arg1);
    }

    // 0x4CCF10 | ?GetClassName@vehCarSim@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehCarSim>>(0x4CCF10, this);
    }

    // 0x4CBAF0 | ?GetDirName@vehCarSim@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, vehCarSim>>(0x4CBAF0, this);
    }
};
