/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmcityinfo:playercfg

    0x5254B0 | public: __thiscall mmPlayerConfig::mmPlayerConfig(void) | ??0mmPlayerConfig@@QAE@XZ
    0x525560 | public: virtual __thiscall mmPlayerConfig::~mmPlayerConfig(void) | ??1mmPlayerConfig@@UAE@XZ
    0x5255D0 | public: void __thiscall mmPlayerConfig::operator=(class mmPlayerConfig &) | ??4mmPlayerConfig@@QAEXAAV0@@Z
    0x525750 | public: int __thiscall mmPlayerConfig::Load(char *) | ?Load@mmPlayerConfig@@QAEHPAD@Z
    0x5257B0 | public: int __thiscall mmPlayerConfig::LoadBinary(char *) | ?LoadBinary@mmPlayerConfig@@QAEHPAD@Z
    0x525A30 | public: int __thiscall mmPlayerConfig::SaveBinary(char *) | ?SaveBinary@mmPlayerConfig@@QAEHPAD@Z
    0x525C70 | public: void __thiscall mmPlayerConfig::SetDefaults(void) | ?SetDefaults@mmPlayerConfig@@QAEXXZ
    0x525C80 | public: int __thiscall mmPlayerConfig::Save(char *,int) | ?Save@mmPlayerConfig@@QAEHPADH@Z
    0x525D20 | public: void __thiscall mmPlayerConfig::SetAudio(void) | ?SetAudio@mmPlayerConfig@@QAEXXZ
    0x525E20 | public: void __thiscall mmPlayerConfig::SetControls(void) | ?SetControls@mmPlayerConfig@@QAEXXZ
    0x525F10 | public: void __thiscall mmPlayerConfig::GetCustom(void) | ?GetCustom@mmPlayerConfig@@QAEXXZ
    0x525F40 | public: void __thiscall mmPlayerConfig::SetCustom(void) | ?SetCustom@mmPlayerConfig@@QAEXXZ
    0x525F70 | public: __thiscall mmGfxCFG::mmGfxCFG(void) | ??0mmGfxCFG@@QAE@XZ
    0x525FB0 | public: void __thiscall mmGfxCFG::Get(void) | ?Get@mmGfxCFG@@QAEXXZ
    0x526020 | public: void __thiscall mmGfxCFG::Set(void) | ?Set@mmGfxCFG@@QAEXXZ
    0x526090 | public: void __thiscall mmPlayerConfig::GetGraphics(void) | ?GetGraphics@mmPlayerConfig@@QAEXXZ
    0x5260A0 | public: void __thiscall mmPlayerConfig::SetGraphics(void) | ?SetGraphics@mmPlayerConfig@@QAEXXZ
    0x5260B0 | public: void __thiscall mmPlayerConfig::GetAudio(void) | ?GetAudio@mmPlayerConfig@@QAEXXZ
    0x526120 | public: void __thiscall mmPlayerConfig::GetControls(void) | ?GetControls@mmPlayerConfig@@QAEXXZ
    0x526200 | public: void __thiscall mmPlayerConfig::GetViewSettings(void) | ?GetViewSettings@mmPlayerConfig@@QAEXXZ
    0x526220 | public: void __thiscall mmPlayerConfig::SetViewSettings(void) | ?SetViewSettings@mmPlayerConfig@@QAEXXZ
    0x526240 | public: void __thiscall mmPlayerConfig::DefaultAudio(void) | ?DefaultAudio@mmPlayerConfig@@QAEXXZ
    0x5262F0 | public: void __thiscall mmPlayerConfig::DefaultControls(void) | ?DefaultControls@mmPlayerConfig@@QAEXXZ
    0x526350 | public: void __thiscall mmPlayerConfig::DefaultViewSettings(void) | ?DefaultViewSettings@mmPlayerConfig@@QAEXXZ
    0x526390 | public: void __thiscall mmPlayerConfig::Reset(void) | ?Reset@mmPlayerConfig@@QAEXXZ
    0x5263A0 | public: void __thiscall mmPlayerConfig::DefaultGraphics(void) | ?DefaultGraphics@mmPlayerConfig@@QAEXXZ
    public: virtual void * __thiscall mmPlayerConfig::`vector deleting destructor'(unsigned int) | ??_EmmPlayerConfig@@UAEPAXI@Z
    0x5264D0 | public: virtual void * __thiscall mmPlayerConfig::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerConfig@@UAEPAXI@Z
    public: __thiscall mmCtrlCFG::~mmCtrlCFG(void) | ??1mmCtrlCFG@@QAE@XZ
    0x5B5224 | const mmPlayerConfig::`vftable' | ??_7mmPlayerConfig@@6B@
    float ParticleMultiplier | ?ParticleMultiplier@@3MA
*/

class mmPlayerConfig
    : mmInfoBase
    , Base
{
public:
    // mmPlayerConfig::`vftable' @ 0x5B5224

    // 0x5254B0 | ??0mmPlayerConfig@@QAE@XZ
    inline mmPlayerConfig()
    {
        stub<member_func_t<void, mmPlayerConfig>>(0x5254B0, this);
    }

    // 0x5255D0 | ??4mmPlayerConfig@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerConfig& arg1)
    {
        return stub<member_func_t<void, mmPlayerConfig, class mmPlayerConfig&>>(0x5255D0, this, arg1);
    }

    // 0x525750 | ?Load@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x525750, this, arg1);
    }

    // 0x5257B0 | ?LoadBinary@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x5257B0, this, arg1);
    }

    // 0x525A30 | ?SaveBinary@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x525A30, this, arg1);
    }

    // 0x525C70 | ?SetDefaults@mmPlayerConfig@@QAEXXZ
    inline void SetDefaults()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x525C70, this);
    }

    // 0x525C80 | ?Save@mmPlayerConfig@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*, int32_t>>(0x525C80, this, arg1, arg2);
    }

    // 0x525D20 | ?SetAudio@mmPlayerConfig@@QAEXXZ
    inline void SetAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x525D20, this);
    }

    // 0x525E20 | ?SetControls@mmPlayerConfig@@QAEXXZ
    inline void SetControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x525E20, this);
    }

    // 0x525F10 | ?GetCustom@mmPlayerConfig@@QAEXXZ
    inline void GetCustom()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x525F10, this);
    }

    // 0x525F40 | ?SetCustom@mmPlayerConfig@@QAEXXZ
    inline void SetCustom()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x525F40, this);
    }

    // 0x526090 | ?GetGraphics@mmPlayerConfig@@QAEXXZ
    inline void GetGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526090, this);
    }

    // 0x5260A0 | ?SetGraphics@mmPlayerConfig@@QAEXXZ
    inline void SetGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x5260A0, this);
    }

    // 0x5260B0 | ?GetAudio@mmPlayerConfig@@QAEXXZ
    inline void GetAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x5260B0, this);
    }

    // 0x526120 | ?GetControls@mmPlayerConfig@@QAEXXZ
    inline void GetControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526120, this);
    }

    // 0x526200 | ?GetViewSettings@mmPlayerConfig@@QAEXXZ
    inline void GetViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526200, this);
    }

    // 0x526220 | ?SetViewSettings@mmPlayerConfig@@QAEXXZ
    inline void SetViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526220, this);
    }

    // 0x526240 | ?DefaultAudio@mmPlayerConfig@@QAEXXZ
    inline void DefaultAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526240, this);
    }

    // 0x5262F0 | ?DefaultControls@mmPlayerConfig@@QAEXXZ
    inline void DefaultControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x5262F0, this);
    }

    // 0x526350 | ?DefaultViewSettings@mmPlayerConfig@@QAEXXZ
    inline void DefaultViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526350, this);
    }

    // 0x526390 | ?Reset@mmPlayerConfig@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x526390, this);
    }

    // 0x5263A0 | ?DefaultGraphics@mmPlayerConfig@@QAEXXZ
    inline void DefaultGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x5263A0, this);
    }

    // 0x525560 | ??1mmPlayerConfig@@UAE@XZ
    virtual inline ~mmPlayerConfig()
    {
        stub<member_func_t<void, mmPlayerConfig>>(0x525560, this);
    }
};

struct mmGfxCFG
{
public:
    // 0x525F70 | ??0mmGfxCFG@@QAE@XZ
    inline mmGfxCFG()
    {
        stub<member_func_t<void, mmGfxCFG>>(0x525F70, this);
    }

    // 0x525FB0 | ?Get@mmGfxCFG@@QAEXXZ
    inline void Get()
    {
        return stub<member_func_t<void, mmGfxCFG>>(0x525FB0, this);
    }

    // 0x526020 | ?Set@mmGfxCFG@@QAEXXZ
    inline void Set()
    {
        return stub<member_func_t<void, mmGfxCFG>>(0x526020, this);
    }
};
