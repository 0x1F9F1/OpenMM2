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
    banger:glass

    0x442C10 | public: __thiscall dgGlassInstance::dgGlassInstance(void) | ??0dgGlassInstance@@QAE@XZ
    0x442C30 | public: static void __cdecl dgGlassInstance::InitStaticSystems(void) | ?InitStaticSystems@dgGlassInstance@@SAXXZ
    0x442C90 | public: virtual void __thiscall dgGlassInstance::Reset(void) | ?Reset@dgGlassInstance@@UAEXXZ
    0x442CD0 | public: virtual void __thiscall dgGlassInstance::Impact(class lvlInstance *,class Vector3 *) | ?Impact@dgGlassInstance@@UAEXPAVlvlInstance@@PAVVector3@@@Z
    0x442E90 | public: virtual void __thiscall dgGlassInstance::Draw(int) | ?Draw@dgGlassInstance@@UAEXH@Z
    0x442EF0 | public: virtual void __thiscall dgGlassInstance::DrawGlow(void) | ?DrawGlow@dgGlassInstance@@UAEXXZ
    0x442F00 | public: virtual unsigned int __thiscall dgGlassInstance::SizeOf(void) | ?SizeOf@dgGlassInstance@@UAEIXZ
    0x5B1628 | const dgGlassInstance::`vftable' | ??_7dgGlassInstance@@6B@
    0x627688 | private: static class dgGlassInstance * * dgGlassInstance::sm_ActiveGlassInstance | ?sm_ActiveGlassInstance@dgGlassInstance@@0PAPAV1@A
    private: static int dgGlassInstance::sm_NextGlassPtx | ?sm_NextGlassPtx@dgGlassInstance@@0HA
    0x6276D4 | private: static class ptxGlass * dgGlassInstance::sm_GlassParticles | ?sm_GlassParticles@dgGlassInstance@@0PAVptxGlass@@A
    0x6276E8 | private: static class gfxTexture * dgGlassInstance::sm_Texture | ?sm_Texture@dgGlassInstance@@0PAVgfxTexture@@A
*/

class dgGlassInstance : dgUnhitMtxBangerInstance
{
public:
    // dgGlassInstance::`vftable' @ 0x5B1628

    // 0x442C10 | ??0dgGlassInstance@@QAE@XZ
    inline dgGlassInstance()
    {
        stub<member_func_t<void, dgGlassInstance>>(0x442C10, this);
    }

    // 0x442C30 | ?InitStaticSystems@dgGlassInstance@@SAXXZ
    static inline void InitStaticSystems()
    {
        return stub<cdecl_t<void>>(0x442C30);
    }

    // 0x627688 | ?sm_ActiveGlassInstance@dgGlassInstance@@0PAPAV1@A
    inline extern_var(0x627688, class dgGlassInstance**, sm_ActiveGlassInstance);

    // 0x6276D4 | ?sm_GlassParticles@dgGlassInstance@@0PAVptxGlass@@A
    inline extern_var(0x6276D4, class ptxGlass*, sm_GlassParticles);

    // 0x6276E8 | ?sm_Texture@dgGlassInstance@@0PAVgfxTexture@@A
    inline extern_var(0x6276E8, class gfxTexture*, sm_Texture);

    // 0x442C90 | ?Reset@dgGlassInstance@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, dgGlassInstance>>(0x442C90, this);
    }

    // 0x442E90 | ?Draw@dgGlassInstance@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, dgGlassInstance, i32>>(0x442E90, this, arg1);
    }

    // 0x442EF0 | ?DrawGlow@dgGlassInstance@@UAEXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, dgGlassInstance>>(0x442EF0, this);
    }

    // 0x442F00 | ?SizeOf@dgGlassInstance@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, dgGlassInstance>>(0x442F00, this);
    }

    // 0x442CD0 | ?Impact@dgGlassInstance@@UAEXPAVlvlInstance@@PAVVector3@@@Z
    inline void Impact(class lvlInstance* arg1, class Vector3* arg2) override
    {
        return stub<member_func_t<void, dgGlassInstance, class lvlInstance*, class Vector3*>>(
            0x442CD0, this, arg1, arg2);
    }
};
