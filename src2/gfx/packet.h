/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    gfx:packet

    0x4B3310 | public: static void __cdecl gfxPacket::ForceCPV(unsigned int) | ?ForceCPV@gfxPacket@@SAXI@Z
    0x4B3320 | public: static void __cdecl gfxPacket::BeginRef(void) | ?BeginRef@gfxPacket@@SAXXZ
    0x4B3330 | public: static void __cdecl gfxPacket::BeginProp(void) | ?BeginProp@gfxPacket@@SAXXZ
    0x4B3340 | public: void __thiscall gfxPacket::Draw(unsigned int) const | ?Draw@gfxPacket@@QBEXI@Z
    0x4B34E0 | public: void __thiscall gfxPacket::Draw(class Matrix44 const *,unsigned int) const | ?Draw@gfxPacket@@QBEXPBVMatrix44@@I@Z
    0x4B38A0 | public: __thiscall gfxPacket::gfxPacket(unsigned int,unsigned int,unsigned int,unsigned char const *,unsigned int,unsigned short const *,unsigned int,class gfxReskin *,unsigned int,unsigned char,unsigned char const *,unsigned char const *,bool) | ??0gfxPacket@@QAE@IIIPBEIPBGIPAVgfxReskin@@IE00_N@Z
    0x4B3BE0 | public: void __thiscall gfxPacket::GetSkinnedVert(class Matrix34 const *,class Vector3 &,int) const | ?GetSkinnedVert@gfxPacket@@QBEXPBVMatrix34@@AAVVector3@@H@Z
    0x4B3C10 | public: void __thiscall gfxPacket::GetPosition(class Vector3 &,int) const | ?GetPosition@gfxPacket@@QBEXAAVVector3@@H@Z
    0x4B3C70 | public: void __thiscall gfxPacket::SetPosition(class Vector3 const &,int) const | ?SetPosition@gfxPacket@@QBEXABVVector3@@H@Z
    0x4B3CF0 | public: void __thiscall gfxPacket::GetNormal(class Vector3 &,int) const | ?GetNormal@gfxPacket@@QBEXAAVVector3@@H@Z
    0x4B3D90 | public: void __thiscall gfxPacket::SetNormal(class Vector3 const &,int) const | ?SetNormal@gfxPacket@@QBEXABVVector3@@H@Z
    0x4B3E20 | public: void __thiscall gfxPacket::GetTexCoord(class Vector2 &,int) const | ?GetTexCoord@gfxPacket@@QBEXAAVVector2@@H@Z
    0x4B3EC0 | public: void __thiscall gfxPacket::GetTri(int * const,int) const | ?GetTri@gfxPacket@@QBEXQAHH@Z
    0x4B3F00 | public: static void __cdecl gfxPacket::SetPacking(float,unsigned char,unsigned char,unsigned char,float,unsigned char) | ?SetPacking@gfxPacket@@SAXMEEEME@Z
    0x4B3F40 | public: static void __cdecl gfxPacket::SetDefaultPacking(void) | ?SetDefaultPacking@gfxPacket@@SAXXZ
    0x4B3F60 | public: static void __cdecl gfxPacket::AutoSetPacking(unsigned int,unsigned int,unsigned char const *) | ?AutoSetPacking@gfxPacket@@SAXIIPBE@Z
    0x4B40F0 | public: class gfxPacket * __thiscall gfxPacket::Clone(void) const | ?Clone@gfxPacket@@QBEPAV1@XZ
    0x4B4170 | public: __thiscall gfxPacket::gfxPacket(class gfxPacket const *) | ??0gfxPacket@@QAE@PBV0@@Z
    0x4B4260 | public: void __thiscall gfxPacket::CopyFrom(class gfxPacket const *) | ?CopyFrom@gfxPacket@@QAEXPBV1@@Z
    0x4B43E0 | protected: void __thiscall gfxPacket::AllocateVertexBuffer(void) | ?AllocateVertexBuffer@gfxPacket@@IAEXXZ
    0x4B4570 | public: static void __cdecl gfxPacket::ReserveVertexBuffer(unsigned int,unsigned int) | ?ReserveVertexBuffer@gfxPacket@@SAXII@Z
    0x4B45D0 | protected: static unsigned char * __cdecl gfxPacket::Persist(struct IDirect3DVertexBuffer7 *,unsigned int,void *,unsigned int) | ?Persist@gfxPacket@@KAPAEPAUIDirect3DVertexBuffer7@@IPAXI@Z
    0x4B4640 | public: static void __cdecl gfxPacket::FreeAllVertexBuffers(void) | ?FreeAllVertexBuffers@gfxPacket@@SAXXZ
    0x4B4690 | public: static void __cdecl gfxPacket::RestoreAllVertexBuffers(void) | ?RestoreAllVertexBuffers@gfxPacket@@SAXXZ
    0x4B4720 | protected: void __thiscall gfxPacket::DoLock(void) | ?DoLock@gfxPacket@@IAEXXZ
    0x4B4740 | protected: void __thiscall gfxPacket::DoUnlock(void) | ?DoUnlock@gfxPacket@@IAEXXZ
    0x4B4760 | public: void __thiscall gfxPacket::OrthoMap(float) | ?OrthoMap@gfxPacket@@QAEXM@Z
    0x4B4860 | public: static class gfxPacketList * __cdecl gfxPacket::MakeList(class gfxPacket *) | ?MakeList@gfxPacket@@SAPAVgfxPacketList@@PAV1@@Z
    0x4B4870 | public: static void __cdecl gfxPacket::DrawList(class gfxPacketList const *) | ?DrawList@gfxPacket@@SAXPBVgfxPacketList@@@Z
    protected: static unsigned char gfxPacket::sm_VertBits | ?sm_VertBits@gfxPacket@@1EA
    protected: static unsigned char gfxPacket::sm_NormBits | ?sm_NormBits@gfxPacket@@1EA
    protected: static unsigned char gfxPacket::sm_CpvBits | ?sm_CpvBits@gfxPacket@@1EA
    protected: static unsigned char gfxPacket::sm_TexCoordBits | ?sm_TexCoordBits@gfxPacket@@1EA
    0x6857D8 | bool gfxForceLVERTEX | ?gfxForceLVERTEX@@3_NA
    protected: static float gfxPacket::sm_TexCoordScale | ?sm_TexCoordScale@gfxPacket@@1MA
    protected: static float gfxPacket::sm_VertScale | ?sm_VertScale@gfxPacket@@1MA
    0x685CE4 | int vbtableCount | ?vbtableCount@@3HA
    0x6A1CF0 | struct IDirect3DVertexBuffer7 * * vblist | ?vblist@@3PAPAUIDirect3DVertexBuffer7@@A
*/

class gfxPacket
{
public:
    // 0x4B4170 | ??0gfxPacket@@QAE@PBV0@@Z
    gfxPacket(class gfxPacket const* arg1);

    // 0x4B38A0 | ??0gfxPacket@@QAE@IIIPBEIPBGIPAVgfxReskin@@IE00_N@Z
    gfxPacket(u32 arg1, u32 arg2, u32 arg3, u8 const* arg4, u32 arg5, u16 const* arg6, u32 arg7, class gfxReskin* arg8,
        u32 arg9, u8 arg10, u8 const* arg11, u8 const* arg12, bool arg13);

    // 0x4B40F0 | ?Clone@gfxPacket@@QBEPAV1@XZ
    class gfxPacket* Clone();

    // 0x4B4260 | ?CopyFrom@gfxPacket@@QAEXPBV1@@Z
    void CopyFrom(class gfxPacket const* arg1);

    // 0x4B3340 | ?Draw@gfxPacket@@QBEXI@Z
    void Draw(u32 arg1);

    // 0x4B34E0 | ?Draw@gfxPacket@@QBEXPBVMatrix44@@I@Z
    void Draw(class Matrix44 const* arg1, u32 arg2);

    // 0x4B3CF0 | ?GetNormal@gfxPacket@@QBEXAAVVector3@@H@Z
    void GetNormal(class Vector3& arg1, i32 arg2);

    // 0x4B3C10 | ?GetPosition@gfxPacket@@QBEXAAVVector3@@H@Z
    void GetPosition(class Vector3& arg1, i32 arg2);

    // 0x4B3BE0 | ?GetSkinnedVert@gfxPacket@@QBEXPBVMatrix34@@AAVVector3@@H@Z
    void GetSkinnedVert(class Matrix34 const* arg1, class Vector3& arg2, i32 arg3);

    // 0x4B3E20 | ?GetTexCoord@gfxPacket@@QBEXAAVVector2@@H@Z
    void GetTexCoord(class Vector2& arg1, i32 arg2);

    // 0x4B3EC0 | ?GetTri@gfxPacket@@QBEXQAHH@Z
    void GetTri(i32* const arg1, i32 arg2);

    // 0x4B4760 | ?OrthoMap@gfxPacket@@QAEXM@Z
    void OrthoMap(f32 arg1);

    // 0x4B3D90 | ?SetNormal@gfxPacket@@QBEXABVVector3@@H@Z
    void SetNormal(class Vector3 const& arg1, i32 arg2);

    // 0x4B3C70 | ?SetPosition@gfxPacket@@QBEXABVVector3@@H@Z
    void SetPosition(class Vector3 const& arg1, i32 arg2);

    // 0x4B3F60 | ?AutoSetPacking@gfxPacket@@SAXIIPBE@Z
    static void AutoSetPacking(u32 arg1, u32 arg2, u8 const* arg3);

    // 0x4B3330 | ?BeginProp@gfxPacket@@SAXXZ
    static void BeginProp();

    // 0x4B3320 | ?BeginRef@gfxPacket@@SAXXZ
    static void BeginRef();

    // 0x4B4870 | ?DrawList@gfxPacket@@SAXPBVgfxPacketList@@@Z
    static void DrawList(class gfxPacketList const* arg1);

    // 0x4B3310 | ?ForceCPV@gfxPacket@@SAXI@Z
    static void ForceCPV(u32 arg1);

    // 0x4B4640 | ?FreeAllVertexBuffers@gfxPacket@@SAXXZ
    static void FreeAllVertexBuffers();

    // 0x4B4860 | ?MakeList@gfxPacket@@SAPAVgfxPacketList@@PAV1@@Z
    static class gfxPacketList* MakeList(class gfxPacket* arg1);

    // 0x4B4570 | ?ReserveVertexBuffer@gfxPacket@@SAXII@Z
    static void ReserveVertexBuffer(u32 arg1, u32 arg2);

    // 0x4B4690 | ?RestoreAllVertexBuffers@gfxPacket@@SAXXZ
    static void RestoreAllVertexBuffers();

    // 0x4B3F40 | ?SetDefaultPacking@gfxPacket@@SAXXZ
    static void SetDefaultPacking();

    // 0x4B3F00 | ?SetPacking@gfxPacket@@SAXMEEEME@Z
    static void SetPacking(f32 arg1, u8 arg2, u8 arg3, u8 arg4, f32 arg5, u8 arg6);

protected:
    // 0x4B43E0 | ?AllocateVertexBuffer@gfxPacket@@IAEXXZ
    void AllocateVertexBuffer();

    // 0x4B4720 | ?DoLock@gfxPacket@@IAEXXZ
    void DoLock();

    // 0x4B4740 | ?DoUnlock@gfxPacket@@IAEXXZ
    void DoUnlock();

    // 0x4B45D0 | ?Persist@gfxPacket@@KAPAEPAUIDirect3DVertexBuffer7@@IPAXI@Z
    static u8* Persist(struct IDirect3DVertexBuffer7* arg1, u32 arg2, void* arg3, u32 arg4);
};

check_size(gfxPacket, 0x2C);

// 0x6857D8 | ?gfxForceLVERTEX@@3_NA
inline extern_var(0x6857D8, bool, gfxForceLVERTEX);

// 0x6A1CF0 | ?vblist@@3PAPAUIDirect3DVertexBuffer7@@A
inline extern_var(0x6A1CF0, struct IDirect3DVertexBuffer7**, vblist);

// 0x685CE4 | ?vbtableCount@@3HA
inline extern_var(0x685CE4, i32, vbtableCount);
