#include "stdafx.h"
#include "gfxRenderState.h"

#include "Matrix.h"

#include "d3dpipe.h"

defnvar(0x6856A0, RSTATE);
defnvar(0x6854A0, LASTRSTATE);

defnvar(0x685778, gfxRenderState::m_Touched);
defnvar(0x685780, gfxRenderState::m_TouchedMask);

defnvar(0x685460, gfxRenderState::sm_Camera);
defnvar(0x685660, gfxRenderState::sm_View);
defnvar(0x685620, gfxRenderState::sm_FullComposite);

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

    lpD3DDev->SetTransform(D3DTRANSFORMSTATE_VIEW, (LPD3DMATRIX)&gfxRenderState::sm_View);

    m_Touched |= 0x80;
}

void gfxRenderState::Flush()
{
    if (m_Touched & m_TouchedMask)
    {
        DoFlush(&LASTRSTATE);
    }
}

void gfxRenderState::DoFlush(gfxRenderStateData * oldState)
{
    return stub<thiscall_t<void, gfxRenderState, gfxRenderStateData*>>(0x4B4C40, this, oldState);
}

void gfxRenderState::SetTexture(gfxTexture * texture, int index)
{
#ifdef _DEBUG
    if (index > 1)
    {
        Quitf("Invalid Texture Index");
    }
#endif

    if (State.m_Texture[index] != texture)
    {
        State.m_Texture[index] = texture;

        gfxRenderState::m_Touched |= 2;
    }
}