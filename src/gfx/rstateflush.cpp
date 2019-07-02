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

#include "rstateflush.h"

#include "gfx/winpriv.h"

#include "gfx/d3dpipe.h"
#include "gfx/texture.h"

void gfxRenderState::DoFlush(gfxRenderStateData* prevState)
{
    if (m_Touched & TouchMask_Transform)
    {
        lpD3DDev->SetTransform(D3DTRANSFORMSTATE_WORLD, LPD3DMATRIX(&sm_World));
    }

    if (m_Texture[0] != prevState->m_Texture[0])
    {
        if (m_Texture[0])
        {
            DX_ASSERT(lpD3DDev->SetTexture(0, m_Texture[0]->GetResidentSurface()));

            if (m_Texture[0]->m_LOD == -1)
            {
                m_Texture[0]->MarkFirstUse();
            }
            else if (m_Texture[0]->m_LOD > gfxTexture::sm_LOD)
            {
                m_Texture[0]->MarkHigherUse();
            }
        }
        else
        {
            DX_ASSERT(lpD3DDev->SetTexture(0, 0));
        }

        prevState->m_Texture[0] = m_Texture[0];
    }

    if (sm_MaxTextures > 1)
    {
        if (m_Texture[1] != prevState->m_Texture[1])
        {
            if (m_Texture[1])
            {
                DX_ASSERT(lpD3DDev->SetTexture(1, m_Texture[1]->GetResidentSurface()));
            }
            else
            {
                DX_ASSERT(lpD3DDev->SetTexture(1, nullptr));
            }

            prevState->m_Texture[1] = m_Texture[1];
        }
    }

    if (sm_MaxTextures > 1)
    {
        uint8_t colorOp = m_Texture[1] ? m_COLOROP1 : D3DTOP_DISABLE;

        if (sm_MaxTextures > 1 && colorOp != prevState->m_COLOROP1)
        {
            DX_ASSERT(lpD3DDev->SetTextureStageState(1, D3DTSS_COLOROP, colorOp));
        }
    }

    if (m_Material != prevState->m_Material)
    {
        DX_ASSERT(lpD3DDev->SetMaterial((D3DMATERIAL7*) m_Material));

        prevState->m_Material = m_Material;
    }

    if (m_Touched & TouchMask_State)
    {
        if (TextureFactor != prevState->TextureFactor)
        {
            lpD3DDev->SetTextureStageState(0, D3DTSS_COLORARG2, TextureFactor ? D3DTA_TFACTOR : D3DTA_DIFFUSE);
            lpD3DDev->SetTextureStageState(0, D3DTSS_ALPHAARG2, TextureFactor ? D3DTA_TFACTOR : D3DTA_DIFFUSE);
            lpD3DDev->SetRenderState(D3DRENDERSTATE_TEXTUREFACTOR, TextureFactor);

            prevState->TextureFactor = TextureFactor;
        }
        if (AlphaEnable != prevState->AlphaEnable)
        {
            prevState->AlphaEnable = AlphaEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ALPHABLENDENABLE, AlphaEnable);
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ALPHATESTENABLE, AlphaEnable);
        }
        if (ZEnable != prevState->ZEnable)
        {
            prevState->ZEnable = ZEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ZENABLE, ZEnable);
        }
        if (ZWriteEnable != prevState->ZWriteEnable)
        {
            prevState->ZWriteEnable = ZWriteEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ZWRITEENABLE, ZWriteEnable);
        }
        if (SrcBlend != prevState->SrcBlend)
        {
            prevState->SrcBlend = SrcBlend;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_SRCBLEND, SrcBlend);
        }
        if (DestBlend != prevState->DestBlend)
        {
            prevState->DestBlend = DestBlend;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_DESTBLEND, DestBlend);
        }
        if (Lighting != prevState->Lighting)
        {
            prevState->Lighting = Lighting;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_LIGHTING, Lighting);
        }
        if (TexturePerspective != prevState->TexturePerspective)
        {
            prevState->TexturePerspective = TexturePerspective;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_TEXTUREPERSPECTIVE, TexturePerspective);
        }
        if (Shademode != prevState->Shademode)
        {
            prevState->Shademode = Shademode;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_SHADEMODE, Shademode);
        }
        if (Cullmode != prevState->Cullmode)
        {
            prevState->Cullmode = Cullmode;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_CULLMODE, Cullmode);
        }
        if (ZFunc != prevState->ZFunc)
        {
            prevState->ZFunc = ZFunc;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ZFUNC, ZFunc);
        }
        if (Alpharef != prevState->Alpharef)
        {
            prevState->Alpharef = Alpharef;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ALPHAREF, Alpharef);
        }
        if (Alphafunc != prevState->Alphafunc)
        {
            prevState->Alphafunc = Alphafunc;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ALPHAFUNC, Alphafunc);
        }
        if (DitherEnable != prevState->DitherEnable)
        {
            prevState->DitherEnable = DitherEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_DITHERENABLE, DitherEnable);
        }
        if (Fillmode != prevState->Fillmode)
        {
            prevState->Fillmode = Fillmode;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FILLMODE, Fillmode);
        }
        if (ZBias != prevState->ZBias)
        {
            prevState->ZBias = ZBias;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ZBIAS, ZBias);
        }
        if (AntiAlias != prevState->AntiAlias)
        {
            prevState->AntiAlias = AntiAlias;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_ANTIALIAS, AntiAlias);
        }

        bool clipping = Clipping && !sm_UseInternal;

        if (clipping != prevState->Clipping)
        {
            prevState->Clipping = clipping;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_CLIPPING, clipping);
        }

        if (Ambient != prevState->Ambient)
        {
            prevState->Ambient = Ambient;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_AMBIENT, Ambient);
        }

        if (SpecularEnable != prevState->SpecularEnable)
        {
            prevState->SpecularEnable = SpecularEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_SPECULARENABLE, SpecularEnable);
        }

        if (FogEnable != prevState->FogEnable)
        {
            prevState->FogEnable = FogEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGENABLE, FogEnable);
        }

        if (FogVertexMode != prevState->FogVertexMode)
        {
            prevState->FogVertexMode = FogVertexMode;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGVERTEXMODE, FogVertexMode);
        }

        if (FogStart != prevState->FogStart)
        {
            prevState->FogStart = FogStart;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGSTART, reinterpret_cast<const uint32_t&>(FogStart));
        }

        if (FogEnd != prevState->FogEnd)
        {
            prevState->FogEnd = FogEnd;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGEND, reinterpret_cast<const uint32_t&>(FogEnd));
        }

        if (FogColor != prevState->FogColor)
        {
            prevState->FogColor = FogColor;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGCOLOR, FogColor);
        }
        if (FogDensity != prevState->FogDensity)
        {
            prevState->FogDensity = FogDensity;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGDENSITY, FogDensity);
        }
        if (NormalizeNormals != prevState->NormalizeNormals)
        {
            prevState->NormalizeNormals = NormalizeNormals;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_NORMALIZENORMALS, NormalizeNormals);
        }
        if (RangeFogEnable != prevState->RangeFogEnable)
        {
            prevState->RangeFogEnable = RangeFogEnable;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_RANGEFOGENABLE, RangeFogEnable);
        }
        if (VertexBlend != prevState->VertexBlend)
        {
            prevState->VertexBlend = VertexBlend;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_VERTEXBLEND, VertexBlend);
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        uint32_t texEnv = m_Texture[i] ? m_Texture[i]->TexEnv : 0;

        AddressU[i] = ((texEnv & 0x1) ? D3DTADDRESS_MIRROR : 0) | D3DTADDRESS_WRAP;
        AddressV[i] = ((texEnv & 0x10000) ? D3DTADDRESS_MIRROR : 0) | D3DTADDRESS_WRAP;
    }

    if (m_Touched & TouchMask_Texture)
    {
        if (!useSoftware)
        {
            for (int i = 0; i < 2; ++i)
            {
                if (AddressU[i] != prevState->AddressU[i])
                {
                    lpD3DDev->SetTextureStageState(i, D3DTSS_ADDRESSU, AddressU[i]);
                }

                if (AddressV[i] != prevState->AddressV[i])
                {
                    lpD3DDev->SetTextureStageState(i, D3DTSS_ADDRESSV, AddressV[i]);
                }
            }
        }
    }

    // Clear everything but TouchMask_Regenerate
    m_Touched &= 0x80;
}
