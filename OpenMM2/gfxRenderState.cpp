#include "stdafx.h"
#include "gfxRenderState.h"

#include "Matrix.h"

#include "d3dpipe.h"
#include "gfxPipeline.h"
#include "gfxTexture.h"

defnvar(0x6856A0, RSTATE);
defnvar(0x6854A0, LASTRSTATE);

defnvar(0x685778, gfxRenderState::m_Touched);
defnvar(0x685780, gfxRenderState::m_TouchedMask);

defnvar(0x685460, gfxRenderState::sm_Camera);
defnvar(0x685660, gfxRenderState::sm_View);
defnvar(0x685538, gfxRenderState::sm_World);
defnvar(0x685620, gfxRenderState::sm_FullComposite);

defnvar(0x685788, gfxRenderState::sm_MaxTextures);

void gfxRenderState::SetCamera(const Matrix34& camera)
{
    sm_Camera.m00 = camera.m00;
    sm_Camera.m01 = camera.m01;
    sm_Camera.m02 = camera.m02;

    sm_Camera.m03 = 0.0f;
    sm_Camera.m10 = camera.m03;
    sm_Camera.m11 = camera.m10;
    sm_Camera.m12 = camera.m11;
    sm_Camera.m13 = 0.0f;

    sm_Camera.m20 = camera.m12;
    sm_Camera.m21 = camera.m13;
    sm_Camera.m22 = camera.m20;
    sm_Camera.m23 = 0.0f;

    sm_Camera.m30 = camera.m21;
    sm_Camera.m31 = camera.m22;
    sm_Camera.m32 = camera.m23;
    sm_Camera.m33 = 1.0f;

    SetCamera(sm_Camera);
}

void gfxRenderState::SetCamera(const Matrix44& camera)
{
    memcpy(&sm_Camera, &camera, sizeof(sm_Camera));

    sm_View.FastInverse(sm_Camera);
    sm_View.Dot(sm_FullComposite);

    SetTransform(TransformState_View, sm_View);
}

void gfxRenderState::SetTransform(int index, const Matrix44& transform)
{
    lpD3DDev->SetTransform(static_cast<D3DTRANSFORMSTATETYPE>(index), LPD3DMATRIX(&transform));

    m_Touched |= 0x80;
}

void gfxRenderState::Flush()
{
    if (m_Touched & m_TouchedMask)
    {
        DoFlush(&LASTRSTATE);
    }
}

void gfxRenderState::DoFlush(gfxRenderStateData * prevState)
{
    if (m_Touched & 8)
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

    if (m_Touched & 1)
    {
        if (TextureFactor != prevState->TextureFactor)
        {
            lpD3DDev->SetTextureStageState(0, D3DTSS_COLORARG2, TextureFactor != 0 ? D3DTA_TFACTOR : D3DTA_DIFFUSE);
            lpD3DDev->SetTextureStageState(0, D3DTSS_ALPHAARG2, TextureFactor != 0 ? D3DTA_TFACTOR : D3DTA_DIFFUSE);
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
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGSTART, reinterpret_cast<uint32_t&>(FogStart));
        }

        if (FogEnd != prevState->FogEnd)
        {
            prevState->FogEnd = FogEnd;
            lpD3DDev->SetRenderState(D3DRENDERSTATE_FOGEND, reinterpret_cast<uint32_t&>(FogEnd));
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

    uint32_t v20 = m_Texture[0] ? m_Texture[0]->TexEnv : 0;
    AddressU[0] = (2 * (v20 & 1)) | 1;
    AddressV[0] = (v20 >> 15) & 2 | 1;

    uint32_t v22 = m_Texture[1] ? m_Texture[1]->TexEnv : 0;
    AddressU[1] = (2 * (v22 & 1)) | 1;
    AddressV[1] = (v22 >> 15 & 2) | 1;

    if (m_Touched & 2)
    {
        if (!useSoftware)
        {
            for (int i = 0; i < 2; ++i)
            {
                if (AddressU[i] != prevState->AddressU[i])
                {
                    lpD3DDev->SetTextureStageState(i, D3DTSS_ADDRESSU, AddressU[i]);
                }
            }

            for (int i = 0; i < 2; ++i)
            {
                if (AddressV[i] != prevState->AddressV[i])
                {
                    lpD3DDev->SetTextureStageState(i, D3DTSS_ADDRESSV, AddressV[i]);
                }
            }
        }
    }

    m_Touched &= 0x80u;
}

void gfxRenderState::SetTexture(int index, gfxTexture * texture)
{
#ifdef _DEBUG
    if (index > 1)
    {
        Quitf("Invalid Texture Index");
    }
#endif

    if (m_Texture[index] != texture)
    {
        m_Texture[index] = texture;

        gfxRenderState::m_Touched |= 2;
    }
}